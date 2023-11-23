`default_nettype none

module tt_um_myuart (
    input  wire [7:0] ui_in,    // Dedicated inputs - connected to the input switches
    output wire [7:0] uo_out,   // Dedicated outputs - connected to the 7 segment display
    input  wire [7:0] uio_in,   // IOs: Bidirectional Input path
    output wire [7:0] uio_out,  // IOs: Bidirectional Output path
    output wire [7:0] uio_oe,   // IOs: Bidirectional Enable path (active high: 0=input, 1=output)
    input  wire       ena,      // will go high when the design is enabled
    input  wire       clk,      // clock
    input  wire       rst_n     // reset_n - low to reset
);

  // #######################################################
  // # SYNCHRONIZE RESET ###################################
  // #######################################################

    wire async_rstn = ena && rst_n;
    wire rst_n_clk;

    // Synchronize rst_n
    sync_async_reset inst_sync_async_reset (
        .clock(clk),
        .reset_n(async_rstn),
        .rst_n(rst_n_clk)
    );

  // #######################################################
  // # UART ################################################
  // #######################################################

  wire uart_tx_done;
  reg uart_tx_send;
  wire uart_tx_busy;
  wire uart_txd;
  reg [7:0] uart_tx_data;
  reg signed  [7:0] sine_data;
  reg [7:0] sine_counter;

  assign uo_out[0] = uart_txd;
  assign uio_out = 8'h00;
  assign uio_oe  = 8'h00;
  assign uo_out[7:1] = sine_data[7:1];

  uart_tx uart_tx (
    .clk(clk),                            // clock
    .rst_n(rst_n_clk),                    // reset_n - low to reset
    .uart_tx_send(uart_tx_send),          // Send request
    .uart_tx_data(uart_tx_data),          // Data to send
    .uart_tx_done(uart_tx_done),          // Send done
    .uart_tx_busy(uart_tx_busy),          // UART busy
    .uart_txd(uart_txd)                   // UART signal
  );

  // #######################################################
  // # MESSAGE TO SEND  ####################################
  // #######################################################

  // Message to send
  reg [7:0] msg [10:0];
  initial begin
      msg[0]  = 8'h42; // 'B'
      msg[1]  = 8'h61; // 'a'
      msg[2]  = 8'h70; // 'p'
      msg[3]  = 8'h74; // 't'
      msg[4]  = 8'h69; // 'i'
      msg[5]  = 8'h73; // 's'
      msg[6]  = 8'h74; // 't'
      msg[7]  = 8'h65; // 'e'
      msg[8]  = 8'h20; // ' '
      msg[9]  = 8'h21; // '!'
      msg[10] = 8'h0A; // '\n'
  end

  // #######################################################
  // # FSM  ################################################
  // #######################################################
  
  // FSM's states
  localparam IDLE = 2'b00;  // State IDLE
  localparam SEND = 2'b01;  // State SEND
  localparam WAIT = 2'b10;  // State WAIT
  reg [1:0] state;

  reg [7:0] byte_counter;
  reg counter_it;

  // FSM
  always @(posedge clk) begin
    if (~rst_n_clk) begin
      state         <= IDLE;
      byte_counter  <= 8'd0;
      uart_tx_send  <= 1'b0;
      uart_tx_data  <= 8'h00;
    end 
    else begin
  
      // Default state
      uart_tx_send  <= 1'd0;

      // FSM
      case (state)
    
        // IDLE : we wait until the interrupt tell us to send a message
        IDLE : begin
          if (counter_it == 'b1) begin
            state <= SEND;
          end
        end
      
        // SEND : send one byte to the UART
        SEND : begin
          state         <= WAIT;
          uart_tx_send  <= 1'd1;
          uart_tx_data  <= msg[byte_counter];
        end

        // WAIT : we wait the uart done
        WAIT : begin

          if (uart_tx_done == 1'b1) begin
            byte_counter <= byte_counter + 1;
            if (byte_counter < 8'd10) begin
              state <= SEND;
            end
            else begin
              state         <= IDLE;
              byte_counter  <= 8'd0;
            end
          end
        end

        default : begin
          state <= IDLE;
        end
    
      endcase
  
    end
  end

  // #######################################################
  // # COUNTER #############################################
  // #######################################################

  reg [31:0] counter;

  always @ (posedge clk) begin
    if (~rst_n_clk) begin
      counter     <= 32'h0;
      counter_it  <= 1'b0;
    end
    else begin
      
      // Counting
      counter <= counter + 1'b1;
      
      // Generate an interrupt every 1s
      // Clock frequency = 10 MHz / 100 ns
      // 1s = 1 000 000 000 ns = 10 000 000 clock cycles
      // => log2(10000000) = ~23.25
      if (counter == 32'h00800000) begin
        counter_it  <= 1'b1;
        counter     <= 32'h00000000;
      end
      else begin
        counter_it <= 1'b0;
      end
      
    end
  end

  // #######################################################
  // # BONUS : SINUS :) ####################################
  // #######################################################

    always @ (posedge clk) begin
      if (~rst_n_clk) begin
        sine_counter <= 8'h00;
      end
      else begin
        sine_counter <= sine_counter + 1;
      end
    end

    reg [7:0] sine_memory [0:255];
    initial begin
        $display("Loading rom.");
        $readmemh("sine.mem", sine_memory);
    end

    // Compute the sine of our phase
    always @(posedge clk) begin
        sine_data <= sine_memory[sine_counter];
    end

endmodule

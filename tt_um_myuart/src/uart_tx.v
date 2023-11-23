`default_nettype none

module uart_tx (
    input  wire       clk,              // clock
    input  wire       rst_n,            // reset_n - low to reset
    input  wire       uart_tx_send,     // Send request
    input  wire [7:0] uart_tx_data,     // Data to send
    output reg        uart_tx_done,     // Send done
    output reg        uart_tx_busy,     // UART busy
    output reg        uart_txd          // UART signal
);

  // #######################################################
  // # UART_TX #############################################
  // #######################################################

  // FSM's states
  localparam IDLE           = 3'b000;  // State IDLE
  localparam SEND_START_BIT = 3'b001;  // State SEND_START_BIT
  localparam SEND_DATA      = 3'b010;  // State SEND_DATA
  localparam SEND_PARITY    = 3'b011;  // State SEND_PARITY
  localparam SEND_STOP_BIT  = 3'b100;  // State SEND_STOP_BIT
  reg [2:0] state;

  reg [7:0] byte_counter;

  reg [7:0] counter;
  reg counter_it;
  reg counter_enable;
  reg parity;
  reg [7:0] tx_data;

  always @(posedge clk) begin
    if (~rst_n) begin
      state             <= IDLE;
      byte_counter      <= 8'd0;
      uart_tx_busy      <= 1'b0;
      uart_txd          <= 1'b1;
      uart_tx_done      <= 1'b0;
      counter_enable    <= 1'b0;
      parity            <= 1'b0;
      tx_data           <= 8'h00;
    end 
    else begin
  
      // Default state
      uart_tx_done      <= 1'b0;
      counter_enable    <= 1'b0;

      // FSM
      case (state)
    
        // IDLE : wait until uart_tx_send goes high
        IDLE : begin
          uart_tx_busy <= 1'b0;
          uart_txd     <= 1'b1;
          if (uart_tx_send == 'b1) begin
            state           <= SEND_START_BIT;
            uart_tx_busy    <= 1'b1;
            counter_enable  <= 1'b1;
            parity          <= ^uart_tx_data;
            uart_txd        <= 1'b0;
            tx_data         <= uart_tx_data;
            byte_counter    <= 8'h00;
          end
        end
      
        // SEND_START_BIT : send start bit
        SEND_START_BIT : begin
          
          if (counter_it == 1'b1) begin
            state           <= SEND_DATA;
            counter_enable  <= 1'b1;
            uart_txd        <= tx_data[0];
          end

        end

        SEND_DATA : begin
          if (counter_it == 1'b1) begin
            if (byte_counter == 7) begin
              state             <= SEND_PARITY;
              counter_enable    <= 1'b1;
              uart_txd          <= parity;
            end
            else begin
              byte_counter      <= byte_counter + 1;
              counter_enable    <= 1'b1;
              uart_txd          <= tx_data[byte_counter+1];
            end
          end
        end

        SEND_PARITY : begin
          if (counter_it == 1'b1) begin
            state           <= SEND_STOP_BIT;
            counter_enable  <= 1'b1;
            uart_txd        <= 1'b1;
          end
        end

        SEND_STOP_BIT : begin
          if (counter_it == 1'b1) begin
            state           <= IDLE;
            uart_tx_done    <= 1'b1;
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

  // FSM's states
  localparam COUNTER_FSM_IDLE     = 1'b0;  // State IDLE
  localparam COUNTER_FSM_COUNTING = 1'b1;  // State COUNTING
  reg [0:0] counter_state;

  always @ (posedge clk) begin
    if (~rst_n) begin
      counter       <= 8'b0;
      counter_it    <= 1'b0;
      counter_state <= COUNTER_FSM_IDLE;
    end
    else begin

      // Default state
      counter_it <= 1'b0;
      
      // FSM
      case(counter_state)
        
        // COUNTER_FSM_IDLE : wait until counter_enable == 1 before counting
        COUNTER_FSM_IDLE : begin
          if (counter_enable == 1'b1) begin
            counter_state <= COUNTER_FSM_COUNTING;
          end
        end

        // COUNTER_FSM_COUNTING : we count until we reach the value (baud rate generator)
        COUNTER_FSM_COUNTING : begin

          // Counting
          counter <= counter + 1'b1;
          
          // Generate an interrupt and go back to IDLE
          //
          // Clock frequency : 10 MHz / 100 ns
          // Baud rate : 115 200 bauds
          // Bit time : 8.681 µs = 86.81 clock cycles
          counter_it <= 1'b0;
          if (counter == 8'd87-3) begin
            counter_it      <= 1'b1;
            counter_state   <= COUNTER_FSM_IDLE;
            counter         <= 8'h00;
          end

        end

      endcase

    end
  end

endmodule

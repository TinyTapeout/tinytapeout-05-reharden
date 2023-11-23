module tt_um_ttl74hc595_v2 (
    input  wire [7:0] ui_in,    // Dedicated inputs - connected to the input switches
    output wire [7:0] uo_out,   // Dedicated outputs - connected to the 7 segment display
    input  wire [7:0] uio_in,   // IOs: Bidirectional Input path
    output wire [7:0] uio_out,  // IOs: Bidirectional Output path
    output wire [7:0] uio_oe,   // IOs: Bidirectional Enable path (active high: 0=input, 1=output)
    input  wire       ena,      // will go high when the design is enabled
    input  wire       clk,      // clock
    input  wire       rst_n     // reset_n - low to reset
);

  reg [7:0] shift_reg;
  reg [7:0] storage_reg;

  wire sclrn;
  wire ser;
  wire rck;
  wire srck;
  wire G;
  wire [7:0] q;
  wire oe = !G;
  wire [7:0] in;

  assign {G, srck, rck, ser, sclrn} = ui_in[4:0];
  assign uo_out = 8'b0;

  assign uio_oe = {8{oe}};
  assign in = uio_in;
  assign uio_out = q;

  always @(negedge srck or negedge sclrn) begin
    if (!sclrn) begin
      shift_reg <= 8'b0;
    end else begin
      shift_reg <= {shift_reg[6:0], ser};
    end
  end

  always @(negedge rck or negedge sclrn) begin
    if (!sclrn) begin
      storage_reg <= 0;
    end else begin
      storage_reg <= shift_reg;
    end
  end

  assign q = storage_reg;

endmodule

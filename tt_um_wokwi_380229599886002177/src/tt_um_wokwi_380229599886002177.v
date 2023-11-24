/* Automatically generated from https://wokwi.com/projects/380229599886002177 */

`default_nettype none

module tt_um_wokwi_380229599886002177(
  input  wire [7:0] ui_in,    // Dedicated inputs
  output wire [7:0] uo_out,    // Dedicated outputs
  input  wire [7:0] uio_in,    // IOs: Input path
  output wire [7:0] uio_out,    // IOs: Output path
  output wire [7:0] uio_oe,    // IOs: Enable path (active high: 0=input, 1=output)
  input ena,
  input clk,
  input rst_n
);
  wire net1 = clk;
  wire net2 = rst_n;
  wire net3 = ui_in[0];
  wire net4 = ui_in[1];
  wire net5 = ui_in[2];
  wire net6 = ui_in[3];
  wire net7 = ui_in[5];
  wire net8;
  wire net9;
  wire net10;
  wire net11;
  wire net12 = 1'b1;
  wire net13 = 1'b0;
  wire net14 = 1'b1;
  wire net15;
  wire net16;
  wire net17;
  wire net18;
  wire net19;
  wire net20;
  wire net21;
  wire net22;
  wire net23;
  wire net24;
  wire net25;
  wire net26;
  wire net27;
  wire net28;
  wire net29;
  wire net30;
  wire net31;
  wire net32;
  wire net33;

  assign uo_out[0] = net8;
  assign uo_out[1] = net9;
  assign uo_out[2] = net10;
  assign uo_out[3] = net11;
  assign uo_out[4] = 0;
  assign uo_out[5] = 0;
  assign uo_out[6] = 0;
  assign uo_out[7] = 0;
  assign uio_out[0] = 0;
  assign uio_oe[0] = 0;
  assign uio_out[1] = 0;
  assign uio_oe[1] = 0;
  assign uio_out[2] = 0;
  assign uio_oe[2] = 0;
  assign uio_out[3] = 0;
  assign uio_oe[3] = 0;
  assign uio_out[4] = 0;
  assign uio_oe[4] = 0;
  assign uio_out[5] = 0;
  assign uio_oe[5] = 0;
  assign uio_out[6] = 0;
  assign uio_oe[6] = 0;
  assign uio_out[7] = 0;
  assign uio_oe[7] = 0;

  and_cell and1 (
    .a (net9),
    .b (net10),
    .out (net8)
  );
  or_cell or1 (
    .a (net15),
    .b (net16),
    .out (net9)
  );
  or_cell or2 (
    .a (net17),
    .b (net18),
    .out (net10)
  );
  and_cell and2 (
    .a (net19),
    .b (net20),
    .out (net15)
  );
  and_cell and3 (
    .a (net21),
    .b (net22),
    .out (net16)
  );
  and_cell and4 (
    .a (net23),
    .b (net24),
    .out (net22)
  );
  dffsr_cell flop1 (
    .d (net20),
    .clk (net1),
    .r (net2),
    .q (net24)
  );
  dffsr_cell flop2 (
    .d (net24),
    .clk (net1),
    .r (net2),
    .q (net25)
  );
  dffsr_cell flop3 (
    .d (net25),
    .clk (net1),
    .r (net2),
    .q (net11)
  );
  dffsr_cell flop4 (
    .d (net26),
    .clk (net1),
    .r (net2),
    .q (net20)
  );
  dffsr_cell flop5 (
    .d (net3),
    .clk (net1),
    .r (net2),
    .q (net19)
  );
  dffsr_cell flop6 (
    .d (net4),
    .clk (net1),
    .r (net2),
    .q (net21)
  );
  dffsr_cell flop7 (
    .d (net24),
    .clk (net1),
    .r (net2),
    .q (net27)
  );
  dffsr_cell flop8 (
    .d (net27),
    .clk (net1),
    .r (net2),
    .q (net28)
  );
  xor_cell xor1 (
    .a (net25),
    .b (net11),
    .out (net29)
  );
  dffsr_cell flop9 (
    .d (net5),
    .clk (net1),
    .r (net2),
    .q (net30)
  );
  dffsr_cell flop10 (
    .d (net6),
    .clk (net1),
    .r (net2),
    .q (net31)
  );
  and_cell and5 (
    .a (net32),
    .b (net28),
    .out (net33)
  );
  and_cell and6 (
    .a (net27),
    .b (net30),
    .out (net17)
  );
  and_cell and7 (
    .a (net33),
    .b (net31),
    .out (net18)
  );
  not_cell not1 (
    .in (net20),
    .out (net23)
  );
  not_cell not2 (
    .in (net27),
    .out (net32)
  );
  not_cell not3 (
    .in (net29),
    .out (net26)
  );
endmodule

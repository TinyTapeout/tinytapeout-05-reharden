/* Automatically generated from https://wokwi.com/projects/380409169798008833 */

`default_nettype none

module tt_um_wokwi_380409169798008833(
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
  wire net7 = ui_in[4];
  wire net8 = ui_in[5];
  wire net9;
  wire net10;
  wire net11;
  wire net12;
  wire net13;
  wire net14;
  wire net15 = 1'b1;
  wire net16 = 1'b1;
  wire net17 = 1'b0;
  wire net18 = 1'b1;
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
  wire net34;
  wire net35;
  wire net36;
  wire net37;
  wire net38;
  wire net39;
  wire net40;
  wire net41;
  wire net42;
  wire net43;
  wire net44;
  wire net45;
  wire net46;
  wire net47;
  wire net48;
  wire net49;
  wire net50 = 1'b1;
  wire net51 = 1'b0;
  wire net52;
  wire net53;
  wire net54;

  assign uo_out[0] = net9;
  assign uo_out[1] = net10;
  assign uo_out[2] = net11;
  assign uo_out[3] = net12;
  assign uo_out[4] = net13;
  assign uo_out[5] = net14;
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

  dffsr_cell flop2 (
    .d (net3),
    .clk (net19),
    .r (net20),
    .q (net21)
  );
  dffsr_cell flop3 (
    .d (net4),
    .clk (net22),
    .r (net20),
    .q (net23)
  );
  dffsr_cell flop4 (
    .d (net5),
    .clk (net24),
    .r (net20),
    .q (net25)
  );
  nand_cell nand1 (
    .a (net1),
    .b (net6),
    .out (net19)
  );
  nand_cell nand2 (
    .a (net1),
    .b (net6),
    .out (net22)
  );
  nand_cell nand3 (
    .a (net1),
    .b (net6),
    .out (net24)
  );
  and_cell and1 (
    .a (net21),
    .b (net26),
    .out (net27)
  );
  and_cell and2 (
    .a (net23),
    .b (net26),
    .out (net28)
  );
  and_cell and3 (
    .a (net25),
    .b (net26),
    .out (net29)
  );
  dffsr_cell flop5 (
    .d (net3),
    .clk (net30),
    .r (net20),
    .q (net31)
  );
  dffsr_cell flop6 (
    .d (net4),
    .clk (net32),
    .r (net20),
    .q (net33)
  );
  dffsr_cell flop7 (
    .d (net5),
    .clk (net34),
    .r (net20),
    .q (net35)
  );
  nand_cell nand4 (
    .a (net1),
    .b (net7),
    .out (net30)
  );
  nand_cell nand5 (
    .a (net1),
    .b (net7),
    .out (net32)
  );
  nand_cell nand6 (
    .a (net1),
    .b (net7),
    .out (net34)
  );
  and_cell and4 (
    .a (net31),
    .b (net36),
    .out (net37)
  );
  and_cell and5 (
    .a (net33),
    .b (net36),
    .out (net38)
  );
  and_cell and6 (
    .a (net35),
    .b (net36),
    .out (net39)
  );
  dffsr_cell flop8 (
    .d (net3),
    .clk (net40),
    .r (net20),
    .q (net41)
  );
  dffsr_cell flop9 (
    .d (net4),
    .clk (net42),
    .r (net20),
    .q (net43)
  );
  dffsr_cell flop10 (
    .d (net5),
    .clk (net44),
    .r (net20),
    .q (net45)
  );
  nand_cell nand7 (
    .a (net1),
    .b (net8),
    .out (net40)
  );
  nand_cell nand8 (
    .a (net1),
    .b (net8),
    .out (net42)
  );
  nand_cell nand9 (
    .a (net1),
    .b (net8),
    .out (net44)
  );
  and_cell and7 (
    .a (net41),
    .b (net46),
    .out (net47)
  );
  and_cell and8 (
    .a (net43),
    .b (net46),
    .out (net48)
  );
  and_cell and9 (
    .a (net45),
    .b (net46),
    .out (net49)
  );
  dffsr_cell flop1 (
    .d (net46),
    .clk (net1),
    .s (net20),
    .q (net26),
    .notq (net12)
  );
  dffsr_cell flop11 (
    .d (net26),
    .clk (net1),
    .r (net20),
    .q (net36),
    .notq (net13)
  );
  dffsr_cell flop12 (
    .d (net36),
    .clk (net1),
    .r (net20),
    .q (net46),
    .notq (net14)
  );
  mux_cell mux1 (
    .a (net50),
    .b (net51),
    .sel (net2),
    .out (net20)
  );
  or_cell or1 (
    .a (net27),
    .b (net37),
    .out (net52)
  );
  or_cell or2 (
    .a (net52),
    .b (net47),
    .out (net9)
  );
  or_cell or3 (
    .a (net28),
    .b (net38),
    .out (net53)
  );
  or_cell or4 (
    .a (net53),
    .b (net48),
    .out (net10)
  );
  or_cell or5 (
    .a (net29),
    .b (net39),
    .out (net54)
  );
  or_cell or6 (
    .a (net54),
    .b (net49),
    .out (net11)
  );
endmodule

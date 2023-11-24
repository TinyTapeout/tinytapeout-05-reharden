/* Automatically generated from https://wokwi.com/projects/380409019830656001 */

`default_nettype none

module tt_um_wokwi_380409019830656001(
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
  wire net2 = ui_in[0];
  wire net3 = ui_in[1];
  wire net4;
  wire net5;
  wire net6;
  wire net7;
  wire net8;
  wire net9 = 1'b1;
  wire net10 = 1'b1;
  wire net11 = 1'b0;
  wire net12 = 1'b1;
  wire net13 = 1'b0;
  wire net14 = 1'b0;
  wire net15 = 1'b0;
  wire net16;
  wire net17;
  wire net18 = 1'b0;
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
  wire net47 = 1'b0;

  assign uo_out[0] = net4;
  assign uo_out[1] = net5;
  assign uo_out[2] = net6;
  assign uo_out[3] = net7;
  assign uo_out[4] = net8;
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
    .a (net2),
    .b (net3),
    .out (net4)
  );
  nand_cell nand1 (
    .a (net2),
    .b (net3),
    .out (net5)
  );
  or_cell or1 (
    .a (net2),
    .b (net3),
    .out (net6)
  );
  dff_cell flop5 (
    .d (net16),
    .clk (net1),
    .q (net17)
  );
  not_cell not3 (
    .in (net17),
    .out (net16)
  );
  dff_cell flop4 (
    .d (net19),
    .clk (net17),
    .q (net20)
  );
  not_cell not1 (
    .in (net20),
    .out (net19)
  );
  dff_cell flop7 (
    .d (net21),
    .clk (net20),
    .q (net22)
  );
  not_cell not2 (
    .in (net22),
    .out (net21)
  );
  dff_cell flop8 (
    .d (net23),
    .clk (net22),
    .q (net24)
  );
  not_cell not7 (
    .in (net24),
    .out (net23)
  );
  dff_cell flop9 (
    .d (net25),
    .clk (net24),
    .q (net26)
  );
  not_cell not8 (
    .in (net26),
    .out (net25)
  );
  dff_cell flop10 (
    .d (net27),
    .clk (net26),
    .q (net28)
  );
  not_cell not9 (
    .in (net28),
    .out (net27)
  );
  dff_cell flop11 (
    .d (net29),
    .clk (net28),
    .q (net30)
  );
  not_cell not10 (
    .in (net30),
    .out (net29)
  );
  dff_cell flop12 (
    .d (net31),
    .clk (net30),
    .q (net32)
  );
  not_cell not11 (
    .in (net32),
    .out (net31)
  );
  dff_cell flop1 (
    .d (net33),
    .clk (net32),
    .q (net34)
  );
  not_cell not4 (
    .in (net34),
    .out (net33)
  );
  dff_cell flop2 (
    .d (net35),
    .clk (net34),
    .q (net36)
  );
  not_cell not5 (
    .in (net36),
    .out (net35)
  );
  dff_cell flop3 (
    .d (net37),
    .clk (net36),
    .q (net38)
  );
  not_cell not6 (
    .in (net38),
    .out (net37)
  );
  dff_cell flop6 (
    .d (net39),
    .clk (net38),
    .q (net8)
  );
  not_cell not12 (
    .in (net8),
    .out (net39)
  );
  dff_cell flop13 (
    .d (net40),
    .clk (net8),
    .q (net41)
  );
  not_cell not13 (
    .in (net41),
    .out (net40)
  );
  dff_cell flop14 (
    .d (net42),
    .clk (net41),
    .q (net43)
  );
  not_cell not14 (
    .in (net43),
    .out (net42)
  );
  dff_cell flop15 (
    .d (net44),
    .clk (net43),
    .q (net45)
  );
  not_cell not15 (
    .in (net45),
    .out (net44)
  );
  dff_cell flop16 (
    .d (net46),
    .clk (net45),
    .q (net7)
  );
  not_cell not16 (
    .in (net7),
    .out (net46)
  );
endmodule

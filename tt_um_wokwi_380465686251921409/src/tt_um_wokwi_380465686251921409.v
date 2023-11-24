/* Automatically generated from https://wokwi.com/projects/380465686251921409 */

`default_nettype none

module tt_um_wokwi_380465686251921409(
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
  wire net3 = ui_in[4];
  wire net4 = ui_in[5];
  wire net5 = ui_in[6];
  wire net6 = ui_in[7];
  wire net7;
  wire net8;
  wire net9;
  wire net10;
  wire net11;
  wire net12;
  wire net13;
  wire net14;
  wire net15 = 1'b1;
  wire net16;
  wire net17 = 1'b1;
  wire net18;
  wire net19 = 1'b1;
  wire net20;
  wire net21 = 1'b1;
  wire net22;
  wire net23 = 1'b1;
  wire net24;
  wire net25;
  wire net26;
  wire net27 = 1'b0;
  wire net28 = 1'b1;
  wire net29 = 1'b1;
  wire net30 = 1'b0;
  wire net31 = 1'b1;
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
  wire net50;
  wire net51;
  wire net52;
  wire net53;
  wire net54;
  wire net55;
  wire net56;
  wire net57;
  wire net58;
  wire net59;
  wire net60;
  wire net61;
  wire net62;
  wire net63;
  wire net64;
  wire net65;
  wire net66;
  wire net67;
  wire net68;
  wire net69;
  wire net70;
  wire net71;
  wire net72;
  wire net73;
  wire net74;
  wire net75;
  wire net76;

  assign uo_out[0] = net7;
  assign uo_out[1] = net8;
  assign uo_out[2] = net9;
  assign uo_out[3] = net10;
  assign uo_out[4] = net11;
  assign uo_out[5] = net12;
  assign uo_out[6] = net13;
  assign uo_out[7] = net14;
  assign uio_out[0] = net2;
  assign uio_oe[0] = net15;
  assign uio_out[1] = net16;
  assign uio_oe[1] = net17;
  assign uio_out[2] = net18;
  assign uio_oe[2] = net19;
  assign uio_out[3] = net20;
  assign uio_oe[3] = net21;
  assign uio_out[4] = net22;
  assign uio_oe[4] = net23;
  assign uio_out[5] = net24;
  assign uio_oe[5] = net17;
  assign uio_out[6] = net25;
  assign uio_oe[6] = net19;
  assign uio_out[7] = net26;
  assign uio_oe[7] = net21;

  dff_cell flop1 (
    .d (net2),
    .clk (net32),
    .q (net16)
  );
  dff_cell flop2 (
    .d (net16),
    .clk (net32),
    .q (net18)
  );
  dff_cell flop3 (
    .d (net18),
    .clk (net32),
    .q (net20)
  );
  dff_cell flop4 (
    .d (net20),
    .clk (net32),
    .q (net22)
  );
  dff_cell flop5 (
    .d (net22),
    .clk (net32),
    .q (net24)
  );
  dff_cell flop6 (
    .d (net24),
    .clk (net32),
    .q (net25)
  );
  dff_cell flop7 (
    .d (net25),
    .clk (net32),
    .q (net26)
  );
  dff_cell flop8 (
    .d (net26),
    .clk (net32),
    .q (net33)
  );
  dff_cell flop9 (
    .d (net33),
    .clk (net32),
    .q (net34)
  );
  not_cell not1 (
    .in (net1),
    .out (net32)
  );
  dff_cell flop10 (
    .d (net34),
    .clk (net32),
    .q (net14)
  );
  not_cell not13 (
    .in (net6),
    .out (net35)
  );
  not_cell not14 (
    .in (net5),
    .out (net36)
  );
  not_cell not15 (
    .in (net4),
    .out (net37)
  );
  not_cell not16 (
    .in (net3),
    .out (net38)
  );
  not_cell not12 (
    .in (net35),
    .out (net39)
  );
  not_cell not17 (
    .in (net36),
    .out (net40)
  );
  not_cell not18 (
    .in (net37),
    .out (net41)
  );
  and_cell and10 (
    .a (net39),
    .b (net36),
    .out (net42)
  );
  and_cell and11 (
    .a (net37),
    .b (net38),
    .out (net43)
  );
  and_cell and12 (
    .a (net42),
    .b (net43),
    .out (net44)
  );
  and_cell and14 (
    .a (net35),
    .b (net45),
    .out (net46)
  );
  and_cell and15 (
    .a (net36),
    .b (net41),
    .out (net45)
  );
  and_cell and13 (
    .a (net41),
    .b (net40),
    .out (net47)
  );
  and_cell and16 (
    .a (net47),
    .b (net35),
    .out (net48)
  );
  and_cell and17 (
    .a (net36),
    .b (net41),
    .out (net49)
  );
  and_cell and18 (
    .a (net39),
    .b (net49),
    .out (net50)
  );
  and_cell and20 (
    .a (net35),
    .b (net51),
    .out (net52)
  );
  and_cell and21 (
    .a (net36),
    .b (net41),
    .out (net51)
  );
  and_cell and19 (
    .a (net40),
    .b (net41),
    .out (net53)
  );
  and_cell and22 (
    .a (net39),
    .b (net53),
    .out (net54)
  );
  and_cell and23 (
    .a (net39),
    .b (net36),
    .out (net55)
  );
  and_cell and24 (
    .a (net37),
    .b (net38),
    .out (net56)
  );
  and_cell and25 (
    .a (net55),
    .b (net56),
    .out (net57)
  );
  and_cell and26 (
    .a (net36),
    .b (net41),
    .out (net58)
  );
  and_cell and27 (
    .a (net37),
    .b (net38),
    .out (net59)
  );
  and_cell and28 (
    .a (net39),
    .b (net40),
    .out (net60)
  );
  and_cell and29 (
    .a (net40),
    .b (net37),
    .out (net61)
  );
  and_cell and30 (
    .a (net59),
    .b (net39),
    .out (net62)
  );
  and_cell and31 (
    .a (net37),
    .b (net38),
    .out (net63)
  );
  and_cell and33 (
    .a (net40),
    .b (net41),
    .out (net64)
  );
  and_cell and34 (
    .a (net64),
    .b (net39),
    .out (net65)
  );
  and_cell and35 (
    .a (net36),
    .b (net63),
    .out (net66)
  );
  or_cell or1 (
    .a (net44),
    .b (net46),
    .out (net67)
  );
  or_cell or2 (
    .a (net48),
    .b (net50),
    .out (net68)
  );
  or_cell or5 (
    .a (net39),
    .b (net58),
    .out (net69)
  );
  or_cell or8 (
    .a (net66),
    .b (net65),
    .out (net70)
  );
  not_cell not21 (
    .in (net67),
    .out (net7)
  );
  not_cell not22 (
    .in (net68),
    .out (net8)
  );
  and_cell and32 (
    .a (net37),
    .b (net40),
    .out (net71)
  );
  and_cell and36 (
    .a (net71),
    .b (net35),
    .out (net72)
  );
  not_cell not25 (
    .in (net72),
    .out (net9)
  );
  not_cell not26 (
    .in (net70),
    .out (net13)
  );
  not_cell not19 (
    .in (net69),
    .out (net11)
  );
  or_cell or3 (
    .a (net60),
    .b (net61),
    .out (net73)
  );
  or_cell or4 (
    .a (net62),
    .b (net73),
    .out (net74)
  );
  not_cell not27 (
    .in (net74),
    .out (net12)
  );
  or_cell or6 (
    .a (net52),
    .b (net54),
    .out (net75)
  );
  or_cell or7 (
    .a (net75),
    .b (net57),
    .out (net76)
  );
  not_cell not20 (
    .in (net76),
    .out (net10)
  );
endmodule

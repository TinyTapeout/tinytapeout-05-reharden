/* Automatically generated from https://wokwi.com/projects/379764885531576321 */

`default_nettype none

module tt_um_wokwi_379764885531576321(
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
  wire net3;
  wire net4;
  wire net5;
  wire net6;
  wire net7;
  wire net8;
  wire net9;
  wire net10 = 1'b0;
  wire net11 = 1'b1;
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
  wire net34 = 1'b0;
  wire net35;
  wire net36;
  wire net37;
  wire net38;
  wire net39;
  wire net40;
  wire net41;
  wire net42;
  wire net43 = 1'b0;
  wire net44 = 1'b0;
  wire net45 = 1'b0;
  wire net46 = 1'b0;
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

  assign uo_out[0] = net3;
  assign uo_out[1] = net4;
  assign uo_out[2] = net5;
  assign uo_out[3] = net6;
  assign uo_out[4] = net7;
  assign uo_out[5] = net8;
  assign uo_out[6] = net9;
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

  xor_cell xor1 (
    .a (net15),
    .b (net16),
    .out (net17)
  );
  dff_cell flop1 (
    .d (net18),
    .clk (net1),
    .q (net19),
    .notq (net20)
  );
  dff_cell flop2 (
    .d (net21),
    .clk (net1),
    .q (net16),
    .notq (net22)
  );
  dff_cell flop3 (
    .d (net23),
    .clk (net1),
    .q (net15),
    .notq (net24)
  );
  and_cell and1 (
    .a (net25),
    .b (net26),
    .out (net27)
  );
  and_cell and2 (
    .a (net15),
    .b (net26),
    .out (net21)
  );
  and_cell and3 (
    .a (net19),
    .b (net26),
    .out (net23)
  );
  and_cell and4 (
    .a (net28),
    .b (net26),
    .out (net18)
  );
  dff_cell flop4 (
    .d (net27),
    .clk (net1),
    .q (net28),
    .notq (net29)
  );
  not_cell not2 (
    .in (net17),
    .out (net25)
  );
  and_cell and6 (
    .a (net28),
    .b (net16),
    .out (net30)
  );
  or_cell or2 (
    .a (net31),
    .b (net2),
    .out (net32)
  );
  and_cell and8 (
    .a (net20),
    .b (net24),
    .out (net33)
  );
  and_cell and7 (
    .a (net30),
    .b (net33),
    .out (net31)
  );
  not_cell not1 (
    .in (net32),
    .out (net26)
  );
  not_cell not3 (
    .in (net29),
    .out (net35)
  );
  not_cell not4 (
    .in (net35),
    .out (net36)
  );
  not_cell not5 (
    .in (net20),
    .out (net37)
  );
  not_cell not6 (
    .in (net37),
    .out (net38)
  );
  not_cell not7 (
    .in (net24),
    .out (net39)
  );
  not_cell not8 (
    .in (net39),
    .out (net40)
  );
  not_cell not9 (
    .in (net22),
    .out (net41)
  );
  not_cell not10 (
    .in (net41),
    .out (net42)
  );
  and_cell and5 (
    .a (net35),
    .b (net38),
    .out (net47)
  );
  and_cell and9 (
    .a (net40),
    .b (net42),
    .out (net48)
  );
  and_cell and10 (
    .a (net36),
    .b (net37),
    .out (net49)
  );
  and_cell and12 (
    .a (net47),
    .b (net48),
    .out (net50)
  );
  and_cell and13 (
    .a (net49),
    .b (net41),
    .out (net51)
  );
  or_cell or1 (
    .a (net50),
    .b (net51),
    .out (net52)
  );
  not_cell not11 (
    .in (net52),
    .out (net3)
  );
  and_cell and14 (
    .a (net35),
    .b (net38),
    .out (net53)
  );
  and_cell and15 (
    .a (net39),
    .b (net41),
    .out (net54)
  );
  and_cell and16 (
    .a (net35),
    .b (net37),
    .out (net55)
  );
  and_cell and17 (
    .a (net40),
    .b (net41),
    .out (net56)
  );
  and_cell and18 (
    .a (net53),
    .b (net54),
    .out (net57)
  );
  and_cell and19 (
    .a (net55),
    .b (net56),
    .out (net58)
  );
  or_cell or3 (
    .a (net57),
    .b (net58),
    .out (net59)
  );
  not_cell not12 (
    .in (net59),
    .out (net4)
  );
  and_cell and20 (
    .a (net35),
    .b (net37),
    .out (net60)
  );
  and_cell and21 (
    .a (net40),
    .b (net42),
    .out (net61)
  );
  and_cell and22 (
    .a (net60),
    .b (net61),
    .out (net62)
  );
  not_cell not13 (
    .in (net62),
    .out (net5)
  );
  and_cell and23 (
    .a (net35),
    .b (net38),
    .out (net63)
  );
  and_cell and24 (
    .a (net36),
    .b (net37),
    .out (net64)
  );
  and_cell and25 (
    .a (net42),
    .b (net63),
    .out (net65)
  );
  and_cell and26 (
    .a (net64),
    .b (net42),
    .out (net66)
  );
  or_cell or4 (
    .a (net65),
    .b (net67),
    .out (net68)
  );
  not_cell not14 (
    .in (net68),
    .out (net6)
  );
  or_cell or5 (
    .a (net69),
    .b (net70),
    .out (net71)
  );
  not_cell not15 (
    .in (net71),
    .out (net7)
  );
  and_cell and27 (
    .a (net36),
    .b (net38),
    .out (net72)
  );
  and_cell and28 (
    .a (net72),
    .b (net42),
    .out (net73)
  );
  or_cell or6 (
    .a (net73),
    .b (net41),
    .out (net8)
  );
  and_cell and29 (
    .a (net35),
    .b (net37),
    .out (net74)
  );
  and_cell and30 (
    .a (net74),
    .b (net42),
    .out (net75)
  );
  or_cell or7 (
    .a (net75),
    .b (net41),
    .out (net9)
  );
  or_cell or8 (
    .a (net63),
    .b (net64),
    .out (net69)
  );
  and_cell and31 (
    .a (net39),
    .b (net42),
    .out (net70)
  );
  and_cell and11 (
    .a (net64),
    .b (net39),
    .out (net76)
  );
  or_cell or9 (
    .a (net66),
    .b (net76),
    .out (net67)
  );
endmodule

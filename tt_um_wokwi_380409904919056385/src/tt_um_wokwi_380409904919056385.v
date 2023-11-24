/* Automatically generated from https://wokwi.com/projects/380409904919056385 */

`default_nettype none

module tt_um_wokwi_380409904919056385(
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
  wire net3;
  wire net4;
  wire net5;
  wire net6;
  wire net7;
  wire net8;
  wire net9;
  wire net10;
  wire net11;
  wire net12;
  wire net13;
  wire net14;
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
  wire net77;
  wire net78;
  wire net79;
  wire net80;
  wire net81;
  wire net82;
  wire net83;
  wire net84;
  wire net85;
  wire net86;
  wire net87;
  wire net88;

  assign uo_out[0] = net3;
  assign uo_out[1] = net4;
  assign uo_out[2] = net5;
  assign uo_out[3] = net6;
  assign uo_out[4] = net7;
  assign uo_out[5] = net8;
  assign uo_out[6] = net9;
  assign uo_out[7] = net10;
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

  not_cell not1 (
    .in (net11),
    .out (net12)
  );
  not_cell not2 (
    .in (net13),
    .out (net14)
  );
  not_cell not3 (
    .in (net10),
    .out (net15)
  );
  not_cell not4 (
    .in (net16),
    .out (net17)
  );
  not_cell not5 (
    .in (net18),
    .out (net3)
  );
  not_cell not6 (
    .in (net19),
    .out (net4)
  );
  xor_cell xor1 (
    .a (net16),
    .b (net11),
    .out (net20)
  );
  and_cell and1 (
    .a (net14),
    .b (net10),
    .out (net21)
  );
  and_cell and2 (
    .a (net17),
    .b (net14),
    .out (net22)
  );
  and_cell and3 (
    .a (net17),
    .b (net10),
    .out (net23)
  );
  or_cell or1 (
    .a (net20),
    .b (net21),
    .out (net24)
  );
  or_cell or2 (
    .a (net22),
    .b (net23),
    .out (net25)
  );
  or_cell or3 (
    .a (net24),
    .b (net25),
    .out (net26)
  );
  not_cell not7 (
    .in (net26),
    .out (net5)
  );
  xor_cell xor2 (
    .a (net13),
    .b (net10),
    .out (net27)
  );
  and_cell and4 (
    .a (net27),
    .b (net11),
    .out (net28)
  );
  xor_cell xor3 (
    .a (net16),
    .b (net13),
    .out (net29)
  );
  and_cell and5 (
    .a (net29),
    .b (net15),
    .out (net30)
  );
  and_cell and6 (
    .a (net12),
    .b (net14),
    .out (net31)
  );
  and_cell and7 (
    .a (net31),
    .b (net15),
    .out (net32)
  );
  and_cell and8 (
    .a (net12),
    .b (net13),
    .out (net33)
  );
  and_cell and9 (
    .a (net33),
    .b (net10),
    .out (net34)
  );
  or_cell or4 (
    .a (net28),
    .b (net30),
    .out (net35)
  );
  or_cell or5 (
    .a (net32),
    .b (net34),
    .out (net36)
  );
  or_cell or6 (
    .a (net35),
    .b (net36),
    .out (net37)
  );
  not_cell not8 (
    .in (net37),
    .out (net6)
  );
  and_cell and10 (
    .a (net38),
    .b (net16),
    .out (net39)
  );
  and_cell and11 (
    .a (net40),
    .b (net15),
    .out (net41)
  );
  or_cell or7 (
    .a (net11),
    .b (net13),
    .out (net38)
  );
  or_cell or8 (
    .a (net12),
    .b (net13),
    .out (net40)
  );
  or_cell or9 (
    .a (net39),
    .b (net41),
    .out (net42)
  );
  not_cell not9 (
    .in (net42),
    .out (net7)
  );
  not_cell not10 (
    .in (net43),
    .out (net8)
  );
  not_cell not11 (
    .in (net44),
    .out (net9)
  );
  and_cell and12 (
    .a (net12),
    .b (net15),
    .out (net45)
  );
  and_cell and13 (
    .a (net16),
    .b (net15),
    .out (net46)
  );
  and_cell and14 (
    .a (net16),
    .b (net12),
    .out (net47)
  );
  and_cell and15 (
    .a (net47),
    .b (net14),
    .out (net48)
  );
  and_cell and16 (
    .a (net11),
    .b (net13),
    .out (net49)
  );
  and_cell and17 (
    .a (net17),
    .b (net13),
    .out (net50)
  );
  and_cell and18 (
    .a (net17),
    .b (net11),
    .out (net51)
  );
  and_cell and19 (
    .a (net51),
    .b (net10),
    .out (net52)
  );
  or_cell or10 (
    .a (net45),
    .b (net46),
    .out (net53)
  );
  or_cell or11 (
    .a (net48),
    .b (net49),
    .out (net54)
  );
  or_cell or12 (
    .a (net50),
    .b (net52),
    .out (net55)
  );
  or_cell or13 (
    .a (net53),
    .b (net54),
    .out (net56)
  );
  or_cell or14 (
    .a (net56),
    .b (net55),
    .out (net18)
  );
  and_cell and20 (
    .a (net12),
    .b (net15),
    .out (net57)
  );
  and_cell and21 (
    .a (net12),
    .b (net14),
    .out (net58)
  );
  and_cell and22 (
    .a (net17),
    .b (net12),
    .out (net59)
  );
  and_cell and23 (
    .a (net17),
    .b (net14),
    .out (net60)
  );
  and_cell and24 (
    .a (net60),
    .b (net15),
    .out (net61)
  );
  and_cell and25 (
    .a (net62),
    .b (net10),
    .out (net63)
  );
  xor_cell xor5 (
    .a (net16),
    .b (net13),
    .out (net62)
  );
  or_cell or15 (
    .a (net57),
    .b (net59),
    .out (net64)
  );
  or_cell or16 (
    .a (net58),
    .b (net61),
    .out (net65)
  );
  or_cell or17 (
    .a (net64),
    .b (net65),
    .out (net66)
  );
  or_cell or18 (
    .a (net66),
    .b (net63),
    .out (net19)
  );
  and_cell and26 (
    .a (net16),
    .b (net12),
    .out (net67)
  );
  and_cell and27 (
    .a (net14),
    .b (net15),
    .out (net68)
  );
  and_cell and28 (
    .a (net11),
    .b (net15),
    .out (net69)
  );
  or_cell or19 (
    .a (net67),
    .b (net68),
    .out (net70)
  );
  or_cell or20 (
    .a (net69),
    .b (net71),
    .out (net72)
  );
  or_cell or21 (
    .a (net70),
    .b (net72),
    .out (net73)
  );
  and_cell and29 (
    .a (net13),
    .b (net15),
    .out (net74)
  );
  and_cell and30 (
    .a (net16),
    .b (net13),
    .out (net75)
  );
  and_cell and31 (
    .a (net16),
    .b (net12),
    .out (net76)
  );
  and_cell and32 (
    .a (net12),
    .b (net13),
    .out (net77)
  );
  and_cell and33 (
    .a (net17),
    .b (net11),
    .out (net78)
  );
  and_cell and34 (
    .a (net78),
    .b (net14),
    .out (net79)
  );
  or_cell or22 (
    .a (net74),
    .b (net75),
    .out (net80)
  );
  or_cell or23 (
    .a (net76),
    .b (net77),
    .out (net81)
  );
  or_cell or24 (
    .a (net80),
    .b (net81),
    .out (net82)
  );
  or_cell or25 (
    .a (net82),
    .b (net83),
    .out (net44)
  );
  and_cell and35 (
    .a (net16),
    .b (net10),
    .out (net84)
  );
  or_cell or26 (
    .a (net79),
    .b (net84),
    .out (net83)
  );
  and_cell and36 (
    .a (net16),
    .b (net13),
    .out (net71)
  );
  and_cell and37 (
    .a (net17),
    .b (net11),
    .out (net85)
  );
  and_cell and38 (
    .a (net85),
    .b (net14),
    .out (net86)
  );
  or_cell or27 (
    .a (net73),
    .b (net86),
    .out (net43)
  );
  dffsr_cell flop1 (
    .d (net87),
    .clk (net1),
    .r (net2),
    .q (net16)
  );
  dffsr_cell flop2 (
    .d (net16),
    .clk (net1),
    .r (net2),
    .q (net11)
  );
  dffsr_cell flop3 (
    .d (net11),
    .clk (net1),
    .r (net2),
    .q (net13)
  );
  dffsr_cell flop4 (
    .d (net13),
    .clk (net1),
    .r (net2),
    .q (net10)
  );
  xor_cell xor4 (
    .a (net13),
    .b (net10),
    .out (net88)
  );
  not_cell not12 (
    .in (net88),
    .out (net87)
  );
endmodule

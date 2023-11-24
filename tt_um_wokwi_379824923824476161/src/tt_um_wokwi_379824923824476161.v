/* Automatically generated from https://wokwi.com/projects/379824923824476161 */

`default_nettype none

module tt_um_wokwi_379824923824476161(
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
  wire net3 = ui_in[1];
  wire net4 = ui_in[6];
  wire net5 = ui_in[7];
  wire net6;
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
  wire net17;
  wire net18;
  wire net19;
  wire net20 = 1'b1;
  wire net21;
  wire net22;
  wire net23;
  wire net24 = 1'b1;
  wire net25 = 1'b1;
  wire net26 = 1'b0;
  wire net27 = 1'b1;
  wire net28 = 1'b0;
  wire net29;
  wire net30;
  wire net31;
  wire net32;
  wire net33;
  wire net34 = 1'b0;
  wire net35;
  wire net36;
  wire net37 = 1'b0;
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
  wire net56 = 1'b0;
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
  wire net69 = 1'b0;
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
  wire net89;
  wire net90;
  wire net91;
  wire net92;
  wire net93;
  wire net94;
  wire net95;
  wire net96;
  wire net97;
  wire net98;
  wire net99;
  wire net100;
  wire net101;
  wire net102;
  wire net103;
  wire net104;
  wire net105;
  wire net106;
  wire net107;
  wire net108;
  wire net109;
  wire net110;
  wire net111 = 1'b0;
  wire net112;
  wire net113;
  wire net114;
  wire net115;
  wire net116;
  wire net117;
  wire net118;
  wire net119;
  wire net120;
  wire net121;
  wire net122;
  wire net123;
  wire net124;
  wire net125;
  wire net126;
  wire net127;
  wire net128;
  wire net129;
  wire net130;
  wire net131;
  wire net132;
  wire net133;
  wire net134;
  wire net135 = 1'b0;

  assign uo_out[0] = net6;
  assign uo_out[1] = net7;
  assign uo_out[2] = net8;
  assign uo_out[3] = net9;
  assign uo_out[4] = net10;
  assign uo_out[5] = net11;
  assign uo_out[6] = net12;
  assign uo_out[7] = net13;
  assign uio_out[0] = net14;
  assign uio_oe[0] = net15;
  assign uio_out[1] = net16;
  assign uio_oe[1] = net15;
  assign uio_out[2] = net17;
  assign uio_oe[2] = net15;
  assign uio_out[3] = net18;
  assign uio_oe[3] = net15;
  assign uio_out[4] = net19;
  assign uio_oe[4] = net20;
  assign uio_out[5] = net21;
  assign uio_oe[5] = net20;
  assign uio_out[6] = net22;
  assign uio_oe[6] = net20;
  assign uio_out[7] = net23;
  assign uio_oe[7] = net20;

  not_cell not1 (
    .in (net2),
    .out (net29)
  );
  and_cell and4 (
    .a (net30),
    .b (net31),
    .out (net6)
  );
  and_cell and12 (
    .a (net32),
    .b (net33),
    .out (net30)
  );
  dffsr_cell flop25 (
    .d (net35),
    .clk (net36),
    .s (net37),
    .r (net29),
    .q (net38)
  );
  dffsr_cell flop26 (
    .d (net39),
    .clk (net36),
    .s (net37),
    .r (net29),
    .q (net40),
    .notq (net41)
  );
  or_cell or24 (
    .a (net41),
    .b (net38),
    .out (net39)
  );
  mux_cell mux21 (
    .a (net40),
    .b (net36),
    .sel (net38),
    .out (net42)
  );
  dffsr_cell flop27 (
    .d (net43),
    .clk (net42),
    .s (net37),
    .r (net29),
    .q (net44),
    .notq (net45)
  );
  or_cell or25 (
    .a (net45),
    .b (net38),
    .out (net43)
  );
  mux_cell mux22 (
    .a (net44),
    .b (net36),
    .sel (net38),
    .out (net46)
  );
  dffsr_cell flop28 (
    .d (net47),
    .clk (net46),
    .s (net37),
    .r (net29),
    .q (net48),
    .notq (net49)
  );
  or_cell or26 (
    .a (net49),
    .b (net38),
    .out (net47)
  );
  mux_cell mux23 (
    .a (net48),
    .b (net36),
    .sel (net38),
    .out (net50)
  );
  dffsr_cell flop29 (
    .d (net51),
    .clk (net50),
    .s (net37),
    .r (net29),
    .q (net52),
    .notq (net53)
  );
  or_cell or27 (
    .a (net53),
    .b (net38),
    .out (net51)
  );
  mux_cell mux24 (
    .a (net52),
    .b (net36),
    .sel (net38),
    .out (net54)
  );
  dffsr_cell flop30 (
    .d (net55),
    .clk (net54),
    .s (net56),
    .r (net29),
    .q (net57),
    .notq (net58)
  );
  or_cell or28 (
    .a (net58),
    .b (net38),
    .out (net55)
  );
  mux_cell mux25 (
    .a (net57),
    .b (net36),
    .sel (net38),
    .out (net59)
  );
  dffsr_cell flop31 (
    .d (net60),
    .clk (net59),
    .s (net56),
    .r (net29),
    .notq (net61)
  );
  or_cell or29 (
    .a (net61),
    .b (net38),
    .out (net60)
  );
  and_cell and35 (
    .a (net40),
    .b (net62),
    .out (net35)
  );
  and_cell and36 (
    .a (net45),
    .b (net63),
    .out (net62)
  );
  and_cell and37 (
    .a (net48),
    .b (net64),
    .out (net63)
  );
  and_cell and38 (
    .a (net53),
    .b (net65),
    .out (net64)
  );
  and_cell and39 (
    .a (net58),
    .b (net61),
    .out (net65)
  );
  or_cell or32 (
    .a (net66),
    .b (net4),
    .out (net36)
  );
  dffsr_cell flop32 (
    .d (net67),
    .clk (net68),
    .s (net69),
    .r (net29),
    .q (net70)
  );
  dffsr_cell flop33 (
    .d (net71),
    .clk (net68),
    .s (net69),
    .r (net29),
    .q (net72),
    .notq (net73)
  );
  or_cell or33 (
    .a (net73),
    .b (net70),
    .out (net71)
  );
  mux_cell mux26 (
    .a (net72),
    .b (net68),
    .sel (net70),
    .out (net74)
  );
  dffsr_cell flop34 (
    .d (net75),
    .clk (net74),
    .s (net69),
    .r (net29),
    .q (net76),
    .notq (net77)
  );
  or_cell or34 (
    .a (net77),
    .b (net70),
    .out (net75)
  );
  mux_cell mux27 (
    .a (net76),
    .b (net68),
    .sel (net70),
    .out (net78)
  );
  dffsr_cell flop35 (
    .d (net79),
    .clk (net78),
    .s (net69),
    .r (net29),
    .q (net80),
    .notq (net81)
  );
  or_cell or35 (
    .a (net81),
    .b (net70),
    .out (net79)
  );
  mux_cell mux28 (
    .a (net80),
    .b (net68),
    .sel (net70),
    .out (net82)
  );
  dffsr_cell flop36 (
    .d (net83),
    .clk (net82),
    .s (net69),
    .r (net29),
    .notq (net84)
  );
  or_cell or36 (
    .a (net84),
    .b (net70),
    .out (net83)
  );
  and_cell and40 (
    .a (net72),
    .b (net85),
    .out (net67)
  );
  and_cell and41 (
    .a (net77),
    .b (net86),
    .out (net85)
  );
  and_cell and42 (
    .a (net80),
    .b (net84),
    .out (net86)
  );
  or_cell or40 (
    .a (net35),
    .b (net5),
    .out (net68)
  );
  and_cell and43 (
    .a (net87),
    .b (net88),
    .out (net31)
  );
  and_cell and5 (
    .a (net89),
    .b (net90),
    .out (net7)
  );
  and_cell and6 (
    .a (net32),
    .b (net33),
    .out (net89)
  );
  and_cell and7 (
    .a (net87),
    .b (net73),
    .out (net90)
  );
  and_cell and8 (
    .a (net91),
    .b (net92),
    .out (net8)
  );
  and_cell and9 (
    .a (net32),
    .b (net33),
    .out (net91)
  );
  and_cell and10 (
    .a (net77),
    .b (net88),
    .out (net92)
  );
  and_cell and11 (
    .a (net93),
    .b (net94),
    .out (net9)
  );
  and_cell and13 (
    .a (net32),
    .b (net33),
    .out (net93)
  );
  and_cell and14 (
    .a (net77),
    .b (net73),
    .out (net94)
  );
  and_cell and15 (
    .a (net95),
    .b (net96),
    .out (net10)
  );
  and_cell and16 (
    .a (net32),
    .b (net81),
    .out (net95)
  );
  and_cell and17 (
    .a (net87),
    .b (net88),
    .out (net96)
  );
  and_cell and18 (
    .a (net97),
    .b (net98),
    .out (net11)
  );
  and_cell and19 (
    .a (net32),
    .b (net81),
    .out (net97)
  );
  and_cell and44 (
    .a (net87),
    .b (net73),
    .out (net98)
  );
  and_cell and45 (
    .a (net99),
    .b (net100),
    .out (net12)
  );
  and_cell and46 (
    .a (net32),
    .b (net81),
    .out (net99)
  );
  and_cell and47 (
    .a (net77),
    .b (net88),
    .out (net100)
  );
  and_cell and48 (
    .a (net101),
    .b (net102),
    .out (net13)
  );
  and_cell and49 (
    .a (net32),
    .b (net81),
    .out (net101)
  );
  and_cell and50 (
    .a (net77),
    .b (net73),
    .out (net102)
  );
  and_cell and51 (
    .a (net103),
    .b (net104),
    .out (net14)
  );
  and_cell and52 (
    .a (net84),
    .b (net33),
    .out (net103)
  );
  and_cell and53 (
    .a (net87),
    .b (net88),
    .out (net104)
  );
  and_cell and54 (
    .a (net105),
    .b (net106),
    .out (net16)
  );
  and_cell and55 (
    .a (net84),
    .b (net33),
    .out (net105)
  );
  and_cell and56 (
    .a (net87),
    .b (net73),
    .out (net106)
  );
  and_cell and57 (
    .a (net107),
    .b (net108),
    .out (net17)
  );
  and_cell and58 (
    .a (net84),
    .b (net33),
    .out (net107)
  );
  and_cell and59 (
    .a (net77),
    .b (net88),
    .out (net108)
  );
  and_cell and60 (
    .a (net109),
    .b (net110),
    .out (net18)
  );
  and_cell and61 (
    .a (net84),
    .b (net81),
    .out (net109)
  );
  and_cell and62 (
    .a (net77),
    .b (net73),
    .out (net110)
  );
  not_cell not2 (
    .in (net84),
    .out (net32)
  );
  not_cell not3 (
    .in (net81),
    .out (net33)
  );
  not_cell not4 (
    .in (net77),
    .out (net87)
  );
  not_cell not5 (
    .in (net73),
    .out (net88)
  );
  and_cell and63 (
    .a (net112),
    .b (net113),
    .out (net19)
  );
  and_cell and64 (
    .a (net112),
    .b (net58),
    .out (net21)
  );
  and_cell and65 (
    .a (net61),
    .b (net113),
    .out (net22)
  );
  and_cell and66 (
    .a (net61),
    .b (net58),
    .out (net23)
  );
  not_cell not6 (
    .in (net58),
    .out (net113)
  );
  not_cell not7 (
    .in (net61),
    .out (net112)
  );
  dff_cell flop1 (
    .d (net114),
    .clk (net1),
    .q (net115),
    .notq (net116)
  );
  dff_cell flop2 (
    .d (net117),
    .clk (net1),
    .q (net118)
  );
  and_cell and1 (
    .a (net119),
    .b (net120),
    .out (net114)
  );
  and_cell and2 (
    .a (net115),
    .b (net120),
    .out (net117)
  );
  dff_cell flop3 (
    .d (net121),
    .clk (net1),
    .q (net122)
  );
  dff_cell flop4 (
    .d (net123),
    .clk (net1),
    .q (net124)
  );
  and_cell and3 (
    .a (net118),
    .b (net120),
    .out (net121)
  );
  and_cell and20 (
    .a (net122),
    .b (net120),
    .out (net123)
  );
  dff_cell flop5 (
    .d (net125),
    .clk (net1),
    .q (net126)
  );
  dff_cell flop6 (
    .d (net127),
    .clk (net1),
    .q (net128)
  );
  and_cell and21 (
    .a (net124),
    .b (net120),
    .out (net125)
  );
  and_cell and22 (
    .a (net126),
    .b (net120),
    .out (net127)
  );
  or_cell or1 (
    .a (net66),
    .b (net3),
    .out (net129)
  );
  not_cell not8 (
    .in (net129),
    .out (net120)
  );
  xor_cell xor1 (
    .a (net115),
    .b (net128),
    .out (net130)
  );
  not_cell not9 (
    .in (net130),
    .out (net119)
  );
  and_cell and23 (
    .a (net116),
    .b (net118),
    .out (net131)
  );
  and_cell and24 (
    .a (net122),
    .b (net124),
    .out (net132)
  );
  and_cell and25 (
    .a (net131),
    .b (net132),
    .out (net133)
  );
  and_cell and29 (
    .a (net126),
    .b (net128),
    .out (net134)
  );
  and_cell and30 (
    .a (net133),
    .b (net134),
    .out (net66)
  );
endmodule

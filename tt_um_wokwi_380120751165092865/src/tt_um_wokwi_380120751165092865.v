/* Automatically generated from https://wokwi.com/projects/380120751165092865 */

`default_nettype none

module tt_um_wokwi_380120751165092865(
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
  wire net7 = ui_in[6];
  wire net8 = ui_in[7];
  wire net9;
  wire net10;
  wire net11;
  wire net12;
  wire net13;
  wire net14 = 1'b1;
  wire net15 = 1'b1;
  wire net16 = 1'b0;
  wire net17 = 1'b1;
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
  wire net39 = 1'b0;
  wire net40;
  wire net41;
  wire net42;
  wire net43;
  wire net44 = 1'b0;
  wire net45;
  wire net46;
  wire net47 = 1'b0;
  wire net48;
  wire net49;
  wire net50 = 1'b0;
  wire net51;
  wire net52;
  wire net53 = 1'b0;
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
  wire net70 = 1'b0;
  wire net71;
  wire net72;
  wire net73;
  wire net74 = 1'b0;
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
  wire net108 = 1'b0;
  wire net109;
  wire net110;
  wire net111;
  wire net112;
  wire net113;
  wire net114;
  wire net115;
  wire net116;
  wire net117;

  assign uo_out[0] = net9;
  assign uo_out[1] = net10;
  assign uo_out[2] = net11;
  assign uo_out[3] = net12;
  assign uo_out[4] = net13;
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

  dff_cell flop1 (
    .d (net18),
    .clk (net10),
    .q (net19)
  );
  dff_cell flop2 (
    .d (net19),
    .clk (net10),
    .q (net20)
  );
  dff_cell flop3 (
    .d (net20),
    .clk (net10),
    .q (net21)
  );
  dff_cell flop4 (
    .d (net21),
    .clk (net10),
    .q (net22)
  );
  dff_cell flop5 (
    .d (net22),
    .clk (net10),
    .q (net23)
  );
  dff_cell flop6 (
    .d (net23),
    .clk (net10),
    .q (net24)
  );
  dff_cell flop7 (
    .d (net24),
    .clk (net10),
    .q (net25)
  );
  dff_cell flop8 (
    .d (net25),
    .clk (net10),
    .q (net26)
  );
  dff_cell flop9 (
    .d (net26),
    .clk (net10),
    .q (net27)
  );
  dff_cell flop10 (
    .d (net27),
    .clk (net10),
    .q (net28)
  );
  dff_cell flop11 (
    .d (net28),
    .clk (net10),
    .q (net29)
  );
  dff_cell flop12 (
    .d (net29),
    .clk (net10),
    .q (net9)
  );
  dff_cell flop13 (
    .d (net30),
    .clk (net10),
    .q (net31)
  );
  dff_cell flop14 (
    .d (net31),
    .clk (net10),
    .q (net32)
  );
  dff_cell flop15 (
    .d (net32),
    .clk (net10),
    .q (net33)
  );
  dff_cell flop16 (
    .d (net33),
    .clk (net10),
    .q (net18)
  );
  xor_cell xor1 (
    .a (net34),
    .b (net25),
    .out (net35)
  );
  xor_cell xor2 (
    .a (net36),
    .b (net27),
    .out (net34)
  );
  xor_cell xor3 (
    .a (net28),
    .b (net9),
    .out (net36)
  );
  or_cell or1 (
    .a (net35),
    .b (net8),
    .out (net30)
  );
  dffsr_cell flop23 (
    .d (net37),
    .clk (net38),
    .s (net39),
    .r (net40),
    .q (net41),
    .notq (net42)
  );
  dffsr_cell flop17 (
    .d (net43),
    .clk (net38),
    .s (net44),
    .r (net40),
    .q (net45)
  );
  dffsr_cell flop18 (
    .d (net46),
    .clk (net38),
    .s (net47),
    .r (net40),
    .q (net48)
  );
  dffsr_cell flop19 (
    .d (net49),
    .clk (net38),
    .s (net50),
    .r (net40),
    .q (net51)
  );
  dffsr_cell flop20 (
    .d (net52),
    .clk (net38),
    .s (net53),
    .r (net40),
    .q (net54)
  );
  not_cell not1 (
    .in (net2),
    .out (net40)
  );
  and_cell and1 (
    .a (net42),
    .b (net10),
    .out (net37)
  );
  and_cell and2 (
    .a (net55),
    .b (net10),
    .out (net43)
  );
  xor_cell xor4 (
    .a (net41),
    .b (net45),
    .out (net55)
  );
  xor_cell xor5 (
    .a (net56),
    .b (net48),
    .out (net57)
  );
  and_cell and3 (
    .a (net41),
    .b (net45),
    .out (net56)
  );
  xor_cell xor6 (
    .a (net58),
    .b (net51),
    .out (net59)
  );
  and_cell and4 (
    .a (net56),
    .b (net48),
    .out (net58)
  );
  and_cell and5 (
    .a (net57),
    .b (net10),
    .out (net46)
  );
  and_cell and6 (
    .a (net59),
    .b (net10),
    .out (net49)
  );
  and_cell and7 (
    .a (net60),
    .b (net10),
    .out (net52)
  );
  xor_cell xor7 (
    .a (net61),
    .b (net54),
    .out (net60)
  );
  and_cell and8 (
    .a (net58),
    .b (net51),
    .out (net61)
  );
  nand_cell nand1 (
    .a (net51),
    .b (net54),
    .out (net10)
  );
  and_cell and9 (
    .a (net62),
    .b (net1),
    .out (net63)
  );
  and_cell and10 (
    .a (net4),
    .b (net3),
    .out (net64)
  );
  or_cell or2 (
    .a (net63),
    .b (net64),
    .out (net38)
  );
  not_cell not2 (
    .in (net3),
    .out (net62)
  );
  and_cell and11 (
    .a (net51),
    .b (net65),
    .out (net66)
  );
  and_cell and12 (
    .a (net9),
    .b (net54),
    .out (net67)
  );
  or_cell or3 (
    .a (net66),
    .b (net67),
    .out (net68)
  );
  not_cell not3 (
    .in (net9),
    .out (net65)
  );
  dffsr_cell flop21 (
    .d (net69),
    .clk (net38),
    .s (net40),
    .r (net70),
    .q (net71),
    .notq (net72)
  );
  dffsr_cell flop22 (
    .d (net73),
    .clk (net38),
    .s (net74),
    .r (net40),
    .q (net12),
    .notq (net75)
  );
  dff_cell flop24 (
    .d (net76),
    .clk (net10),
    .q (net77),
    .notq (net76)
  );
  dff_cell flop25 (
    .d (net78),
    .clk (net77),
    .q (net79),
    .notq (net78)
  );
  dff_cell flop26 (
    .d (net80),
    .clk (net79),
    .q (net81),
    .notq (net80)
  );
  dff_cell flop27 (
    .d (net82),
    .clk (net81),
    .q (net83),
    .notq (net82)
  );
  dff_cell flop28 (
    .d (net84),
    .clk (net83),
    .q (net85),
    .notq (net84)
  );
  dff_cell flop29 (
    .d (net86),
    .clk (net85),
    .q (net87),
    .notq (net86)
  );
  dff_cell flop30 (
    .d (net88),
    .clk (net87),
    .q (net89),
    .notq (net88)
  );
  dff_cell flop31 (
    .d (net90),
    .clk (net89),
    .q (net91),
    .notq (net90)
  );
  dff_cell flop32 (
    .d (net92),
    .clk (net91),
    .q (net93),
    .notq (net92)
  );
  dff_cell flop33 (
    .d (net94),
    .clk (net93),
    .q (net95),
    .notq (net94)
  );
  dff_cell flop34 (
    .d (net96),
    .clk (net95),
    .q (net97),
    .notq (net96)
  );
  dff_cell flop35 (
    .d (net98),
    .clk (net97),
    .q (net99),
    .notq (net98)
  );
  dff_cell flop36 (
    .d (net100),
    .clk (net99),
    .q (net101),
    .notq (net100)
  );
  dff_cell flop37 (
    .d (net102),
    .clk (net101),
    .q (net103),
    .notq (net102)
  );
  dff_cell flop38 (
    .d (net104),
    .clk (net103),
    .q (net105),
    .notq (net104)
  );
  and_cell and13 (
    .a (net71),
    .b (net13),
    .out (net11)
  );
  dffsr_cell flop39 (
    .d (net106),
    .clk (net107),
    .s (net108),
    .r (net40),
    .q (net13),
    .notq (net106)
  );
  dff_cell flop40 (
    .d (net109),
    .clk (net105),
    .q (net110),
    .notq (net109)
  );
  mux_cell mux1 (
    .a (net101),
    .b (net110),
    .sel (net5),
    .out (net111)
  );
  mux_cell mux2 (
    .a (net95),
    .b (net111),
    .sel (net6),
    .out (net107)
  );
  or_cell or4 (
    .a (net112),
    .b (net113),
    .out (net69)
  );
  and_cell and14 (
    .a (net71),
    .b (net114),
    .out (net112)
  );
  and_cell and15 (
    .a (net115),
    .b (net72),
    .out (net113)
  );
  not_cell not4 (
    .in (net68),
    .out (net114)
  );
  not_cell not5 (
    .in (net10),
    .out (net115)
  );
  and_cell and16 (
    .a (net12),
    .b (net13),
    .out (net116)
  );
  or_cell or5 (
    .a (net116),
    .b (net117),
    .out (net73)
  );
  and_cell and17 (
    .a (net7),
    .b (net75),
    .out (net117)
  );
endmodule

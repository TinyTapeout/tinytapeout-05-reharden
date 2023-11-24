/* Automatically generated from https://wokwi.com/projects/380005495431181313 */

`default_nettype none

module tt_um_wokwi_380005495431181313(
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
  wire net9 = ui_in[6];
  wire net10 = ui_in[7];
  wire net11;
  wire net12;
  wire net13;
  wire net14;
  wire net15;
  wire net16;
  wire net17;
  wire net18;
  wire net19 = uio_in[0];
  wire net20 = 1'b0;
  wire net21 = uio_in[1];
  wire net22 = uio_in[2];
  wire net23 = uio_in[3];
  wire net24 = uio_in[4];
  wire net25 = uio_in[5];
  wire net26;
  wire net27;
  wire net28 = uio_in[6];
  wire net29;
  wire net30 = uio_in[7];
  wire net31;
  wire net32 = 1'b0;
  wire net33 = 1'b1;
  wire net34;
  wire net35;
  wire net36;
  wire net37;
  wire net38;
  wire net39 = 1'b0;
  wire net40 = 1'b0;
  wire net41;
  wire net42;
  wire net43;
  wire net44;
  wire net45;
  wire net46 = 1'b0;
  wire net47 = 1'b1;
  wire net48;
  wire net49;
  wire net50 = 1'b1;
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
  wire net83 = 1'b0;
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
  wire net96 = 1'b1;
  wire net97;
  wire net98;
  wire net99 = 1'b1;
  wire net100;
  wire net101;
  wire net102;
  wire net103 = 1'b0;
  wire net104 = 1'b0;
  wire net105;
  wire net106;
  wire net107;
  wire net108 = 1'b0;
  wire net109 = 1'b0;
  wire net110;
  wire net111;
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
  wire net122 = 1'b0;
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
  wire net135;
  wire net136;
  wire net137;
  wire net138;
  wire net139;
  wire net140;
  wire net141;
  wire net142;
  wire net143;
  wire net144;
  wire net145;
  wire net146;
  wire net147;
  wire net148;
  wire net149;
  wire net150;
  wire net151;
  wire net152;
  wire net153;
  wire net154;
  wire net155;
  wire net156;
  wire net157;
  wire net158;
  wire net159 = 1'b0;
  wire net160 = 1'b0;
  wire net161 = 1'b0;
  wire net162 = 1'b0;
  wire net163 = 1'b0;
  wire net164 = 1'b0;
  wire net165 = 1'b0;
  wire net166 = 1'b0;
  wire net167;
  wire net168;
  wire net169;
  wire net170;
  wire net171 = 1'b1;
  wire net172;
  wire net173;
  wire net174;
  wire net175;
  wire net176 = 1'b0;
  wire net177 = 1'b0;
  wire net178 = 1'b0;
  wire net179 = 1'b0;
  wire net180 = 1'b0;
  wire net181 = 1'b0;
  wire net182 = 1'b0;
  wire net183 = 1'b1;
  wire net184;
  wire net185;
  wire net186 = 1'b0;
  wire net187;
  wire net188;
  wire net189;
  wire net190;
  wire net191;
  wire net192;
  wire net193 = 1'b0;
  wire net194 = 1'b0;
  wire net195 = 1'b0;
  wire net196;
  wire net197 = 1'b0;
  wire net198;
  wire net199;
  wire net200;
  wire net201;
  wire net202;
  wire net203;
  wire net204;
  wire net205;
  wire net206;
  wire net207;
  wire net208;
  wire net209;
  wire net210;
  wire net211;
  wire net212;
  wire net213;
  wire net214;
  wire net215;
  wire net216;
  wire net217;
  wire net218;
  wire net219;
  wire net220 = 1'b0;
  wire net221 = 1'b0;
  wire net222;
  wire net223 = 1'b0;
  wire net224;
  wire net225;
  wire net226;
  wire net227 = 1'b0;

  assign uo_out[0] = net11;
  assign uo_out[1] = net12;
  assign uo_out[2] = net13;
  assign uo_out[3] = net14;
  assign uo_out[4] = net15;
  assign uo_out[5] = net16;
  assign uo_out[6] = net17;
  assign uo_out[7] = net18;
  assign uio_out[0] = net20;
  assign uio_oe[0] = net20;
  assign uio_out[1] = net20;
  assign uio_oe[1] = net20;
  assign uio_out[2] = net20;
  assign uio_oe[2] = net20;
  assign uio_out[3] = net20;
  assign uio_oe[3] = net20;
  assign uio_out[4] = net20;
  assign uio_oe[4] = net20;
  assign uio_out[5] = net26;
  assign uio_oe[5] = net27;
  assign uio_out[6] = net29;
  assign uio_oe[6] = net27;
  assign uio_out[7] = net31;
  assign uio_oe[7] = net27;

  or_cell or1 (
    .a (net34),
    .b (net35),
    .out (net36)
  );
  or_cell or2 (
    .a (net7),
    .b (net8),
    .out (net35)
  );
  or_cell or3 (
    .a (net37),
    .b (net36),
    .out (net38)
  );
  or_cell or4 (
    .a (net3),
    .b (net4),
    .out (net37)
  );
  dffsr_cell flop2 (
    .d (net41),
    .clk (net42),
    .r (net43),
    .q (net44),
    .notq (net41)
  );
  and_cell and1 (
    .a (net12),
    .b (net45),
    .out (net11)
  );
  dffsr_cell flop4 (
    .d (net47),
    .clk (net48),
    .r (net43),
    .q (net49)
  );
  dffsr_cell flop5 (
    .d (net50),
    .clk (net51),
    .r (net43),
    .q (net52)
  );
  dffsr_cell flop6 (
    .d (net54),
    .clk (net55),
    .r (net43),
    .q (net56),
    .notq (net54)
  );
  dffsr_cell flop7 (
    .d (net57),
    .clk (net54),
    .r (net43),
    .notq (net57)
  );
  dffsr_cell flop8 (
    .d (net58),
    .clk (net57),
    .r (net43),
    .notq (net58)
  );
  dffsr_cell flop9 (
    .d (net59),
    .clk (net60),
    .r (net43),
    .q (net61),
    .notq (net59)
  );
  dffsr_cell flop10 (
    .d (net62),
    .clk (net59),
    .r (net43),
    .q (net63),
    .notq (net62)
  );
  dffsr_cell flop11 (
    .d (net42),
    .clk (net62),
    .r (net43),
    .q (net64),
    .notq (net42)
  );
  dffsr_cell flop12 (
    .d (net65),
    .clk (net1),
    .r (net43),
    .notq (net65)
  );
  dffsr_cell flop13 (
    .d (net66),
    .clk (net65),
    .r (net43),
    .notq (net66)
  );
  dffsr_cell flop14 (
    .d (net67),
    .clk (net66),
    .r (net43),
    .notq (net67)
  );
  dffsr_cell flop15 (
    .d (net68),
    .clk (net67),
    .r (net43),
    .q (net69),
    .notq (net68)
  );
  dffsr_cell flop16 (
    .d (net70),
    .clk (net68),
    .r (net43),
    .q (net71),
    .notq (net70)
  );
  dffsr_cell flop1 (
    .d (net72),
    .clk (net70),
    .r (net43),
    .notq (net72)
  );
  dffsr_cell flop3 (
    .d (net73),
    .clk (net72),
    .r (net43),
    .notq (net73)
  );
  dffsr_cell flop17 (
    .d (net74),
    .clk (net73),
    .r (net43),
    .notq (net74)
  );
  dffsr_cell flop18 (
    .d (net75),
    .clk (net74),
    .r (net43),
    .notq (net75)
  );
  dffsr_cell flop19 (
    .d (net76),
    .clk (net75),
    .r (net43),
    .notq (net76)
  );
  dffsr_cell flop22 (
    .d (net77),
    .clk (net78),
    .r (net43),
    .q (net79),
    .notq (net77)
  );
  dffsr_cell flop23 (
    .d (net80),
    .clk (net77),
    .r (net43),
    .q (net81),
    .notq (net80)
  );
  dffsr_cell flop24 (
    .d (net55),
    .clk (net80),
    .r (net43),
    .q (net82),
    .notq (net55)
  );
  and_cell and4 (
    .a (net84),
    .b (net85),
    .out (net86)
  );
  and_cell and5 (
    .a (net79),
    .b (net81),
    .out (net87)
  );
  and_cell and6 (
    .a (net82),
    .b (net56),
    .out (net88)
  );
  and_cell and8 (
    .a (net87),
    .b (net88),
    .out (net84)
  );
  or_cell or6 (
    .a (net18),
    .b (net86),
    .out (net17)
  );
  and_cell and2 (
    .a (net52),
    .b (net89),
    .out (net16)
  );
  and_cell and9 (
    .a (net49),
    .b (net89),
    .out (net15)
  );
  and_cell and10 (
    .a (net38),
    .b (net9),
    .out (net89)
  );
  not_cell not3 (
    .in (net10),
    .out (net45)
  );
  and_cell and11 (
    .a (net38),
    .b (net90),
    .out (net12)
  );
  not_cell not2 (
    .in (net15),
    .out (net90)
  );
  and_cell and12 (
    .a (net38),
    .b (net91),
    .out (net13)
  );
  not_cell not4 (
    .in (net16),
    .out (net91)
  );
  and_cell and13 (
    .a (net92),
    .b (net16),
    .out (net14)
  );
  not_cell not5 (
    .in (net15),
    .out (net92)
  );
  nand_cell nand1 (
    .a (net2),
    .b (net38),
    .out (net43)
  );
  and_cell and7 (
    .a (net71),
    .b (net14),
    .out (net85)
  );
  and_cell and14 (
    .a (net69),
    .b (net93),
    .out (net94)
  );
  and_cell and15 (
    .a (net81),
    .b (net79),
    .out (net95)
  );
  and_cell and16 (
    .a (net95),
    .b (net94),
    .out (net18)
  );
  dffsr_cell flop25 (
    .d (net96),
    .clk (net97),
    .r (net98),
    .q (net93)
  );
  dffsr_cell flop26 (
    .d (net99),
    .clk (net95),
    .r (net100),
    .q (net101)
  );
  dffsr_cell flop27 (
    .d (net101),
    .clk (net95),
    .r (net100),
    .q (net102)
  );
  not_cell not1 (
    .in (net97),
    .out (net105)
  );
  dffsr_cell flop28 (
    .d (net102),
    .clk (net95),
    .r (net100),
    .q (net106)
  );
  dffsr_cell flop29 (
    .d (net106),
    .clk (net95),
    .r (net100),
    .q (net107)
  );
  dffsr_cell flop30 (
    .d (net107),
    .clk (net95),
    .r (net100),
    .q (net110)
  );
  dffsr_cell flop31 (
    .d (net110),
    .clk (net95),
    .r (net100),
    .q (net111)
  );
  or_cell or5 (
    .a (net112),
    .b (net113),
    .out (net98)
  );
  and_cell and18 (
    .a (net6),
    .b (net110),
    .out (net114)
  );
  and_cell and17 (
    .a (net5),
    .b (net107),
    .out (net115)
  );
  and_cell and19 (
    .a (net4),
    .b (net106),
    .out (net116)
  );
  and_cell and20 (
    .a (net3),
    .b (net102),
    .out (net117)
  );
  or_cell or7 (
    .a (net115),
    .b (net114),
    .out (net118)
  );
  or_cell or8 (
    .a (net119),
    .b (net118),
    .out (net112)
  );
  or_cell or9 (
    .a (net117),
    .b (net116),
    .out (net119)
  );
  and_cell and21 (
    .a (net120),
    .b (net15),
    .out (net97)
  );
  or_cell or10 (
    .a (net43),
    .b (net105),
    .out (net100)
  );
  or_cell or11 (
    .a (net121),
    .b (net100),
    .out (net113)
  );
  or_cell or12 (
    .a (net5),
    .b (net6),
    .out (net34)
  );
  dffsr_cell flop32 (
    .d (net111),
    .clk (net95),
    .r (net100),
    .q (net123)
  );
  or_cell or13 (
    .a (net124),
    .b (net123),
    .out (net121)
  );
  and_cell and22 (
    .a (net7),
    .b (net111),
    .out (net124)
  );
  dffsr_cell flop33 (
    .d (net125),
    .clk (net41),
    .r (net43),
    .q (net126),
    .notq (net125)
  );
  or_cell and23 (
    .a (net127),
    .b (net128),
    .out (net129)
  );
  or_cell and24 (
    .a (net130),
    .b (net131),
    .out (net132)
  );
  or_cell and25 (
    .a (net129),
    .b (net132),
    .out (net133)
  );
  or_cell and26 (
    .a (net134),
    .b (net133),
    .out (net135)
  );
  or_cell and28 (
    .a (net136),
    .b (net137),
    .out (net138)
  );
  or_cell and29 (
    .a (net139),
    .b (net140),
    .out (net141)
  );
  or_cell and30 (
    .a (net138),
    .b (net141),
    .out (net142)
  );
  or_cell and31 (
    .a (net143),
    .b (net142),
    .out (net144)
  );
  or_cell or14 (
    .a (net48),
    .b (net145),
    .out (net51)
  );
  xor_cell and32 (
    .a (net146),
    .b (net126),
    .out (net140)
  );
  xor_cell and33 (
    .a (net147),
    .b (net44),
    .out (net139)
  );
  xor_cell and34 (
    .a (net148),
    .b (net64),
    .out (net137)
  );
  xor_cell and35 (
    .a (net149),
    .b (net63),
    .out (net136)
  );
  xor_cell and36 (
    .a (net150),
    .b (net61),
    .out (net143)
  );
  xor_cell and38 (
    .a (net151),
    .b (net126),
    .out (net131)
  );
  xor_cell and39 (
    .a (net152),
    .b (net44),
    .out (net130)
  );
  xor_cell and40 (
    .a (net153),
    .b (net64),
    .out (net128)
  );
  xor_cell and41 (
    .a (net154),
    .b (net63),
    .out (net127)
  );
  xor_cell and42 (
    .a (net155),
    .b (net61),
    .out (net134)
  );
  dffsr_cell flop34 (
    .d (net22),
    .clk (net156),
    .r (net157),
    .q (net148)
  );
  dffsr_cell flop35 (
    .d (net23),
    .clk (net156),
    .s (net157),
    .q (net147)
  );
  dffsr_cell flop36 (
    .d (net24),
    .clk (net156),
    .r (net157),
    .q (net146)
  );
  dffsr_cell flop38 (
    .d (net19),
    .clk (net156),
    .r (net157),
    .q (net150)
  );
  dffsr_cell flop39 (
    .d (net21),
    .clk (net156),
    .r (net157),
    .q (net149)
  );
  dffsr_cell flop40 (
    .d (net22),
    .clk (net158),
    .r (net157),
    .q (net153)
  );
  dffsr_cell flop41 (
    .d (net23),
    .clk (net158),
    .s (net157),
    .q (net152)
  );
  dffsr_cell flop42 (
    .d (net24),
    .clk (net158),
    .r (net157),
    .q (net151)
  );
  dffsr_cell flop44 (
    .d (net19),
    .clk (net158),
    .r (net157),
    .q (net155)
  );
  dffsr_cell flop45 (
    .d (net21),
    .clk (net158),
    .s (net157),
    .q (net154)
  );
  not_cell not6 (
    .in (net144),
    .out (net145)
  );
  not_cell not7 (
    .in (net135),
    .out (net48)
  );
  not_cell not8 (
    .in (net2),
    .out (net157)
  );
  dffsr_cell flop46 (
    .d (net167),
    .clk (net168),
    .r (net157),
    .q (net169)
  );
  dffsr_cell flop47 (
    .d (net170),
    .clk (net168),
    .r (net157),
    .q (net167)
  );
  dffsr_cell flop48 (
    .d (net171),
    .clk (net168),
    .r (net157),
    .q (net170)
  );
  dffsr_cell flop49 (
    .d (net25),
    .clk (net170),
    .r (net157),
    .q (net172)
  );
  dffsr_cell flop50 (
    .d (net28),
    .clk (net170),
    .r (net157),
    .q (net173)
  );
  dffsr_cell flop51 (
    .d (net30),
    .clk (net170),
    .r (net157),
    .q (net174)
  );
  dffsr_cell flop52 (
    .d (net169),
    .clk (net168),
    .r (net157),
    .q (net175)
  );
  not_cell not9 (
    .in (net1),
    .out (net168)
  );
  and_cell and45 (
    .a (net173),
    .b (net184),
    .out (net31)
  );
  and_cell and46 (
    .a (net31),
    .b (net1),
    .out (net158)
  );
  and_cell and47 (
    .a (net174),
    .b (net185),
    .out (net29)
  );
  and_cell and48 (
    .a (net29),
    .b (net1),
    .out (net156)
  );
  dffsr_cell flop37 (
    .d (net22),
    .clk (net187),
    .r (net157),
    .q (net188)
  );
  dffsr_cell flop43 (
    .d (net23),
    .clk (net187),
    .r (net157),
    .q (net189)
  );
  dffsr_cell flop53 (
    .d (net24),
    .clk (net187),
    .r (net157),
    .q (net190)
  );
  dffsr_cell flop54 (
    .d (net19),
    .clk (net187),
    .s (net157),
    .q (net191)
  );
  dffsr_cell flop55 (
    .d (net21),
    .clk (net187),
    .s (net157),
    .q (net192)
  );
  dffsr_cell flop56 (
    .d (net175),
    .clk (net168),
    .r (net157),
    .q (net196)
  );
  xor_cell xor2 (
    .a (net167),
    .b (net169),
    .out (net184)
  );
  xor_cell xor3 (
    .a (net169),
    .b (net175),
    .out (net185)
  );
  and_cell and3 (
    .a (net172),
    .b (net198),
    .out (net26)
  );
  and_cell and27 (
    .a (net26),
    .b (net1),
    .out (net187)
  );
  xor_cell xor4 (
    .a (net196),
    .b (net175),
    .out (net198)
  );
  dffsr_cell flop57 (
    .d (net199),
    .clk (net54),
    .r (net200),
    .q (net201),
    .notq (net199)
  );
  dffsr_cell flop58 (
    .d (net202),
    .clk (net199),
    .r (net200),
    .q (net203),
    .notq (net202)
  );
  dffsr_cell flop59 (
    .d (net204),
    .clk (net202),
    .r (net200),
    .q (net205),
    .notq (net204)
  );
  dffsr_cell flop60 (
    .d (net206),
    .clk (net204),
    .r (net200),
    .q (net207),
    .notq (net206)
  );
  dffsr_cell flop61 (
    .d (net208),
    .clk (net206),
    .r (net200),
    .q (net209),
    .notq (net208)
  );
  or_cell and37 (
    .a (net210),
    .b (net211),
    .out (net212)
  );
  or_cell and43 (
    .a (net213),
    .b (net214),
    .out (net215)
  );
  or_cell and49 (
    .a (net212),
    .b (net215),
    .out (net216)
  );
  or_cell and50 (
    .a (net217),
    .b (net216),
    .out (net218)
  );
  xor_cell and51 (
    .a (net190),
    .b (net209),
    .out (net214)
  );
  xor_cell and52 (
    .a (net189),
    .b (net207),
    .out (net213)
  );
  xor_cell and53 (
    .a (net188),
    .b (net205),
    .out (net211)
  );
  xor_cell and54 (
    .a (net192),
    .b (net203),
    .out (net210)
  );
  xor_cell and55 (
    .a (net191),
    .b (net201),
    .out (net217)
  );
  dffsr_cell flop20 (
    .d (net219),
    .clk (net76),
    .r (net43),
    .notq (net219)
  );
  dffsr_cell flop21 (
    .d (net78),
    .clk (net219),
    .r (net43),
    .notq (net78)
  );
  dffsr_cell flop63 (
    .d (net222),
    .clk (net58),
    .r (net43),
    .q (net120),
    .notq (net222)
  );
  or_cell or15 (
    .a (net43),
    .b (net224),
    .out (net200)
  );
  not_cell not10 (
    .in (net218),
    .out (net225)
  );
  dffsr_cell flop62 (
    .d (net225),
    .clk (net226),
    .q (net224)
  );
  not_cell not12 (
    .in (net54),
    .out (net226)
  );
  xor_cell xor1 (
    .a (net167),
    .b (net196),
    .out (net27)
  );
  and_cell and44 (
    .a (net54),
    .b (net224),
    .out (net60)
  );
endmodule

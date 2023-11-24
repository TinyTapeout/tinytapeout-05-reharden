/* Automatically generated from https://wokwi.com/projects/380410498092232705 */

`default_nettype none

module tt_um_wokwi_380410498092232705(
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
  wire net2 = ui_in[1];
  wire net3 = ui_in[2];
  wire net4 = ui_in[3];
  wire net5 = ui_in[6];
  wire net6 = ui_in[7];
  wire net7;
  wire net8;
  wire net9;
  wire net10;
  wire net11;
  wire net12 = 1'b1;
  wire net13 = 1'b0;
  wire net14 = 1'b1;
  wire net15 = 1'b1;
  wire net16;
  wire net17;
  wire net18 = 1'b0;
  wire net19;
  wire net20;
  wire net21 = 1'b0;
  wire net22;
  wire net23;
  wire net24 = 1'b0;
  wire net25;
  wire net26;
  wire net27 = 1'b0;
  wire net28;
  wire net29;
  wire net30 = 1'b1;
  wire net31;
  wire net32;
  wire net33 = 1'b0;
  wire net34;
  wire net35;
  wire net36 = 1'b0;
  wire net37;
  wire net38;
  wire net39 = 1'b1;
  wire net40;
  wire net41;
  wire net42 = 1'b0;
  wire net43;
  wire net44;
  wire net45 = 1'b1;
  wire net46;
  wire net47 = 1'b0;
  wire net48 = 1'b0;
  wire net49 = 1'b1;
  wire net50;
  wire net51;
  wire net52;
  wire net53;
  wire net54 = 1'b1;
  wire net55 = 1'b0;
  wire net56;
  wire net57 = 1'b1;
  wire net58;
  wire net59;
  wire net60 = 1'b0;
  wire net61;
  wire net62;
  wire net63 = 1'b1;
  wire net64;
  wire net65;
  wire net66 = 1'b0;
  wire net67;
  wire net68;
  wire net69 = 1'b1;
  wire net70;
  wire net71;
  wire net72 = 1'b0;
  wire net73;
  wire net74;
  wire net75 = 1'b0;
  wire net76;
  wire net77;
  wire net78 = 1'b1;
  wire net79;
  wire net80;
  wire net81 = 1'b1;
  wire net82;
  wire net83;
  wire net84 = 1'b0;
  wire net85;
  wire net86;
  wire net87 = 1'b1;
  wire net88;
  wire net89;
  wire net90 = 1'b1;
  wire net91;
  wire net92;
  wire net93 = 1'b0;
  wire net94;
  wire net95;
  wire net96 = 1'b0;
  wire net97;
  wire net98;
  wire net99 = 1'b0;
  wire net100;
  wire net101;
  wire net102 = 1'b1;
  wire net103;
  wire net104;
  wire net105 = 1'b1;
  wire net106;
  wire net107;
  wire net108 = 1'b0;
  wire net109;
  wire net110;
  wire net111 = 1'b1;
  wire net112;
  wire net113;
  wire net114 = 1'b1;
  wire net115;
  wire net116;
  wire net117 = 1'b0;
  wire net118;
  wire net119;
  wire net120 = 1'b1;
  wire net121;
  wire net122;
  wire net123 = 1'b1;
  wire net124;
  wire net125;
  wire net126 = 1'b0;
  wire net127;
  wire net128;
  wire net129 = 1'b0;
  wire net130;
  wire net131;
  wire net132 = 1'b0;
  wire net133;
  wire net134;
  wire net135 = 1'b1;
  wire net136;
  wire net137;
  wire net138 = 1'b1;
  wire net139;
  wire net140;
  wire net141 = 1'b0;
  wire net142;
  wire net143;
  wire net144 = 1'b1;
  wire net145;
  wire net146;
  wire net147 = 1'b1;
  wire net148;
  wire net149;
  wire net150 = 1'b0;
  wire net151;
  wire net152;
  wire net153 = 1'b1;
  wire net154;
  wire net155;
  wire net156 = 1'b1;
  wire net157;
  wire net158;
  wire net159 = 1'b0;
  wire net160;
  wire net161;
  wire net162 = 1'b1;
  wire net163;
  wire net164;
  wire net165 = 1'b1;
  wire net166;
  wire net167;
  wire net168 = 1'b1;
  wire net169;
  wire net170;
  wire net171 = 1'b1;
  wire net172;
  wire net173;
  wire net174 = 1'b0;
  wire net175;
  wire net176;
  wire net177 = 1'b1;
  wire net178;
  wire net179;
  wire net180 = 1'b1;
  wire net181;
  wire net182;
  wire net183 = 1'b0;
  wire net184;
  wire net185;
  wire net186 = 1'b1;
  wire net187;
  wire net188;
  wire net189 = 1'b1;
  wire net190;
  wire net191;
  wire net192 = 1'b0;
  wire net193;
  wire net194;
  wire net195 = 1'b0;
  wire net196;
  wire net197;
  wire net198 = 1'b1;
  wire net199;
  wire net200;
  wire net201 = 1'b0;
  wire net202;
  wire net203;
  wire net204 = 1'b1;
  wire net205;
  wire net206;
  wire net207 = 1'b0;
  wire net208;
  wire net209;
  wire net210 = 1'b0;
  wire net211;
  wire net212;
  wire net213 = 1'b0;
  wire net214;
  wire net215;
  wire net216 = 1'b0;
  wire net217;
  wire net218;
  wire net219 = 1'b1;
  wire net220;
  wire net221 = 1'b1;

  assign uo_out[0] = net7;
  assign uo_out[1] = net8;
  assign uo_out[2] = net9;
  assign uo_out[3] = net10;
  assign uo_out[4] = 0;
  assign uo_out[5] = 0;
  assign uo_out[6] = net6;
  assign uo_out[7] = net11;
  assign uio_out[0] = 0;
  assign uio_oe[0] = net12;
  assign uio_out[1] = 0;
  assign uio_oe[1] = net12;
  assign uio_out[2] = 0;
  assign uio_oe[2] = net12;
  assign uio_out[3] = 0;
  assign uio_oe[3] = net12;
  assign uio_out[4] = 0;
  assign uio_oe[4] = net12;
  assign uio_out[5] = 0;
  assign uio_oe[5] = net12;
  assign uio_out[6] = 0;
  assign uio_oe[6] = net12;
  assign uio_out[7] = 0;
  assign uio_oe[7] = net12;

  dff_cell flop6 (
    .d (net16),
    .clk (net1),
    .q (net17)
  );
  mux_cell mux6 (
    .a (net18),
    .b (net19),
    .sel (net5),
    .out (net16)
  );
  dff_cell flop7 (
    .d (net20),
    .clk (net1),
    .q (net19)
  );
  mux_cell mux7 (
    .a (net21),
    .b (net22),
    .sel (net5),
    .out (net20)
  );
  dff_cell flop8 (
    .d (net23),
    .clk (net1),
    .q (net22)
  );
  mux_cell mux8 (
    .a (net24),
    .b (net25),
    .sel (net5),
    .out (net23)
  );
  dff_cell flop9 (
    .d (net26),
    .clk (net1),
    .q (net25)
  );
  mux_cell mux9 (
    .a (net27),
    .b (net28),
    .sel (net5),
    .out (net26)
  );
  dff_cell flop10 (
    .d (net29),
    .clk (net1),
    .q (net28)
  );
  mux_cell mux10 (
    .a (net30),
    .b (net31),
    .sel (net5),
    .out (net29)
  );
  dff_cell flop11 (
    .d (net32),
    .clk (net1),
    .q (net31)
  );
  mux_cell mux11 (
    .a (net33),
    .b (net34),
    .sel (net5),
    .out (net32)
  );
  dff_cell flop12 (
    .d (net35),
    .clk (net1),
    .q (net34)
  );
  mux_cell mux12 (
    .a (net36),
    .b (net37),
    .sel (net5),
    .out (net35)
  );
  dff_cell flop13 (
    .d (net38),
    .clk (net1),
    .q (net37)
  );
  mux_cell mux13 (
    .a (net39),
    .b (net40),
    .sel (net5),
    .out (net38)
  );
  dff_cell flop14 (
    .d (net41),
    .clk (net1),
    .q (net40)
  );
  mux_cell mux14 (
    .a (net42),
    .b (net43),
    .sel (net5),
    .out (net41)
  );
  dff_cell flop15 (
    .d (net44),
    .clk (net1),
    .q (net43)
  );
  mux_cell mux15 (
    .a (net45),
    .b (net46),
    .sel (net5),
    .out (net44)
  );
  mux_cell mux2 (
    .a (net49),
    .b (net50),
    .sel (net6),
    .out (net11)
  );
  dff_cell flop1 (
    .d (net1),
    .clk (net8),
    .q (net10)
  );
  dff_cell flop2 (
    .d (net3),
    .clk (net51),
    .q (net9),
    .notq (net52)
  );
  dff_cell flop3 (
    .d (net52),
    .clk (net8),
    .q (net53)
  );
  dff_cell flop5 (
    .d (net4),
    .clk (net1),
    .q (net7),
    .notq (net51)
  );
  dff_cell flop16 (
    .d (net2),
    .clk (net1),
    .q (net8)
  );
  dff_cell flop28 (
    .d (net56),
    .clk (net1),
    .q (net50)
  );
  mux_cell mux22 (
    .a (net57),
    .b (net17),
    .sel (net5),
    .out (net56)
  );
  dff_cell flop18 (
    .d (net58),
    .clk (net1),
    .q (net59)
  );
  mux_cell mux1 (
    .a (net60),
    .b (net61),
    .sel (net5),
    .out (net58)
  );
  dff_cell flop19 (
    .d (net62),
    .clk (net1),
    .q (net61)
  );
  mux_cell mux3 (
    .a (net63),
    .b (net64),
    .sel (net5),
    .out (net62)
  );
  dff_cell flop20 (
    .d (net65),
    .clk (net1),
    .q (net64)
  );
  mux_cell mux4 (
    .a (net66),
    .b (net67),
    .sel (net5),
    .out (net65)
  );
  dff_cell flop21 (
    .d (net68),
    .clk (net1),
    .q (net67)
  );
  mux_cell mux5 (
    .a (net69),
    .b (net70),
    .sel (net5),
    .out (net68)
  );
  dff_cell flop22 (
    .d (net71),
    .clk (net1),
    .q (net70)
  );
  mux_cell mux16 (
    .a (net72),
    .b (net73),
    .sel (net5),
    .out (net71)
  );
  dff_cell flop23 (
    .d (net74),
    .clk (net1),
    .q (net73)
  );
  mux_cell mux17 (
    .a (net75),
    .b (net76),
    .sel (net5),
    .out (net74)
  );
  dff_cell flop24 (
    .d (net77),
    .clk (net1),
    .q (net76)
  );
  mux_cell mux18 (
    .a (net78),
    .b (net79),
    .sel (net5),
    .out (net77)
  );
  dff_cell flop25 (
    .d (net80),
    .clk (net1),
    .q (net79)
  );
  mux_cell mux19 (
    .a (net81),
    .b (net82),
    .sel (net5),
    .out (net80)
  );
  dff_cell flop26 (
    .d (net83),
    .clk (net1),
    .q (net82)
  );
  mux_cell mux20 (
    .a (net84),
    .b (net85),
    .sel (net5),
    .out (net83)
  );
  dff_cell flop27 (
    .d (net86),
    .clk (net1),
    .q (net85)
  );
  mux_cell mux21 (
    .a (net87),
    .b (net88),
    .sel (net5),
    .out (net86)
  );
  dff_cell flop29 (
    .d (net89),
    .clk (net1),
    .q (net46)
  );
  mux_cell mux23 (
    .a (net90),
    .b (net59),
    .sel (net5),
    .out (net89)
  );
  dff_cell flop30 (
    .d (net91),
    .clk (net1),
    .q (net92)
  );
  mux_cell mux24 (
    .a (net93),
    .b (net94),
    .sel (net5),
    .out (net91)
  );
  dff_cell flop31 (
    .d (net95),
    .clk (net1),
    .q (net94)
  );
  mux_cell mux25 (
    .a (net96),
    .b (net97),
    .sel (net5),
    .out (net95)
  );
  dff_cell flop32 (
    .d (net98),
    .clk (net1),
    .q (net97)
  );
  mux_cell mux26 (
    .a (net99),
    .b (net100),
    .sel (net5),
    .out (net98)
  );
  dff_cell flop33 (
    .d (net101),
    .clk (net1),
    .q (net100)
  );
  mux_cell mux27 (
    .a (net102),
    .b (net103),
    .sel (net5),
    .out (net101)
  );
  dff_cell flop34 (
    .d (net104),
    .clk (net1),
    .q (net103)
  );
  mux_cell mux28 (
    .a (net105),
    .b (net106),
    .sel (net5),
    .out (net104)
  );
  dff_cell flop35 (
    .d (net107),
    .clk (net1),
    .q (net106)
  );
  mux_cell mux29 (
    .a (net108),
    .b (net109),
    .sel (net5),
    .out (net107)
  );
  dff_cell flop36 (
    .d (net110),
    .clk (net1),
    .q (net109)
  );
  mux_cell mux30 (
    .a (net111),
    .b (net112),
    .sel (net5),
    .out (net110)
  );
  dff_cell flop37 (
    .d (net113),
    .clk (net1),
    .q (net112)
  );
  mux_cell mux31 (
    .a (net114),
    .b (net115),
    .sel (net5),
    .out (net113)
  );
  dff_cell flop38 (
    .d (net116),
    .clk (net1),
    .q (net115)
  );
  mux_cell mux32 (
    .a (net117),
    .b (net118),
    .sel (net5),
    .out (net116)
  );
  dff_cell flop39 (
    .d (net119),
    .clk (net1),
    .q (net118)
  );
  mux_cell mux33 (
    .a (net120),
    .b (net121),
    .sel (net5),
    .out (net119)
  );
  dff_cell flop40 (
    .d (net122),
    .clk (net1),
    .q (net88)
  );
  mux_cell mux34 (
    .a (net123),
    .b (net92),
    .sel (net5),
    .out (net122)
  );
  dff_cell flop41 (
    .d (net124),
    .clk (net1),
    .q (net125)
  );
  mux_cell mux35 (
    .a (net126),
    .b (net127),
    .sel (net5),
    .out (net124)
  );
  dff_cell flop42 (
    .d (net128),
    .clk (net1),
    .q (net127)
  );
  mux_cell mux36 (
    .a (net129),
    .b (net130),
    .sel (net5),
    .out (net128)
  );
  dff_cell flop43 (
    .d (net131),
    .clk (net1),
    .q (net130)
  );
  mux_cell mux37 (
    .a (net132),
    .b (net133),
    .sel (net5),
    .out (net131)
  );
  dff_cell flop44 (
    .d (net134),
    .clk (net1),
    .q (net133)
  );
  mux_cell mux38 (
    .a (net135),
    .b (net136),
    .sel (net5),
    .out (net134)
  );
  dff_cell flop45 (
    .d (net137),
    .clk (net1),
    .q (net136)
  );
  mux_cell mux39 (
    .a (net138),
    .b (net139),
    .sel (net5),
    .out (net137)
  );
  dff_cell flop46 (
    .d (net140),
    .clk (net1),
    .q (net139)
  );
  mux_cell mux40 (
    .a (net141),
    .b (net142),
    .sel (net5),
    .out (net140)
  );
  dff_cell flop47 (
    .d (net143),
    .clk (net1),
    .q (net142)
  );
  mux_cell mux41 (
    .a (net144),
    .b (net145),
    .sel (net5),
    .out (net143)
  );
  dff_cell flop48 (
    .d (net146),
    .clk (net1),
    .q (net145)
  );
  mux_cell mux42 (
    .a (net147),
    .b (net148),
    .sel (net5),
    .out (net146)
  );
  dff_cell flop49 (
    .d (net149),
    .clk (net1),
    .q (net148)
  );
  mux_cell mux43 (
    .a (net150),
    .b (net151),
    .sel (net5),
    .out (net149)
  );
  dff_cell flop50 (
    .d (net152),
    .clk (net1),
    .q (net151)
  );
  mux_cell mux44 (
    .a (net153),
    .b (net154),
    .sel (net5),
    .out (net152)
  );
  dff_cell flop51 (
    .d (net155),
    .clk (net1),
    .q (net121)
  );
  mux_cell mux45 (
    .a (net156),
    .b (net125),
    .sel (net5),
    .out (net155)
  );
  dff_cell flop52 (
    .d (net157),
    .clk (net1),
    .q (net158)
  );
  mux_cell mux46 (
    .a (net159),
    .b (net160),
    .sel (net5),
    .out (net157)
  );
  dff_cell flop53 (
    .d (net161),
    .clk (net1),
    .q (net160)
  );
  mux_cell mux47 (
    .a (net162),
    .b (net163),
    .sel (net5),
    .out (net161)
  );
  dff_cell flop54 (
    .d (net164),
    .clk (net1),
    .q (net163)
  );
  mux_cell mux48 (
    .a (net165),
    .b (net166),
    .sel (net5),
    .out (net164)
  );
  dff_cell flop55 (
    .d (net167),
    .clk (net1),
    .q (net166)
  );
  mux_cell mux49 (
    .a (net168),
    .b (net169),
    .sel (net5),
    .out (net167)
  );
  dff_cell flop56 (
    .d (net170),
    .clk (net1),
    .q (net169)
  );
  mux_cell mux50 (
    .a (net171),
    .b (net172),
    .sel (net5),
    .out (net170)
  );
  dff_cell flop57 (
    .d (net173),
    .clk (net1),
    .q (net172)
  );
  mux_cell mux51 (
    .a (net174),
    .b (net175),
    .sel (net5),
    .out (net173)
  );
  dff_cell flop58 (
    .d (net176),
    .clk (net1),
    .q (net175)
  );
  mux_cell mux52 (
    .a (net177),
    .b (net178),
    .sel (net5),
    .out (net176)
  );
  dff_cell flop59 (
    .d (net179),
    .clk (net1),
    .q (net178)
  );
  mux_cell mux53 (
    .a (net180),
    .b (net181),
    .sel (net5),
    .out (net179)
  );
  dff_cell flop60 (
    .d (net182),
    .clk (net1),
    .q (net181)
  );
  mux_cell mux54 (
    .a (net183),
    .b (net184),
    .sel (net5),
    .out (net182)
  );
  dff_cell flop61 (
    .d (net185),
    .clk (net1),
    .q (net184)
  );
  mux_cell mux55 (
    .a (net186),
    .b (net187),
    .sel (net5),
    .out (net185)
  );
  dff_cell flop62 (
    .d (net188),
    .clk (net1),
    .q (net154)
  );
  mux_cell mux56 (
    .a (net189),
    .b (net158),
    .sel (net5),
    .out (net188)
  );
  dff_cell flop63 (
    .d (net190),
    .clk (net1),
    .q (net191)
  );
  mux_cell mux57 (
    .a (net192),
    .b (net193),
    .sel (net5),
    .out (net190)
  );
  dff_cell flop64 (
    .d (net194),
    .clk (net1),
    .q (net193)
  );
  mux_cell mux58 (
    .a (net195),
    .b (net196),
    .sel (net5),
    .out (net194)
  );
  dff_cell flop65 (
    .d (net197),
    .clk (net1),
    .q (net196)
  );
  mux_cell mux59 (
    .a (net198),
    .b (net199),
    .sel (net5),
    .out (net197)
  );
  dff_cell flop66 (
    .d (net200),
    .clk (net1),
    .q (net199)
  );
  mux_cell mux60 (
    .a (net201),
    .b (net202),
    .sel (net5),
    .out (net200)
  );
  dff_cell flop67 (
    .d (net203),
    .clk (net1),
    .q (net202)
  );
  mux_cell mux61 (
    .a (net204),
    .b (net205),
    .sel (net5),
    .out (net203)
  );
  dff_cell flop68 (
    .d (net206),
    .clk (net1),
    .q (net205)
  );
  mux_cell mux62 (
    .a (net207),
    .b (net208),
    .sel (net5),
    .out (net206)
  );
  dff_cell flop69 (
    .d (net209),
    .clk (net1),
    .q (net208)
  );
  mux_cell mux63 (
    .a (net210),
    .b (net211),
    .sel (net5),
    .out (net209)
  );
  dff_cell flop70 (
    .d (net212),
    .clk (net1),
    .q (net211)
  );
  mux_cell mux64 (
    .a (net213),
    .b (net214),
    .sel (net5),
    .out (net212)
  );
  dff_cell flop71 (
    .d (net215),
    .clk (net1),
    .q (net214)
  );
  mux_cell mux65 (
    .a (net216),
    .b (net217),
    .sel (net5),
    .out (net215)
  );
  dff_cell flop72 (
    .d (net218),
    .clk (net1),
    .q (net217)
  );
  mux_cell mux66 (
    .a (net219),
    .b (net11),
    .sel (net5),
    .out (net218)
  );
  dff_cell flop73 (
    .d (net220),
    .clk (net1),
    .q (net187)
  );
  mux_cell mux67 (
    .a (net221),
    .b (net191),
    .sel (net5),
    .out (net220)
  );
endmodule

/* Automatically generated from https://wokwi.com/projects/380055891603379201 */

`default_nettype none

module tt_um_wokwi_380055891603379201(
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
  wire net4;
  wire net5;
  wire net6;
  wire net7;
  wire net8;
  wire net9;
  wire net10;
  wire net11;
  wire net12 = 1'b0;
  wire net13 = 1'b1;
  wire net14 = 1'b1;
  wire net15 = 1'b0;
  wire net16 = 1'b1;
  wire net17;
  wire net18;
  wire net19 = 1'b0;
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

  assign uo_out[0] = net4;
  assign uo_out[1] = net5;
  assign uo_out[2] = net6;
  assign uo_out[3] = net7;
  assign uo_out[4] = net8;
  assign uo_out[5] = net9;
  assign uo_out[6] = net10;
  assign uo_out[7] = net11;
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

  dffsr_cell flop3 (
    .d (net17),
    .clk (net1),
    .s (net18),
    .r (net19),
    .q (net20)
  );
  dffsr_cell flop4 (
    .d (net21),
    .clk (net1),
    .s (net18),
    .r (net19),
    .q (net22)
  );
  dffsr_cell flop5 (
    .d (net23),
    .clk (net1),
    .s (net18),
    .r (net19),
    .q (net24)
  );
  dffsr_cell flop16 (
    .d (net25),
    .clk (net1),
    .s (net18),
    .r (net19),
    .q (net26)
  );
  and_cell and1 (
    .a (net26),
    .b (net27),
    .out (net28)
  );
  and_cell and2 (
    .a (net26),
    .b (net24),
    .out (net29)
  );
  and_cell and3 (
    .a (net26),
    .b (net22),
    .out (net30)
  );
  and_cell and4 (
    .a (net26),
    .b (net20),
    .out (net31)
  );
  or_cell or1 (
    .a (net28),
    .b (net29),
    .out (net32)
  );
  or_cell or2 (
    .a (net30),
    .b (net31),
    .out (net33)
  );
  or_cell or3 (
    .a (net32),
    .b (net33),
    .out (net25)
  );
  and_cell and5 (
    .a (net20),
    .b (net22),
    .out (net34)
  );
  and_cell and6 (
    .a (net35),
    .b (net20),
    .out (net36)
  );
  and_cell and7 (
    .a (net36),
    .b (net27),
    .out (net37)
  );
  and_cell and8 (
    .a (net20),
    .b (net38),
    .out (net39)
  );
  and_cell and9 (
    .a (net39),
    .b (net27),
    .out (net40)
  );
  and_cell and10 (
    .a (net20),
    .b (net24),
    .out (net41)
  );
  and_cell and11 (
    .a (net41),
    .b (net3),
    .out (net42)
  );
  and_cell and12 (
    .a (net26),
    .b (net43),
    .out (net44)
  );
  and_cell and13 (
    .a (net45),
    .b (net38),
    .out (net46)
  );
  and_cell and14 (
    .a (net44),
    .b (net46),
    .out (net47)
  );
  and_cell and15 (
    .a (net47),
    .b (net3),
    .out (net48)
  );
  or_cell or4 (
    .a (net34),
    .b (net37),
    .out (net49)
  );
  or_cell or5 (
    .a (net40),
    .b (net42),
    .out (net50)
  );
  or_cell or6 (
    .a (net49),
    .b (net50),
    .out (net51)
  );
  or_cell or7 (
    .a (net51),
    .b (net48),
    .out (net17)
  );
  and_cell and16 (
    .a (net22),
    .b (net27),
    .out (net52)
  );
  and_cell and17 (
    .a (net22),
    .b (net24),
    .out (net53)
  );
  and_cell and18 (
    .a (net20),
    .b (net45),
    .out (net54)
  );
  and_cell and19 (
    .a (net38),
    .b (net3),
    .out (net55)
  );
  and_cell and20 (
    .a (net54),
    .b (net55),
    .out (net56)
  );
  and_cell and21 (
    .a (net26),
    .b (net45),
    .out (net57)
  );
  and_cell and22 (
    .a (net38),
    .b (net3),
    .out (net58)
  );
  and_cell and23 (
    .a (net57),
    .b (net58),
    .out (net59)
  );
  or_cell or8 (
    .a (net52),
    .b (net53),
    .out (net60)
  );
  or_cell or9 (
    .a (net56),
    .b (net59),
    .out (net61)
  );
  or_cell or10 (
    .a (net60),
    .b (net61),
    .out (net21)
  );
  and_cell and24 (
    .a (net24),
    .b (net27),
    .out (net62)
  );
  and_cell and25 (
    .a (net22),
    .b (net38),
    .out (net63)
  );
  and_cell and26 (
    .a (net63),
    .b (net3),
    .out (net64)
  );
  and_cell and27 (
    .a (net20),
    .b (net38),
    .out (net65)
  );
  and_cell and28 (
    .a (net65),
    .b (net3),
    .out (net66)
  );
  and_cell and29 (
    .a (net26),
    .b (net38),
    .out (net67)
  );
  and_cell and30 (
    .a (net67),
    .b (net3),
    .out (net68)
  );
  or_cell or11 (
    .a (net62),
    .b (net64),
    .out (net69)
  );
  or_cell or12 (
    .a (net66),
    .b (net68),
    .out (net70)
  );
  or_cell or13 (
    .a (net69),
    .b (net70),
    .out (net23)
  );
  not_cell not1 (
    .in (net26),
    .out (net35)
  );
  not_cell not2 (
    .in (net20),
    .out (net43)
  );
  not_cell not3 (
    .in (net22),
    .out (net45)
  );
  not_cell not4 (
    .in (net24),
    .out (net38)
  );
  not_cell not5 (
    .in (net3),
    .out (net27)
  );
  not_cell not6 (
    .in (net2),
    .out (net18)
  );
  and_cell and31 (
    .a (net71),
    .b (net72),
    .out (net73)
  );
  and_cell and32 (
    .a (net74),
    .b (net75),
    .out (net76)
  );
  and_cell and33 (
    .a (net73),
    .b (net76),
    .out (net11)
  );
  not_cell not7 (
    .in (net26),
    .out (net71)
  );
  not_cell not8 (
    .in (net20),
    .out (net72)
  );
  not_cell not9 (
    .in (net22),
    .out (net74)
  );
  not_cell not10 (
    .in (net24),
    .out (net75)
  );
  and_cell and34 (
    .a (net72),
    .b (net75),
    .out (net77)
  );
  and_cell and35 (
    .a (net26),
    .b (net75),
    .out (net78)
  );
  and_cell and36 (
    .a (net71),
    .b (net72),
    .out (net79)
  );
  and_cell and37 (
    .a (net79),
    .b (net22),
    .out (net80)
  );
  and_cell and38 (
    .a (net71),
    .b (net20),
    .out (net81)
  );
  and_cell and39 (
    .a (net81),
    .b (net24),
    .out (net82)
  );
  and_cell and40 (
    .a (net20),
    .b (net22),
    .out (net83)
  );
  and_cell and41 (
    .a (net83),
    .b (net24),
    .out (net84)
  );
  and_cell and42 (
    .a (net26),
    .b (net72),
    .out (net85)
  );
  and_cell and43 (
    .a (net85),
    .b (net74),
    .out (net86)
  );
  or_cell or14 (
    .a (net80),
    .b (net82),
    .out (net87)
  );
  or_cell or15 (
    .a (net84),
    .b (net86),
    .out (net88)
  );
  or_cell or16 (
    .a (net77),
    .b (net78),
    .out (net89)
  );
  or_cell or17 (
    .a (net89),
    .b (net87),
    .out (net90)
  );
  or_cell or18 (
    .a (net90),
    .b (net88),
    .out (net4)
  );
  and_cell and44 (
    .a (net71),
    .b (net72),
    .out (net91)
  );
  and_cell and45 (
    .a (net72),
    .b (net75),
    .out (net92)
  );
  and_cell and46 (
    .a (net71),
    .b (net74),
    .out (net93)
  );
  and_cell and47 (
    .a (net93),
    .b (net75),
    .out (net94)
  );
  and_cell and48 (
    .a (net71),
    .b (net22),
    .out (net95)
  );
  and_cell and49 (
    .a (net95),
    .b (net24),
    .out (net96)
  );
  and_cell and50 (
    .a (net26),
    .b (net74),
    .out (net97)
  );
  and_cell and51 (
    .a (net97),
    .b (net24),
    .out (net98)
  );
  or_cell or19 (
    .a (net91),
    .b (net92),
    .out (net99)
  );
  or_cell or20 (
    .a (net94),
    .b (net96),
    .out (net100)
  );
  or_cell or21 (
    .a (net100),
    .b (net98),
    .out (net101)
  );
  or_cell or22 (
    .a (net99),
    .b (net101),
    .out (net5)
  );
  and_cell and52 (
    .a (net71),
    .b (net74),
    .out (net102)
  );
  and_cell and53 (
    .a (net71),
    .b (net24),
    .out (net103)
  );
  and_cell and54 (
    .a (net74),
    .b (net24),
    .out (net104)
  );
  and_cell and55 (
    .a (net71),
    .b (net20),
    .out (net105)
  );
  and_cell and56 (
    .a (net26),
    .b (net72),
    .out (net106)
  );
  or_cell or23 (
    .a (net102),
    .b (net103),
    .out (net107)
  );
  or_cell or24 (
    .a (net104),
    .b (net105),
    .out (net108)
  );
  or_cell or25 (
    .a (net107),
    .b (net108),
    .out (net109)
  );
  or_cell or26 (
    .a (net109),
    .b (net106),
    .out (net6)
  );
  and_cell and57 (
    .a (net71),
    .b (net72),
    .out (net110)
  );
  and_cell and58 (
    .a (net110),
    .b (net75),
    .out (net111)
  );
  and_cell and59 (
    .a (net72),
    .b (net22),
    .out (net112)
  );
  and_cell and60 (
    .a (net112),
    .b (net24),
    .out (net113)
  );
  and_cell and61 (
    .a (net20),
    .b (net74),
    .out (net114)
  );
  and_cell and62 (
    .a (net114),
    .b (net24),
    .out (net115)
  );
  and_cell and63 (
    .a (net72),
    .b (net75),
    .out (net116)
  );
  and_cell and64 (
    .a (net22),
    .b (net75),
    .out (net117)
  );
  and_cell and65 (
    .a (net26),
    .b (net22),
    .out (net118)
  );
  and_cell and66 (
    .a (net26),
    .b (net20),
    .out (net119)
  );
  or_cell or27 (
    .a (net116),
    .b (net117),
    .out (net120)
  );
  or_cell or28 (
    .a (net118),
    .b (net119),
    .out (net121)
  );
  or_cell or30 (
    .a (net120),
    .b (net121),
    .out (net8)
  );
  and_cell and67 (
    .a (net20),
    .b (net22),
    .out (net122)
  );
  and_cell and68 (
    .a (net122),
    .b (net75),
    .out (net123)
  );
  and_cell and69 (
    .a (net26),
    .b (net74),
    .out (net124)
  );
  and_cell and70 (
    .a (net124),
    .b (net75),
    .out (net125)
  );
  or_cell or29 (
    .a (net111),
    .b (net113),
    .out (net126)
  );
  or_cell or31 (
    .a (net115),
    .b (net123),
    .out (net127)
  );
  or_cell or32 (
    .a (net126),
    .b (net128),
    .out (net7)
  );
  or_cell or33 (
    .a (net127),
    .b (net125),
    .out (net128)
  );
  and_cell and71 (
    .a (net74),
    .b (net75),
    .out (net129)
  );
  and_cell and72 (
    .a (net20),
    .b (net75),
    .out (net130)
  );
  and_cell and73 (
    .a (net26),
    .b (net72),
    .out (net131)
  );
  and_cell and74 (
    .a (net26),
    .b (net22),
    .out (net132)
  );
  and_cell and75 (
    .a (net71),
    .b (net20),
    .out (net133)
  );
  and_cell and76 (
    .a (net133),
    .b (net74),
    .out (net134)
  );
  or_cell or34 (
    .a (net129),
    .b (net130),
    .out (net135)
  );
  or_cell or35 (
    .a (net131),
    .b (net132),
    .out (net136)
  );
  or_cell or36 (
    .a (net135),
    .b (net136),
    .out (net137)
  );
  or_cell or37 (
    .a (net137),
    .b (net134),
    .out (net9)
  );
  and_cell and77 (
    .a (net72),
    .b (net22),
    .out (net138)
  );
  and_cell and78 (
    .a (net22),
    .b (net75),
    .out (net139)
  );
  and_cell and79 (
    .a (net26),
    .b (net72),
    .out (net140)
  );
  and_cell and80 (
    .a (net26),
    .b (net24),
    .out (net141)
  );
  and_cell and81 (
    .a (net71),
    .b (net20),
    .out (net142)
  );
  and_cell and82 (
    .a (net142),
    .b (net74),
    .out (net143)
  );
  or_cell or38 (
    .a (net138),
    .b (net139),
    .out (net144)
  );
  or_cell or39 (
    .a (net140),
    .b (net141),
    .out (net145)
  );
  or_cell or40 (
    .a (net145),
    .b (net143),
    .out (net146)
  );
  or_cell or41 (
    .a (net144),
    .b (net146),
    .out (net10)
  );
endmodule

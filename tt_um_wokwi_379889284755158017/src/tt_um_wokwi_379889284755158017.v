/* Automatically generated from https://wokwi.com/projects/379889284755158017 */

`default_nettype none

module tt_um_wokwi_379889284755158017(
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
  wire net11 = 1'b0;
  wire net12 = 1'b1;
  wire net13 = 1'b1;
  wire net14 = 1'b0;
  wire net15 = 1'b1;
  wire net16 = 1'b0;
  wire net17 = 1'b0;
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
  wire net31 = 1'b0;
  wire net32 = 1'b0;
  wire net33 = 1'b0;
  wire net34;
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
  wire net46;
  wire net47;
  wire net48;
  wire net49;
  wire net50;
  wire net51;
  wire net52;
  wire net53;
  wire net54;
  wire net55 = 1'b0;
  wire net56;
  wire net57;
  wire net58;
  wire net59;
  wire net60;
  wire net61;
  wire net62 = 1'b0;
  wire net63;
  wire net64;
  wire net65 = 1'b0;
  wire net66;
  wire net67;
  wire net68 = 1'b0;
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

  assign uo_out[0] = net4;
  assign uo_out[1] = net5;
  assign uo_out[2] = net6;
  assign uo_out[3] = net7;
  assign uo_out[4] = net8;
  assign uo_out[5] = net9;
  assign uo_out[6] = net10;
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

  mux_cell mux1 (
    .a (net19),
    .b (net20),
    .sel (net3),
    .out (net21)
  );
  mux_cell mux2 (
    .a (net22),
    .b (net23),
    .sel (net3),
    .out (net24)
  );
  mux_cell mux3 (
    .a (net25),
    .b (net19),
    .sel (net3),
    .out (net26)
  );
  dffsr_cell flop1 (
    .d (net21),
    .clk (net1),
    .s (net16),
    .r (net27),
    .q (net23),
    .notq (net28)
  );
  dffsr_cell flop2 (
    .d (net24),
    .clk (net1),
    .s (net27),
    .r (net17),
    .q (net19),
    .notq (net29)
  );
  dffsr_cell flop3 (
    .d (net26),
    .clk (net1),
    .s (net27),
    .r (net17),
    .q (net22),
    .notq (net30)
  );
  mux_cell mux4 (
    .a (net34),
    .b (net22),
    .sel (net3),
    .out (net35)
  );
  mux_cell mux5 (
    .a (net36),
    .b (net25),
    .sel (net3),
    .out (net37)
  );
  mux_cell mux6 (
    .a (net38),
    .b (net34),
    .sel (net3),
    .out (net39)
  );
  dffsr_cell flop4 (
    .d (net35),
    .clk (net1),
    .s (net27),
    .r (net17),
    .q (net25),
    .notq (net40)
  );
  dffsr_cell flop5 (
    .d (net37),
    .clk (net1),
    .s (net27),
    .r (net17),
    .q (net34),
    .notq (net41)
  );
  dffsr_cell flop6 (
    .d (net39),
    .clk (net1),
    .s (net27),
    .r (net17),
    .q (net36),
    .notq (net42)
  );
  mux_cell mux7 (
    .a (net46),
    .b (net36),
    .sel (net3),
    .out (net47)
  );
  mux_cell mux8 (
    .a (net48),
    .b (net38),
    .sel (net3),
    .out (net49)
  );
  mux_cell mux9 (
    .a (net50),
    .b (net46),
    .sel (net3),
    .out (net51)
  );
  dffsr_cell flop7 (
    .d (net47),
    .clk (net1),
    .s (net27),
    .r (net17),
    .q (net38),
    .notq (net52)
  );
  dffsr_cell flop8 (
    .d (net49),
    .clk (net1),
    .s (net27),
    .r (net17),
    .q (net46),
    .notq (net53)
  );
  dffsr_cell flop9 (
    .d (net51),
    .clk (net1),
    .s (net27),
    .r (net17),
    .q (net48),
    .notq (net54)
  );
  mux_cell mux10 (
    .a (net56),
    .b (net48),
    .sel (net3),
    .out (net57)
  );
  dffsr_cell flop10 (
    .d (net57),
    .clk (net1),
    .s (net27),
    .r (net17),
    .q (net50),
    .notq (net58)
  );
  not_cell not1 (
    .in (net2),
    .out (net27)
  );
  dffsr_cell flop11 (
    .d (net59),
    .clk (net1),
    .s (net27),
    .r (net17),
    .q (net56),
    .notq (net60)
  );
  mux_cell mux11 (
    .a (net61),
    .b (net56),
    .sel (net3),
    .out (net59)
  );
  mux_cell mux12 (
    .a (net20),
    .b (net56),
    .sel (net3),
    .out (net63)
  );
  dffsr_cell flop12 (
    .d (net63),
    .clk (net1),
    .s (net27),
    .r (net17),
    .q (net61),
    .notq (net64)
  );
  mux_cell mux13 (
    .a (net23),
    .b (net61),
    .sel (net3),
    .out (net66)
  );
  dffsr_cell flop13 (
    .d (net66),
    .clk (net1),
    .s (net27),
    .r (net17),
    .q (net20),
    .notq (net67)
  );
  or_cell or1 (
    .a (net41),
    .b (net54),
    .out (net69)
  );
  or_cell or2 (
    .a (net58),
    .b (net60),
    .out (net70)
  );
  or_cell or3 (
    .a (net64),
    .b (net71),
    .out (net72)
  );
  or_cell or4 (
    .a (net70),
    .b (net69),
    .out (net71)
  );
  not_cell not2 (
    .in (net72),
    .out (net4)
  );
  or_cell or5 (
    .a (net41),
    .b (net58),
    .out (net73)
  );
  or_cell or6 (
    .a (net60),
    .b (net64),
    .out (net74)
  );
  or_cell or7 (
    .a (net73),
    .b (net74),
    .out (net75)
  );
  or_cell or8 (
    .a (net67),
    .b (net75),
    .out (net76)
  );
  not_cell not3 (
    .in (net76),
    .out (net5)
  );
  or_cell or9 (
    .a (net29),
    .b (net40),
    .out (net77)
  );
  or_cell or10 (
    .a (net41),
    .b (net52),
    .out (net78)
  );
  or_cell or11 (
    .a (net60),
    .b (net64),
    .out (net79)
  );
  or_cell or12 (
    .a (net77),
    .b (net78),
    .out (net80)
  );
  or_cell or13 (
    .a (net80),
    .b (net79),
    .out (net81)
  );
  or_cell or14 (
    .a (net67),
    .b (net81),
    .out (net82)
  );
  not_cell not4 (
    .in (net82),
    .out (net6)
  );
  or_cell or15 (
    .a (net58),
    .b (net54),
    .out (net83)
  );
  not_cell not5 (
    .in (net83),
    .out (net7)
  );
  or_cell or16 (
    .a (net28),
    .b (net41),
    .out (net84)
  );
  or_cell or17 (
    .a (net54),
    .b (net58),
    .out (net85)
  );
  or_cell or18 (
    .a (net84),
    .b (net85),
    .out (net86)
  );
  or_cell or19 (
    .a (net64),
    .b (net86),
    .out (net87)
  );
  not_cell not6 (
    .in (net87),
    .out (net8)
  );
  or_cell or20 (
    .a (net30),
    .b (net42),
    .out (net88)
  );
  or_cell or21 (
    .a (net53),
    .b (net60),
    .out (net89)
  );
  or_cell or22 (
    .a (net88),
    .b (net89),
    .out (net90)
  );
  or_cell or23 (
    .a (net67),
    .b (net90),
    .out (net9)
  );
  or_cell or24 (
    .a (net30),
    .b (net41),
    .out (net91)
  );
  or_cell or25 (
    .a (net53),
    .b (net54),
    .out (net92)
  );
  or_cell or26 (
    .a (net58),
    .b (net60),
    .out (net93)
  );
  or_cell or27 (
    .a (net92),
    .b (net91),
    .out (net94)
  );
  or_cell or28 (
    .a (net93),
    .b (net94),
    .out (net95)
  );
  or_cell or29 (
    .a (net64),
    .b (net95),
    .out (net96)
  );
  not_cell not7 (
    .in (net96),
    .out (net10)
  );
endmodule

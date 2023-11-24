/* Automatically generated from https://wokwi.com/projects/380477805171811329 */

`default_nettype none

module tt_um_wokwi_380477805171811329(
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
  wire net4 = ui_in[3];
  wire net5 = ui_in[4];
  wire net6 = ui_in[5];
  wire net7 = ui_in[6];
  wire net8 = ui_in[7];
  wire net9;
  wire net10;
  wire net11;
  wire net12;
  wire net13;
  wire net14;
  wire net15;
  wire net16 = 1'b0;
  wire net17 = 1'b1;
  wire net18 = 1'b1;
  wire net19 = 1'b0;
  wire net20 = 1'b1;
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

  assign uo_out[0] = net9;
  assign uo_out[1] = net10;
  assign uo_out[2] = net11;
  assign uo_out[3] = net12;
  assign uo_out[4] = net13;
  assign uo_out[5] = net14;
  assign uo_out[6] = net15;
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

  or_cell or1 (
    .a (net21),
    .b (net22),
    .out (net23)
  );
  or_cell or2 (
    .a (net24),
    .b (net25),
    .out (net22)
  );
  not_cell not1 (
    .in (net26),
    .out (net27)
  );
  not_cell not2 (
    .in (net28),
    .out (net29)
  );
  or_cell or5 (
    .a (net23),
    .b (net30),
    .out (net9)
  );
  and_cell and1 (
    .a (net27),
    .b (net29),
    .out (net24)
  );
  and_cell and2 (
    .a (net28),
    .b (net26),
    .out (net30)
  );
  and_cell and3 (
    .a (net31),
    .b (net32),
    .out (net33)
  );
  and_cell and4 (
    .a (net21),
    .b (net26),
    .out (net34)
  );
  or_cell or3 (
    .a (net33),
    .b (net34),
    .out (net35)
  );
  or_cell or4 (
    .a (net35),
    .b (net36),
    .out (net10)
  );
  or_cell or6 (
    .a (net32),
    .b (net26),
    .out (net37)
  );
  or_cell or7 (
    .a (net37),
    .b (net28),
    .out (net11)
  );
  dff_cell flop1 (
    .d (net38),
    .clk (net1),
    .q (net26),
    .notq (net31)
  );
  dff_cell flop2 (
    .d (net39),
    .clk (net1),
    .q (net21),
    .notq (net32)
  );
  dff_cell flop3 (
    .d (net40),
    .clk (net1),
    .q (net28),
    .notq (net36)
  );
  dff_cell flop4 (
    .clk (net1),
    .q (net25)
  );
  and_cell and5 (
    .a (net36),
    .b (net31),
    .out (net41)
  );
  and_cell and6 (
    .a (net36),
    .b (net21),
    .out (net42)
  );
  and_cell and7 (
    .a (net28),
    .b (net32),
    .out (net43)
  );
  and_cell and8 (
    .a (net43),
    .b (net26),
    .out (net44)
  );
  and_cell and9 (
    .a (net21),
    .b (net31),
    .out (net45)
  );
  or_cell or8 (
    .a (net41),
    .b (net42),
    .out (net46)
  );
  or_cell or9 (
    .a (net46),
    .b (net44),
    .out (net47)
  );
  or_cell or10 (
    .a (net47),
    .b (net45),
    .out (net12)
  );
  and_cell and10 (
    .a (net36),
    .b (net31),
    .out (net48)
  );
  and_cell and11 (
    .a (net21),
    .b (net31),
    .out (net49)
  );
  or_cell or11 (
    .a (net48),
    .b (net49),
    .out (net13)
  );
  and_cell and12 (
    .a (net32),
    .b (net31),
    .out (net50)
  );
  and_cell and13 (
    .a (net28),
    .b (net32),
    .out (net51)
  );
  and_cell and14 (
    .a (net28),
    .b (net31),
    .out (net52)
  );
  or_cell or12 (
    .a (net50),
    .b (net51),
    .out (net53)
  );
  or_cell or13 (
    .a (net25),
    .b (net52),
    .out (net54)
  );
  or_cell or14 (
    .a (net53),
    .b (net54),
    .out (net14)
  );
  xor_cell xor1 (
    .a (net28),
    .b (net21),
    .out (net55)
  );
  and_cell and15 (
    .a (net28),
    .b (net31),
    .out (net56)
  );
  or_cell or15 (
    .a (net55),
    .b (net56),
    .out (net57)
  );
  or_cell or16 (
    .a (net57),
    .b (net25),
    .out (net15)
  );
  and_cell and16 (
    .a (net2),
    .b (net7),
    .out (net58)
  );
  xor_cell xor2 (
    .a (net2),
    .b (net7),
    .out (net59)
  );
  and_cell and18 (
    .a (net3),
    .b (net8),
    .out (net60)
  );
  xor_cell xor4 (
    .a (net3),
    .b (net8),
    .out (net61)
  );
  xor_cell xor5 (
    .a (net58),
    .b (net61),
    .out (net62)
  );
  and_cell and19 (
    .a (net58),
    .b (net61),
    .out (net63)
  );
  or_cell or18 (
    .a (net63),
    .b (net60)
  );
  xor_cell xor3 (
    .a (net2),
    .b (net7),
    .out (net64)
  );
  not_cell not3 (
    .in (net2),
    .out (net65)
  );
  and_cell and17 (
    .a (net7),
    .b (net65),
    .out (net66)
  );
  xor_cell xor6 (
    .a (net3),
    .b (net8),
    .out (net67)
  );
  not_cell not4 (
    .in (net3),
    .out (net68)
  );
  and_cell and20 (
    .a (net8),
    .b (net68),
    .out (net69)
  );
  xor_cell xor7 (
    .a (net67),
    .b (net66),
    .out (net70)
  );
  not_cell not5 (
    .in (net67),
    .out (net71)
  );
  and_cell and21 (
    .a (net66),
    .b (net71),
    .out (net72)
  );
  or_cell or17 (
    .a (net72),
    .b (net69)
  );
  mux_cell mux1 (
    .a (net59),
    .b (net64),
    .sel (net4),
    .out (net73)
  );
  mux_cell mux2 (
    .a (net62),
    .b (net70),
    .sel (net4),
    .out (net74)
  );
  dff_cell flop5 (
    .d (net75),
    .clk (net1),
    .q (net76),
    .notq (net77)
  );
  dff_cell flop6 (
    .d (net76),
    .clk (net1),
    .q (net78),
    .notq (net79)
  );
  dff_cell flop7 (
    .d (net78),
    .clk (net1),
    .q (net80),
    .notq (net81)
  );
  xor_cell xor8 (
    .a (net80),
    .b (net78),
    .out (net75)
  );
  mux_cell mux3 (
    .a (net82),
    .b (net77),
    .sel (net6),
    .out (net38)
  );
  mux_cell mux4 (
    .a (net83),
    .b (net79),
    .sel (net6),
    .out (net39)
  );
  mux_cell mux5 (
    .b (net81),
    .sel (net6),
    .out (net40)
  );
  and_cell and22 (
    .a (net2),
    .b (net7),
    .out (net84)
  );
  or_cell or19 (
    .a (net2),
    .b (net7),
    .out (net85)
  );
  or_cell or20 (
    .a (net3),
    .b (net8),
    .out (net86)
  );
  and_cell and23 (
    .a (net3),
    .b (net8),
    .out (net87)
  );
  mux_cell mux6 (
    .a (net84),
    .b (net85),
    .sel (net4),
    .out (net88)
  );
  mux_cell mux7 (
    .a (net87),
    .b (net86),
    .sel (net4),
    .out (net89)
  );
  mux_cell mux8 (
    .a (net73),
    .b (net88),
    .sel (net5),
    .out (net82)
  );
  mux_cell mux9 (
    .a (net74),
    .b (net89),
    .sel (net5),
    .out (net83)
  );
endmodule

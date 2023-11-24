/* Automatically generated from https://wokwi.com/projects/380490286828784641 */

`default_nettype none

module tt_um_wokwi_380490286828784641(
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
  wire net7;
  wire net8;
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
  wire net39;
  wire net40 = 1'b0;
  wire net41 = 1'b0;
  wire net42 = 1'b0;
  wire net43 = 1'b0;
  wire net44 = 1'b0;
  wire net45 = 1'b0;
  wire net46 = 1'b0;
  wire net47 = 1'b0;
  wire net48 = 1'b0;
  wire net49;
  wire net50;
  wire net51 = 1'b0;
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

  assign uo_out[0] = net7;
  assign uo_out[1] = net8;
  assign uo_out[2] = net9;
  assign uo_out[3] = net10;
  assign uo_out[4] = net11;
  assign uo_out[5] = net12;
  assign uo_out[6] = net13;
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

  or_cell gate2 (

  );
  xor_cell gate3 (

  );
  nand_cell gate4 (

  );
  not_cell gate5 (

  );
  buffer_cell gate6 (

  );
  dff_cell flipflop1 (
    .d (net18),
    .clk (net1),
    .q (net19),
    .notq (net20)
  );
  dff_cell flipflop2 (
    .d (net21),
    .clk (net22),
    .q (net23),
    .notq (net24)
  );
  dff_cell flipflop3 (
    .d (net25),
    .clk (net26),
    .q (net27),
    .notq (net28)
  );
  mux_cell mux2 (
    .a (net1),
    .b (net19),
    .sel (net29),
    .out (net22)
  );
  mux_cell mux3 (
    .a (net1),
    .b (net23),
    .sel (net29),
    .out (net26)
  );
  or_cell gate8 (
    .a (net20),
    .b (net30),
    .out (net18)
  );
  or_cell gate9 (
    .a (net24),
    .b (net30),
    .out (net21)
  );
  or_cell gate10 (
    .a (net28),
    .b (net30),
    .out (net25)
  );
  dff_cell flipflop5 (
    .d (net31),
    .clk (net32),
    .notq (net33)
  );
  mux_cell mux4 (
    .a (net1),
    .b (net27),
    .sel (net29),
    .out (net32)
  );
  or_cell gate7 (
    .a (net33),
    .b (net30),
    .out (net31)
  );
  and_cell gate1 (
    .a (net34),
    .b (net35),
    .out (net36)
  );
  and_cell gate11 (
    .a (net37),
    .b (net33),
    .out (net38)
  );
  not_cell gate13 (
    .in (net24),
    .out (net35)
  );
  and_cell gate15 (
    .a (net36),
    .b (net38),
    .out (net39)
  );
  not_cell gate14 (
    .in (net28),
    .out (net37)
  );
  dff_cell flipflop6 (
    .d (net49),
    .clk (net1),
    .q (net30),
    .notq (net29)
  );
  or_cell gate12 (
    .a (net39),
    .b (net50),
    .out (net49)
  );
  not_cell gate16 (
    .in (net20),
    .out (net34)
  );
  not_cell gate17 (
    .in (net20),
    .out (net52)
  );
  buffer_cell gate18 (
    .in (net20),
    .out (net53)
  );
  not_cell gate19 (
    .in (net24),
    .out (net54)
  );
  buffer_cell gate20 (
    .in (net24),
    .out (net55)
  );
  not_cell gate21 (
    .in (net28),
    .out (net56)
  );
  buffer_cell gate22 (
    .in (net28),
    .out (net57)
  );
  not_cell gate23 (
    .in (net33)
  );
  buffer_cell gate24 (
    .in (net33),
    .out (net58)
  );
  and_cell gate25 (
    .a (net56),
    .b (net52),
    .out (net59)
  );
  and_cell gate26 (
    .a (net55),
    .b (net52),
    .out (net60)
  );
  or_cell gate27 (
    .a (net59),
    .b (net60),
    .out (net11)
  );
  or_cell gate28 (
    .a (net59),
    .b (net55),
    .out (net61)
  );
  or_cell gate29 (
    .a (net58),
    .b (net62),
    .out (net63)
  );
  or_cell gate30 (
    .a (net61),
    .b (net63),
    .out (net7)
  );
  and_cell gate31 (
    .a (net57),
    .b (net53),
    .out (net62)
  );
  or_cell gate32 (
    .a (net64),
    .b (net65),
    .out (net8)
  );
  or_cell gate33 (
    .a (net56),
    .b (net66),
    .out (net65)
  );
  and_cell gate34 (
    .a (net55),
    .b (net53),
    .out (net66)
  );
  and_cell gate35 (
    .a (net54),
    .b (net52),
    .out (net64)
  );
  or_cell gate36 (
    .a (net54),
    .b (net67),
    .out (net9)
  );
  or_cell gate37 (
    .a (net57),
    .b (net53),
    .out (net67)
  );
  or_cell gate38 (
    .a (net59),
    .b (net68),
    .out (net69)
  );
  and_cell gate39 (
    .a (net56),
    .b (net55),
    .out (net68)
  );
  or_cell gate40 (
    .a (net58),
    .b (net70),
    .out (net71)
  );
  or_cell gate41 (
    .a (net72),
    .b (net73),
    .out (net70)
  );
  or_cell gate42 (
    .a (net69),
    .b (net71),
    .out (net10)
  );
  and_cell gate43 (
    .a (net57),
    .b (net74),
    .out (net73)
  );
  and_cell gate44 (
    .a (net55),
    .b (net52),
    .out (net72)
  );
  and_cell gate45 (
    .a (net54),
    .b (net53),
    .out (net74)
  );
  or_cell gate46 (
    .a (net75),
    .b (net76),
    .out (net12)
  );
  or_cell gate47 (
    .a (net77),
    .b (net78),
    .out (net75)
  );
  or_cell gate48 (
    .a (net58),
    .b (net79),
    .out (net76)
  );
  and_cell gate49 (
    .a (net54),
    .b (net52),
    .out (net77)
  );
  and_cell gate50 (
    .a (net57),
    .b (net54),
    .out (net78)
  );
  and_cell gate51 (
    .a (net57),
    .b (net52),
    .out (net79)
  );
  or_cell gate52 (
    .a (net80),
    .b (net81),
    .out (net13)
  );
  or_cell gate53 (
    .a (net82),
    .b (net83),
    .out (net80)
  );
  or_cell gate54 (
    .a (net58),
    .b (net84),
    .out (net81)
  );
  and_cell gate55 (
    .a (net56),
    .b (net55),
    .out (net82)
  );
  and_cell gate56 (
    .a (net57),
    .b (net54),
    .out (net83)
  );
  and_cell gate57 (
    .a (net57),
    .b (net52),
    .out (net84)
  );
  not_cell gate58 (
    .in (net2),
    .out (net50)
  );
endmodule

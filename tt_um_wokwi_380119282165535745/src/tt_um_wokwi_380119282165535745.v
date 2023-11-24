/* Automatically generated from https://wokwi.com/projects/380119282165535745 */

`default_nettype none

module tt_um_wokwi_380119282165535745(
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
  wire net10 = 1'b1;
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
  wire net32 = 1'b0;
  wire net33 = 1'b0;
  wire net34 = 1'b0;
  wire net35 = 1'b0;
  wire net36 = 1'b0;
  wire net37 = 1'b0;
  wire net38 = 1'b0;
  wire net39 = 1'b0;
  wire net40 = 1'b0;
  wire net41;
  wire net42 = 1'b0;
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
  wire net76 = 1'b1;
  wire net77 = 1'b0;
  wire net78 = 1'b1;

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

  dff_cell flipflop1 (
    .d (net11),
    .clk (net1),
    .q (net12),
    .notq (net13)
  );
  dff_cell flipflop2 (
    .d (net14),
    .clk (net15),
    .q (net16),
    .notq (net17)
  );
  dff_cell flipflop3 (
    .d (net18),
    .clk (net19),
    .q (net20),
    .notq (net21)
  );
  mux_cell mux2 (
    .a (net12),
    .b (net1),
    .sel (net22),
    .out (net15)
  );
  mux_cell mux3 (
    .a (net16),
    .b (net1),
    .sel (net22),
    .out (net19)
  );
  or_cell gate8 (
    .a (net13),
    .b (net22),
    .out (net11)
  );
  or_cell gate9 (
    .a (net17),
    .b (net22),
    .out (net14)
  );
  or_cell gate10 (
    .a (net21),
    .b (net22),
    .out (net18)
  );
  dff_cell flipflop5 (
    .d (net23),
    .clk (net24),
    .notq (net25)
  );
  mux_cell mux4 (
    .a (net20),
    .b (net1),
    .sel (net22),
    .out (net24)
  );
  or_cell gate7 (
    .a (net25),
    .b (net22),
    .out (net23)
  );
  and_cell gate1 (
    .a (net26),
    .b (net27),
    .out (net28)
  );
  and_cell gate11 (
    .a (net29),
    .b (net25),
    .out (net30)
  );
  not_cell gate13 (
    .in (net17),
    .out (net27)
  );
  and_cell gate15 (
    .a (net28),
    .b (net30),
    .out (net31)
  );
  not_cell gate14 (
    .in (net21),
    .out (net29)
  );
  dff_cell flipflop6 (
    .d (net41),
    .clk (net1),
    .q (net22)
  );
  or_cell gate12 (
    .a (net31),
    .b (net2),
    .out (net41)
  );
  not_cell gate16 (
    .in (net13),
    .out (net26)
  );
  not_cell gate17 (
    .in (net13),
    .out (net43)
  );
  buffer_cell gate18 (
    .in (net13),
    .out (net44)
  );
  not_cell gate19 (
    .in (net17),
    .out (net45)
  );
  buffer_cell gate20 (
    .in (net17),
    .out (net46)
  );
  not_cell gate21 (
    .in (net21),
    .out (net47)
  );
  buffer_cell gate22 (
    .in (net21),
    .out (net48)
  );
  not_cell gate23 (
    .in (net25)
  );
  buffer_cell gate24 (
    .in (net25),
    .out (net49)
  );
  and_cell gate25 (
    .a (net47),
    .b (net43),
    .out (net50)
  );
  and_cell gate26 (
    .a (net46),
    .b (net43),
    .out (net51)
  );
  or_cell gate27 (
    .a (net50),
    .b (net51),
    .out (net7)
  );
  or_cell gate28 (
    .a (net50),
    .b (net46),
    .out (net52)
  );
  or_cell gate29 (
    .a (net49),
    .b (net53),
    .out (net54)
  );
  or_cell gate30 (
    .a (net52),
    .b (net54),
    .out (net3)
  );
  and_cell gate31 (
    .a (net48),
    .b (net44),
    .out (net53)
  );
  or_cell gate32 (
    .a (net55),
    .b (net56),
    .out (net4)
  );
  or_cell gate33 (
    .a (net47),
    .b (net57),
    .out (net56)
  );
  and_cell gate34 (
    .a (net46),
    .b (net44),
    .out (net57)
  );
  and_cell gate35 (
    .a (net45),
    .b (net43),
    .out (net55)
  );
  or_cell gate36 (
    .a (net45),
    .b (net58),
    .out (net5)
  );
  or_cell gate37 (
    .a (net48),
    .b (net44),
    .out (net58)
  );
  or_cell gate38 (
    .a (net50),
    .b (net59),
    .out (net60)
  );
  and_cell gate39 (
    .a (net47),
    .b (net46),
    .out (net59)
  );
  or_cell gate40 (
    .a (net49),
    .b (net61),
    .out (net62)
  );
  or_cell gate41 (
    .a (net63),
    .b (net64),
    .out (net61)
  );
  or_cell gate42 (
    .a (net60),
    .b (net62),
    .out (net6)
  );
  and_cell gate43 (
    .a (net48),
    .b (net65),
    .out (net64)
  );
  and_cell gate44 (
    .a (net46),
    .b (net43),
    .out (net63)
  );
  and_cell gate45 (
    .a (net45),
    .b (net44),
    .out (net65)
  );
  or_cell gate46 (
    .a (net66),
    .b (net67),
    .out (net8)
  );
  or_cell gate47 (
    .a (net68),
    .b (net69),
    .out (net66)
  );
  or_cell gate48 (
    .a (net49),
    .b (net70),
    .out (net67)
  );
  and_cell gate49 (
    .a (net45),
    .b (net43),
    .out (net68)
  );
  and_cell gate50 (
    .a (net48),
    .b (net45),
    .out (net69)
  );
  and_cell gate51 (
    .a (net48),
    .b (net43),
    .out (net70)
  );
  or_cell gate52 (
    .a (net71),
    .b (net72),
    .out (net9)
  );
  or_cell gate53 (
    .a (net73),
    .b (net74),
    .out (net71)
  );
  or_cell gate54 (
    .a (net49),
    .b (net75),
    .out (net72)
  );
  and_cell gate55 (
    .a (net47),
    .b (net46),
    .out (net73)
  );
  and_cell gate56 (
    .a (net48),
    .b (net45),
    .out (net74)
  );
  and_cell gate57 (
    .a (net48),
    .b (net43),
    .out (net75)
  );
endmodule

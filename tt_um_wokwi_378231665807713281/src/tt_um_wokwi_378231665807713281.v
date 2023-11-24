/* Automatically generated from https://wokwi.com/projects/378231665807713281 */

`default_nettype none

module tt_um_wokwi_378231665807713281(
  input  wire [7:0] ui_in,    // Dedicated inputs
  output wire [7:0] uo_out,    // Dedicated outputs
  input  wire [7:0] uio_in,    // IOs: Input path
  output wire [7:0] uio_out,    // IOs: Output path
  output wire [7:0] uio_oe,    // IOs: Enable path (active high: 0=input, 1=output)
  input ena,
  input clk,
  input rst_n
);
  wire net1 = ui_in[0];
  wire net2 = ui_in[1];
  wire net3 = ui_in[2];
  wire net4 = ui_in[3];
  wire net5 = ui_in[4];
  wire net6 = ui_in[5];
  wire net7 = ui_in[6];
  wire net8;
  wire net9;
  wire net10;
  wire net11;
  wire net12 = 1'b1;
  wire net13 = 1'b1;
  wire net14 = 1'b0;
  wire net15 = 1'b1;
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
  wire net60 = 1'b0;
  wire net61 = 1'b0;
  wire net62 = 1'b0;
  wire net63 = 1'b0;
  wire net64 = 1'b0;
  wire net65 = 1'b0;
  wire net66 = 1'b0;
  wire net67 = 1'b0;
  wire net68 = 1'b0;
  wire net69 = 1'b0;
  wire net70 = 1'b0;
  wire net71 = 1'b0;
  wire net72 = 1'b0;
  wire net73 = 1'b0;
  wire net74 = 1'b0;
  wire net75 = 1'b0;
  wire net76 = 1'b0;
  wire net77 = 1'b0;
  wire net78 = 1'b0;
  wire net79;
  wire net80;
  wire net81;
  wire net82;
  wire net83;
  wire net84;
  wire net85;
  wire net86;

  assign uo_out[0] = net8;
  assign uo_out[1] = net9;
  assign uo_out[2] = net10;
  assign uo_out[3] = net11;
  assign uo_out[4] = 0;
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

  and_cell and1 (
    .a (net7),
    .b (net16),
    .out (net17)
  );
  dff_cell flop1 (
    .d (net4),
    .clk (net17),
    .q (net18)
  );
  and_cell and2 (
    .a (net18),
    .b (net16),
    .out (net19)
  );
  dff_cell flop2 (
    .d (net3),
    .clk (net17),
    .q (net20)
  );
  and_cell and3 (
    .a (net21),
    .b (net22),
    .out (net16)
  );
  not_cell not1 (
    .in (net5),
    .out (net21)
  );
  not_cell not2 (
    .in (net6),
    .out (net22)
  );
  dff_cell flop3 (
    .d (net2),
    .clk (net17),
    .q (net23)
  );
  dff_cell flop4 (
    .d (net1),
    .clk (net17),
    .q (net24)
  );
  and_cell and4 (
    .a (net20),
    .b (net16),
    .out (net25)
  );
  and_cell and5 (
    .a (net23),
    .b (net16),
    .out (net26)
  );
  and_cell and6 (
    .a (net24),
    .b (net16),
    .out (net27)
  );
  and_cell and7 (
    .a (net7),
    .b (net28),
    .out (net29)
  );
  dff_cell flop5 (
    .d (net4),
    .clk (net29),
    .q (net30)
  );
  and_cell and8 (
    .a (net30),
    .b (net28),
    .out (net31)
  );
  dff_cell flop6 (
    .d (net3),
    .clk (net29),
    .q (net32)
  );
  and_cell and9 (
    .a (net33),
    .b (net6),
    .out (net28)
  );
  not_cell not3 (
    .in (net5),
    .out (net33)
  );
  dff_cell flop7 (
    .d (net2),
    .clk (net29),
    .q (net34)
  );
  dff_cell flop8 (
    .d (net1),
    .clk (net29),
    .q (net35)
  );
  and_cell and10 (
    .a (net32),
    .b (net28),
    .out (net36)
  );
  and_cell and11 (
    .a (net34),
    .b (net28),
    .out (net37)
  );
  and_cell and12 (
    .a (net35),
    .b (net28),
    .out (net38)
  );
  and_cell and13 (
    .a (net7),
    .b (net39),
    .out (net40)
  );
  dff_cell flop9 (
    .d (net4),
    .clk (net40),
    .q (net41)
  );
  and_cell and14 (
    .a (net41),
    .b (net39),
    .out (net42)
  );
  dff_cell flop10 (
    .d (net3),
    .clk (net40),
    .q (net43)
  );
  and_cell and15 (
    .a (net5),
    .b (net44),
    .out (net39)
  );
  not_cell not5 (
    .in (net6),
    .out (net44)
  );
  dff_cell flop11 (
    .d (net2),
    .clk (net40),
    .q (net45)
  );
  dff_cell flop12 (
    .d (net1),
    .clk (net40),
    .q (net46)
  );
  and_cell and16 (
    .a (net43),
    .b (net39),
    .out (net47)
  );
  and_cell and17 (
    .a (net45),
    .b (net39),
    .out (net48)
  );
  and_cell and18 (
    .a (net46),
    .b (net39),
    .out (net49)
  );
  and_cell and19 (
    .a (net7),
    .b (net50),
    .out (net51)
  );
  dff_cell flop13 (
    .d (net4),
    .clk (net51),
    .q (net52)
  );
  and_cell and20 (
    .a (net52),
    .b (net50),
    .out (net53)
  );
  dff_cell flop14 (
    .d (net3),
    .clk (net51),
    .q (net54)
  );
  and_cell and21 (
    .a (net5),
    .b (net6),
    .out (net50)
  );
  dff_cell flop15 (
    .d (net2),
    .clk (net51),
    .q (net55)
  );
  dff_cell flop16 (
    .d (net1),
    .clk (net51),
    .q (net56)
  );
  and_cell and22 (
    .a (net54),
    .b (net50),
    .out (net57)
  );
  and_cell and23 (
    .a (net55),
    .b (net50),
    .out (net58)
  );
  and_cell and24 (
    .a (net56),
    .b (net50),
    .out (net59)
  );
  or_cell or1 (
    .a (net19),
    .b (net31),
    .out (net79)
  );
  or_cell or2 (
    .a (net25),
    .b (net36),
    .out (net80)
  );
  or_cell or3 (
    .a (net26),
    .b (net37),
    .out (net81)
  );
  or_cell or4 (
    .a (net27),
    .b (net38),
    .out (net82)
  );
  or_cell or5 (
    .a (net79),
    .b (net42),
    .out (net83)
  );
  or_cell or6 (
    .a (net80),
    .b (net47),
    .out (net84)
  );
  or_cell or7 (
    .a (net81),
    .b (net48),
    .out (net85)
  );
  or_cell or8 (
    .a (net82),
    .b (net49),
    .out (net86)
  );
  or_cell or9 (
    .a (net83),
    .b (net53),
    .out (net11)
  );
  or_cell or10 (
    .a (net84),
    .b (net57),
    .out (net10)
  );
  or_cell or11 (
    .a (net85),
    .b (net58),
    .out (net9)
  );
  or_cell or12 (
    .a (net86),
    .b (net59),
    .out (net8)
  );
endmodule

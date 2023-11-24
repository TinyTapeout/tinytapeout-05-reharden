/* Automatically generated from https://wokwi.com/projects/380408936929183745 */

`default_nettype none

module tt_um_wokwi_380408936929183745(
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
  wire net4 = ui_in[2];
  wire net5 = ui_in[3];
  wire net6 = ui_in[4];
  wire net7 = ui_in[5];
  wire net8 = ui_in[6];
  wire net9 = ui_in[7];
  wire net10;
  wire net11;
  wire net12;
  wire net13;
  wire net14;
  wire net15 = 1'b1;
  wire net16 = 1'b0;
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
  wire net60;
  wire net61;
  wire net62;
  wire net63;
  wire net64;
  wire net65;
  wire net66;

  assign uo_out[0] = net10;
  assign uo_out[1] = net11;
  assign uo_out[2] = net12;
  assign uo_out[3] = net13;
  assign uo_out[4] = net14;
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

  xor_cell xor1 (
    .a (net2),
    .b (net6),
    .out (net17)
  );
  and_cell and1 (
    .a (net2),
    .b (net6),
    .out (net18)
  );
  xor_cell xor2 (
    .a (net17),
    .b (net1),
    .out (net10)
  );
  and_cell and2 (
    .a (net17),
    .b (net1),
    .out (net19)
  );
  or_cell or1 (
    .a (net18),
    .b (net19),
    .out (net20)
  );
  xor_cell xor3 (
    .a (net3),
    .b (net7),
    .out (net21)
  );
  xor_cell xor4 (
    .a (net21),
    .b (net20),
    .out (net11)
  );
  and_cell and3 (
    .a (net3),
    .b (net7),
    .out (net22)
  );
  and_cell and4 (
    .a (net21),
    .b (net20),
    .out (net23)
  );
  or_cell or2 (
    .a (net22),
    .b (net23),
    .out (net24)
  );
  nand_cell nand1 (
    .a (net4),
    .b (net8),
    .out (net25)
  );
  nand_cell nand2 (
    .a (net4),
    .b (net25),
    .out (net26)
  );
  nand_cell nand3 (
    .a (net25),
    .b (net8),
    .out (net27)
  );
  nand_cell nand4 (
    .a (net26),
    .b (net27),
    .out (net28)
  );
  nand_cell nand5 (
    .a (net28),
    .b (net24),
    .out (net29)
  );
  nand_cell nand6 (
    .a (net28),
    .b (net29),
    .out (net30)
  );
  nand_cell nand7 (
    .a (net29),
    .b (net24),
    .out (net31)
  );
  nand_cell nand8 (
    .a (net30),
    .b (net31),
    .out (net12)
  );
  nand_cell nand9 (
    .a (net29),
    .b (net25),
    .out (net32)
  );
  nand_cell nand10 (
    .a (net5),
    .b (net5),
    .out (net33)
  );
  nand_cell nand11 (
    .a (net9),
    .b (net9),
    .out (net34)
  );
  nand_cell nand12 (
    .a (net33),
    .b (net34),
    .out (net35)
  );
  nand_cell nand13 (
    .a (net35),
    .b (net35),
    .out (net36)
  );
  nand_cell nand14 (
    .a (net5),
    .b (net5),
    .out (net37)
  );
  nand_cell nand15 (
    .a (net36),
    .b (net36),
    .out (net38)
  );
  nand_cell nand16 (
    .a (net37),
    .b (net38),
    .out (net39)
  );
  nand_cell nand17 (
    .a (net39),
    .b (net39),
    .out (net40)
  );
  nand_cell nand18 (
    .a (net36),
    .b (net36),
    .out (net41)
  );
  nand_cell nand19 (
    .a (net9),
    .b (net9),
    .out (net42)
  );
  nand_cell nand20 (
    .a (net41),
    .b (net42),
    .out (net43)
  );
  nand_cell nand21 (
    .a (net43),
    .b (net43),
    .out (net44)
  );
  nand_cell nand22 (
    .a (net40),
    .b (net40),
    .out (net45)
  );
  nand_cell nand23 (
    .a (net44),
    .b (net44),
    .out (net46)
  );
  nand_cell nand24 (
    .a (net45),
    .b (net46),
    .out (net47)
  );
  nand_cell nand25 (
    .a (net47),
    .b (net47),
    .out (net48)
  );
  nand_cell nand26 (
    .a (net48),
    .b (net48),
    .out (net49)
  );
  nand_cell nand27 (
    .a (net32),
    .b (net32),
    .out (net50)
  );
  nand_cell nand28 (
    .a (net49),
    .b (net50),
    .out (net51)
  );
  nand_cell nand29 (
    .a (net51),
    .b (net51),
    .out (net52)
  );
  nand_cell nand30 (
    .a (net48),
    .b (net48),
    .out (net53)
  );
  nand_cell nand31 (
    .a (net52),
    .b (net52),
    .out (net54)
  );
  nand_cell nand32 (
    .a (net53),
    .b (net54),
    .out (net55)
  );
  nand_cell nand33 (
    .a (net55),
    .b (net55),
    .out (net56)
  );
  nand_cell nand34 (
    .a (net52),
    .b (net52),
    .out (net57)
  );
  nand_cell nand35 (
    .a (net32),
    .b (net32),
    .out (net58)
  );
  nand_cell nand36 (
    .a (net57),
    .b (net58),
    .out (net59)
  );
  nand_cell nand37 (
    .a (net59),
    .b (net59),
    .out (net60)
  );
  nand_cell nand38 (
    .a (net56),
    .b (net56),
    .out (net61)
  );
  nand_cell nand39 (
    .a (net60),
    .b (net60),
    .out (net62)
  );
  nand_cell nand40 (
    .a (net61),
    .b (net62),
    .out (net63)
  );
  nand_cell nand41 (
    .a (net63),
    .b (net63),
    .out (net13)
  );
  nand_cell nand42 (
    .a (net52),
    .b (net52),
    .out (net64)
  );
  nand_cell nand43 (
    .a (net36),
    .b (net36),
    .out (net65)
  );
  nand_cell nand44 (
    .a (net64),
    .b (net65),
    .out (net66)
  );
  nand_cell nand45 (
    .a (net66),
    .b (net66),
    .out (net14)
  );
endmodule

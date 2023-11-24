/* Automatically generated from https://wokwi.com/projects/380416361853146113 */

`default_nettype none

module tt_um_wokwi_380416361853146113(
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

  assign uo_out[0] = net9;
  assign uo_out[1] = net10;
  assign uo_out[2] = net11;
  assign uo_out[3] = net12;
  assign uo_out[4] = net13;
  assign uo_out[5] = net14;
  assign uo_out[6] = net15;
  assign uo_out[7] = net8;
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

  not_cell not1 (
    .in (net2),
    .out (net21)
  );
  and_cell and1 (
    .a (net1),
    .b (net1),
    .out (net9)
  );
  not_cell not2 (
    .in (net3),
    .out (net22)
  );
  not_cell not3 (
    .in (net5),
    .out (net13)
  );
  not_cell not4 (
    .in (net6),
    .out (net14)
  );
  not_cell not5 (
    .in (net7),
    .out (net23)
  );
  not_cell not6 (
    .in (net1)
  );
  and_cell and2 (
    .a (net1),
    .b (net24),
    .out (net12)
  );
  not_cell not7 (
    .in (net4),
    .out (net24)
  );
  nand_cell nand1 (
    .a (net1),
    .b (net21),
    .out (net10)
  );
  nand_cell nand2 (
    .a (net1),
    .b (net22),
    .out (net11)
  );
  nand_cell nand3 (
    .a (net2),
    .b (net23),
    .out (net15)
  );
endmodule

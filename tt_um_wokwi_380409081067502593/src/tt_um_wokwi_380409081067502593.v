/* Automatically generated from https://wokwi.com/projects/380409081067502593 */

`default_nettype none

module tt_um_wokwi_380409081067502593(
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
  wire net4;
  wire net5;
  wire net6 = 1'b0;
  wire net7 = 1'b1;
  wire net8 = 1'b1;
  wire net9 = 1'b0;
  wire net10 = 1'b1;
  wire net11;
  wire net12;
  wire net13;
  wire net14;
  wire net15;
  wire net16;
  wire net17;

  assign uo_out[0] = net4;
  assign uo_out[1] = net5;
  assign uo_out[2] = 0;
  assign uo_out[3] = 0;
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

  );
  or_cell or1 (

  );
  not_cell not1 (

  );
  xor_cell xor1 (

  );
  nand_cell nand1 (
    .a (net1),
    .b (net2),
    .out (net11)
  );
  nand_cell nand2 (
    .a (net12),
    .b (net13),
    .out (net4)
  );
  nand_cell nand3 (
    .a (net1),
    .b (net11),
    .out (net14)
  );
  nand_cell nand4 (
    .a (net15),
    .b (net11),
    .out (net5)
  );
  nand_cell nand5 (
    .a (net15),
    .b (net3),
    .out (net13)
  );
  nand_cell nand6 (
    .a (net16),
    .b (net15),
    .out (net12)
  );
  nand_cell nand7 (
    .a (net14),
    .b (net17),
    .out (net16)
  );
  nand_cell nand8 (
    .a (net11),
    .b (net2),
    .out (net17)
  );
  nand_cell nand9 (
    .a (net16),
    .b (net3),
    .out (net15)
  );
endmodule

/* Automatically generated from https://wokwi.com/projects/380197591775930369 */

`default_nettype none

module tt_um_wokwi_380197591775930369(
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
  wire net2;
  wire net3 = 1'b0;
  wire net4 = 1'b1;
  wire net5 = 1'b1;
  wire net6 = 1'b0;
  wire net7 = 1'b1;
  wire net8 = 1'b0;
  wire net9;

  assign uo_out[0] = net1;
  assign uo_out[1] = net1;
  assign uo_out[2] = net1;
  assign uo_out[3] = net2;
  assign uo_out[4] = net1;
  assign uo_out[5] = net1;
  assign uo_out[6] = net1;
  assign uo_out[7] = net2;
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
    .a (net1),
    .b (net9),
    .out (net2)
  );
  not_cell not1 (
    .in (net1),
    .out (net9)
  );
endmodule

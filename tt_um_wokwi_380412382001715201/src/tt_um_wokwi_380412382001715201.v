/* Automatically generated from https://wokwi.com/projects/380412382001715201 */

`default_nettype none

module tt_um_wokwi_380412382001715201(
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
  wire net3;
  wire net4;
  wire net5;
  wire net6;
  wire net7;
  wire net8;
  wire net9;
  wire net10 = 1'b1;
  wire net11 = 1'b1;
  wire net12 = 1'b0;
  wire net13 = 1'b1;
  wire net14;
  wire net15;
  wire net16;
  wire net17;
  wire net18;
  wire net19;
  wire net20;
  wire net21;

  assign uo_out[0] = net2;
  assign uo_out[1] = net3;
  assign uo_out[2] = net4;
  assign uo_out[3] = net5;
  assign uo_out[4] = net6;
  assign uo_out[5] = net7;
  assign uo_out[6] = net8;
  assign uo_out[7] = net9;
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

  dff_cell flop2 (
    .d (net14),
    .clk (net15),
    .q (net3),
    .notq (net14)
  );
  dff_cell flop3 (
    .d (net16),
    .clk (net14),
    .q (net4),
    .notq (net16)
  );
  dff_cell flop4 (
    .d (net17),
    .clk (net16),
    .q (net5),
    .notq (net17)
  );
  dff_cell flop5 (
    .d (net18),
    .clk (net17),
    .q (net6),
    .notq (net18)
  );
  dff_cell flop6 (
    .d (net19),
    .clk (net18),
    .q (net7),
    .notq (net19)
  );
  dff_cell flop7 (
    .d (net20),
    .clk (net19),
    .q (net8),
    .notq (net20)
  );
  dff_cell flop8 (
    .d (net21),
    .clk (net20),
    .q (net9),
    .notq (net21)
  );
  dff_cell flop1 (
    .d (net15),
    .clk (net1),
    .q (net2),
    .notq (net15)
  );
endmodule

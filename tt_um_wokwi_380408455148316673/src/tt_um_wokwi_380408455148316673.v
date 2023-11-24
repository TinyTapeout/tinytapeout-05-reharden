/* Automatically generated from https://wokwi.com/projects/380408455148316673 */

`default_nettype none

module tt_um_wokwi_380408455148316673(
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
  wire net16;
  wire net17;
  wire net18;
  wire net19;
  wire net20;
  wire net21;
  wire net22;
  wire net23;
  wire net24;

  assign uo_out[0] = net5;
  assign uo_out[1] = net6;
  assign uo_out[2] = net7;
  assign uo_out[3] = net8;
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

  not_cell not1 (
    .in (net1),
    .out (net7)
  );
  not_cell not2 (
    .in (net7),
    .out (net9)
  );
  not_cell not3 (
    .in (net6),
    .out (net10)
  );
  not_cell not4 (
    .in (net9),
    .out (net6)
  );
  not_cell not5 (
    .in (net10),
    .out (net5)
  );
  and_cell and1 (
    .a (net2),
    .b (net16),
    .out (net17)
  );
  or_cell or1 (
    .a (net18),
    .b (net19),
    .out (net8)
  );
  dff_cell flop1 (
    .d (net17),
    .clk (net3),
    .q (net20),
    .notq (net21)
  );
  not_cell not6 (
    .in (net2),
    .out (net22)
  );
  and_cell and2 (
    .a (net22),
    .b (net21),
    .out (net23)
  );
  dff_cell flop2 (
    .d (net23),
    .clk (net4),
    .q (net24),
    .notq (net16)
  );
  and_cell and3 (
    .a (net20),
    .b (net3),
    .out (net18)
  );
  and_cell and4 (
    .a (net24),
    .b (net4),
    .out (net19)
  );
endmodule

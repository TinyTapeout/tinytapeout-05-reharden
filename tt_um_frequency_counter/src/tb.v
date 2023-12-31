`default_nettype none
`timescale 1ns/1ps

/*
this testbench just instantiates the module and makes some convenient wires
that can be driven / tested by the cocotb test.py
*/

// testbench is controlled by test.py
module tb ();

    // this part dumps the trace to a vcd file that can be viewed with GTKWave
    initial begin
        $dumpfile ("tb.vcd");
        $dumpvars (0, tb);
        #1;
    end

    // wire up the inputs and outputs
    reg clk;
    reg rst_n;
    reg ena;
    reg debug_mode;
    reg signal;
    reg [11:0] period;
    reg load_period;

    // convenience names, easier to read in the trace and cocotb test
    wire [1:0] dbg_state = uio_out[1:0];
    wire [2:0] dbg_clk_count = uio_out[4:2];
    wire [2:0] dbg_edge_count = uio_out[7:5];
    wire digit = uo_out[7];
    wire [6:0] segments = uo_out[6:0];

    wire [7:0] ui_in = { period[11:8], 1'bz, load_period, debug_mode, signal };
    wire [7:0] uio_in = period[7:0];
    wire [7:0] uo_out;
    wire [7:0] uio_out;
    wire [7:0] uio_oe;

    tt_um_frequency_counter tt_um_frequency_counter (
    // include power ports for the Gate Level test
    `ifdef GL_TEST
        .VPWR( 1'b1),
        .VGND( 1'b0),
    `endif
        .ui_in      (ui_in),    // Dedicated inputs
        .uo_out     (uo_out),   // Dedicated outputs
        .uio_in     (uio_in),   // IOs: Input path
        .uio_out    (uio_out),  // IOs: Output path
        .uio_oe     (uio_oe),   // IOs: Enable path (active high: 0=input, 1=output)
        .ena        (ena),      // enable - goes high when design is selected
        .clk        (clk),      // clock
        .rst_n      (rst_n)     // not reset
        );

endmodule

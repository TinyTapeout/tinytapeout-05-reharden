`default_nettype none

module tt_um_mv_mult_alrdelcr #( parameter MAX_COUNT = 24'd10_000_000 ) (
    input  wire [7:0] ui_in,    // Dedicated inputs - connected to the input switches
    output wire [7:0] uo_out,   // Dedicated outputs - connected to the 7 segment display
    input  wire [7:0] uio_in,   // IOs: Bidirectional Input path
    output wire [7:0] uio_out,  // IOs: Bidirectional Output path
    output wire [7:0] uio_oe,   // IOs: Bidirectional Enable path (active high: 0=input, 1=output)
    input  wire       ena,      // will go high when the design is enabled
    input  wire       clk,      // clock
    input  wire       rst_n     // reset_n - low to reset
);

   
    // use bidirectionals as outputs
    assign uio_oe = 8'b11111111;
    assign uio_out = 8'b11111111;
    assign uo_out[6] = 1;
    assign uo_out[7] = 1;


    // instantiate segment display
    mat_vec_mult vec1(.vector(ui_in), .result(uo_out[5:0]), .clk(clk));

endmodule

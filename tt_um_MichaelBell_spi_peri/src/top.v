`default_nettype none

module tt_um_MichaelBell_spi_peri (
    input  wire [7:0] ui_in,    // Dedicated inputs - connected to the input switches
    output wire [7:0] uo_out,   // Dedicated outputs - connected to the 7 segment display
    input  wire [7:0] uio_in,   // IOs: Bidirectional Input path
    output wire [7:0] uio_out,  // IOs: Bidirectional Output path
    output wire [7:0] uio_oe,   // IOs: Bidirectional Enable path (active high: 0=input, 1=output)
    input  wire       ena,      // will go high when the design is enabled
    input  wire       clk,      // clock (used as debug clock only)
    input  wire       rst_n     // reset_n - low to reset
);

    wire [6:0] led_out;
    assign uo_out[6:0] = led_out;
    assign uo_out[7] = ui_in[1];  // SPI select debug

    // set bidirectionals
    wire [3:0] spi_d_oe;
    assign uio_oe = {4'b1111, spi_d_oe};

    wire [7:0] debug_byte;
    wire [3:0] debug_nibble;

    // CS is vulnerable to positive edge glitches.  Add some buffers to reduce the risk
`ifdef SIM
    wire cur_cs;
    assign #2 cur_cs = ui_in[1] && rst_n;
`else
    localparam MAX_BUFFER = 3;
    wire [MAX_BUFFER:0] buffer_cs_in;
    wire [MAX_BUFFER:0] buffer_cs_out;
    assign buffer_cs_in = {buffer_cs_out[MAX_BUFFER-1:0], ui_in[1] && rst_n};
    sky130_fd_sc_hd__buf_1 buffers [MAX_BUFFER:0] (
        .X(buffer_cs_out),
        .A(buffer_cs_in)
    );

    wire cur_cs = ui_in[1] && &buffer_cs_out;
`endif

    // SPI peripheral
    spi_peri i_spi(
            .spi_clk(ui_in[0]), 
            .spi_d_in(uio_in[3:0]), 
            .spi_select(cur_cs),
            .spi_d_out(uio_out[3:0]),
            .spi_d_oe(spi_d_oe), 
            .debug_clk(clk), 
            .addr_in(ui_in[5:3]), 
            .byte_out(debug_byte),
            .rosc_ena(ena));

    assign debug_nibble = ui_in[2] ? debug_byte[7:4] : debug_byte[3:0];
    assign uio_out[7:4] = debug_nibble;

    // instantiate segment display
    seg7 seg7(.value(debug_nibble), .seg_out(led_out));

endmodule

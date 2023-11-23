`default_nettype none

module tt_um_tiny_game_of_life (
    input  wire [7:0] ui_in,    // Dedicated inputs - connected to the input switches
    output wire [7:0] uo_out,   // Dedicated outputs - connected to the 7 segment display
    input  wire [7:0] uio_in,   // IOs: Bidirectional Input path
    output wire [7:0] uio_out,  // IOs: Bidirectional Output path
    output wire [7:0] uio_oe,   // IOs: Bidirectional Enable path (active high: 0=input, 1=output)
    input  wire       ena,      // will go high when the design is enabled
    input  wire       clk,      // clock
    input  wire       rst_n     // reset_n - low to reset
);

    logic reset;
    FSM Petros_Game_of_Life(.in(ui_in[1:0]), .out(uo_out[7:0]), .clock(clk), .*);
    assign reset = ~rst_n;
    assign uio_out[7:0] = '0;
    assign uio_oe[7:0] = '0;

    logic [63:0] uTable_d, lTable_d;
    
endmodule: tt_um_tiny_game_of_life

module FSM
    (input  logic [1:0] in,
     input  logic clock, reset,
     output logic [7:0] out,
     output logic [63:0] uTable_d, lTable_d);

    
    enum logic [1:0] {INPUT = 2'b00, UPDATE = 2'b01, OUTPUT = 2'b10} currState, nextState;
    
    // Counter module instantiation
    logic counter_out, counter_clear;
    logic [6:0] Q;
    counter cntr(.clear(counter_clear), .eqToMax(counter_out), .*);

    // Shift register instantiation
    logic shift_out;
    shiftRegister shift(.in(in[0]), .state(nextState), .out(shift_out), .*);

    // Next state combinational logic
    always_comb begin
        nextState = INPUT;
        counter_clear = 1'b0;
        case (currState)
            INPUT: begin
                nextState = in[1] ? UPDATE : INPUT;
                counter_clear = 1'b1;
            end
            UPDATE: begin
                nextState = OUTPUT;
                counter_clear = 1'b0;
            end
            OUTPUT: begin
                if (counter_out) begin
                    nextState = UPDATE;
                    counter_clear = 1'b1; 
                end
                else nextState = OUTPUT;
            end
        endcase
    end

    // Output combinational logic
    always_comb begin
        out[7:1] = Q;
        out[0] = shift_out;
    end

    // Next state sequential logic
    always_ff @(posedge clock) begin
        if (reset) currState <= INPUT;
        else currState <= nextState;
    end
endmodule: FSM


module shiftRegister
    #(parameter N = 64, n = 8)
        (input  logic in, reset, clock,
         input  logic [1:0] state,
         output logic out,
         output logic [N-1:0] uTable_d, lTable_d);

    genvar i;

    // Wiring for load and update table
    logic [N:0] lw1, lw2;

    // Wiring between tables
    logic [N-1:0] uw;

    // Control variables: update is used for passing results to update table
    // load is used for connecting update table to load table
    logic update, load, hold;

    mux m(.in0(in), .in1(lw2[N]), .sel(state[1]), .out(load));
    assign update = state[0];
    assign hold = update;

    generate
        for (i = 0; i < N; i++) begin

            // Corner instantiation
            if (i == 0) begin 
                loadFF_corner ff(.d(load), .q(lw1[1]), .update(uw[i]), .n1(lw1[2]), 
                                 .n2(lw1[n+1]), .n3(lw1[n+2]), .*);

                updateFF uff(.d0(1'b0), .d1(uw[i]), .q(lw2[1]), .sel(update), .*);
            end
            else if (i == n-1) begin
                loadFF_corner ff(.d(lw1[i]), .q(lw1[n]), .update(uw[i]), .n1(lw1[i]), 
                                 .n2(lw1[n+n-1]), .n3(lw1[n+n]), .*);

                updateFF uff(.d0(lw2[i]), .d1(uw[i]), .q(lw2[n]), .sel(update), .*);
            end
            else if (i == N-n) begin
                loadFF_corner ff(.d(lw1[i]), .q(lw1[i+1]), .update(uw[i]), .n1(lw1[i-n+1]), 
                                 .n2(lw1[i-n+2]), .n3(lw1[i+2]), .*);

                updateFF uff(.d0(lw2[i]), .d1(uw[i]), .q(lw2[i+1]), .sel(update), .*);
            end
            else if (i == N-1) begin
                loadFF_corner ff(.d(lw1[i]), .q(lw1[N]), .update(uw[i]), .n1(lw1[i]), 
                                 .n2(lw1[N-n]), .n3(lw1[N-n-1]), .*);

                updateFF uff(.d0(lw2[i]), .d1(uw[i]), .q(lw2[N]), .sel(update), .*);
            end
            

            // Edge instantiation
            else if (i < n) begin
                loadFF_edge ff(.d(lw1[i]), .q(lw1[i+1]), .update(uw[i]), .n1(lw1[i]), 
                               .n2(lw1[i+2]), .n3(lw1[n+i]), .n4(lw1[n+i+1]), .n5(lw1[n+i+2]), .*);

                updateFF uff(.d0(lw2[i]), .d1(uw[i]), .q(lw2[i+1]), .sel(update), .*);
            end
            else if (i % n == 0) begin
                loadFF_edge ff(.d(lw1[i]), .q(lw1[i+1]), .update(uw[i]), .n1(lw1[i+2]), 
                               .n2(lw1[i+1-n]), .n3(lw1[i+2-n]), .n4(lw1[i+1+n]), .n5(lw1[i+2+n]), .*);

                updateFF uff(.d0(lw2[i]), .d1(uw[i]), .q(lw2[i+1]), .sel(update), .*); 
            end
            else if (i % n == n-1) begin
                loadFF_edge ff(.d(lw1[i]), .q(lw1[i+1]), .update(uw[i]), .n1(lw1[i]), 
                               .n2(lw1[i+1-n]), .n3(lw1[i-n]), .n4(lw1[i+1+n]), .n5(lw1[i+n]), .*);

                updateFF uff(.d0(lw2[i]), .d1(uw[i]), .q(lw2[i+1]), .sel(update), .*);
            end
            else if (i > N-n) begin
                loadFF_edge ff(.d(lw1[i]), .q(lw1[i+1]), .update(uw[i]), .n1(lw1[i]), 
                               .n2(lw1[i+2]), .n3(lw1[i-n]), .n4(lw1[i+1-n]), .n5(lw1[i+2-n]), .*);

                updateFF uff(.d0(lw2[i]), .d1(uw[i]), .q(lw2[i+1]), .sel(update), .*);
            end

            // Central instantiation
            else begin
                loadFF_central ff(.d(lw1[i]), .q(lw1[i+1]), .update(uw[i]), .n1(lw1[i]), 
                                  .n2(lw1[i+2]), .n3(lw1[i+n]), .n4(lw1[i+n+1]), .n5(lw1[i+2+n]), 
                                  .n6(lw1[i-n]), .n7(lw1[i+1-n]), .n8(lw1[i+2-n]), .*);

                updateFF uff(.d0(lw2[i]), .d1(uw[i]), .q(lw2[i+1]), .sel(update), .*);
            end


        end
    endgenerate  

    assign out = lw1[1];

    assign lTable_d = lw1[N:1];
    assign uTable_d = lw2[N:1];

endmodule: shiftRegister

module loadFF_corner
    (output logic q, update,
     input  logic d, hold, n1, n2, n3,
     input  logic clock, reset);
    
    logic mux_out;
    conway_adder_corner add(.cell_in(q), .cell_out(update), .*);
    mux m(.in0(d), .in1(q), .sel(hold), .out(mux_out), .*);
    dFlipFlop ff(.d(mux_out), .*);
endmodule: loadFF_corner

module loadFF_edge
    (output logic q, update,
     input  logic d, hold, n1, n2, n3, n4, n5,
     input  logic clock, reset);
    
    logic mux_out;
    conway_adder_edge add(.cell_in(q), .cell_out(update), .*);
    mux m(.in0(d), .in1(q), .sel(hold), .out(mux_out), .*);    
    dFlipFlop ff(.d(mux_out), .*);
endmodule: loadFF_edge

module loadFF_central
    (output logic q, update,
     input  logic d, hold, n1, n2, n3, n4, n5, n6, n7, n8,
     input  logic clock, reset);
    
    logic mux_out;
    conway_adder add(.cell_in(q), .cell_out(update), .*);
    mux m(.in0(d), .in1(q), .sel(hold), .out(mux_out), .*);    
    dFlipFlop ff(.d(mux_out), .*);
endmodule: loadFF_central


// Flipflop logic for update table. Can receive input
// from either the previous update ff or a load ff
module updateFF
    (output logic q,
     input  logic d0, d1, sel,
     input  logic clock, reset);
    
    logic mux_out;
    mux m(.in0(d0), .in1(d1), .out(mux_out), .*);
    dFlipFlop ff(.d(mux_out), .*);
endmodule: updateFF


// Adder logic used to determine the next state of a cell given its neighboring cells
module conway_adder
    (input  logic cell_in,
     input  logic n1, n2, n3, n4, n5, n6, n7, n8,
     output logic cell_out);

    logic [3:0] sum;

    assign sum = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8;

    always_comb begin // calc cell's next state based on sum

        if (cell_in && ((sum == 4'd3) || (sum == 4'd2))) cell_out = 1'b1;
        else if (~cell_in && (sum == 4'd3)) cell_out = 1'b1;
        else cell_out = 1'b0;
    end

endmodule: conway_adder

module conway_adder_corner
    (input  logic cell_in,
     input  logic n1, n2, n3,
     output logic cell_out);

    logic condition1, condition2;

    assign condition1 = (n1 & n2) | (n2 & n3) | (n1 & n3);
    assign condition2 = n1 & n2 & n3;
    assign cell_out = (condition1 & cell_in) | (condition2 & ~cell_in);
endmodule: conway_adder_corner

module conway_adder_edge
    (input  logic cell_in,
     input  logic n1, n2, n3, n4, n5,
     output logic cell_out);

    logic [2:0] sum;

    assign sum = n1 + n2 + n3 + n4 + n5;

    always_comb begin // calc cell's next state based on sum

        if (cell_in && ((sum == 3'd3) || (sum == 3'd2))) cell_out = 1'b1;
        else if (~cell_in && (sum == 3'd3)) cell_out = 1'b1;
        else cell_out = 1'b0;
    end
endmodule: conway_adder_edge


// Counter used for loading bits from update table to load table

module counter
    #(parameter N = 64)
    (input  logic clock, clear,
     output logic eqToMax,
     output logic [6:0] Q);

    always_ff @(posedge clock) begin
        if (clear) Q <= '0;
        else Q <= Q + 1;

        if (Q >= 7'd63) eqToMax <= 1'b1;
        else eqToMax <= 1'b0;
    end
endmodule: counter

// Bare flipflop logic
module dFlipFlop
    (output logic q,
     input  logic d, clock, reset);

    always_ff @(posedge clock) begin
        if (reset) q <= 1'b0;
        else q <= d;
    end
endmodule: dFlipFlop

// Bare multiplexer logic
module mux
    (input  logic in0, in1, sel,
     output logic out);
    
    always_comb begin
        if (sel) out = in1;
        else out = in0;
    end
endmodule: mux

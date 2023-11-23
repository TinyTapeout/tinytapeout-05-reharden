module tt_um_carlosgs99_cro_udg (
    input  wire [7:0] ui_in,  // Dedicated inputs - connected to the input switches
    output wire [7:0] uo_out, // Dedicated outputs - connected to the 7 segment display
    input  wire [7:0] uio_in, // IOs: Bidirectional Input path
    output wire [7:0] uio_out,// IOs: Bidirectional Output path
    output wire [7:0] uio_oe, // IOs: Bidirectional Enable path (active high: 0=input, 1=output)
    input  wire       ena,    // will go high when the design is enabled
    input  wire       clk,    // clock
    input  wire       rst_n   // reset_n - low to reset
);

//DECLARACION DE SEÑALES INTERNAS
//----reset
    reg [0:3] rst_n_meta;
    wire rst;
    reg rst_r;
    wire rst_edge;
//----boton start/stop
    reg [0:3] bt_meta;
    wire bt_me;
    reg [17:0] cont50;
    wire pls50;
    reg ff100;
    wire pls100;
    reg [2:0] conth;
    wire conth_z;
    wire bt_h;
    reg bt_h_r;
    wire bt_edge;
    reg ff_go;
    wire pls100go;

//----contadores
    reg [3:0] cent_u,cent_d,seg_u,min_u;
    reg [2:0] seg_d,min_d;
    wire cent_u_max,cent_d_max,seg_u_max,seg_d_max,min_u_max,min_d_max;

//-----deco 7 segmentos
    reg [2:0] cnt_sel;
    reg [3:0] bcd_mux;
    reg [0:6] seg7mux;
    reg [0:7] cat8;
    reg [0:6] ch_rst;
    wire [0:6] seg7;

///// CONEXIONES CON PUERTOS /////
    assign bt_ent = ui_in[0];
    assign uo_out = cat8;
    assign uio_oe[7:0] = 8'b1111_1111;  //All bidirectional paths used as outputs
    assign uio_out = {1'b0,seg7};

///// M E T A E S T A B I L I D A D   Y   B O T O N E S /////
//-----------------Metaestabilidad de rst_n--------------------
    always @(posedge clk)
        rst_n_meta[0:3] <= {rst_n,rst_n_meta[0:2]};
    assign rst = ~rst_n_meta[3];
//--------------rst_edge : flanco de rst_h----------------------
    always @(posedge clk)
        rst_r <= rst;
    assign rst_edge = rst & ~rst_r;

//------------------Metaestabilidad de bt_ent-----------------
    always @(posedge clk)
        bt_meta[0:3] <= {bt_ent,bt_meta[0:2]};
    assign bt_me = bt_meta[3];

//---------------Generador de señal pls100------------------
    always @(posedge clk)
    begin
        if ( rst_edge )
            cont50 <= 0;
        else if ( pls50 )
            cont50 <= 0;
        else
            cont50 <= cont50 + 1;
    end

    assign pls50 = (cont50 == 18'b11_1101_0000_1000_1111) ? 1 : 0;

    always @(posedge clk)
    begin
        if ( rst )
            ff100 <= 0;
        else if ( pls50 )
            ff100 <= ~ff100;
    end
    assign pls100 = ff100 & pls50;

//------------------------Histeresis bt_h-----------------------
    always @(posedge clk)
    begin
        if ( rst )
            conth <= 3'b000;
        else if ( bt_me )
            conth <= 3'b101;
        else if ( pls100 && !conth_z ) //Si hay pulso100 y conth aún no es cero
            conth <= conth - 1;
    end
    assign conth_z = (conth == 3'b000) ? 1 : 0;
    assign bt_h = ~conth_z; //bt_h es 1 mientras el contador conth no es cero
//--------------bt_edge : flanco de bt_h----------------------
    always @(posedge clk)
        bt_h_r <= bt_h;
    assign bt_edge = bt_h & ~bt_h_r;

//------------------Proceso ff_go----------------------------
    always @(posedge clk)
    begin
        if ( rst )
            ff_go = 1'b0;
        else if ( bt_edge )
            ff_go = ~ff_go;
    end
//Al presionar el boton el ff se invierte, iniciando o parando los contadores
//Si ff_go =1, la señal pls100go activa los contadores
    assign pls100go = pls100 & ff_go;

///// C O N T A D O R E S /////
//Control de salidas-------------------------------------------------------------
    assign cent_u_max = (cent_u == 9) ? 1 : 0;
    assign cent_d_max = (cent_d == 9) ? 1 : 0;
    assign seg_u_max  = (seg_u  == 9) ? 1 : 0;
    assign seg_d_max  = (seg_d  == 5) ? 1 : 0;
    assign min_u_max  = (min_u  == 9) ? 1 : 0;
    assign min_d_max  = (min_d  == 5) ? 1 : 0;
//Control de unidades de centenas de segundo--------------------------------------
    always@(posedge clk)
    begin
        if(rst)
            cent_u = 0;
        else if(pls100)
        begin
            if(cent_u_max)
                cent_u = 0;
            else
                cent_u = cent_u+1;
        end
    end
//Control de decenas de centenas de segundo--------------------------------------
    always@(posedge clk)
    begin
        if(rst)
            cent_d = 0;
        else if(pls100 & cent_u_max)
        begin
            if(cent_d_max)
                cent_d = 0;
            else
                cent_d=cent_d+1;
        end
    end
//Control de unidades de segundo-------------------------------------------------
    always@(posedge clk)
    begin
        if(rst)
            seg_u = 0;
        else if(pls100 & cent_d_max & cent_u_max)
        begin
            if(seg_u_max )
                seg_u = 0;
            else
                seg_u = seg_u+1;
        end
    end
//Control de decenas de segundo--------------------------------------------------
    always@(posedge clk)
    begin
        if(rst)
            seg_d = 0;
        else if(pls100 & cent_d_max & cent_u_max & seg_u_max)
        begin
            if(seg_d_max )
                seg_d = 0;
            else
                seg_d = seg_d+1;
        end
    end
//Control de unidades de minuto-------------------------------------------------
    always@(posedge clk)
    begin
        if(rst)
            min_u = 0;
        else if(pls100 & cent_d_max & cent_u_max & seg_u_max & seg_d_max)
        begin
            if(min_u_max )
                min_u = 0;
            else
                min_u = min_u+1;
        end
    end
//Control de decenas de minuto--------------------------------------------------
    always@(posedge clk)
    begin
        if(rst)
            min_d = 0;
        else if(pls100 & cent_u_max & cent_d_max & seg_u_max & seg_d_max & min_u_max )
        begin
            if(min_d_max )
                min_d = 0;
            else
                min_d = min_d+1;
        end
    end

///// S E G 7 D E C O /////
//Contador para alternar caracteres a exhibir en el tiempo
    always @(posedge clk)
    begin
        if ( rst_edge )
            cnt_sel <= 3'b000;
        else if ( pls50 )
            cnt_sel <= cnt_sel + 1;
    end

//Multiplexor de 8 a 1, para entradas bcd
    always @(*)
    begin
        case ( cnt_sel )
            3'b000 : bcd_mux = cent_u;       
            3'b001 : bcd_mux = cent_d;       
            3'b010 : bcd_mux = seg_u;        
            3'b011 : bcd_mux = {1'b0,seg_d}; 
            3'b100 : bcd_mux = min_u;        
            3'b101 : bcd_mux = {1'b0,min_d}; 
            3'b110 : bcd_mux = 4'b0;            
            default: bcd_mux = 4'b0;           
        endcase
    end

//Decodificacion BCD a 7 segmentos
    always @(*)
    begin
        case ( bcd_mux )        // abcd_efg
            4'b0000 : seg7mux = {7'b1111_110} ; // 0
            4'b0001 : seg7mux = {7'b0110_000} ; // 1
            4'b0010 : seg7mux = {7'b1101_101} ; // 2
            4'b0011 : seg7mux = {7'b1111_001} ; // 3
            4'b0100 : seg7mux = {7'b0110_011} ; // 4
            4'b0101 : seg7mux = {7'b1011_011} ; // 5
            4'b0110 : seg7mux = {7'b1011_111} ; // 6
            4'b0111 : seg7mux = {7'b1110_000} ; // 7
            4'b1000 : seg7mux = {7'b1111_111} ; // 8
            4'b1001 : seg7mux = {7'b1111_011} ; // 9
            4'b1010 : seg7mux = {7'b1110_111} ; // A
            4'b1011 : seg7mux = {7'b0011_111} ; // b
            4'b1100 : seg7mux = {7'b1001_110} ; // C
            4'b1101 : seg7mux = {7'b0111_101} ; // d
            4'b1110 : seg7mux = {7'b1001_111} ; // E
            default : seg7mux = {7'b1000_111} ; // F
        endcase
    end

//Decodificador de 3 a 8, catodos activos en bajo
    always @(*)
    begin
        case ( cnt_sel )
            3'b000 : cat8 = 8'b01111111 ; 
            3'b001 : cat8 = 8'b10111111 ; 
            3'b010 : cat8 = 8'b11011111 ; 
            3'b011 : cat8 = 8'b11101111 ; 
            3'b100 : cat8 = 8'b11110111 ; 
            3'b101 : cat8 = 8'b11111011 ; 
            3'b110 : cat8 = 8'b11111101 ; 
            default: cat8 = 8'b11111110 ;
        endcase
    end

//Multiplexor de 8 a 1, caracteres de mensaje durante rst
    always @(*)
    begin
        case ( cnt_sel )
                              // abcd_efg
            3'b000 : ch_rst = 7'b0001_101 ; // c        
            3'b001 : ch_rst = 7'b0000_101 ; // r        
            3'b010 : ch_rst = 7'b0011_101 ; // o        
            3'b011 : ch_rst = 7'b0111_110 ; // U        
            3'b100 : ch_rst = 7'b0111_101 ; // d        
            3'b101 : ch_rst = 7'b1011_111 ; // G        
            3'b110 : ch_rst = 7'b0000_000 ; // NO USADO 
            default: ch_rst = 7'b0000_000 ; // NO USADO
        endcase
    end

//Multiplexor de 2 a 1, selecciona entre seg7mux y ch_rst
    assign seg7 = (rst) ? ch_rst : seg7mux ;

endmodule


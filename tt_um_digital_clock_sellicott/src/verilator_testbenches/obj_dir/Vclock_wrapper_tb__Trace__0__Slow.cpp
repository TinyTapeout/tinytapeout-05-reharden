// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vclock_wrapper_tb__Syms.h"


VL_ATTR_COLD void Vclock_wrapper_tb___024root__trace_init_sub__TOP__0(Vclock_wrapper_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+122,"i_refclk", false,-1);
    tracep->declBit(c+123,"i_en", false,-1);
    tracep->declBit(c+124,"i_fast_set", false,-1);
    tracep->declBit(c+125,"i_use_refclk", false,-1);
    tracep->declBus(c+126,"i_mode", false,-1, 1,0);
    tracep->declBit(c+127,"o_serial_data", false,-1);
    tracep->declBit(c+128,"o_serial_clk", false,-1);
    tracep->declBit(c+129,"o_serial_latch", false,-1);
    tracep->declQuad(c+130,"o_parallel_data", false,-1, 47,0);
    tracep->pushNamePrefix("clock_wrapper_tb ");
    tracep->declBus(c+145,"SYS_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+146,"SHIFT_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+147,"REF_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+148,"DEBOUNCE_HZ", false,-1, 31,0);
    tracep->declBus(c+149,"FAST_SET_HZ", false,-1, 31,0);
    tracep->declBus(c+150,"SLOW_SET_HZ", false,-1, 31,0);
    tracep->declBus(c+151,"SHIFT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+149,"DEBOUNCE_SAMPLES", false,-1, 31,0);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+122,"i_refclk", false,-1);
    tracep->declBit(c+123,"i_en", false,-1);
    tracep->declBit(c+124,"i_fast_set", false,-1);
    tracep->declBit(c+125,"i_use_refclk", false,-1);
    tracep->declBus(c+126,"i_mode", false,-1, 1,0);
    tracep->declBit(c+127,"o_serial_data", false,-1);
    tracep->declBit(c+128,"o_serial_clk", false,-1);
    tracep->declBit(c+129,"o_serial_latch", false,-1);
    tracep->declQuad(c+130,"o_parallel_data", false,-1, 47,0);
    tracep->declQuad(c+132,"shift_in_reg", false,-1, 47,0);
    tracep->declQuad(c+134,"parallel_out_reg", false,-1, 47,0);
    tracep->pushNamePrefix("clock_inst ");
    tracep->declBus(c+145,"SYS_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+146,"SHIFT_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+147,"REF_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+148,"DEBOUNCE_HZ", false,-1, 31,0);
    tracep->declBus(c+149,"FAST_SET_HZ", false,-1, 31,0);
    tracep->declBus(c+150,"SLOW_SET_HZ", false,-1, 31,0);
    tracep->declBus(c+149,"DEBOUNCE_SAMPLES", false,-1, 31,0);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+122,"i_refclk", false,-1);
    tracep->declBit(c+123,"i_en", false,-1);
    tracep->declBit(c+124,"i_fast_set", false,-1);
    tracep->declBit(c+125,"i_use_refclk", false,-1);
    tracep->declBus(c+126,"i_mode", false,-1, 1,0);
    tracep->declBit(c+127,"o_serial_data", false,-1);
    tracep->declBit(c+129,"o_serial_latch", false,-1);
    tracep->declBit(c+128,"o_serial_clk", false,-1);
    tracep->declBus(c+9,"clock_seconds", false,-1, 5,0);
    tracep->declBus(c+10,"clock_minutes", false,-1, 5,0);
    tracep->declBus(c+11,"clock_hours", false,-1, 4,0);
    tracep->declBus(c+12,"hours_msb", false,-1, 3,0);
    tracep->declBus(c+13,"hours_lsb", false,-1, 3,0);
    tracep->declBus(c+14,"minutes_msb", false,-1, 3,0);
    tracep->declBus(c+15,"minutes_lsb", false,-1, 3,0);
    tracep->declBus(c+16,"seconds_msb", false,-1, 3,0);
    tracep->declBus(c+17,"seconds_lsb", false,-1, 3,0);
    tracep->declBit(c+18,"clk_1hz", false,-1);
    tracep->declBit(c+19,"refclk_stb", false,-1);
    tracep->declBit(c+20,"debounce_clk", false,-1);
    tracep->declBit(c+21,"clk_1hz_stb", false,-1);
    tracep->declBit(c+22,"refclk_1hz_stb", false,-1);
    tracep->declBit(c+23,"debounce_stb", false,-1);
    tracep->declBit(c+24,"timeset_stb", false,-1);
    tracep->declBit(c+25,"refclk_timeset_stb", false,-1);
    tracep->declBit(c+26,"clk_update_stb", false,-1);
    tracep->declBit(c+27,"fast_set_db", false,-1);
    tracep->declBit(c+28,"use_refclk_db", false,-1);
    tracep->declBus(c+29,"mode_db", false,-1, 1,0);
    tracep->declBit(c+30,"clock_in_1hz_stb", false,-1);
    tracep->declBit(c+31,"clock_in_timeset_stb", false,-1);
    tracep->declBus(c+32,"shift_out_stb_delay", false,-1, 3,0);
    tracep->declBit(c+33,"colon_blink", false,-1);
    tracep->declBit(c+34,"serial_busy", false,-1);
    tracep->pushNamePrefix("clock_gen_inst ");
    tracep->declBus(c+145,"SYS_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+149,"FAST_SET_HZ", false,-1, 31,0);
    tracep->declBus(c+150,"SLOW_SET_HZ", false,-1, 31,0);
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+123,"i_en", false,-1);
    tracep->declBit(c+27,"i_fast_set", false,-1);
    tracep->declBit(c+18,"o_1hz_clk", false,-1);
    tracep->declBit(c+21,"o_1hz_stb", false,-1);
    tracep->declBit(c+24,"o_timeset_stb", false,-1);
    tracep->pushNamePrefix("sysclk_div_inst ");
    tracep->declBus(c+145,"SYS_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+152,"OUT_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+153,"INCRIMENT", false,-1, 31,0);
    tracep->declBit(c+121,"i_sysclk", false,-1);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+123,"i_en", false,-1);
    tracep->declBit(c+18,"o_div", false,-1);
    tracep->declBit(c+21,"o_clk_overflow", false,-1);
    tracep->declBus(c+35,"counter", false,-1, 31,0);
    tracep->declBit(c+36,"prev_out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("timeset_div_inst ");
    tracep->declBus(c+145,"SYS_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+149,"FAST_SET_HZ", false,-1, 31,0);
    tracep->declBus(c+150,"SLOW_SET_HZ", false,-1, 31,0);
    tracep->declBus(c+154,"FAST_INC", false,-1, 31,0);
    tracep->declBus(c+155,"SLOW_INC", false,-1, 31,0);
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+123,"i_en", false,-1);
    tracep->declBit(c+27,"i_fast_set", false,-1);
    tracep->declBit(c+24,"o_timeset_stb", false,-1);
    tracep->declBus(c+37,"incriment", false,-1, 31,0);
    tracep->declBit(c+38,"div", false,-1);
    tracep->pushNamePrefix("divider_inst ");
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+123,"i_en", false,-1);
    tracep->declBit(c+156,"i_load", false,-1);
    tracep->declBus(c+37,"i_incriment", false,-1, 31,0);
    tracep->declBit(c+38,"o_div", false,-1);
    tracep->declBit(c+24,"o_clk_overflow", false,-1);
    tracep->declBus(c+39,"counter", false,-1, 31,0);
    tracep->declBus(c+40,"incriment", false,-1, 31,0);
    tracep->declBit(c+41,"prev_out", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("clock_inst ");
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+30,"i_1hz_stb", false,-1);
    tracep->declBit(c+31,"i_timeset_stb", false,-1);
    tracep->declBit(c+26,"o_clk_stb", false,-1);
    tracep->declBus(c+29,"i_mode", false,-1, 1,0);
    tracep->declBus(c+9,"o_seconds", false,-1, 5,0);
    tracep->declBus(c+10,"o_minutes", false,-1, 5,0);
    tracep->declBus(c+11,"o_hours", false,-1, 4,0);
    tracep->declBus(c+29,"timeset_mode", false,-1, 1,0);
    tracep->declBit(c+42,"is_timeset_mode", false,-1);
    tracep->declBit(c+26,"time_reg_stb", false,-1);
    tracep->pushNamePrefix("time_reg_inst ");
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+26,"i_en", false,-1);
    tracep->declBus(c+29,"i_mode", false,-1, 1,0);
    tracep->declBus(c+9,"o_seconds", false,-1, 5,0);
    tracep->declBus(c+10,"o_minutes", false,-1, 5,0);
    tracep->declBus(c+11,"o_hours", false,-1, 4,0);
    tracep->declBit(c+43,"seconds_count", false,-1);
    tracep->declBit(c+44,"hours_count", false,-1);
    tracep->declBit(c+45,"minutes_count", false,-1);
    tracep->declBit(c+46,"seconds_reset", false,-1);
    tracep->declBit(c+47,"seconds_overflow", false,-1);
    tracep->declBit(c+48,"minutes_overflow", false,-1);
    tracep->declBit(c+49,"hours_overflow", false,-1);
    tracep->declBus(c+157,"COUNTING", false,-1, 1,0);
    tracep->declBus(c+158,"SET_MINUTES", false,-1, 1,0);
    tracep->declBus(c+159,"SET_HOURS", false,-1, 1,0);
    tracep->declBus(c+160,"CLEAR_SECONDS", false,-1, 1,0);
    tracep->declBit(c+136,"seconds_reset_n", false,-1);
    tracep->pushNamePrefix("hours_count_inst ");
    tracep->declBus(c+149,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+161,"OVERFLOW", false,-1, 31,0);
    tracep->declBit(c+121,"i_sysclk", false,-1);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+44,"i_en", false,-1);
    tracep->declBus(c+11,"o_count", false,-1, 4,0);
    tracep->declBit(c+49,"o_overflow", false,-1);
    tracep->declBus(c+11,"counter", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("minutes_count_inst ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+163,"OVERFLOW", false,-1, 31,0);
    tracep->declBit(c+121,"i_sysclk", false,-1);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+45,"i_en", false,-1);
    tracep->declBus(c+10,"o_count", false,-1, 5,0);
    tracep->declBit(c+48,"o_overflow", false,-1);
    tracep->declBus(c+10,"counter", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seconds_count_inst ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+163,"OVERFLOW", false,-1, 31,0);
    tracep->declBit(c+121,"i_sysclk", false,-1);
    tracep->declBit(c+136,"i_reset_n", false,-1);
    tracep->declBit(c+43,"i_en", false,-1);
    tracep->declBus(c+9,"o_count", false,-1, 5,0);
    tracep->declBit(c+47,"o_overflow", false,-1);
    tracep->declBus(c+9,"counter", false,-1, 5,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("debounce_clk_inst ");
    tracep->declBus(c+145,"SYS_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+148,"OUT_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+164,"INCRIMENT", false,-1, 31,0);
    tracep->declBit(c+121,"i_sysclk", false,-1);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+123,"i_en", false,-1);
    tracep->declBit(c+20,"o_div", false,-1);
    tracep->declBit(c+23,"o_clk_overflow", false,-1);
    tracep->declBus(c+50,"counter", false,-1, 31,0);
    tracep->declBit(c+51,"prev_out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("disp_out ");
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBus(c+9,"i_seconds", false,-1, 5,0);
    tracep->declBus(c+10,"i_minutes", false,-1, 5,0);
    tracep->declBus(c+11,"i_hours", false,-1, 4,0);
    tracep->declBus(c+12,"o_hours_msb", false,-1, 3,0);
    tracep->declBus(c+13,"o_hours_lsb", false,-1, 3,0);
    tracep->declBus(c+14,"o_minutes_msb", false,-1, 3,0);
    tracep->declBus(c+15,"o_minutes_lsb", false,-1, 3,0);
    tracep->declBus(c+16,"o_seconds_msb", false,-1, 3,0);
    tracep->declBus(c+17,"o_seconds_lsb", false,-1, 3,0);
    tracep->declBus(c+52,"hours_msb", false,-1, 3,0);
    tracep->declBus(c+53,"hours_lsb", false,-1, 3,0);
    tracep->declBus(c+54,"minutes_msb", false,-1, 3,0);
    tracep->declBus(c+55,"minutes_lsb", false,-1, 3,0);
    tracep->declBus(c+56,"seconds_msb", false,-1, 3,0);
    tracep->declBus(c+57,"seconds_lsb", false,-1, 3,0);
    tracep->declBus(c+12,"hours_msb_reg", false,-1, 3,0);
    tracep->declBus(c+13,"hours_lsb_reg", false,-1, 3,0);
    tracep->declBus(c+14,"minutes_msb_reg", false,-1, 3,0);
    tracep->declBus(c+15,"minutes_lsb_reg", false,-1, 3,0);
    tracep->declBus(c+16,"seconds_msb_reg", false,-1, 3,0);
    tracep->declBus(c+17,"seconds_lsb_reg", false,-1, 3,0);
    tracep->declBus(c+58,"hours_int", false,-1, 5,0);
    tracep->pushNamePrefix("hours_bcd_inst ");
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBus(c+58,"i_bin", false,-1, 5,0);
    tracep->declBus(c+53,"o_bcd_lsb", false,-1, 3,0);
    tracep->declBus(c+52,"o_bcd_msb", false,-1, 3,0);
    tracep->declBit(c+59,"msb_0", false,-1);
    tracep->declBit(c+60,"msb_1", false,-1);
    tracep->declBit(c+61,"msb_2", false,-1);
    tracep->declBit(c+62,"msb_3", false,-1);
    tracep->declBit(c+165,"msb_4", false,-1);
    tracep->declBit(c+165,"msb_5", false,-1);
    tracep->declBit(c+165,"msb_6", false,-1);
    tracep->declBus(c+63,"msb_one_hot", false,-1, 6,0);
    tracep->declBus(c+52,"bcd_msb", false,-1, 3,0);
    tracep->declBus(c+64,"bcd_lsb", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("minutes_bcd_inst ");
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBus(c+10,"i_bin", false,-1, 5,0);
    tracep->declBus(c+55,"o_bcd_lsb", false,-1, 3,0);
    tracep->declBus(c+54,"o_bcd_msb", false,-1, 3,0);
    tracep->declBit(c+65,"msb_0", false,-1);
    tracep->declBit(c+66,"msb_1", false,-1);
    tracep->declBit(c+67,"msb_2", false,-1);
    tracep->declBit(c+68,"msb_3", false,-1);
    tracep->declBit(c+69,"msb_4", false,-1);
    tracep->declBit(c+70,"msb_5", false,-1);
    tracep->declBit(c+71,"msb_6", false,-1);
    tracep->declBus(c+72,"msb_one_hot", false,-1, 6,0);
    tracep->declBus(c+54,"bcd_msb", false,-1, 3,0);
    tracep->declBus(c+73,"bcd_lsb", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seconds_bcd_inst ");
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBus(c+9,"i_bin", false,-1, 5,0);
    tracep->declBus(c+57,"o_bcd_lsb", false,-1, 3,0);
    tracep->declBus(c+56,"o_bcd_msb", false,-1, 3,0);
    tracep->declBit(c+74,"msb_0", false,-1);
    tracep->declBit(c+75,"msb_1", false,-1);
    tracep->declBit(c+76,"msb_2", false,-1);
    tracep->declBit(c+77,"msb_3", false,-1);
    tracep->declBit(c+78,"msb_4", false,-1);
    tracep->declBit(c+79,"msb_5", false,-1);
    tracep->declBit(c+80,"msb_6", false,-1);
    tracep->declBus(c+81,"msb_one_hot", false,-1, 6,0);
    tracep->declBus(c+56,"bcd_msb", false,-1, 3,0);
    tracep->declBus(c+82,"bcd_lsb", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fast_set_db_inst ");
    tracep->declBus(c+149,"NUM_SAMPLES", false,-1, 31,0);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+123,"i_en", false,-1);
    tracep->declBit(c+23,"i_sample_stb", false,-1);
    tracep->declBit(c+124,"i_button", false,-1);
    tracep->declBit(c+27,"o_button_state", false,-1);
    tracep->declBit(c+83,"sample_pipe", false,-1);
    tracep->declBit(c+84,"sample_ext", false,-1);
    tracep->declBus(c+85,"samples", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mode0_db_inst ");
    tracep->declBus(c+149,"NUM_SAMPLES", false,-1, 31,0);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+123,"i_en", false,-1);
    tracep->declBit(c+23,"i_sample_stb", false,-1);
    tracep->declBit(c+137,"i_button", false,-1);
    tracep->declBit(c+86,"o_button_state", false,-1);
    tracep->declBit(c+87,"sample_pipe", false,-1);
    tracep->declBit(c+88,"sample_ext", false,-1);
    tracep->declBus(c+89,"samples", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mode1_db_inst ");
    tracep->declBus(c+149,"NUM_SAMPLES", false,-1, 31,0);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+123,"i_en", false,-1);
    tracep->declBit(c+23,"i_sample_stb", false,-1);
    tracep->declBit(c+138,"i_button", false,-1);
    tracep->declBit(c+90,"o_button_state", false,-1);
    tracep->declBit(c+91,"sample_pipe", false,-1);
    tracep->declBit(c+92,"sample_ext", false,-1);
    tracep->declBus(c+93,"samples", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("refclk_gen_inst ");
    tracep->declBus(c+147,"REF_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+149,"FAST_SET_HZ", false,-1, 31,0);
    tracep->declBus(c+150,"SLOW_SET_HZ", false,-1, 31,0);
    tracep->declBus(c+166,"FAST_INC", false,-1, 31,0);
    tracep->declBus(c+167,"SLOW_INC", false,-1, 31,0);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+123,"i_en", false,-1);
    tracep->declBit(c+27,"i_fast_set", false,-1);
    tracep->declBit(c+122,"i_refclk", false,-1);
    tracep->declBit(c+19,"o_refclk_stb", false,-1);
    tracep->declBit(c+22,"o_refclk_1hz_stb", false,-1);
    tracep->declBit(c+25,"o_refclk_timeset_stb", false,-1);
    tracep->declBit(c+94,"refclk_pipe0", false,-1);
    tracep->declBit(c+95,"refclk_pipe1", false,-1);
    tracep->declBit(c+96,"refclk_ext", false,-1);
    tracep->declBus(c+97,"incriment", false,-1, 31,0);
    tracep->declBit(c+98,"div", false,-1);
    tracep->declBus(c+99,"div_count", false,-1, 15,0);
    tracep->pushNamePrefix("divider_inst ");
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+19,"i_en", false,-1);
    tracep->declBit(c+156,"i_load", false,-1);
    tracep->declBus(c+97,"i_incriment", false,-1, 31,0);
    tracep->declBit(c+98,"o_div", false,-1);
    tracep->declBit(c+25,"o_clk_overflow", false,-1);
    tracep->declBus(c+100,"counter", false,-1, 31,0);
    tracep->declBus(c+101,"incriment", false,-1, 31,0);
    tracep->declBit(c+102,"prev_out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("refclk_div_inst ");
    tracep->declBus(c+168,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+147,"OVERFLOW", false,-1, 31,0);
    tracep->declBit(c+121,"i_sysclk", false,-1);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+19,"i_en", false,-1);
    tracep->declBus(c+99,"o_count", false,-1, 15,0);
    tracep->declBit(c+22,"o_overflow", false,-1);
    tracep->declBus(c+99,"counter", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("shift_out_inst ");
    tracep->declBus(c+145,"SYS_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+146,"SHIFT_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+151,"SHIFT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+123,"i_en", false,-1);
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+103,"i_start_stb", false,-1);
    tracep->declBit(c+34,"o_busy", false,-1);
    tracep->declBus(c+12,"i_hours_msb", false,-1, 3,0);
    tracep->declBus(c+13,"i_hours_lsb", false,-1, 3,0);
    tracep->declBus(c+14,"i_minutes_msb", false,-1, 3,0);
    tracep->declBus(c+15,"i_minutes_lsb", false,-1, 3,0);
    tracep->declBus(c+16,"i_seconds_msb", false,-1, 3,0);
    tracep->declBus(c+17,"i_seconds_lsb", false,-1, 3,0);
    tracep->declBit(c+165,"i_dp_hours1", false,-1);
    tracep->declBit(c+165,"i_dp_hours2", false,-1);
    tracep->declBit(c+33,"i_dp_minutes1", false,-1);
    tracep->declBit(c+33,"i_dp_minutes2", false,-1);
    tracep->declBit(c+165,"i_dp_seconds1", false,-1);
    tracep->declBit(c+165,"i_dp_seconds2", false,-1);
    tracep->declBit(c+127,"o_serial_data", false,-1);
    tracep->declBit(c+129,"o_serial_latch", false,-1);
    tracep->declBit(c+128,"o_serial_clk", false,-1);
    tracep->declBus(c+1,"hours_msb_7seg", false,-1, 6,0);
    tracep->declBus(c+2,"hours_lsb_7seg", false,-1, 6,0);
    tracep->declBus(c+3,"minutes_msb_7seg", false,-1, 6,0);
    tracep->declBus(c+4,"minutes_lsb_7seg", false,-1, 6,0);
    tracep->declBus(c+5,"seconds_msb_7seg", false,-1, 6,0);
    tracep->declBus(c+6,"seconds_lsb_7seg", false,-1, 6,0);
    tracep->declQuad(c+7,"parallel_data", false,-1, 47,0);
    tracep->declBit(c+104,"clk_div", false,-1);
    tracep->declBit(c+105,"shift_clk_stb", false,-1);
    tracep->pushNamePrefix("hours_lsb_conv_inst ");
    tracep->declBus(c+13,"bcd", false,-1, 3,0);
    tracep->declBit(c+123,"en", false,-1);
    tracep->declBus(c+2,"led_out", false,-1, 6,0);
    tracep->declBus(c+139,"bcd_internal", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hours_msb_conv_inst ");
    tracep->declBus(c+12,"bcd", false,-1, 3,0);
    tracep->declBit(c+123,"en", false,-1);
    tracep->declBus(c+1,"led_out", false,-1, 6,0);
    tracep->declBus(c+140,"bcd_internal", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("minutes_lsb_conv_inst ");
    tracep->declBus(c+15,"bcd", false,-1, 3,0);
    tracep->declBit(c+123,"en", false,-1);
    tracep->declBus(c+4,"led_out", false,-1, 6,0);
    tracep->declBus(c+141,"bcd_internal", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("minutes_msb_conv_inst ");
    tracep->declBus(c+14,"bcd", false,-1, 3,0);
    tracep->declBit(c+123,"en", false,-1);
    tracep->declBus(c+3,"led_out", false,-1, 6,0);
    tracep->declBus(c+142,"bcd_internal", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seconds_lsb_conv_inst ");
    tracep->declBus(c+17,"bcd", false,-1, 3,0);
    tracep->declBit(c+123,"en", false,-1);
    tracep->declBus(c+6,"led_out", false,-1, 6,0);
    tracep->declBus(c+143,"bcd_internal", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seconds_msb_conv_inst ");
    tracep->declBus(c+16,"bcd", false,-1, 3,0);
    tracep->declBit(c+123,"en", false,-1);
    tracep->declBus(c+5,"led_out", false,-1, 6,0);
    tracep->declBus(c+144,"bcd_internal", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift_out_inst ");
    tracep->declBus(c+151,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+105,"i_clk_stb", false,-1);
    tracep->declBit(c+103,"i_start_stb", false,-1);
    tracep->declBit(c+34,"o_busy", false,-1);
    tracep->declQuad(c+7,"i_parallel_data", false,-1, 47,0);
    tracep->declBit(c+127,"o_serial_data", false,-1);
    tracep->declBit(c+128,"o_serial_clk", false,-1);
    tracep->declBit(c+129,"o_serial_latch", false,-1);
    tracep->declBus(c+169,"IDLE", false,-1, 31,0);
    tracep->declBus(c+152,"LOAD", false,-1, 31,0);
    tracep->declBus(c+150,"TRANSFER", false,-1, 31,0);
    tracep->declBus(c+170,"LATCH", false,-1, 31,0);
    tracep->declBus(c+106,"state", false,-1, 2,0);
    tracep->declArray(c+107,"transfer_state", false,-1, 96,0);
    tracep->declBit(c+111,"serial_clk", false,-1);
    tracep->declBit(c+112,"serial_latch", false,-1);
    tracep->declQuad(c+113,"serial_data", false,-1, 47,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift_reg_div_inst ");
    tracep->declBus(c+145,"SYS_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+146,"OUT_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+171,"INCRIMENT", false,-1, 31,0);
    tracep->declBit(c+121,"i_sysclk", false,-1);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+156,"i_en", false,-1);
    tracep->declBit(c+104,"o_div", false,-1);
    tracep->declBit(c+105,"o_clk_overflow", false,-1);
    tracep->declBus(c+115,"counter", false,-1, 31,0);
    tracep->declBit(c+116,"prev_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("use_refclk_db_inst ");
    tracep->declBus(c+149,"NUM_SAMPLES", false,-1, 31,0);
    tracep->declBit(c+120,"i_reset_n", false,-1);
    tracep->declBit(c+121,"i_clk", false,-1);
    tracep->declBit(c+123,"i_en", false,-1);
    tracep->declBit(c+23,"i_sample_stb", false,-1);
    tracep->declBit(c+125,"i_button", false,-1);
    tracep->declBit(c+28,"o_button_state", false,-1);
    tracep->declBit(c+117,"sample_pipe", false,-1);
    tracep->declBit(c+118,"sample_ext", false,-1);
    tracep->declBus(c+119,"samples", false,-1, 4,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vclock_wrapper_tb___024root__trace_init_top(Vclock_wrapper_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root__trace_init_top\n"); );
    // Body
    Vclock_wrapper_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vclock_wrapper_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vclock_wrapper_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vclock_wrapper_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vclock_wrapper_tb___024root__trace_register(Vclock_wrapper_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vclock_wrapper_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vclock_wrapper_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vclock_wrapper_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vclock_wrapper_tb___024root__trace_full_sub_0(Vclock_wrapper_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vclock_wrapper_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root__trace_full_top_0\n"); );
    // Init
    Vclock_wrapper_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclock_wrapper_tb___024root*>(voidSelf);
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vclock_wrapper_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vclock_wrapper_tb___024root__trace_full_sub_0(Vclock_wrapper_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__hours_msb_7seg),7);
    bufp->fullCData(oldp+2,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__hours_lsb_7seg),7);
    bufp->fullCData(oldp+3,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__minutes_msb_7seg),7);
    bufp->fullCData(oldp+4,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__minutes_lsb_7seg),7);
    bufp->fullCData(oldp+5,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__seconds_msb_7seg),7);
    bufp->fullCData(oldp+6,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__seconds_lsb_7seg),7);
    bufp->fullQData(oldp+7,((((QData)((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__hours_msb_7seg)) 
                              << 0x28U) | (((QData)((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__hours_lsb_7seg)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__colon_blink) 
                                                               << 0x1fU) 
                                                              | (((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__minutes_msb_7seg) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__colon_blink) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__minutes_lsb_7seg) 
                                                                        << 0x10U) 
                                                                       | (((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__seconds_msb_7seg) 
                                                                           << 8U) 
                                                                          | (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__seconds_lsb_7seg))))))))))),48);
    bufp->fullCData(oldp+9,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter),6);
    bufp->fullCData(oldp+10,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter),6);
    bufp->fullCData(oldp+11,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter),5);
    bufp->fullCData(oldp+12,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_msb_reg),4);
    bufp->fullCData(oldp+13,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_lsb_reg),4);
    bufp->fullCData(oldp+14,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_msb_reg),4);
    bufp->fullCData(oldp+15,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_lsb_reg),4);
    bufp->fullCData(oldp+16,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_msb_reg),4);
    bufp->fullCData(oldp+17,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_lsb_reg),4);
    bufp->fullBit(oldp+18,((vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter 
                            >> 0x1fU)));
    bufp->fullBit(oldp+19,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_stb));
    bufp->fullBit(oldp+20,((vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__debounce_clk_inst__DOT__counter 
                            >> 0x1fU)));
    bufp->fullBit(oldp+21,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clk_1hz_stb));
    bufp->fullBit(oldp+22,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_1hz_stb));
    bufp->fullBit(oldp+23,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__debounce_stb));
    bufp->fullBit(oldp+24,(((~ (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out)) 
                            & (vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
                               >> 0x1fU))));
    bufp->fullBit(oldp+25,(((~ (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__prev_out)) 
                            & (vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__counter 
                               >> 0x1fU))));
    bufp->fullBit(oldp+26,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clk_update_stb));
    bufp->fullBit(oldp+27,((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__samples))));
    bufp->fullBit(oldp+28,((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__samples))));
    bufp->fullCData(oldp+29,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode_db),2);
    bufp->fullBit(oldp+30,(((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__samples))
                             ? (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_1hz_stb)
                             : (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clk_1hz_stb))));
    bufp->fullBit(oldp+31,((1U & ((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__samples))
                                   ? ((~ (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__prev_out)) 
                                      & (vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__counter 
                                         >> 0x1fU))
                                   : ((~ (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out)) 
                                      & (vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
                                         >> 0x1fU))))));
    bufp->fullCData(oldp+32,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_stb_delay),4);
    bufp->fullBit(oldp+33,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__colon_blink));
    bufp->fullBit(oldp+34,((0U != (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state))));
    bufp->fullIData(oldp+35,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter),32);
    bufp->fullBit(oldp+36,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__prev_out));
    bufp->fullIData(oldp+37,(((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__samples))
                               ? 0x346dbU : 0x14f8aU)),32);
    bufp->fullBit(oldp+38,((vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
                            >> 0x1fU)));
    bufp->fullIData(oldp+39,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter),32);
    bufp->fullIData(oldp+40,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__incriment),32);
    bufp->fullBit(oldp+41,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out));
    bufp->fullBit(oldp+42,((0U != (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode_db))));
    bufp->fullBit(oldp+43,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count));
    bufp->fullBit(oldp+44,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count));
    bufp->fullBit(oldp+45,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count));
    bufp->fullBit(oldp+46,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_reset));
    bufp->fullBit(oldp+47,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_overflow));
    bufp->fullBit(oldp+48,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_overflow));
    bufp->fullBit(oldp+49,(((0x17U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                            & (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count))));
    bufp->fullIData(oldp+50,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__debounce_clk_inst__DOT__counter),32);
    bufp->fullBit(oldp+51,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__debounce_clk_inst__DOT__prev_out));
    bufp->fullCData(oldp+52,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_msb),4);
    bufp->fullCData(oldp+53,((0xfU & (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_lsb))),4);
    bufp->fullCData(oldp+54,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_msb),4);
    bufp->fullCData(oldp+55,((0xfU & (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_lsb))),4);
    bufp->fullCData(oldp+56,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_msb),4);
    bufp->fullCData(oldp+57,((0xfU & (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_lsb))),4);
    bufp->fullCData(oldp+58,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter),6);
    bufp->fullBit(oldp+59,((0xaU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))));
    bufp->fullBit(oldp+60,(((0xaU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                            & (0x14U > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+61,(((0x14U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                            & (0x1eU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+62,((0x1eU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))));
    bufp->fullCData(oldp+63,((((0x1eU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                               << 3U) | ((((0x14U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                                           & (0x1eU 
                                              > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))) 
                                          << 2U) | 
                                         ((((0xaU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                                            & (0x14U 
                                               > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))) 
                                           << 1U) | 
                                          (0xaU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)))))),7);
    bufp->fullCData(oldp+64,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_lsb),6);
    bufp->fullBit(oldp+65,((0xaU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))));
    bufp->fullBit(oldp+66,(((0xaU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                            & (0x14U > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+67,(((0x14U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                            & (0x1eU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+68,(((0x1eU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                            & (0x28U > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+69,(((0x28U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                            & (0x32U > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+70,(((0x32U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                            & (0x3cU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+71,((0x3cU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))));
    bufp->fullCData(oldp+72,((((0x3cU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                               << 6U) | ((((0x32U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                           & (0x3cU 
                                              > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                          << 5U) | 
                                         ((((0x28U 
                                             <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                            & (0x32U 
                                               > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                           << 4U) | 
                                          ((((0x1eU 
                                              <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                             & (0x28U 
                                                > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                            << 3U) 
                                           | ((((0x14U 
                                                 <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                                & (0x1eU 
                                                   > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                               << 2U) 
                                              | ((((0xaU 
                                                    <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                                   & (0x14U 
                                                      > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                                  << 1U) 
                                                 | (0xaU 
                                                    > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))))))))),7);
    bufp->fullCData(oldp+73,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_lsb),6);
    bufp->fullBit(oldp+74,((0xaU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))));
    bufp->fullBit(oldp+75,(((0xaU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                            & (0x14U > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+76,(((0x14U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                            & (0x1eU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+77,(((0x1eU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                            & (0x28U > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+78,(((0x28U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                            & (0x32U > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+79,(((0x32U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                            & (0x3cU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+80,((0x3cU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))));
    bufp->fullCData(oldp+81,((((0x3cU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                               << 6U) | ((((0x32U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                           & (0x3cU 
                                              > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                          << 5U) | 
                                         ((((0x28U 
                                             <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                            & (0x32U 
                                               > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                           << 4U) | 
                                          ((((0x1eU 
                                              <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                             & (0x28U 
                                                > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                            << 3U) 
                                           | ((((0x14U 
                                                 <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                                & (0x1eU 
                                                   > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                               << 2U) 
                                              | ((((0xaU 
                                                    <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                                   & (0x14U 
                                                      > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                                  << 1U) 
                                                 | (0xaU 
                                                    > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))))))))),7);
    bufp->fullCData(oldp+82,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_lsb),6);
    bufp->fullBit(oldp+83,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__sample_pipe));
    bufp->fullBit(oldp+84,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__sample_ext));
    bufp->fullCData(oldp+85,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__samples),5);
    bufp->fullBit(oldp+86,((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode0_db_inst__DOT__samples))));
    bufp->fullBit(oldp+87,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode0_db_inst__DOT__sample_pipe));
    bufp->fullBit(oldp+88,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode0_db_inst__DOT__sample_ext));
    bufp->fullCData(oldp+89,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode0_db_inst__DOT__samples),5);
    bufp->fullBit(oldp+90,((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode1_db_inst__DOT__samples))));
    bufp->fullBit(oldp+91,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode1_db_inst__DOT__sample_pipe));
    bufp->fullBit(oldp+92,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode1_db_inst__DOT__sample_ext));
    bufp->fullCData(oldp+93,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode1_db_inst__DOT__samples),5);
    bufp->fullBit(oldp+94,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_pipe0));
    bufp->fullBit(oldp+95,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_pipe1));
    bufp->fullBit(oldp+96,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_ext));
    bufp->fullIData(oldp+97,(((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__samples))
                               ? 0xa009fU : 0x3ffffU)),32);
    bufp->fullBit(oldp+98,((vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__counter 
                            >> 0x1fU)));
    bufp->fullSData(oldp+99,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_div_inst__DOT__counter),16);
    bufp->fullIData(oldp+100,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__counter),32);
    bufp->fullIData(oldp+101,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__incriment),32);
    bufp->fullBit(oldp+102,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__prev_out));
    bufp->fullBit(oldp+103,((1U & ((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_stb_delay) 
                                   >> 3U))));
    bufp->fullBit(oldp+104,((vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter 
                             >> 0x1fU)));
    bufp->fullBit(oldp+105,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_clk_stb));
    bufp->fullCData(oldp+106,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state),3);
    bufp->fullWData(oldp+107,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state),97);
    bufp->fullBit(oldp+111,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk));
    bufp->fullBit(oldp+112,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_latch));
    bufp->fullQData(oldp+113,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data),48);
    bufp->fullIData(oldp+115,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter),32);
    bufp->fullBit(oldp+116,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__prev_out));
    bufp->fullBit(oldp+117,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__sample_pipe));
    bufp->fullBit(oldp+118,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__sample_ext));
    bufp->fullCData(oldp+119,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__samples),5);
    bufp->fullBit(oldp+120,(vlSelf->i_reset_n));
    bufp->fullBit(oldp+121,(vlSelf->i_clk));
    bufp->fullBit(oldp+122,(vlSelf->i_refclk));
    bufp->fullBit(oldp+123,(vlSelf->i_en));
    bufp->fullBit(oldp+124,(vlSelf->i_fast_set));
    bufp->fullBit(oldp+125,(vlSelf->i_use_refclk));
    bufp->fullCData(oldp+126,(vlSelf->i_mode),2);
    bufp->fullBit(oldp+127,(vlSelf->o_serial_data));
    bufp->fullBit(oldp+128,(vlSelf->o_serial_clk));
    bufp->fullBit(oldp+129,(vlSelf->o_serial_latch));
    bufp->fullQData(oldp+130,(vlSelf->o_parallel_data),48);
    bufp->fullQData(oldp+132,(vlSelf->clock_wrapper_tb__DOT__shift_in_reg),48);
    bufp->fullQData(oldp+134,(vlSelf->clock_wrapper_tb__DOT__parallel_out_reg),48);
    bufp->fullBit(oldp+136,(((~ ((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clk_update_stb) 
                                 & (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_reset))) 
                             & (IData)(vlSelf->i_reset_n))));
    bufp->fullBit(oldp+137,((1U & (IData)(vlSelf->i_mode))));
    bufp->fullBit(oldp+138,((1U & ((IData)(vlSelf->i_mode) 
                                   >> 1U))));
    bufp->fullCData(oldp+139,(((IData)(vlSelf->i_en)
                                ? (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_lsb_reg)
                                : 0xaU)),4);
    bufp->fullCData(oldp+140,(((IData)(vlSelf->i_en)
                                ? (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_msb_reg)
                                : 0xaU)),4);
    bufp->fullCData(oldp+141,(((IData)(vlSelf->i_en)
                                ? (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_lsb_reg)
                                : 0xaU)),4);
    bufp->fullCData(oldp+142,(((IData)(vlSelf->i_en)
                                ? (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_msb_reg)
                                : 0xaU)),4);
    bufp->fullCData(oldp+143,(((IData)(vlSelf->i_en)
                                ? (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_lsb_reg)
                                : 0xaU)),4);
    bufp->fullCData(oldp+144,(((IData)(vlSelf->i_en)
                                ? (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_msb_reg)
                                : 0xaU)),4);
    bufp->fullIData(oldp+145,(0x186a0U),32);
    bufp->fullIData(oldp+146,(0x3e8U),32);
    bufp->fullIData(oldp+147,(0x8000U),32);
    bufp->fullIData(oldp+148,(0x2710U),32);
    bufp->fullIData(oldp+149,(5U),32);
    bufp->fullIData(oldp+150,(2U),32);
    bufp->fullIData(oldp+151,(0x30U),32);
    bufp->fullIData(oldp+152,(1U),32);
    bufp->fullIData(oldp+153,(0xa7c5U),32);
    bufp->fullIData(oldp+154,(0x346dbU),32);
    bufp->fullIData(oldp+155,(0x14f8aU),32);
    bufp->fullBit(oldp+156,(1U));
    bufp->fullCData(oldp+157,(0U),2);
    bufp->fullCData(oldp+158,(1U),2);
    bufp->fullCData(oldp+159,(2U),2);
    bufp->fullCData(oldp+160,(3U),2);
    bufp->fullIData(oldp+161,(0x18U),32);
    bufp->fullIData(oldp+162,(6U),32);
    bufp->fullIData(oldp+163,(0x3cU),32);
    bufp->fullIData(oldp+164,(0x20000000U),32);
    bufp->fullBit(oldp+165,(0U));
    bufp->fullIData(oldp+166,(0xa009fU),32);
    bufp->fullIData(oldp+167,(0x3ffffU),32);
    bufp->fullIData(oldp+168,(0x10U),32);
    bufp->fullIData(oldp+169,(0U),32);
    bufp->fullIData(oldp+170,(3U),32);
    bufp->fullIData(oldp+171,(0x28f5c28U),32);
}

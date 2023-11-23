// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vclock_wrapper__Syms.h"


VL_ATTR_COLD void Vclock_wrapper___024root__trace_init_sub__TOP__0(Vclock_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+82,"i_clk", false,-1);
    tracep->declBit(c+83,"i_reset_n", false,-1);
    tracep->declBit(c+84,"i_en", false,-1);
    tracep->declBit(c+85,"i_fast_set", false,-1);
    tracep->declBus(c+86,"i_mode", false,-1, 1,0);
    tracep->declBit(c+87,"o_serial_data", false,-1);
    tracep->declBit(c+88,"o_serial_latch", false,-1);
    tracep->declBit(c+89,"o_serial_clk", false,-1);
    tracep->pushNamePrefix("clock_wrapper ");
    tracep->declBus(c+99,"SYS_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+100,"SHIFT_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+101,"FAST_SET_HZ", false,-1, 31,0);
    tracep->declBus(c+102,"SLOW_SET_HZ", false,-1, 31,0);
    tracep->declBit(c+82,"i_clk", false,-1);
    tracep->declBit(c+83,"i_reset_n", false,-1);
    tracep->declBit(c+84,"i_en", false,-1);
    tracep->declBit(c+85,"i_fast_set", false,-1);
    tracep->declBus(c+86,"i_mode", false,-1, 1,0);
    tracep->declBit(c+87,"o_serial_data", false,-1);
    tracep->declBit(c+88,"o_serial_latch", false,-1);
    tracep->declBit(c+89,"o_serial_clk", false,-1);
    tracep->declBus(c+10,"clock_seconds", false,-1, 5,0);
    tracep->declBus(c+11,"clock_minutes", false,-1, 5,0);
    tracep->declBus(c+12,"clock_hours", false,-1, 4,0);
    tracep->declBus(c+13,"hours_msb", false,-1, 3,0);
    tracep->declBus(c+14,"hours_lsb", false,-1, 3,0);
    tracep->declBus(c+15,"minutes_msb", false,-1, 3,0);
    tracep->declBus(c+16,"minutes_lsb", false,-1, 3,0);
    tracep->declBus(c+17,"seconds_msb", false,-1, 3,0);
    tracep->declBus(c+18,"seconds_lsb", false,-1, 3,0);
    tracep->declBit(c+19,"clk_1hz", false,-1);
    tracep->declBit(c+20,"clk_1hz_stb", false,-1);
    tracep->declBit(c+21,"timeset_stb", false,-1);
    tracep->declBit(c+1,"clk_update_stb", false,-1);
    tracep->declBus(c+22,"shift_out_stb_delay", false,-1, 3,0);
    tracep->declBit(c+23,"serial_busy", false,-1);
    tracep->pushNamePrefix("clock_gen_inst ");
    tracep->declBus(c+99,"SYS_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+101,"FAST_SET_HZ", false,-1, 31,0);
    tracep->declBus(c+102,"SLOW_SET_HZ", false,-1, 31,0);
    tracep->declBit(c+82,"i_clk", false,-1);
    tracep->declBit(c+83,"i_reset_n", false,-1);
    tracep->declBit(c+84,"i_en", false,-1);
    tracep->declBit(c+85,"i_fast_set", false,-1);
    tracep->declBit(c+19,"o_1hz_clk", false,-1);
    tracep->declBit(c+20,"o_1hz_stb", false,-1);
    tracep->declBit(c+21,"o_timeset_stb", false,-1);
    tracep->pushNamePrefix("sysclk_div_inst ");
    tracep->declBus(c+99,"SYS_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+103,"OUT_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+104,"INCRIMENT", false,-1, 31,0);
    tracep->declBit(c+82,"i_sysclk", false,-1);
    tracep->declBit(c+83,"i_reset_n", false,-1);
    tracep->declBit(c+84,"i_en", false,-1);
    tracep->declBit(c+19,"o_div", false,-1);
    tracep->declBit(c+20,"o_clk_overflow", false,-1);
    tracep->declBus(c+24,"counter", false,-1, 31,0);
    tracep->declBit(c+25,"prev_out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("timeset_div_inst ");
    tracep->declBus(c+99,"SYS_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+101,"FAST_SET_HZ", false,-1, 31,0);
    tracep->declBus(c+102,"SLOW_SET_HZ", false,-1, 31,0);
    tracep->declBus(c+105,"FAST_INC", false,-1, 31,0);
    tracep->declBus(c+106,"SLOW_INC", false,-1, 31,0);
    tracep->declBit(c+82,"i_clk", false,-1);
    tracep->declBit(c+83,"i_reset_n", false,-1);
    tracep->declBit(c+84,"i_en", false,-1);
    tracep->declBit(c+85,"i_fast_set", false,-1);
    tracep->declBit(c+21,"o_timeset_stb", false,-1);
    tracep->declBus(c+90,"incriment", false,-1, 31,0);
    tracep->declBit(c+26,"div", false,-1);
    tracep->pushNamePrefix("divider_inst ");
    tracep->declBit(c+82,"i_clk", false,-1);
    tracep->declBit(c+83,"i_reset_n", false,-1);
    tracep->declBit(c+84,"i_en", false,-1);
    tracep->declBit(c+107,"i_load", false,-1);
    tracep->declBus(c+90,"i_incriment", false,-1, 31,0);
    tracep->declBit(c+26,"o_div", false,-1);
    tracep->declBit(c+21,"o_clk_overflow", false,-1);
    tracep->declBus(c+27,"counter", false,-1, 31,0);
    tracep->declBus(c+28,"incriment", false,-1, 31,0);
    tracep->declBit(c+29,"prev_out", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("clock_inst ");
    tracep->declBit(c+82,"i_clk", false,-1);
    tracep->declBit(c+83,"i_reset_n", false,-1);
    tracep->declBit(c+20,"i_1hz_stb", false,-1);
    tracep->declBit(c+21,"i_timeset_stb", false,-1);
    tracep->declBit(c+1,"o_clk_stb", false,-1);
    tracep->declBus(c+86,"i_mode", false,-1, 1,0);
    tracep->declBus(c+10,"o_seconds", false,-1, 5,0);
    tracep->declBus(c+11,"o_minutes", false,-1, 5,0);
    tracep->declBus(c+12,"o_hours", false,-1, 4,0);
    tracep->declBus(c+86,"timeset_mode", false,-1, 1,0);
    tracep->declBit(c+91,"is_timeset_mode", false,-1);
    tracep->declBit(c+1,"time_reg_stb", false,-1);
    tracep->pushNamePrefix("time_reg_inst ");
    tracep->declBit(c+82,"i_clk", false,-1);
    tracep->declBit(c+83,"i_reset_n", false,-1);
    tracep->declBit(c+1,"i_en", false,-1);
    tracep->declBus(c+86,"i_mode", false,-1, 1,0);
    tracep->declBus(c+10,"o_seconds", false,-1, 5,0);
    tracep->declBus(c+11,"o_minutes", false,-1, 5,0);
    tracep->declBus(c+12,"o_hours", false,-1, 4,0);
    tracep->declBit(c+30,"seconds_count", false,-1);
    tracep->declBit(c+31,"hours_count", false,-1);
    tracep->declBit(c+32,"minutes_count", false,-1);
    tracep->declBit(c+33,"seconds_reset", false,-1);
    tracep->declBit(c+34,"seconds_overflow", false,-1);
    tracep->declBit(c+35,"minutes_overflow", false,-1);
    tracep->declBit(c+36,"hours_overflow", false,-1);
    tracep->declBus(c+108,"COUNTING", false,-1, 1,0);
    tracep->declBus(c+109,"SET_MINUTES", false,-1, 1,0);
    tracep->declBus(c+110,"SET_HOURS", false,-1, 1,0);
    tracep->declBus(c+111,"CLEAR_SECONDS", false,-1, 1,0);
    tracep->declBit(c+92,"seconds_reset_n", false,-1);
    tracep->pushNamePrefix("hours_count_inst ");
    tracep->declBus(c+101,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+112,"OVERFLOW", false,-1, 31,0);
    tracep->declBit(c+82,"i_sysclk", false,-1);
    tracep->declBit(c+83,"i_reset_n", false,-1);
    tracep->declBit(c+31,"i_en", false,-1);
    tracep->declBus(c+12,"o_count", false,-1, 4,0);
    tracep->declBit(c+36,"o_overflow", false,-1);
    tracep->declBus(c+12,"counter", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("minutes_count_inst ");
    tracep->declBus(c+113,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"OVERFLOW", false,-1, 31,0);
    tracep->declBit(c+82,"i_sysclk", false,-1);
    tracep->declBit(c+83,"i_reset_n", false,-1);
    tracep->declBit(c+32,"i_en", false,-1);
    tracep->declBus(c+11,"o_count", false,-1, 5,0);
    tracep->declBit(c+35,"o_overflow", false,-1);
    tracep->declBus(c+11,"counter", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seconds_count_inst ");
    tracep->declBus(c+113,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"OVERFLOW", false,-1, 31,0);
    tracep->declBit(c+82,"i_sysclk", false,-1);
    tracep->declBit(c+92,"i_reset_n", false,-1);
    tracep->declBit(c+30,"i_en", false,-1);
    tracep->declBus(c+10,"o_count", false,-1, 5,0);
    tracep->declBit(c+34,"o_overflow", false,-1);
    tracep->declBus(c+10,"counter", false,-1, 5,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("disp_out ");
    tracep->declBit(c+82,"i_clk", false,-1);
    tracep->declBit(c+83,"i_reset_n", false,-1);
    tracep->declBus(c+10,"i_seconds", false,-1, 5,0);
    tracep->declBus(c+11,"i_minutes", false,-1, 5,0);
    tracep->declBus(c+12,"i_hours", false,-1, 4,0);
    tracep->declBus(c+13,"o_hours_msb", false,-1, 3,0);
    tracep->declBus(c+14,"o_hours_lsb", false,-1, 3,0);
    tracep->declBus(c+15,"o_minutes_msb", false,-1, 3,0);
    tracep->declBus(c+16,"o_minutes_lsb", false,-1, 3,0);
    tracep->declBus(c+17,"o_seconds_msb", false,-1, 3,0);
    tracep->declBus(c+18,"o_seconds_lsb", false,-1, 3,0);
    tracep->declBus(c+37,"hours_msb", false,-1, 3,0);
    tracep->declBus(c+38,"hours_lsb", false,-1, 3,0);
    tracep->declBus(c+39,"minutes_msb", false,-1, 3,0);
    tracep->declBus(c+40,"minutes_lsb", false,-1, 3,0);
    tracep->declBus(c+41,"seconds_msb", false,-1, 3,0);
    tracep->declBus(c+42,"seconds_lsb", false,-1, 3,0);
    tracep->declBus(c+13,"hours_msb_reg", false,-1, 3,0);
    tracep->declBus(c+14,"hours_lsb_reg", false,-1, 3,0);
    tracep->declBus(c+15,"minutes_msb_reg", false,-1, 3,0);
    tracep->declBus(c+16,"minutes_lsb_reg", false,-1, 3,0);
    tracep->declBus(c+17,"seconds_msb_reg", false,-1, 3,0);
    tracep->declBus(c+18,"seconds_lsb_reg", false,-1, 3,0);
    tracep->declBus(c+43,"hours_int", false,-1, 5,0);
    tracep->pushNamePrefix("hours_bcd_inst ");
    tracep->declBit(c+82,"i_clk", false,-1);
    tracep->declBus(c+43,"i_bin", false,-1, 5,0);
    tracep->declBus(c+38,"o_bcd_lsb", false,-1, 3,0);
    tracep->declBus(c+37,"o_bcd_msb", false,-1, 3,0);
    tracep->declBit(c+44,"msb_0", false,-1);
    tracep->declBit(c+45,"msb_1", false,-1);
    tracep->declBit(c+46,"msb_2", false,-1);
    tracep->declBit(c+47,"msb_3", false,-1);
    tracep->declBit(c+115,"msb_4", false,-1);
    tracep->declBit(c+115,"msb_5", false,-1);
    tracep->declBit(c+115,"msb_6", false,-1);
    tracep->declBus(c+48,"msb_one_hot", false,-1, 6,0);
    tracep->declBus(c+37,"bcd_msb", false,-1, 3,0);
    tracep->declBus(c+49,"bcd_lsb", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("minutes_bcd_inst ");
    tracep->declBit(c+82,"i_clk", false,-1);
    tracep->declBus(c+11,"i_bin", false,-1, 5,0);
    tracep->declBus(c+40,"o_bcd_lsb", false,-1, 3,0);
    tracep->declBus(c+39,"o_bcd_msb", false,-1, 3,0);
    tracep->declBit(c+50,"msb_0", false,-1);
    tracep->declBit(c+51,"msb_1", false,-1);
    tracep->declBit(c+52,"msb_2", false,-1);
    tracep->declBit(c+53,"msb_3", false,-1);
    tracep->declBit(c+54,"msb_4", false,-1);
    tracep->declBit(c+55,"msb_5", false,-1);
    tracep->declBit(c+56,"msb_6", false,-1);
    tracep->declBus(c+57,"msb_one_hot", false,-1, 6,0);
    tracep->declBus(c+39,"bcd_msb", false,-1, 3,0);
    tracep->declBus(c+58,"bcd_lsb", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seconds_bcd_inst ");
    tracep->declBit(c+82,"i_clk", false,-1);
    tracep->declBus(c+10,"i_bin", false,-1, 5,0);
    tracep->declBus(c+42,"o_bcd_lsb", false,-1, 3,0);
    tracep->declBus(c+41,"o_bcd_msb", false,-1, 3,0);
    tracep->declBit(c+59,"msb_0", false,-1);
    tracep->declBit(c+60,"msb_1", false,-1);
    tracep->declBit(c+61,"msb_2", false,-1);
    tracep->declBit(c+62,"msb_3", false,-1);
    tracep->declBit(c+63,"msb_4", false,-1);
    tracep->declBit(c+64,"msb_5", false,-1);
    tracep->declBit(c+65,"msb_6", false,-1);
    tracep->declBus(c+66,"msb_one_hot", false,-1, 6,0);
    tracep->declBus(c+41,"bcd_msb", false,-1, 3,0);
    tracep->declBus(c+67,"bcd_lsb", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("shift_out_inst ");
    tracep->declBus(c+99,"SYS_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+100,"SHIFT_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+116,"SHIFT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+84,"i_en", false,-1);
    tracep->declBit(c+82,"i_clk", false,-1);
    tracep->declBit(c+83,"i_reset_n", false,-1);
    tracep->declBit(c+68,"i_start_stb", false,-1);
    tracep->declBit(c+23,"o_busy", false,-1);
    tracep->declBus(c+13,"i_hours_msb", false,-1, 3,0);
    tracep->declBus(c+14,"i_hours_lsb", false,-1, 3,0);
    tracep->declBus(c+15,"i_minutes_msb", false,-1, 3,0);
    tracep->declBus(c+16,"i_minutes_lsb", false,-1, 3,0);
    tracep->declBus(c+17,"i_seconds_msb", false,-1, 3,0);
    tracep->declBus(c+18,"i_seconds_lsb", false,-1, 3,0);
    tracep->declBit(c+115,"i_dp_hours1", false,-1);
    tracep->declBit(c+115,"i_dp_hours2", false,-1);
    tracep->declBit(c+19,"i_dp_minutes1", false,-1);
    tracep->declBit(c+19,"i_dp_minutes2", false,-1);
    tracep->declBit(c+115,"i_dp_seconds1", false,-1);
    tracep->declBit(c+115,"i_dp_seconds2", false,-1);
    tracep->declBit(c+87,"o_serial_data", false,-1);
    tracep->declBit(c+88,"o_serial_latch", false,-1);
    tracep->declBit(c+89,"o_serial_clk", false,-1);
    tracep->declBus(c+2,"hours_msb_7seg", false,-1, 6,0);
    tracep->declBus(c+3,"hours_lsb_7seg", false,-1, 6,0);
    tracep->declBus(c+4,"minutes_msb_7seg", false,-1, 6,0);
    tracep->declBus(c+5,"minutes_lsb_7seg", false,-1, 6,0);
    tracep->declBus(c+6,"seconds_msb_7seg", false,-1, 6,0);
    tracep->declBus(c+7,"seconds_lsb_7seg", false,-1, 6,0);
    tracep->declQuad(c+8,"parallel_data", false,-1, 47,0);
    tracep->declBit(c+69,"clk_div", false,-1);
    tracep->declBit(c+70,"shift_clk_stb", false,-1);
    tracep->pushNamePrefix("hours_lsb_conv_inst ");
    tracep->declBus(c+14,"bcd", false,-1, 3,0);
    tracep->declBit(c+84,"en", false,-1);
    tracep->declBus(c+3,"led_out", false,-1, 6,0);
    tracep->declBus(c+93,"bcd_internal", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hours_msb_conv_inst ");
    tracep->declBus(c+13,"bcd", false,-1, 3,0);
    tracep->declBit(c+84,"en", false,-1);
    tracep->declBus(c+2,"led_out", false,-1, 6,0);
    tracep->declBus(c+94,"bcd_internal", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("minutes_lsb_conv_inst ");
    tracep->declBus(c+16,"bcd", false,-1, 3,0);
    tracep->declBit(c+84,"en", false,-1);
    tracep->declBus(c+5,"led_out", false,-1, 6,0);
    tracep->declBus(c+95,"bcd_internal", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("minutes_msb_conv_inst ");
    tracep->declBus(c+15,"bcd", false,-1, 3,0);
    tracep->declBit(c+84,"en", false,-1);
    tracep->declBus(c+4,"led_out", false,-1, 6,0);
    tracep->declBus(c+96,"bcd_internal", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seconds_lsb_conv_inst ");
    tracep->declBus(c+18,"bcd", false,-1, 3,0);
    tracep->declBit(c+84,"en", false,-1);
    tracep->declBus(c+7,"led_out", false,-1, 6,0);
    tracep->declBus(c+97,"bcd_internal", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seconds_msb_conv_inst ");
    tracep->declBus(c+17,"bcd", false,-1, 3,0);
    tracep->declBit(c+84,"en", false,-1);
    tracep->declBus(c+6,"led_out", false,-1, 6,0);
    tracep->declBus(c+98,"bcd_internal", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift_out_inst ");
    tracep->declBus(c+116,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+83,"i_reset_n", false,-1);
    tracep->declBit(c+82,"i_clk", false,-1);
    tracep->declBit(c+70,"i_clk_stb", false,-1);
    tracep->declBit(c+68,"i_start_stb", false,-1);
    tracep->declBit(c+23,"o_busy", false,-1);
    tracep->declQuad(c+8,"i_parallel_data", false,-1, 47,0);
    tracep->declBit(c+87,"o_serial_data", false,-1);
    tracep->declBit(c+89,"o_serial_clk", false,-1);
    tracep->declBit(c+88,"o_serial_latch", false,-1);
    tracep->declBus(c+117,"IDLE", false,-1, 31,0);
    tracep->declBus(c+103,"LOAD", false,-1, 31,0);
    tracep->declBus(c+102,"TRANSFER", false,-1, 31,0);
    tracep->declBus(c+118,"LATCH", false,-1, 31,0);
    tracep->declBus(c+71,"state", false,-1, 2,0);
    tracep->declArray(c+72,"transfer_state", false,-1, 96,0);
    tracep->declBit(c+76,"serial_clk", false,-1);
    tracep->declBit(c+77,"serial_latch", false,-1);
    tracep->declQuad(c+78,"serial_data", false,-1, 47,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift_reg_div_inst ");
    tracep->declBus(c+99,"SYS_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+100,"OUT_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+119,"INCRIMENT", false,-1, 31,0);
    tracep->declBit(c+82,"i_sysclk", false,-1);
    tracep->declBit(c+83,"i_reset_n", false,-1);
    tracep->declBit(c+107,"i_en", false,-1);
    tracep->declBit(c+69,"o_div", false,-1);
    tracep->declBit(c+70,"o_clk_overflow", false,-1);
    tracep->declBus(c+80,"counter", false,-1, 31,0);
    tracep->declBit(c+81,"prev_out", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vclock_wrapper___024root__trace_init_top(Vclock_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root__trace_init_top\n"); );
    // Body
    Vclock_wrapper___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vclock_wrapper___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vclock_wrapper___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vclock_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vclock_wrapper___024root__trace_register(Vclock_wrapper___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vclock_wrapper___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vclock_wrapper___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vclock_wrapper___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vclock_wrapper___024root__trace_full_sub_0(Vclock_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vclock_wrapper___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root__trace_full_top_0\n"); );
    // Init
    Vclock_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclock_wrapper___024root*>(voidSelf);
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vclock_wrapper___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vclock_wrapper___024root__trace_full_sub_0(Vclock_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clock_wrapper__DOT__clk_update_stb));
    bufp->fullCData(oldp+2,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__hours_msb_7seg),7);
    bufp->fullCData(oldp+3,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__hours_lsb_7seg),7);
    bufp->fullCData(oldp+4,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__minutes_msb_7seg),7);
    bufp->fullCData(oldp+5,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__minutes_lsb_7seg),7);
    bufp->fullCData(oldp+6,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__seconds_msb_7seg),7);
    bufp->fullCData(oldp+7,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__seconds_lsb_7seg),7);
    bufp->fullQData(oldp+8,((((QData)((IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__hours_msb_7seg)) 
                              << 0x28U) | (((QData)((IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__hours_lsb_7seg)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter) 
                                                              | (((IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__minutes_msb_7seg) 
                                                                  << 0x18U) 
                                                                 | ((0x800000U 
                                                                     & (vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter 
                                                                        >> 8U)) 
                                                                    | (((IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__minutes_lsb_7seg) 
                                                                        << 0x10U) 
                                                                       | (((IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__seconds_msb_7seg) 
                                                                           << 8U) 
                                                                          | (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__seconds_lsb_7seg))))))))))),48);
    bufp->fullCData(oldp+10,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter),6);
    bufp->fullCData(oldp+11,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter),6);
    bufp->fullCData(oldp+12,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter),5);
    bufp->fullCData(oldp+13,(vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_msb_reg),4);
    bufp->fullCData(oldp+14,(vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_lsb_reg),4);
    bufp->fullCData(oldp+15,(vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_msb_reg),4);
    bufp->fullCData(oldp+16,(vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_lsb_reg),4);
    bufp->fullCData(oldp+17,(vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_msb_reg),4);
    bufp->fullCData(oldp+18,(vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_lsb_reg),4);
    bufp->fullBit(oldp+19,((vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter 
                            >> 0x1fU)));
    bufp->fullBit(oldp+20,(((~ (IData)(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__prev_out)) 
                            & (vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter 
                               >> 0x1fU))));
    bufp->fullBit(oldp+21,(((~ (IData)(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out)) 
                            & (vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
                               >> 0x1fU))));
    bufp->fullCData(oldp+22,(vlSelf->clock_wrapper__DOT__shift_out_stb_delay),4);
    bufp->fullBit(oldp+23,((0U != (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state))));
    bufp->fullIData(oldp+24,(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter),32);
    bufp->fullBit(oldp+25,(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__prev_out));
    bufp->fullBit(oldp+26,((vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
                            >> 0x1fU)));
    bufp->fullIData(oldp+27,(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter),32);
    bufp->fullIData(oldp+28,(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__incriment),32);
    bufp->fullBit(oldp+29,(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out));
    bufp->fullBit(oldp+30,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count));
    bufp->fullBit(oldp+31,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count));
    bufp->fullBit(oldp+32,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count));
    bufp->fullBit(oldp+33,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_reset));
    bufp->fullBit(oldp+34,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_overflow));
    bufp->fullBit(oldp+35,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_overflow));
    bufp->fullBit(oldp+36,(((0x17U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                            & (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count))));
    bufp->fullCData(oldp+37,(vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_msb),4);
    bufp->fullCData(oldp+38,((0xfU & (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_lsb))),4);
    bufp->fullCData(oldp+39,(vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_msb),4);
    bufp->fullCData(oldp+40,((0xfU & (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_lsb))),4);
    bufp->fullCData(oldp+41,(vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_msb),4);
    bufp->fullCData(oldp+42,((0xfU & (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_lsb))),4);
    bufp->fullCData(oldp+43,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter),6);
    bufp->fullBit(oldp+44,((0xaU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))));
    bufp->fullBit(oldp+45,(((0xaU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                            & (0x14U > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+46,(((0x14U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                            & (0x1eU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+47,((0x1eU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))));
    bufp->fullCData(oldp+48,((((0x1eU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                               << 3U) | ((((0x14U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                                           & (0x1eU 
                                              > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))) 
                                          << 2U) | 
                                         ((((0xaU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                                            & (0x14U 
                                               > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))) 
                                           << 1U) | 
                                          (0xaU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)))))),7);
    bufp->fullCData(oldp+49,(vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_lsb),6);
    bufp->fullBit(oldp+50,((0xaU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))));
    bufp->fullBit(oldp+51,(((0xaU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                            & (0x14U > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+52,(((0x14U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                            & (0x1eU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+53,(((0x1eU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                            & (0x28U > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+54,(((0x28U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                            & (0x32U > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+55,(((0x32U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                            & (0x3cU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+56,((0x3cU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))));
    bufp->fullCData(oldp+57,((((0x3cU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                               << 6U) | ((((0x32U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                           & (0x3cU 
                                              > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                          << 5U) | 
                                         ((((0x28U 
                                             <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                            & (0x32U 
                                               > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                           << 4U) | 
                                          ((((0x1eU 
                                              <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                             & (0x28U 
                                                > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                            << 3U) 
                                           | ((((0x14U 
                                                 <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                                & (0x1eU 
                                                   > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                               << 2U) 
                                              | ((((0xaU 
                                                    <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                                   & (0x14U 
                                                      > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                                  << 1U) 
                                                 | (0xaU 
                                                    > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))))))))),7);
    bufp->fullCData(oldp+58,(vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_lsb),6);
    bufp->fullBit(oldp+59,((0xaU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))));
    bufp->fullBit(oldp+60,(((0xaU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                            & (0x14U > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+61,(((0x14U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                            & (0x1eU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+62,(((0x1eU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                            & (0x28U > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+63,(((0x28U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                            & (0x32U > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+64,(((0x32U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                            & (0x3cU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
    bufp->fullBit(oldp+65,((0x3cU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))));
    bufp->fullCData(oldp+66,((((0x3cU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                               << 6U) | ((((0x32U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                           & (0x3cU 
                                              > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                          << 5U) | 
                                         ((((0x28U 
                                             <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                            & (0x32U 
                                               > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                           << 4U) | 
                                          ((((0x1eU 
                                              <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                             & (0x28U 
                                                > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                            << 3U) 
                                           | ((((0x14U 
                                                 <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                                & (0x1eU 
                                                   > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                               << 2U) 
                                              | ((((0xaU 
                                                    <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                                   & (0x14U 
                                                      > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                                  << 1U) 
                                                 | (0xaU 
                                                    > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))))))))),7);
    bufp->fullCData(oldp+67,(vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_lsb),6);
    bufp->fullBit(oldp+68,((1U & ((IData)(vlSelf->clock_wrapper__DOT__shift_out_stb_delay) 
                                  >> 3U))));
    bufp->fullBit(oldp+69,((vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter 
                            >> 0x1fU)));
    bufp->fullBit(oldp+70,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_clk_stb));
    bufp->fullCData(oldp+71,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state),3);
    bufp->fullWData(oldp+72,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state),97);
    bufp->fullBit(oldp+76,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk));
    bufp->fullBit(oldp+77,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_latch));
    bufp->fullQData(oldp+78,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data),48);
    bufp->fullIData(oldp+80,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter),32);
    bufp->fullBit(oldp+81,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__prev_out));
    bufp->fullBit(oldp+82,(vlSelf->i_clk));
    bufp->fullBit(oldp+83,(vlSelf->i_reset_n));
    bufp->fullBit(oldp+84,(vlSelf->i_en));
    bufp->fullBit(oldp+85,(vlSelf->i_fast_set));
    bufp->fullCData(oldp+86,(vlSelf->i_mode),2);
    bufp->fullBit(oldp+87,(vlSelf->o_serial_data));
    bufp->fullBit(oldp+88,(vlSelf->o_serial_latch));
    bufp->fullBit(oldp+89,(vlSelf->o_serial_clk));
    bufp->fullIData(oldp+90,(((IData)(vlSelf->i_fast_set)
                               ? 0x20c49aU : 0xd1b70U)),32);
    bufp->fullBit(oldp+91,((0U != (IData)(vlSelf->i_mode))));
    bufp->fullBit(oldp+92,(((~ ((IData)(vlSelf->clock_wrapper__DOT__clk_update_stb) 
                                & (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_reset))) 
                            & (IData)(vlSelf->i_reset_n))));
    bufp->fullCData(oldp+93,(((IData)(vlSelf->i_en)
                               ? (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_lsb_reg)
                               : 0xaU)),4);
    bufp->fullCData(oldp+94,(((IData)(vlSelf->i_en)
                               ? (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_msb_reg)
                               : 0xaU)),4);
    bufp->fullCData(oldp+95,(((IData)(vlSelf->i_en)
                               ? (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_lsb_reg)
                               : 0xaU)),4);
    bufp->fullCData(oldp+96,(((IData)(vlSelf->i_en)
                               ? (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_msb_reg)
                               : 0xaU)),4);
    bufp->fullCData(oldp+97,(((IData)(vlSelf->i_en)
                               ? (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_lsb_reg)
                               : 0xaU)),4);
    bufp->fullCData(oldp+98,(((IData)(vlSelf->i_en)
                               ? (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_msb_reg)
                               : 0xaU)),4);
    bufp->fullIData(oldp+99,(0x2710U),32);
    bufp->fullIData(oldp+100,(0x3e8U),32);
    bufp->fullIData(oldp+101,(5U),32);
    bufp->fullIData(oldp+102,(2U),32);
    bufp->fullIData(oldp+103,(1U),32);
    bufp->fullIData(oldp+104,(0x68db8U),32);
    bufp->fullIData(oldp+105,(0x20c49aU),32);
    bufp->fullIData(oldp+106,(0xd1b70U),32);
    bufp->fullBit(oldp+107,(1U));
    bufp->fullCData(oldp+108,(0U),2);
    bufp->fullCData(oldp+109,(1U),2);
    bufp->fullCData(oldp+110,(2U),2);
    bufp->fullCData(oldp+111,(3U),2);
    bufp->fullIData(oldp+112,(0x18U),32);
    bufp->fullIData(oldp+113,(6U),32);
    bufp->fullIData(oldp+114,(0x3cU),32);
    bufp->fullBit(oldp+115,(0U));
    bufp->fullIData(oldp+116,(0x30U),32);
    bufp->fullIData(oldp+117,(0U),32);
    bufp->fullIData(oldp+118,(3U),32);
    bufp->fullIData(oldp+119,(0x20000000U),32);
}

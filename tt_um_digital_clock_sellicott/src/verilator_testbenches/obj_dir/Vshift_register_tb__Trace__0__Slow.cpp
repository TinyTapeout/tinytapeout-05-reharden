// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vshift_register_tb__Syms.h"


VL_ATTR_COLD void Vshift_register_tb___024root__trace_init_sub__TOP__0(Vshift_register_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+10,"i_reset_n", false,-1);
    tracep->declBit(c+11,"i_clk", false,-1);
    tracep->declBit(c+12,"i_start_stb", false,-1);
    tracep->declBit(c+13,"o_busy", false,-1);
    tracep->declBus(c+14,"i_parallel_data", false,-1, 7,0);
    tracep->declBit(c+15,"o_serial_data", false,-1);
    tracep->declBit(c+16,"o_serial_clk", false,-1);
    tracep->declBit(c+17,"o_serial_latch", false,-1);
    tracep->declBus(c+18,"o_parallel_data", false,-1, 7,0);
    tracep->pushNamePrefix("shift_register_tb ");
    tracep->declBus(c+21,"SYS_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+22,"SHIFT_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+23,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+10,"i_reset_n", false,-1);
    tracep->declBit(c+11,"i_clk", false,-1);
    tracep->declBit(c+12,"i_start_stb", false,-1);
    tracep->declBit(c+13,"o_busy", false,-1);
    tracep->declBus(c+14,"i_parallel_data", false,-1, 7,0);
    tracep->declBit(c+15,"o_serial_data", false,-1);
    tracep->declBit(c+16,"o_serial_clk", false,-1);
    tracep->declBit(c+17,"o_serial_latch", false,-1);
    tracep->declBus(c+18,"o_parallel_data", false,-1, 7,0);
    tracep->declBit(c+1,"clk_div", false,-1);
    tracep->declBit(c+2,"shift_clk_stb", false,-1);
    tracep->declBus(c+19,"shift_in_reg", false,-1, 7,0);
    tracep->declBus(c+20,"parallel_out_reg", false,-1, 7,0);
    tracep->pushNamePrefix("shift_out_inst ");
    tracep->declBus(c+23,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+10,"i_reset_n", false,-1);
    tracep->declBit(c+11,"i_clk", false,-1);
    tracep->declBit(c+2,"i_clk_stb", false,-1);
    tracep->declBit(c+12,"i_start_stb", false,-1);
    tracep->declBit(c+13,"o_busy", false,-1);
    tracep->declBus(c+14,"i_parallel_data", false,-1, 7,0);
    tracep->declBit(c+15,"o_serial_data", false,-1);
    tracep->declBit(c+16,"o_serial_clk", false,-1);
    tracep->declBit(c+17,"o_serial_latch", false,-1);
    tracep->declBus(c+24,"IDLE", false,-1, 31,0);
    tracep->declBus(c+25,"LOAD", false,-1, 31,0);
    tracep->declBus(c+26,"TRANSFER", false,-1, 31,0);
    tracep->declBus(c+27,"LATCH", false,-1, 31,0);
    tracep->declBus(c+3,"state", false,-1, 2,0);
    tracep->declBus(c+4,"transfer_state", false,-1, 16,0);
    tracep->declBit(c+5,"serial_clk", false,-1);
    tracep->declBit(c+6,"serial_latch", false,-1);
    tracep->declBus(c+7,"serial_data", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift_reg_div_inst ");
    tracep->declBus(c+21,"SYS_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+22,"OUT_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+28,"INCRIMENT", false,-1, 31,0);
    tracep->declBit(c+11,"i_sysclk", false,-1);
    tracep->declBit(c+10,"i_reset_n", false,-1);
    tracep->declBit(c+29,"i_en", false,-1);
    tracep->declBit(c+1,"o_div", false,-1);
    tracep->declBit(c+2,"o_clk_overflow", false,-1);
    tracep->declBus(c+8,"counter", false,-1, 31,0);
    tracep->declBit(c+9,"prev_out", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vshift_register_tb___024root__trace_init_top(Vshift_register_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root__trace_init_top\n"); );
    // Body
    Vshift_register_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vshift_register_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vshift_register_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vshift_register_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vshift_register_tb___024root__trace_register(Vshift_register_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vshift_register_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vshift_register_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vshift_register_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vshift_register_tb___024root__trace_full_sub_0(Vshift_register_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vshift_register_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root__trace_full_top_0\n"); );
    // Init
    Vshift_register_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshift_register_tb___024root*>(voidSelf);
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vshift_register_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vshift_register_tb___024root__trace_full_sub_0(Vshift_register_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__counter 
                           >> 0x1fU)));
    bufp->fullBit(oldp+2,(vlSelf->shift_register_tb__DOT__shift_clk_stb));
    bufp->fullCData(oldp+3,(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state),3);
    bufp->fullIData(oldp+4,(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__transfer_state),17);
    bufp->fullBit(oldp+5,(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_clk));
    bufp->fullBit(oldp+6,(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_latch));
    bufp->fullCData(oldp+7,(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_data),8);
    bufp->fullIData(oldp+8,(vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__counter),32);
    bufp->fullBit(oldp+9,(vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__prev_out));
    bufp->fullBit(oldp+10,(vlSelf->i_reset_n));
    bufp->fullBit(oldp+11,(vlSelf->i_clk));
    bufp->fullBit(oldp+12,(vlSelf->i_start_stb));
    bufp->fullBit(oldp+13,(vlSelf->o_busy));
    bufp->fullCData(oldp+14,(vlSelf->i_parallel_data),8);
    bufp->fullBit(oldp+15,(vlSelf->o_serial_data));
    bufp->fullBit(oldp+16,(vlSelf->o_serial_clk));
    bufp->fullBit(oldp+17,(vlSelf->o_serial_latch));
    bufp->fullCData(oldp+18,(vlSelf->o_parallel_data),8);
    bufp->fullCData(oldp+19,(vlSelf->shift_register_tb__DOT__shift_in_reg),8);
    bufp->fullCData(oldp+20,(vlSelf->shift_register_tb__DOT__parallel_out_reg),8);
    bufp->fullIData(oldp+21,(0x2710U),32);
    bufp->fullIData(oldp+22,(0x3e8U),32);
    bufp->fullIData(oldp+23,(8U),32);
    bufp->fullIData(oldp+24,(0U),32);
    bufp->fullIData(oldp+25,(1U),32);
    bufp->fullIData(oldp+26,(2U),32);
    bufp->fullIData(oldp+27,(3U),32);
    bufp->fullIData(oldp+28,(0x20000000U),32);
    bufp->fullBit(oldp+29,(1U));
}

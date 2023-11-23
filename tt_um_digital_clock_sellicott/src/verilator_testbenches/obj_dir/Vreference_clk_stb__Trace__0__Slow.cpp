// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vreference_clk_stb__Syms.h"


VL_ATTR_COLD void Vreference_clk_stb___024root__trace_init_sub__TOP__0(Vreference_clk_stb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+9,"i_reset_n", false,-1);
    tracep->declBit(c+10,"i_clk", false,-1);
    tracep->declBit(c+11,"i_en", false,-1);
    tracep->declBit(c+12,"i_fast_set", false,-1);
    tracep->declBit(c+13,"i_refclk", false,-1);
    tracep->declBit(c+14,"o_refclk_stb", false,-1);
    tracep->declBit(c+15,"o_refclk_1hz_stb", false,-1);
    tracep->declBit(c+16,"o_refclk_timeset_stb", false,-1);
    tracep->pushNamePrefix("reference_clk_stb ");
    tracep->declBus(c+18,"REF_CLK_HZ", false,-1, 31,0);
    tracep->declBus(c+19,"FAST_SET_HZ", false,-1, 31,0);
    tracep->declBus(c+20,"SLOW_SET_HZ", false,-1, 31,0);
    tracep->declBus(c+21,"FAST_INC", false,-1, 31,0);
    tracep->declBus(c+22,"SLOW_INC", false,-1, 31,0);
    tracep->declBit(c+9,"i_reset_n", false,-1);
    tracep->declBit(c+10,"i_clk", false,-1);
    tracep->declBit(c+11,"i_en", false,-1);
    tracep->declBit(c+12,"i_fast_set", false,-1);
    tracep->declBit(c+13,"i_refclk", false,-1);
    tracep->declBit(c+14,"o_refclk_stb", false,-1);
    tracep->declBit(c+15,"o_refclk_1hz_stb", false,-1);
    tracep->declBit(c+16,"o_refclk_timeset_stb", false,-1);
    tracep->declBit(c+1,"refclk_pipe0", false,-1);
    tracep->declBit(c+2,"refclk_pipe1", false,-1);
    tracep->declBit(c+3,"refclk_ext", false,-1);
    tracep->declBus(c+17,"incriment", false,-1, 31,0);
    tracep->declBit(c+4,"div", false,-1);
    tracep->declBus(c+5,"div_count", false,-1, 15,0);
    tracep->pushNamePrefix("divider_inst ");
    tracep->declBit(c+10,"i_clk", false,-1);
    tracep->declBit(c+9,"i_reset_n", false,-1);
    tracep->declBit(c+14,"i_en", false,-1);
    tracep->declBit(c+23,"i_load", false,-1);
    tracep->declBus(c+17,"i_incriment", false,-1, 31,0);
    tracep->declBit(c+4,"o_div", false,-1);
    tracep->declBit(c+16,"o_clk_overflow", false,-1);
    tracep->declBus(c+6,"counter", false,-1, 31,0);
    tracep->declBus(c+7,"incriment", false,-1, 31,0);
    tracep->declBit(c+8,"prev_out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("refclk_div_inst ");
    tracep->declBus(c+24,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"OVERFLOW", false,-1, 31,0);
    tracep->declBit(c+10,"i_sysclk", false,-1);
    tracep->declBit(c+9,"i_reset_n", false,-1);
    tracep->declBit(c+14,"i_en", false,-1);
    tracep->declBus(c+5,"o_count", false,-1, 15,0);
    tracep->declBit(c+15,"o_overflow", false,-1);
    tracep->declBus(c+5,"counter", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vreference_clk_stb___024root__trace_init_top(Vreference_clk_stb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root__trace_init_top\n"); );
    // Body
    Vreference_clk_stb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vreference_clk_stb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vreference_clk_stb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vreference_clk_stb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vreference_clk_stb___024root__trace_register(Vreference_clk_stb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vreference_clk_stb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vreference_clk_stb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vreference_clk_stb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vreference_clk_stb___024root__trace_full_sub_0(Vreference_clk_stb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vreference_clk_stb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root__trace_full_top_0\n"); );
    // Init
    Vreference_clk_stb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreference_clk_stb___024root*>(voidSelf);
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vreference_clk_stb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vreference_clk_stb___024root__trace_full_sub_0(Vreference_clk_stb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->reference_clk_stb__DOT__refclk_pipe0));
    bufp->fullBit(oldp+2,(vlSelf->reference_clk_stb__DOT__refclk_pipe1));
    bufp->fullBit(oldp+3,(vlSelf->reference_clk_stb__DOT__refclk_ext));
    bufp->fullBit(oldp+4,((vlSelf->reference_clk_stb__DOT__divider_inst__DOT__counter 
                           >> 0x1fU)));
    bufp->fullSData(oldp+5,(vlSelf->reference_clk_stb__DOT__refclk_div_inst__DOT__counter),16);
    bufp->fullIData(oldp+6,(vlSelf->reference_clk_stb__DOT__divider_inst__DOT__counter),32);
    bufp->fullIData(oldp+7,(vlSelf->reference_clk_stb__DOT__divider_inst__DOT__incriment),32);
    bufp->fullBit(oldp+8,(vlSelf->reference_clk_stb__DOT__divider_inst__DOT__prev_out));
    bufp->fullBit(oldp+9,(vlSelf->i_reset_n));
    bufp->fullBit(oldp+10,(vlSelf->i_clk));
    bufp->fullBit(oldp+11,(vlSelf->i_en));
    bufp->fullBit(oldp+12,(vlSelf->i_fast_set));
    bufp->fullBit(oldp+13,(vlSelf->i_refclk));
    bufp->fullBit(oldp+14,(vlSelf->o_refclk_stb));
    bufp->fullBit(oldp+15,(vlSelf->o_refclk_1hz_stb));
    bufp->fullBit(oldp+16,(vlSelf->o_refclk_timeset_stb));
    bufp->fullIData(oldp+17,(((IData)(vlSelf->i_fast_set)
                               ? 0xa009fU : 0x3ffffU)),32);
    bufp->fullIData(oldp+18,(0x8000U),32);
    bufp->fullIData(oldp+19,(5U),32);
    bufp->fullIData(oldp+20,(2U),32);
    bufp->fullIData(oldp+21,(0xa009fU),32);
    bufp->fullIData(oldp+22,(0x3ffffU),32);
    bufp->fullBit(oldp+23,(1U));
    bufp->fullIData(oldp+24,(0x10U),32);
}

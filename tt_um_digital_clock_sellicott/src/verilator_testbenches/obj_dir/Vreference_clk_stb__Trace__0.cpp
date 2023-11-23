// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vreference_clk_stb__Syms.h"


void Vreference_clk_stb___024root__trace_chg_sub_0(Vreference_clk_stb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vreference_clk_stb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root__trace_chg_top_0\n"); );
    // Init
    Vreference_clk_stb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreference_clk_stb___024root*>(voidSelf);
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vreference_clk_stb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vreference_clk_stb___024root__trace_chg_sub_0(Vreference_clk_stb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->reference_clk_stb__DOT__refclk_pipe0));
        bufp->chgBit(oldp+1,(vlSelf->reference_clk_stb__DOT__refclk_pipe1));
        bufp->chgBit(oldp+2,(vlSelf->reference_clk_stb__DOT__refclk_ext));
        bufp->chgBit(oldp+3,((vlSelf->reference_clk_stb__DOT__divider_inst__DOT__counter 
                              >> 0x1fU)));
        bufp->chgSData(oldp+4,(vlSelf->reference_clk_stb__DOT__refclk_div_inst__DOT__counter),16);
        bufp->chgIData(oldp+5,(vlSelf->reference_clk_stb__DOT__divider_inst__DOT__counter),32);
        bufp->chgIData(oldp+6,(vlSelf->reference_clk_stb__DOT__divider_inst__DOT__incriment),32);
        bufp->chgBit(oldp+7,(vlSelf->reference_clk_stb__DOT__divider_inst__DOT__prev_out));
    }
    bufp->chgBit(oldp+8,(vlSelf->i_reset_n));
    bufp->chgBit(oldp+9,(vlSelf->i_clk));
    bufp->chgBit(oldp+10,(vlSelf->i_en));
    bufp->chgBit(oldp+11,(vlSelf->i_fast_set));
    bufp->chgBit(oldp+12,(vlSelf->i_refclk));
    bufp->chgBit(oldp+13,(vlSelf->o_refclk_stb));
    bufp->chgBit(oldp+14,(vlSelf->o_refclk_1hz_stb));
    bufp->chgBit(oldp+15,(vlSelf->o_refclk_timeset_stb));
    bufp->chgIData(oldp+16,(((IData)(vlSelf->i_fast_set)
                              ? 0xa009fU : 0x3ffffU)),32);
}

void Vreference_clk_stb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root__trace_cleanup\n"); );
    // Init
    Vreference_clk_stb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreference_clk_stb___024root*>(voidSelf);
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

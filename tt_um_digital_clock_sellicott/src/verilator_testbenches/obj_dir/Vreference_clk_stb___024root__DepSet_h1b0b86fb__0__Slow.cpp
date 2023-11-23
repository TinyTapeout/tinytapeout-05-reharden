// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreference_clk_stb.h for the primary calling header

#include "verilated.h"

#include "Vreference_clk_stb__Syms.h"
#include "Vreference_clk_stb___024root.h"

VL_ATTR_COLD void Vreference_clk_stb___024root___eval_static__TOP(Vreference_clk_stb___024root* vlSelf);

VL_ATTR_COLD void Vreference_clk_stb___024root___eval_static(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___eval_static\n"); );
    // Body
    Vreference_clk_stb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vreference_clk_stb___024root___eval_static__TOP(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->reference_clk_stb__DOT__refclk_div_inst__DOT__counter = 0U;
    vlSelf->reference_clk_stb__DOT__divider_inst__DOT__counter = 0U;
    vlSelf->reference_clk_stb__DOT__divider_inst__DOT__incriment = 1U;
    vlSelf->reference_clk_stb__DOT__divider_inst__DOT__prev_out = 0U;
}

VL_ATTR_COLD void Vreference_clk_stb___024root___eval_initial(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
}

VL_ATTR_COLD void Vreference_clk_stb___024root___eval_final(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vreference_clk_stb___024root___eval_triggers__stl(Vreference_clk_stb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vreference_clk_stb___024root___dump_triggers__stl(Vreference_clk_stb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vreference_clk_stb___024root___eval_stl(Vreference_clk_stb___024root* vlSelf);

VL_ATTR_COLD void Vreference_clk_stb___024root___eval_settle(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vreference_clk_stb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vreference_clk_stb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../clock_v2/reference_clk_stb.v", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vreference_clk_stb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreference_clk_stb___024root___dump_triggers__stl(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vreference_clk_stb___024root___stl_sequent__TOP__0(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->o_refclk_timeset_stb = ((~ (IData)(vlSelf->reference_clk_stb__DOT__divider_inst__DOT__prev_out)) 
                                    & (vlSelf->reference_clk_stb__DOT__divider_inst__DOT__counter 
                                       >> 0x1fU));
    vlSelf->o_refclk_stb = ((~ (IData)(vlSelf->reference_clk_stb__DOT__refclk_pipe0)) 
                            & (IData)(vlSelf->reference_clk_stb__DOT__refclk_pipe1));
    vlSelf->o_refclk_1hz_stb = ((0x7fffU <= (IData)(vlSelf->reference_clk_stb__DOT__refclk_div_inst__DOT__counter)) 
                                & (IData)(vlSelf->o_refclk_stb));
}

VL_ATTR_COLD void Vreference_clk_stb___024root___eval_stl(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vreference_clk_stb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreference_clk_stb___024root___dump_triggers__act(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreference_clk_stb___024root___dump_triggers__nba(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vreference_clk_stb___024root___ctor_var_reset(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_reset_n = VL_RAND_RESET_I(1);
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_en = VL_RAND_RESET_I(1);
    vlSelf->i_fast_set = VL_RAND_RESET_I(1);
    vlSelf->i_refclk = VL_RAND_RESET_I(1);
    vlSelf->o_refclk_stb = VL_RAND_RESET_I(1);
    vlSelf->o_refclk_1hz_stb = VL_RAND_RESET_I(1);
    vlSelf->o_refclk_timeset_stb = VL_RAND_RESET_I(1);
    vlSelf->reference_clk_stb__DOT__refclk_pipe0 = VL_RAND_RESET_I(1);
    vlSelf->reference_clk_stb__DOT__refclk_pipe1 = VL_RAND_RESET_I(1);
    vlSelf->reference_clk_stb__DOT__refclk_ext = VL_RAND_RESET_I(1);
    vlSelf->reference_clk_stb__DOT__refclk_div_inst__DOT__counter = VL_RAND_RESET_I(16);
    vlSelf->reference_clk_stb__DOT__divider_inst__DOT__counter = VL_RAND_RESET_I(32);
    vlSelf->reference_clk_stb__DOT__divider_inst__DOT__incriment = VL_RAND_RESET_I(32);
    vlSelf->reference_clk_stb__DOT__divider_inst__DOT__prev_out = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

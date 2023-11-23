// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreference_clk_stb.h for the primary calling header

#include "verilated.h"

#include "Vreference_clk_stb__Syms.h"
#include "Vreference_clk_stb___024root.h"

void Vreference_clk_stb___024root___eval_act(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vreference_clk_stb___024root___nba_sequent__TOP__0(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__reference_clk_stb__DOT__divider_inst__DOT__counter;
    __Vdly__reference_clk_stb__DOT__divider_inst__DOT__counter = 0;
    // Body
    __Vdly__reference_clk_stb__DOT__divider_inst__DOT__counter 
        = vlSelf->reference_clk_stb__DOT__divider_inst__DOT__counter;
    if (vlSelf->i_reset_n) {
        if (vlSelf->o_refclk_stb) {
            vlSelf->reference_clk_stb__DOT__refclk_div_inst__DOT__counter 
                = ((IData)(vlSelf->o_refclk_1hz_stb)
                    ? 0U : (0xffffU & ((IData)(1U) 
                                       + (IData)(vlSelf->reference_clk_stb__DOT__refclk_div_inst__DOT__counter))));
            __Vdly__reference_clk_stb__DOT__divider_inst__DOT__counter 
                = (vlSelf->reference_clk_stb__DOT__divider_inst__DOT__counter 
                   + vlSelf->reference_clk_stb__DOT__divider_inst__DOT__incriment);
            vlSelf->reference_clk_stb__DOT__divider_inst__DOT__prev_out 
                = (vlSelf->reference_clk_stb__DOT__divider_inst__DOT__counter 
                   >> 0x1fU);
        }
        if (vlSelf->i_en) {
            vlSelf->reference_clk_stb__DOT__refclk_pipe1 
                = vlSelf->reference_clk_stb__DOT__refclk_pipe0;
            vlSelf->reference_clk_stb__DOT__refclk_pipe0 
                = vlSelf->reference_clk_stb__DOT__refclk_ext;
            vlSelf->reference_clk_stb__DOT__refclk_ext 
                = vlSelf->i_refclk;
        }
        vlSelf->reference_clk_stb__DOT__divider_inst__DOT__incriment 
            = ((IData)(1U) + ((IData)(vlSelf->i_fast_set)
                               ? 0xa009fU : 0x3ffffU));
    } else {
        vlSelf->reference_clk_stb__DOT__refclk_div_inst__DOT__counter = 0U;
        __Vdly__reference_clk_stb__DOT__divider_inst__DOT__counter = 0U;
        vlSelf->reference_clk_stb__DOT__divider_inst__DOT__prev_out = 0U;
        vlSelf->reference_clk_stb__DOT__refclk_pipe1 = 0U;
        vlSelf->reference_clk_stb__DOT__divider_inst__DOT__incriment = 1U;
        vlSelf->reference_clk_stb__DOT__refclk_pipe0 = 0U;
        vlSelf->reference_clk_stb__DOT__refclk_ext = 0U;
    }
    vlSelf->reference_clk_stb__DOT__divider_inst__DOT__counter 
        = __Vdly__reference_clk_stb__DOT__divider_inst__DOT__counter;
    vlSelf->o_refclk_timeset_stb = ((~ (IData)(vlSelf->reference_clk_stb__DOT__divider_inst__DOT__prev_out)) 
                                    & (vlSelf->reference_clk_stb__DOT__divider_inst__DOT__counter 
                                       >> 0x1fU));
    vlSelf->o_refclk_stb = ((~ (IData)(vlSelf->reference_clk_stb__DOT__refclk_pipe0)) 
                            & (IData)(vlSelf->reference_clk_stb__DOT__refclk_pipe1));
    vlSelf->o_refclk_1hz_stb = ((0x7fffU <= (IData)(vlSelf->reference_clk_stb__DOT__refclk_div_inst__DOT__counter)) 
                                & (IData)(vlSelf->o_refclk_stb));
}

void Vreference_clk_stb___024root___eval_nba(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vreference_clk_stb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vreference_clk_stb___024root___eval_triggers__act(Vreference_clk_stb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vreference_clk_stb___024root___dump_triggers__act(Vreference_clk_stb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vreference_clk_stb___024root___dump_triggers__nba(Vreference_clk_stb___024root* vlSelf);
#endif  // VL_DEBUG

void Vreference_clk_stb___024root___eval(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vreference_clk_stb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vreference_clk_stb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../clock_v2/reference_clk_stb.v", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vreference_clk_stb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vreference_clk_stb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../clock_v2/reference_clk_stb.v", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vreference_clk_stb___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vreference_clk_stb___024root___eval_debug_assertions(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_reset_n & 0xfeU))) {
        Verilated::overWidthError("i_reset_n");}
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_en & 0xfeU))) {
        Verilated::overWidthError("i_en");}
    if (VL_UNLIKELY((vlSelf->i_fast_set & 0xfeU))) {
        Verilated::overWidthError("i_fast_set");}
    if (VL_UNLIKELY((vlSelf->i_refclk & 0xfeU))) {
        Verilated::overWidthError("i_refclk");}
}
#endif  // VL_DEBUG

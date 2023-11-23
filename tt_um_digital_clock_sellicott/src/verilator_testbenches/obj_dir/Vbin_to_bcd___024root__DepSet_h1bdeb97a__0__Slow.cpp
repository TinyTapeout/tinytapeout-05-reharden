// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbin_to_bcd.h for the primary calling header

#include "verilated.h"

#include "Vbin_to_bcd__Syms.h"
#include "Vbin_to_bcd___024root.h"

VL_ATTR_COLD void Vbin_to_bcd___024root___eval_static__TOP(Vbin_to_bcd___024root* vlSelf);

VL_ATTR_COLD void Vbin_to_bcd___024root___eval_static(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___eval_static\n"); );
    // Body
    Vbin_to_bcd___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vbin_to_bcd___024root___eval_static__TOP(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->bin_to_bcd__DOT__bcd_msb = 0U;
    vlSelf->bin_to_bcd__DOT__bcd_lsb = 0U;
}

VL_ATTR_COLD void Vbin_to_bcd___024root___eval_initial(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vbin_to_bcd___024root___eval_final(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vbin_to_bcd___024root___eval_triggers__stl(Vbin_to_bcd___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbin_to_bcd___024root___dump_triggers__stl(Vbin_to_bcd___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vbin_to_bcd___024root___eval_stl(Vbin_to_bcd___024root* vlSelf);

VL_ATTR_COLD void Vbin_to_bcd___024root___eval_settle(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vbin_to_bcd___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vbin_to_bcd___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../clock_v2/bin_to_bcd.v", 11, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vbin_to_bcd___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbin_to_bcd___024root___dump_triggers__stl(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vbin_to_bcd___024root___ico_sequent__TOP__0(Vbin_to_bcd___024root* vlSelf);

VL_ATTR_COLD void Vbin_to_bcd___024root___eval_stl(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vbin_to_bcd___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbin_to_bcd___024root___dump_triggers__ico(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbin_to_bcd___024root___dump_triggers__act(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbin_to_bcd___024root___dump_triggers__nba(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbin_to_bcd___024root___ctor_var_reset(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_bin = VL_RAND_RESET_I(6);
    vlSelf->o_bcd_lsb = VL_RAND_RESET_I(4);
    vlSelf->o_bcd_msb = VL_RAND_RESET_I(4);
    vlSelf->bin_to_bcd__DOT__bcd_msb = VL_RAND_RESET_I(4);
    vlSelf->bin_to_bcd__DOT__bcd_lsb = VL_RAND_RESET_I(6);
}

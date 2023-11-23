// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbin_to_bcd.h for the primary calling header

#include "verilated.h"

#include "Vbin_to_bcd__Syms.h"
#include "Vbin_to_bcd___024root.h"

extern const VlUnpacked<CData/*3:0*/, 128> Vbin_to_bcd__ConstPool__TABLE_h9f73484e_0;
extern const VlUnpacked<CData/*5:0*/, 1024> Vbin_to_bcd__ConstPool__TABLE_he779486d_0;

VL_INLINE_OPT void Vbin_to_bcd___024root___ico_sequent__TOP__0(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx1 = (((0x3cU <= (IData)(vlSelf->i_bin)) 
                     << 6U) | ((((0x32U <= (IData)(vlSelf->i_bin)) 
                                 & (0x3cU > (IData)(vlSelf->i_bin))) 
                                << 5U) | ((((0x28U 
                                             <= (IData)(vlSelf->i_bin)) 
                                            & (0x32U 
                                               > (IData)(vlSelf->i_bin))) 
                                           << 4U) | 
                                          ((((0x1eU 
                                              <= (IData)(vlSelf->i_bin)) 
                                             & (0x28U 
                                                > (IData)(vlSelf->i_bin))) 
                                            << 3U) 
                                           | ((((0x14U 
                                                 <= (IData)(vlSelf->i_bin)) 
                                                & (0x1eU 
                                                   > (IData)(vlSelf->i_bin))) 
                                               << 2U) 
                                              | ((((0xaU 
                                                    <= (IData)(vlSelf->i_bin)) 
                                                   & (0x14U 
                                                      > (IData)(vlSelf->i_bin))) 
                                                  << 1U) 
                                                 | (0xaU 
                                                    > (IData)(vlSelf->i_bin))))))));
    vlSelf->bin_to_bcd__DOT__bcd_msb = Vbin_to_bcd__ConstPool__TABLE_h9f73484e_0
        [__Vtableidx1];
    vlSelf->o_bcd_msb = vlSelf->bin_to_bcd__DOT__bcd_msb;
    __Vtableidx2 = (((IData)(vlSelf->i_bin) << 4U) 
                    | (IData)(vlSelf->bin_to_bcd__DOT__bcd_msb));
    vlSelf->bin_to_bcd__DOT__bcd_lsb = Vbin_to_bcd__ConstPool__TABLE_he779486d_0
        [__Vtableidx2];
    vlSelf->o_bcd_lsb = (0xfU & (IData)(vlSelf->bin_to_bcd__DOT__bcd_lsb));
}

void Vbin_to_bcd___024root___eval_ico(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vbin_to_bcd___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vbin_to_bcd___024root___eval_act(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___eval_act\n"); );
}

void Vbin_to_bcd___024root___eval_nba(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___eval_nba\n"); );
}

void Vbin_to_bcd___024root___eval_triggers__ico(Vbin_to_bcd___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbin_to_bcd___024root___dump_triggers__ico(Vbin_to_bcd___024root* vlSelf);
#endif  // VL_DEBUG
void Vbin_to_bcd___024root___eval_triggers__act(Vbin_to_bcd___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbin_to_bcd___024root___dump_triggers__act(Vbin_to_bcd___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbin_to_bcd___024root___dump_triggers__nba(Vbin_to_bcd___024root* vlSelf);
#endif  // VL_DEBUG

void Vbin_to_bcd___024root___eval(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vbin_to_bcd___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vbin_to_bcd___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("../clock_v2/bin_to_bcd.v", 11, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vbin_to_bcd___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vbin_to_bcd___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vbin_to_bcd___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../clock_v2/bin_to_bcd.v", 11, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vbin_to_bcd___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vbin_to_bcd___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../clock_v2/bin_to_bcd.v", 11, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vbin_to_bcd___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vbin_to_bcd___024root___eval_debug_assertions(Vbin_to_bcd___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_bin & 0xc0U))) {
        Verilated::overWidthError("i_bin");}
}
#endif  // VL_DEBUG

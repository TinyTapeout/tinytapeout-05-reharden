// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_register_tb.h for the primary calling header

#include "verilated.h"

#include "Vshift_register_tb__Syms.h"
#include "Vshift_register_tb___024root.h"

void Vshift_register_tb___024root___eval_act(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vshift_register_tb___024root___nba_sequent__TOP__0(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__shift_register_tb__DOT__shift_in_reg 
        = vlSelf->shift_register_tb__DOT__shift_in_reg;
    vlSelf->__Vdly__shift_register_tb__DOT__shift_in_reg 
        = ((IData)(vlSelf->i_reset_n) ? ((0xfeU & ((IData)(vlSelf->shift_register_tb__DOT__shift_in_reg) 
                                                   << 1U)) 
                                         | (IData)(vlSelf->o_serial_data))
            : 0U);
}

VL_INLINE_OPT void Vshift_register_tb___024root___nba_sequent__TOP__1(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vdly__shift_register_tb__DOT__shift_reg_div_inst__DOT__counter;
    __Vdly__shift_register_tb__DOT__shift_reg_div_inst__DOT__counter = 0;
    CData/*2:0*/ __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__state;
    __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__state = 0;
    IData/*16:0*/ __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__transfer_state;
    __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__transfer_state = 0;
    CData/*0:0*/ __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_clk;
    __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_clk = 0;
    CData/*7:0*/ __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_data;
    __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_data = 0;
    // Body
    __Vdly__shift_register_tb__DOT__shift_reg_div_inst__DOT__counter 
        = vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__counter;
    __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__transfer_state 
        = vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__transfer_state;
    __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_clk 
        = vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_clk;
    __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_data 
        = vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_data;
    __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__state 
        = vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state;
    if (vlSelf->i_reset_n) {
        __Vdly__shift_register_tb__DOT__shift_reg_div_inst__DOT__counter 
            = ((IData)(0x20000000U) + vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__counter);
        if ((0U == (IData)(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state))) {
            __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__transfer_state = 0U;
            __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_clk = 0U;
            __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_data = 0U;
            vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_latch = 0U;
        } else {
            if (((2U == (IData)(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state)) 
                 & (IData)(vlSelf->shift_register_tb__DOT__shift_clk_stb))) {
                __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__transfer_state 
                    = (0x1ffffU & ((IData)(1U) + vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__transfer_state));
            }
            if ((1U == (IData)(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state))) {
                __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_clk = 0U;
                __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_data 
                    = vlSelf->i_parallel_data;
                vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_latch = 0U;
            } else {
                if (((2U == (IData)(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state)) 
                     & (IData)(vlSelf->shift_register_tb__DOT__shift_clk_stb))) {
                    __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_clk 
                        = (1U & (~ (IData)(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_clk)));
                    if ((1U == (1U & vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__transfer_state))) {
                        __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_data 
                            = (0xfeU & ((IData)(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_data) 
                                        << 1U));
                    }
                } else if (((3U == (IData)(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state)) 
                            & (IData)(vlSelf->shift_register_tb__DOT__shift_clk_stb))) {
                    __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_clk = 0U;
                }
                if ((1U & (~ ((2U == (IData)(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state)) 
                              & (IData)(vlSelf->shift_register_tb__DOT__shift_clk_stb))))) {
                    if (((3U == (IData)(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state)) 
                         & (IData)(vlSelf->shift_register_tb__DOT__shift_clk_stb))) {
                        vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_latch = 1U;
                    }
                }
            }
        }
        if (((IData)(vlSelf->i_start_stb) & (~ (IData)(vlSelf->o_busy)))) {
            __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__state = 1U;
        } else if ((1U == (IData)(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state))) {
            __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__state = 2U;
        } else if (((2U == (IData)(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state)) 
                    & (0xfU <= vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__transfer_state))) {
            __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__state = 3U;
        } else if ((((3U == (IData)(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state)) 
                     & (IData)(vlSelf->o_serial_latch)) 
                    & (IData)(vlSelf->shift_register_tb__DOT__shift_clk_stb))) {
            __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__state = 0U;
        }
        vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__prev_out 
            = (vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__counter 
               >> 0x1fU);
    } else {
        __Vdly__shift_register_tb__DOT__shift_reg_div_inst__DOT__counter = 0U;
        __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__transfer_state = 0U;
        __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_clk = 0U;
        __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_data = 0U;
        __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__state = 0U;
        vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_latch = 0U;
        vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__prev_out = 0U;
    }
    vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_clk 
        = __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_clk;
    vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_data 
        = __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__serial_data;
    vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__transfer_state 
        = __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__transfer_state;
    vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__counter 
        = __Vdly__shift_register_tb__DOT__shift_reg_div_inst__DOT__counter;
    vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state 
        = __Vdly__shift_register_tb__DOT__shift_out_inst__DOT__state;
    vlSelf->o_serial_clk = vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_clk;
    vlSelf->o_serial_data = (1U & ((IData)(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_data) 
                                   >> 7U));
    vlSelf->shift_register_tb__DOT__shift_clk_stb = 
        ((~ (IData)(vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__prev_out)) 
         & (vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__counter 
            >> 0x1fU));
    vlSelf->o_serial_latch = vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_latch;
    vlSelf->o_busy = (0U != (IData)(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state));
}

VL_INLINE_OPT void Vshift_register_tb___024root___nba_sequent__TOP__2(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->shift_register_tb__DOT__parallel_out_reg 
        = ((IData)(vlSelf->i_reset_n) ? (IData)(vlSelf->shift_register_tb__DOT__shift_in_reg)
            : 0U);
    vlSelf->o_parallel_data = vlSelf->shift_register_tb__DOT__parallel_out_reg;
}

VL_INLINE_OPT void Vshift_register_tb___024root___nba_sequent__TOP__3(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->shift_register_tb__DOT__shift_in_reg = vlSelf->__Vdly__shift_register_tb__DOT__shift_in_reg;
}

void Vshift_register_tb___024root___eval_nba(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vshift_register_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vshift_register_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vshift_register_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vshift_register_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void Vshift_register_tb___024root___eval_triggers__act(Vshift_register_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_register_tb___024root___dump_triggers__act(Vshift_register_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_register_tb___024root___dump_triggers__nba(Vshift_register_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vshift_register_tb___024root___eval(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
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
            Vshift_register_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vshift_register_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../clock_v2/shift_register_tb.v", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vshift_register_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vshift_register_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../clock_v2/shift_register_tb.v", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vshift_register_tb___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vshift_register_tb___024root___eval_debug_assertions(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_reset_n & 0xfeU))) {
        Verilated::overWidthError("i_reset_n");}
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_start_stb & 0xfeU))) {
        Verilated::overWidthError("i_start_stb");}
}
#endif  // VL_DEBUG

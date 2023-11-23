// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_register_tb.h for the primary calling header

#include "verilated.h"

#include "Vshift_register_tb__Syms.h"
#include "Vshift_register_tb___024root.h"

VL_ATTR_COLD void Vshift_register_tb___024root___eval_static__TOP(Vshift_register_tb___024root* vlSelf);

VL_ATTR_COLD void Vshift_register_tb___024root___eval_static(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___eval_static\n"); );
    // Body
    Vshift_register_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vshift_register_tb___024root___eval_static__TOP(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->shift_register_tb__DOT__shift_in_reg = 0U;
    vlSelf->shift_register_tb__DOT__parallel_out_reg = 0U;
    vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__counter = 0U;
    vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__prev_out = 0U;
}

VL_ATTR_COLD void Vshift_register_tb___024root___eval_initial(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__o_serial_clk__0 
        = vlSelf->o_serial_clk;
    vlSelf->__Vtrigprevexpr___TOP__o_serial_latch__0 
        = vlSelf->o_serial_latch;
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
}

VL_ATTR_COLD void Vshift_register_tb___024root___eval_final(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vshift_register_tb___024root___eval_triggers__stl(Vshift_register_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_register_tb___024root___dump_triggers__stl(Vshift_register_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vshift_register_tb___024root___eval_stl(Vshift_register_tb___024root* vlSelf);

VL_ATTR_COLD void Vshift_register_tb___024root___eval_settle(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vshift_register_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vshift_register_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../clock_v2/shift_register_tb.v", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vshift_register_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_register_tb___024root___dump_triggers__stl(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vshift_register_tb___024root___stl_sequent__TOP__0(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->o_busy = (0U != (IData)(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state));
    vlSelf->o_serial_data = (1U & ((IData)(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_data) 
                                   >> 7U));
    vlSelf->o_serial_clk = vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_clk;
    vlSelf->o_serial_latch = vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_latch;
    vlSelf->o_parallel_data = vlSelf->shift_register_tb__DOT__parallel_out_reg;
    vlSelf->shift_register_tb__DOT__shift_clk_stb = 
        ((~ (IData)(vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__prev_out)) 
         & (vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__counter 
            >> 0x1fU));
}

VL_ATTR_COLD void Vshift_register_tb___024root___eval_stl(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vshift_register_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_register_tb___024root___dump_triggers__act(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge o_serial_clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge o_serial_latch)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge i_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_register_tb___024root___dump_triggers__nba(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge o_serial_clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge o_serial_latch)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge i_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vshift_register_tb___024root___ctor_var_reset(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_reset_n = VL_RAND_RESET_I(1);
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_start_stb = VL_RAND_RESET_I(1);
    vlSelf->o_busy = VL_RAND_RESET_I(1);
    vlSelf->i_parallel_data = VL_RAND_RESET_I(8);
    vlSelf->o_serial_data = VL_RAND_RESET_I(1);
    vlSelf->o_serial_clk = VL_RAND_RESET_I(1);
    vlSelf->o_serial_latch = VL_RAND_RESET_I(1);
    vlSelf->o_parallel_data = VL_RAND_RESET_I(8);
    vlSelf->shift_register_tb__DOT__shift_clk_stb = VL_RAND_RESET_I(1);
    vlSelf->shift_register_tb__DOT__shift_in_reg = VL_RAND_RESET_I(8);
    vlSelf->shift_register_tb__DOT__parallel_out_reg = VL_RAND_RESET_I(8);
    vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__counter = VL_RAND_RESET_I(32);
    vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__prev_out = VL_RAND_RESET_I(1);
    vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__transfer_state = VL_RAND_RESET_I(17);
    vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_clk = VL_RAND_RESET_I(1);
    vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_latch = VL_RAND_RESET_I(1);
    vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_data = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__shift_register_tb__DOT__shift_in_reg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__o_serial_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__o_serial_latch__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclock_wrapper_tb.h for the primary calling header

#include "verilated.h"

#include "Vclock_wrapper_tb__Syms.h"
#include "Vclock_wrapper_tb__Syms.h"
#include "Vclock_wrapper_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_wrapper_tb___024root___dump_triggers__ico(Vclock_wrapper_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vclock_wrapper_tb___024root___eval_triggers__ico(Vclock_wrapper_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vclock_wrapper_tb___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_wrapper_tb___024root___dump_triggers__act(Vclock_wrapper_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vclock_wrapper_tb___024root___eval_triggers__act(Vclock_wrapper_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->o_serial_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__o_serial_clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->o_serial_latch) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__o_serial_latch__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->i_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__i_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__o_serial_clk__0 
        = vlSelf->o_serial_clk;
    vlSelf->__Vtrigprevexpr___TOP__o_serial_latch__0 
        = vlSelf->o_serial_latch;
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vclock_wrapper_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

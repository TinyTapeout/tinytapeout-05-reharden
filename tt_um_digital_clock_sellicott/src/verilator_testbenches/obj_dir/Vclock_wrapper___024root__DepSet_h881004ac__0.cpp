// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclock_wrapper.h for the primary calling header

#include "verilated.h"

#include "Vclock_wrapper__Syms.h"
#include "Vclock_wrapper__Syms.h"
#include "Vclock_wrapper___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_wrapper___024root___dump_triggers__ico(Vclock_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vclock_wrapper___024root___eval_triggers__ico(Vclock_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vclock_wrapper___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_wrapper___024root___dump_triggers__act(Vclock_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vclock_wrapper___024root___eval_triggers__act(Vclock_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->i_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__i_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vclock_wrapper___024root___dump_triggers__act(vlSelf);
    }
#endif
}

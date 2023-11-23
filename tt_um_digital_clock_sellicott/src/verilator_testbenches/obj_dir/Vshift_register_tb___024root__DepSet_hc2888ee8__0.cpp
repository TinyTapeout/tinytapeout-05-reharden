// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vshift_register_tb.h for the primary calling header

#include "verilated.h"

#include "Vshift_register_tb__Syms.h"
#include "Vshift_register_tb__Syms.h"
#include "Vshift_register_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vshift_register_tb___024root___dump_triggers__act(Vshift_register_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vshift_register_tb___024root___eval_triggers__act(Vshift_register_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root___eval_triggers__act\n"); );
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
        Vshift_register_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

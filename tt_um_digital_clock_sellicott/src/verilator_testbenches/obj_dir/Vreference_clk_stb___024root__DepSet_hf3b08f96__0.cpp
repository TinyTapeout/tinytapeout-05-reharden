// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreference_clk_stb.h for the primary calling header

#include "verilated.h"

#include "Vreference_clk_stb__Syms.h"
#include "Vreference_clk_stb__Syms.h"
#include "Vreference_clk_stb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreference_clk_stb___024root___dump_triggers__act(Vreference_clk_stb___024root* vlSelf);
#endif  // VL_DEBUG

void Vreference_clk_stb___024root___eval_triggers__act(Vreference_clk_stb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreference_clk_stb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->i_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__i_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vreference_clk_stb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

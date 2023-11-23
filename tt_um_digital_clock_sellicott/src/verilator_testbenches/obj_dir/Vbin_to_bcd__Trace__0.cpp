// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbin_to_bcd__Syms.h"


void Vbin_to_bcd___024root__trace_chg_sub_0(Vbin_to_bcd___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbin_to_bcd___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root__trace_chg_top_0\n"); );
    // Init
    Vbin_to_bcd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbin_to_bcd___024root*>(voidSelf);
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbin_to_bcd___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vbin_to_bcd___024root__trace_chg_sub_0(Vbin_to_bcd___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->i_clk));
    bufp->chgCData(oldp+1,(vlSelf->i_bin),6);
    bufp->chgCData(oldp+2,(vlSelf->o_bcd_lsb),4);
    bufp->chgCData(oldp+3,(vlSelf->o_bcd_msb),4);
    bufp->chgBit(oldp+4,((0xaU > (IData)(vlSelf->i_bin))));
    bufp->chgBit(oldp+5,(((0xaU <= (IData)(vlSelf->i_bin)) 
                          & (0x14U > (IData)(vlSelf->i_bin)))));
    bufp->chgBit(oldp+6,(((0x14U <= (IData)(vlSelf->i_bin)) 
                          & (0x1eU > (IData)(vlSelf->i_bin)))));
    bufp->chgBit(oldp+7,(((0x1eU <= (IData)(vlSelf->i_bin)) 
                          & (0x28U > (IData)(vlSelf->i_bin)))));
    bufp->chgBit(oldp+8,(((0x28U <= (IData)(vlSelf->i_bin)) 
                          & (0x32U > (IData)(vlSelf->i_bin)))));
    bufp->chgBit(oldp+9,(((0x32U <= (IData)(vlSelf->i_bin)) 
                          & (0x3cU > (IData)(vlSelf->i_bin)))));
    bufp->chgBit(oldp+10,((0x3cU <= (IData)(vlSelf->i_bin))));
    bufp->chgCData(oldp+11,((((0x3cU <= (IData)(vlSelf->i_bin)) 
                              << 6U) | ((((0x32U <= (IData)(vlSelf->i_bin)) 
                                          & (0x3cU 
                                             > (IData)(vlSelf->i_bin))) 
                                         << 5U) | (
                                                   (((0x28U 
                                                      <= (IData)(vlSelf->i_bin)) 
                                                     & (0x32U 
                                                        > (IData)(vlSelf->i_bin))) 
                                                    << 4U) 
                                                   | ((((0x1eU 
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
                                                               > (IData)(vlSelf->i_bin))))))))),7);
    bufp->chgCData(oldp+12,(vlSelf->bin_to_bcd__DOT__bcd_msb),4);
    bufp->chgCData(oldp+13,(vlSelf->bin_to_bcd__DOT__bcd_lsb),6);
}

void Vbin_to_bcd___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root__trace_cleanup\n"); );
    // Init
    Vbin_to_bcd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbin_to_bcd___024root*>(voidSelf);
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}

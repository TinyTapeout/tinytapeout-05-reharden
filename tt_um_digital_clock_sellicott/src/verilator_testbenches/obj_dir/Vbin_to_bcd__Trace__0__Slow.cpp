// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbin_to_bcd__Syms.h"


VL_ATTR_COLD void Vbin_to_bcd___024root__trace_init_sub__TOP__0(Vbin_to_bcd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"i_clk", false,-1);
    tracep->declBus(c+2,"i_bin", false,-1, 5,0);
    tracep->declBus(c+3,"o_bcd_lsb", false,-1, 3,0);
    tracep->declBus(c+4,"o_bcd_msb", false,-1, 3,0);
    tracep->pushNamePrefix("bin_to_bcd ");
    tracep->declBit(c+1,"i_clk", false,-1);
    tracep->declBus(c+2,"i_bin", false,-1, 5,0);
    tracep->declBus(c+3,"o_bcd_lsb", false,-1, 3,0);
    tracep->declBus(c+4,"o_bcd_msb", false,-1, 3,0);
    tracep->declBit(c+5,"msb_0", false,-1);
    tracep->declBit(c+6,"msb_1", false,-1);
    tracep->declBit(c+7,"msb_2", false,-1);
    tracep->declBit(c+8,"msb_3", false,-1);
    tracep->declBit(c+9,"msb_4", false,-1);
    tracep->declBit(c+10,"msb_5", false,-1);
    tracep->declBit(c+11,"msb_6", false,-1);
    tracep->declBus(c+12,"msb_one_hot", false,-1, 6,0);
    tracep->declBus(c+13,"bcd_msb", false,-1, 3,0);
    tracep->declBus(c+14,"bcd_lsb", false,-1, 5,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vbin_to_bcd___024root__trace_init_top(Vbin_to_bcd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root__trace_init_top\n"); );
    // Body
    Vbin_to_bcd___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbin_to_bcd___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbin_to_bcd___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbin_to_bcd___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbin_to_bcd___024root__trace_register(Vbin_to_bcd___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vbin_to_bcd___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vbin_to_bcd___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vbin_to_bcd___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbin_to_bcd___024root__trace_full_sub_0(Vbin_to_bcd___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbin_to_bcd___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root__trace_full_top_0\n"); );
    // Init
    Vbin_to_bcd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbin_to_bcd___024root*>(voidSelf);
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbin_to_bcd___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbin_to_bcd___024root__trace_full_sub_0(Vbin_to_bcd___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbin_to_bcd___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->i_clk));
    bufp->fullCData(oldp+2,(vlSelf->i_bin),6);
    bufp->fullCData(oldp+3,(vlSelf->o_bcd_lsb),4);
    bufp->fullCData(oldp+4,(vlSelf->o_bcd_msb),4);
    bufp->fullBit(oldp+5,((0xaU > (IData)(vlSelf->i_bin))));
    bufp->fullBit(oldp+6,(((0xaU <= (IData)(vlSelf->i_bin)) 
                           & (0x14U > (IData)(vlSelf->i_bin)))));
    bufp->fullBit(oldp+7,(((0x14U <= (IData)(vlSelf->i_bin)) 
                           & (0x1eU > (IData)(vlSelf->i_bin)))));
    bufp->fullBit(oldp+8,(((0x1eU <= (IData)(vlSelf->i_bin)) 
                           & (0x28U > (IData)(vlSelf->i_bin)))));
    bufp->fullBit(oldp+9,(((0x28U <= (IData)(vlSelf->i_bin)) 
                           & (0x32U > (IData)(vlSelf->i_bin)))));
    bufp->fullBit(oldp+10,(((0x32U <= (IData)(vlSelf->i_bin)) 
                            & (0x3cU > (IData)(vlSelf->i_bin)))));
    bufp->fullBit(oldp+11,((0x3cU <= (IData)(vlSelf->i_bin))));
    bufp->fullCData(oldp+12,((((0x3cU <= (IData)(vlSelf->i_bin)) 
                               << 6U) | ((((0x32U <= (IData)(vlSelf->i_bin)) 
                                           & (0x3cU 
                                              > (IData)(vlSelf->i_bin))) 
                                          << 5U) | 
                                         ((((0x28U 
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
                                                    > (IData)(vlSelf->i_bin))))))))),7);
    bufp->fullCData(oldp+13,(vlSelf->bin_to_bcd__DOT__bcd_msb),4);
    bufp->fullCData(oldp+14,(vlSelf->bin_to_bcd__DOT__bcd_lsb),6);
}

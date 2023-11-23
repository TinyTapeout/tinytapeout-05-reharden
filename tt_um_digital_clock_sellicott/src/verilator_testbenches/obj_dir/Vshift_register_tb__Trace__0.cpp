// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vshift_register_tb__Syms.h"


void Vshift_register_tb___024root__trace_chg_sub_0(Vshift_register_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vshift_register_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vshift_register_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshift_register_tb___024root*>(voidSelf);
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vshift_register_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vshift_register_tb___024root__trace_chg_sub_0(Vshift_register_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__counter 
                              >> 0x1fU)));
        bufp->chgBit(oldp+1,(vlSelf->shift_register_tb__DOT__shift_clk_stb));
        bufp->chgCData(oldp+2,(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__state),3);
        bufp->chgIData(oldp+3,(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__transfer_state),17);
        bufp->chgBit(oldp+4,(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_clk));
        bufp->chgBit(oldp+5,(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_latch));
        bufp->chgCData(oldp+6,(vlSelf->shift_register_tb__DOT__shift_out_inst__DOT__serial_data),8);
        bufp->chgIData(oldp+7,(vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__counter),32);
        bufp->chgBit(oldp+8,(vlSelf->shift_register_tb__DOT__shift_reg_div_inst__DOT__prev_out));
    }
    bufp->chgBit(oldp+9,(vlSelf->i_reset_n));
    bufp->chgBit(oldp+10,(vlSelf->i_clk));
    bufp->chgBit(oldp+11,(vlSelf->i_start_stb));
    bufp->chgBit(oldp+12,(vlSelf->o_busy));
    bufp->chgCData(oldp+13,(vlSelf->i_parallel_data),8);
    bufp->chgBit(oldp+14,(vlSelf->o_serial_data));
    bufp->chgBit(oldp+15,(vlSelf->o_serial_clk));
    bufp->chgBit(oldp+16,(vlSelf->o_serial_latch));
    bufp->chgCData(oldp+17,(vlSelf->o_parallel_data),8);
    bufp->chgCData(oldp+18,(vlSelf->shift_register_tb__DOT__shift_in_reg),8);
    bufp->chgCData(oldp+19,(vlSelf->shift_register_tb__DOT__parallel_out_reg),8);
}

void Vshift_register_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vshift_register_tb___024root__trace_cleanup\n"); );
    // Init
    Vshift_register_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshift_register_tb___024root*>(voidSelf);
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

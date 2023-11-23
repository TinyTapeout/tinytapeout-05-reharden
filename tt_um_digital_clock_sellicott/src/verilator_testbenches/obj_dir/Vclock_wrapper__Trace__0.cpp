// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vclock_wrapper__Syms.h"


void Vclock_wrapper___024root__trace_chg_sub_0(Vclock_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vclock_wrapper___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root__trace_chg_top_0\n"); );
    // Init
    Vclock_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclock_wrapper___024root*>(voidSelf);
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vclock_wrapper___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vclock_wrapper___024root__trace_chg_sub_0(Vclock_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->clock_wrapper__DOT__clk_update_stb));
        bufp->chgCData(oldp+1,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__hours_msb_7seg),7);
        bufp->chgCData(oldp+2,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__hours_lsb_7seg),7);
        bufp->chgCData(oldp+3,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__minutes_msb_7seg),7);
        bufp->chgCData(oldp+4,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__minutes_lsb_7seg),7);
        bufp->chgCData(oldp+5,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__seconds_msb_7seg),7);
        bufp->chgCData(oldp+6,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__seconds_lsb_7seg),7);
        bufp->chgQData(oldp+7,((((QData)((IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__hours_msb_7seg)) 
                                 << 0x28U) | (((QData)((IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__hours_lsb_7seg)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0x80000000U 
                                                                  & vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter) 
                                                                 | (((IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__minutes_msb_7seg) 
                                                                     << 0x18U) 
                                                                    | ((0x800000U 
                                                                        & (vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter 
                                                                           >> 8U)) 
                                                                       | (((IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__minutes_lsb_7seg) 
                                                                           << 0x10U) 
                                                                          | (((IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__seconds_msb_7seg) 
                                                                              << 8U) 
                                                                             | (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__seconds_lsb_7seg))))))))))),48);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+9,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter),6);
        bufp->chgCData(oldp+10,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter),6);
        bufp->chgCData(oldp+11,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter),5);
        bufp->chgCData(oldp+12,(vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_msb_reg),4);
        bufp->chgCData(oldp+13,(vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_lsb_reg),4);
        bufp->chgCData(oldp+14,(vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_msb_reg),4);
        bufp->chgCData(oldp+15,(vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_lsb_reg),4);
        bufp->chgCData(oldp+16,(vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_msb_reg),4);
        bufp->chgCData(oldp+17,(vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_lsb_reg),4);
        bufp->chgBit(oldp+18,((vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter 
                               >> 0x1fU)));
        bufp->chgBit(oldp+19,(((~ (IData)(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__prev_out)) 
                               & (vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter 
                                  >> 0x1fU))));
        bufp->chgBit(oldp+20,(((~ (IData)(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out)) 
                               & (vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
                                  >> 0x1fU))));
        bufp->chgCData(oldp+21,(vlSelf->clock_wrapper__DOT__shift_out_stb_delay),4);
        bufp->chgBit(oldp+22,((0U != (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state))));
        bufp->chgIData(oldp+23,(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter),32);
        bufp->chgBit(oldp+24,(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__prev_out));
        bufp->chgBit(oldp+25,((vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
                               >> 0x1fU)));
        bufp->chgIData(oldp+26,(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter),32);
        bufp->chgIData(oldp+27,(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__incriment),32);
        bufp->chgBit(oldp+28,(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out));
        bufp->chgBit(oldp+29,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count));
        bufp->chgBit(oldp+30,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count));
        bufp->chgBit(oldp+31,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count));
        bufp->chgBit(oldp+32,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_reset));
        bufp->chgBit(oldp+33,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_overflow));
        bufp->chgBit(oldp+34,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_overflow));
        bufp->chgBit(oldp+35,(((0x17U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                               & (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count))));
        bufp->chgCData(oldp+36,(vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_msb),4);
        bufp->chgCData(oldp+37,((0xfU & (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_lsb))),4);
        bufp->chgCData(oldp+38,(vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_msb),4);
        bufp->chgCData(oldp+39,((0xfU & (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_lsb))),4);
        bufp->chgCData(oldp+40,(vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_msb),4);
        bufp->chgCData(oldp+41,((0xfU & (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_lsb))),4);
        bufp->chgCData(oldp+42,(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter),6);
        bufp->chgBit(oldp+43,((0xaU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))));
        bufp->chgBit(oldp+44,(((0xaU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                               & (0x14U > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+45,(((0x14U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                               & (0x1eU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+46,((0x1eU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))));
        bufp->chgCData(oldp+47,((((0x1eU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                                  << 3U) | ((((0x14U 
                                               <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                                              & (0x1eU 
                                                 > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))) 
                                             << 2U) 
                                            | ((((0xaU 
                                                  <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                                                 & (0x14U 
                                                    > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))) 
                                                << 1U) 
                                               | (0xaU 
                                                  > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)))))),7);
        bufp->chgCData(oldp+48,(vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_lsb),6);
        bufp->chgBit(oldp+49,((0xaU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))));
        bufp->chgBit(oldp+50,(((0xaU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                               & (0x14U > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+51,(((0x14U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                               & (0x1eU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+52,(((0x1eU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                               & (0x28U > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+53,(((0x28U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                               & (0x32U > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+54,(((0x32U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                               & (0x3cU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+55,((0x3cU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))));
        bufp->chgCData(oldp+56,((((0x3cU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                  << 6U) | ((((0x32U 
                                               <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                              & (0x3cU 
                                                 > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                             << 5U) 
                                            | ((((0x28U 
                                                  <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                                 & (0x32U 
                                                    > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                                << 4U) 
                                               | ((((0x1eU 
                                                     <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                                    & (0x28U 
                                                       > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                                   << 3U) 
                                                  | ((((0x14U 
                                                        <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                                       & (0x1eU 
                                                          > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                                      << 2U) 
                                                     | ((((0xaU 
                                                           <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                                          & (0x14U 
                                                             > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                                         << 1U) 
                                                        | (0xaU 
                                                           > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))))))))),7);
        bufp->chgCData(oldp+57,(vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_lsb),6);
        bufp->chgBit(oldp+58,((0xaU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))));
        bufp->chgBit(oldp+59,(((0xaU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                               & (0x14U > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+60,(((0x14U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                               & (0x1eU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+61,(((0x1eU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                               & (0x28U > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+62,(((0x28U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                               & (0x32U > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+63,(((0x32U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                               & (0x3cU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+64,((0x3cU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))));
        bufp->chgCData(oldp+65,((((0x3cU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                  << 6U) | ((((0x32U 
                                               <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                              & (0x3cU 
                                                 > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                             << 5U) 
                                            | ((((0x28U 
                                                  <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                                 & (0x32U 
                                                    > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                                << 4U) 
                                               | ((((0x1eU 
                                                     <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                                    & (0x28U 
                                                       > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                                   << 3U) 
                                                  | ((((0x14U 
                                                        <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                                       & (0x1eU 
                                                          > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                                      << 2U) 
                                                     | ((((0xaU 
                                                           <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                                          & (0x14U 
                                                             > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                                         << 1U) 
                                                        | (0xaU 
                                                           > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))))))))),7);
        bufp->chgCData(oldp+66,(vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_lsb),6);
        bufp->chgBit(oldp+67,((1U & ((IData)(vlSelf->clock_wrapper__DOT__shift_out_stb_delay) 
                                     >> 3U))));
        bufp->chgBit(oldp+68,((vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter 
                               >> 0x1fU)));
        bufp->chgBit(oldp+69,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_clk_stb));
        bufp->chgCData(oldp+70,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state),3);
        bufp->chgWData(oldp+71,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state),97);
        bufp->chgBit(oldp+75,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk));
        bufp->chgBit(oldp+76,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_latch));
        bufp->chgQData(oldp+77,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data),48);
        bufp->chgIData(oldp+79,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter),32);
        bufp->chgBit(oldp+80,(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__prev_out));
    }
    bufp->chgBit(oldp+81,(vlSelf->i_clk));
    bufp->chgBit(oldp+82,(vlSelf->i_reset_n));
    bufp->chgBit(oldp+83,(vlSelf->i_en));
    bufp->chgBit(oldp+84,(vlSelf->i_fast_set));
    bufp->chgCData(oldp+85,(vlSelf->i_mode),2);
    bufp->chgBit(oldp+86,(vlSelf->o_serial_data));
    bufp->chgBit(oldp+87,(vlSelf->o_serial_latch));
    bufp->chgBit(oldp+88,(vlSelf->o_serial_clk));
    bufp->chgIData(oldp+89,(((IData)(vlSelf->i_fast_set)
                              ? 0x20c49aU : 0xd1b70U)),32);
    bufp->chgBit(oldp+90,((0U != (IData)(vlSelf->i_mode))));
    bufp->chgBit(oldp+91,(((~ ((IData)(vlSelf->clock_wrapper__DOT__clk_update_stb) 
                               & (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_reset))) 
                           & (IData)(vlSelf->i_reset_n))));
    bufp->chgCData(oldp+92,(((IData)(vlSelf->i_en) ? (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_lsb_reg)
                              : 0xaU)),4);
    bufp->chgCData(oldp+93,(((IData)(vlSelf->i_en) ? (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_msb_reg)
                              : 0xaU)),4);
    bufp->chgCData(oldp+94,(((IData)(vlSelf->i_en) ? (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_lsb_reg)
                              : 0xaU)),4);
    bufp->chgCData(oldp+95,(((IData)(vlSelf->i_en) ? (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_msb_reg)
                              : 0xaU)),4);
    bufp->chgCData(oldp+96,(((IData)(vlSelf->i_en) ? (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_lsb_reg)
                              : 0xaU)),4);
    bufp->chgCData(oldp+97,(((IData)(vlSelf->i_en) ? (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_msb_reg)
                              : 0xaU)),4);
}

void Vclock_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root__trace_cleanup\n"); );
    // Init
    Vclock_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclock_wrapper___024root*>(voidSelf);
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

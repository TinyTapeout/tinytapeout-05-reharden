// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vclock_wrapper_tb__Syms.h"


void Vclock_wrapper_tb___024root__trace_chg_sub_0(Vclock_wrapper_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vclock_wrapper_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vclock_wrapper_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclock_wrapper_tb___024root*>(voidSelf);
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vclock_wrapper_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vclock_wrapper_tb___024root__trace_chg_sub_0(Vclock_wrapper_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__hours_msb_7seg),7);
        bufp->chgCData(oldp+1,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__hours_lsb_7seg),7);
        bufp->chgCData(oldp+2,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__minutes_msb_7seg),7);
        bufp->chgCData(oldp+3,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__minutes_lsb_7seg),7);
        bufp->chgCData(oldp+4,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__seconds_msb_7seg),7);
        bufp->chgCData(oldp+5,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__seconds_lsb_7seg),7);
        bufp->chgQData(oldp+6,((((QData)((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__hours_msb_7seg)) 
                                 << 0x28U) | (((QData)((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__hours_lsb_7seg)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__colon_blink) 
                                                                  << 0x1fU) 
                                                                 | (((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__minutes_msb_7seg) 
                                                                     << 0x18U) 
                                                                    | (((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__colon_blink) 
                                                                        << 0x17U) 
                                                                       | (((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__minutes_lsb_7seg) 
                                                                           << 0x10U) 
                                                                          | (((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__seconds_msb_7seg) 
                                                                              << 8U) 
                                                                             | (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__seconds_lsb_7seg))))))))))),48);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+8,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter),6);
        bufp->chgCData(oldp+9,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter),6);
        bufp->chgCData(oldp+10,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter),5);
        bufp->chgCData(oldp+11,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_msb_reg),4);
        bufp->chgCData(oldp+12,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_lsb_reg),4);
        bufp->chgCData(oldp+13,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_msb_reg),4);
        bufp->chgCData(oldp+14,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_lsb_reg),4);
        bufp->chgCData(oldp+15,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_msb_reg),4);
        bufp->chgCData(oldp+16,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_lsb_reg),4);
        bufp->chgBit(oldp+17,((vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter 
                               >> 0x1fU)));
        bufp->chgBit(oldp+18,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_stb));
        bufp->chgBit(oldp+19,((vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__debounce_clk_inst__DOT__counter 
                               >> 0x1fU)));
        bufp->chgBit(oldp+20,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clk_1hz_stb));
        bufp->chgBit(oldp+21,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_1hz_stb));
        bufp->chgBit(oldp+22,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__debounce_stb));
        bufp->chgBit(oldp+23,(((~ (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out)) 
                               & (vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
                                  >> 0x1fU))));
        bufp->chgBit(oldp+24,(((~ (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__prev_out)) 
                               & (vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__counter 
                                  >> 0x1fU))));
        bufp->chgBit(oldp+25,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clk_update_stb));
        bufp->chgBit(oldp+26,((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__samples))));
        bufp->chgBit(oldp+27,((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__samples))));
        bufp->chgCData(oldp+28,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode_db),2);
        bufp->chgBit(oldp+29,(((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__samples))
                                ? (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_1hz_stb)
                                : (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clk_1hz_stb))));
        bufp->chgBit(oldp+30,((1U & ((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__samples))
                                      ? ((~ (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__prev_out)) 
                                         & (vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__counter 
                                            >> 0x1fU))
                                      : ((~ (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out)) 
                                         & (vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
                                            >> 0x1fU))))));
        bufp->chgCData(oldp+31,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_stb_delay),4);
        bufp->chgBit(oldp+32,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__colon_blink));
        bufp->chgBit(oldp+33,((0U != (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state))));
        bufp->chgIData(oldp+34,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter),32);
        bufp->chgBit(oldp+35,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__prev_out));
        bufp->chgIData(oldp+36,(((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__samples))
                                  ? 0x346dbU : 0x14f8aU)),32);
        bufp->chgBit(oldp+37,((vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
                               >> 0x1fU)));
        bufp->chgIData(oldp+38,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter),32);
        bufp->chgIData(oldp+39,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__incriment),32);
        bufp->chgBit(oldp+40,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out));
        bufp->chgBit(oldp+41,((0U != (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode_db))));
        bufp->chgBit(oldp+42,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count));
        bufp->chgBit(oldp+43,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count));
        bufp->chgBit(oldp+44,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count));
        bufp->chgBit(oldp+45,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_reset));
        bufp->chgBit(oldp+46,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_overflow));
        bufp->chgBit(oldp+47,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_overflow));
        bufp->chgBit(oldp+48,(((0x17U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                               & (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count))));
        bufp->chgIData(oldp+49,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__debounce_clk_inst__DOT__counter),32);
        bufp->chgBit(oldp+50,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__debounce_clk_inst__DOT__prev_out));
        bufp->chgCData(oldp+51,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_msb),4);
        bufp->chgCData(oldp+52,((0xfU & (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_lsb))),4);
        bufp->chgCData(oldp+53,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_msb),4);
        bufp->chgCData(oldp+54,((0xfU & (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_lsb))),4);
        bufp->chgCData(oldp+55,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_msb),4);
        bufp->chgCData(oldp+56,((0xfU & (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_lsb))),4);
        bufp->chgCData(oldp+57,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter),6);
        bufp->chgBit(oldp+58,((0xaU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))));
        bufp->chgBit(oldp+59,(((0xaU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                               & (0x14U > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+60,(((0x14U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                               & (0x1eU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+61,((0x1eU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))));
        bufp->chgCData(oldp+62,((((0x1eU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                                  << 3U) | ((((0x14U 
                                               <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                                              & (0x1eU 
                                                 > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))) 
                                             << 2U) 
                                            | ((((0xaU 
                                                  <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                                                 & (0x14U 
                                                    > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))) 
                                                << 1U) 
                                               | (0xaU 
                                                  > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)))))),7);
        bufp->chgCData(oldp+63,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_lsb),6);
        bufp->chgBit(oldp+64,((0xaU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))));
        bufp->chgBit(oldp+65,(((0xaU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                               & (0x14U > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+66,(((0x14U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                               & (0x1eU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+67,(((0x1eU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                               & (0x28U > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+68,(((0x28U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                               & (0x32U > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+69,(((0x32U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                               & (0x3cU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+70,((0x3cU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))));
        bufp->chgCData(oldp+71,((((0x3cU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                  << 6U) | ((((0x32U 
                                               <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                              & (0x3cU 
                                                 > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                             << 5U) 
                                            | ((((0x28U 
                                                  <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                                 & (0x32U 
                                                    > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                                << 4U) 
                                               | ((((0x1eU 
                                                     <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                                    & (0x28U 
                                                       > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                                   << 3U) 
                                                  | ((((0x14U 
                                                        <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                                       & (0x1eU 
                                                          > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                                      << 2U) 
                                                     | ((((0xaU 
                                                           <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                                          & (0x14U 
                                                             > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                                         << 1U) 
                                                        | (0xaU 
                                                           > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))))))))),7);
        bufp->chgCData(oldp+72,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_lsb),6);
        bufp->chgBit(oldp+73,((0xaU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))));
        bufp->chgBit(oldp+74,(((0xaU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                               & (0x14U > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+75,(((0x14U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                               & (0x1eU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+76,(((0x1eU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                               & (0x28U > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+77,(((0x28U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                               & (0x32U > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+78,(((0x32U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                               & (0x3cU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)))));
        bufp->chgBit(oldp+79,((0x3cU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))));
        bufp->chgCData(oldp+80,((((0x3cU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                  << 6U) | ((((0x32U 
                                               <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                              & (0x3cU 
                                                 > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                             << 5U) 
                                            | ((((0x28U 
                                                  <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                                 & (0x32U 
                                                    > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                                << 4U) 
                                               | ((((0x1eU 
                                                     <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                                    & (0x28U 
                                                       > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                                   << 3U) 
                                                  | ((((0x14U 
                                                        <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                                       & (0x1eU 
                                                          > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                                      << 2U) 
                                                     | ((((0xaU 
                                                           <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                                          & (0x14U 
                                                             > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                                         << 1U) 
                                                        | (0xaU 
                                                           > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))))))))),7);
        bufp->chgCData(oldp+81,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_lsb),6);
        bufp->chgBit(oldp+82,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__sample_pipe));
        bufp->chgBit(oldp+83,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__sample_ext));
        bufp->chgCData(oldp+84,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__samples),5);
        bufp->chgBit(oldp+85,((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode0_db_inst__DOT__samples))));
        bufp->chgBit(oldp+86,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode0_db_inst__DOT__sample_pipe));
        bufp->chgBit(oldp+87,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode0_db_inst__DOT__sample_ext));
        bufp->chgCData(oldp+88,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode0_db_inst__DOT__samples),5);
        bufp->chgBit(oldp+89,((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode1_db_inst__DOT__samples))));
        bufp->chgBit(oldp+90,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode1_db_inst__DOT__sample_pipe));
        bufp->chgBit(oldp+91,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode1_db_inst__DOT__sample_ext));
        bufp->chgCData(oldp+92,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode1_db_inst__DOT__samples),5);
        bufp->chgBit(oldp+93,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_pipe0));
        bufp->chgBit(oldp+94,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_pipe1));
        bufp->chgBit(oldp+95,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_ext));
        bufp->chgIData(oldp+96,(((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__samples))
                                  ? 0xa009fU : 0x3ffffU)),32);
        bufp->chgBit(oldp+97,((vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__counter 
                               >> 0x1fU)));
        bufp->chgSData(oldp+98,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_div_inst__DOT__counter),16);
        bufp->chgIData(oldp+99,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__counter),32);
        bufp->chgIData(oldp+100,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__incriment),32);
        bufp->chgBit(oldp+101,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__prev_out));
        bufp->chgBit(oldp+102,((1U & ((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_stb_delay) 
                                      >> 3U))));
        bufp->chgBit(oldp+103,((vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter 
                                >> 0x1fU)));
        bufp->chgBit(oldp+104,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_clk_stb));
        bufp->chgCData(oldp+105,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state),3);
        bufp->chgWData(oldp+106,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state),97);
        bufp->chgBit(oldp+110,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk));
        bufp->chgBit(oldp+111,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_latch));
        bufp->chgQData(oldp+112,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data),48);
        bufp->chgIData(oldp+114,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter),32);
        bufp->chgBit(oldp+115,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__prev_out));
        bufp->chgBit(oldp+116,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__sample_pipe));
        bufp->chgBit(oldp+117,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__sample_ext));
        bufp->chgCData(oldp+118,(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__samples),5);
    }
    bufp->chgBit(oldp+119,(vlSelf->i_reset_n));
    bufp->chgBit(oldp+120,(vlSelf->i_clk));
    bufp->chgBit(oldp+121,(vlSelf->i_refclk));
    bufp->chgBit(oldp+122,(vlSelf->i_en));
    bufp->chgBit(oldp+123,(vlSelf->i_fast_set));
    bufp->chgBit(oldp+124,(vlSelf->i_use_refclk));
    bufp->chgCData(oldp+125,(vlSelf->i_mode),2);
    bufp->chgBit(oldp+126,(vlSelf->o_serial_data));
    bufp->chgBit(oldp+127,(vlSelf->o_serial_clk));
    bufp->chgBit(oldp+128,(vlSelf->o_serial_latch));
    bufp->chgQData(oldp+129,(vlSelf->o_parallel_data),48);
    bufp->chgQData(oldp+131,(vlSelf->clock_wrapper_tb__DOT__shift_in_reg),48);
    bufp->chgQData(oldp+133,(vlSelf->clock_wrapper_tb__DOT__parallel_out_reg),48);
    bufp->chgBit(oldp+135,(((~ ((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clk_update_stb) 
                                & (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_reset))) 
                            & (IData)(vlSelf->i_reset_n))));
    bufp->chgBit(oldp+136,((1U & (IData)(vlSelf->i_mode))));
    bufp->chgBit(oldp+137,((1U & ((IData)(vlSelf->i_mode) 
                                  >> 1U))));
    bufp->chgCData(oldp+138,(((IData)(vlSelf->i_en)
                               ? (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_lsb_reg)
                               : 0xaU)),4);
    bufp->chgCData(oldp+139,(((IData)(vlSelf->i_en)
                               ? (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_msb_reg)
                               : 0xaU)),4);
    bufp->chgCData(oldp+140,(((IData)(vlSelf->i_en)
                               ? (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_lsb_reg)
                               : 0xaU)),4);
    bufp->chgCData(oldp+141,(((IData)(vlSelf->i_en)
                               ? (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_msb_reg)
                               : 0xaU)),4);
    bufp->chgCData(oldp+142,(((IData)(vlSelf->i_en)
                               ? (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_lsb_reg)
                               : 0xaU)),4);
    bufp->chgCData(oldp+143,(((IData)(vlSelf->i_en)
                               ? (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_msb_reg)
                               : 0xaU)),4);
}

void Vclock_wrapper_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root__trace_cleanup\n"); );
    // Init
    Vclock_wrapper_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclock_wrapper_tb___024root*>(voidSelf);
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

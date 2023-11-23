// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclock_wrapper_tb.h for the primary calling header

#include "verilated.h"

#include "Vclock_wrapper_tb__Syms.h"
#include "Vclock_wrapper_tb___024root.h"

VL_ATTR_COLD void Vclock_wrapper_tb___024root___eval_static__TOP(Vclock_wrapper_tb___024root* vlSelf);

VL_ATTR_COLD void Vclock_wrapper_tb___024root___eval_static(Vclock_wrapper_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root___eval_static\n"); );
    // Body
    Vclock_wrapper_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vclock_wrapper_tb___024root___eval_static__TOP(Vclock_wrapper_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->clock_wrapper_tb__DOT__shift_in_reg = 0ULL;
    vlSelf->clock_wrapper_tb__DOT__parallel_out_reg = 0ULL;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__prev_out = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__incriment = 1U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_div_inst__DOT__counter = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__counter = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__incriment = 1U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__prev_out = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__debounce_clk_inst__DOT__counter = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__debounce_clk_inst__DOT__prev_out = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_reset = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter = 0U;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__prev_out = 0U;
}

VL_ATTR_COLD void Vclock_wrapper_tb___024root___eval_initial(Vclock_wrapper_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__o_serial_clk__0 
        = vlSelf->o_serial_clk;
    vlSelf->__Vtrigprevexpr___TOP__o_serial_latch__0 
        = vlSelf->o_serial_latch;
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = vlSelf->i_clk;
}

VL_ATTR_COLD void Vclock_wrapper_tb___024root___eval_final(Vclock_wrapper_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vclock_wrapper_tb___024root___eval_triggers__stl(Vclock_wrapper_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_wrapper_tb___024root___dump_triggers__stl(Vclock_wrapper_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vclock_wrapper_tb___024root___eval_stl(Vclock_wrapper_tb___024root* vlSelf);

VL_ATTR_COLD void Vclock_wrapper_tb___024root___eval_settle(Vclock_wrapper_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vclock_wrapper_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vclock_wrapper_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("..//clock_wrapper_tb.v", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vclock_wrapper_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_wrapper_tb___024root___dump_triggers__stl(Vclock_wrapper_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*6:0*/, 16> Vclock_wrapper_tb__ConstPool__TABLE_h356f3b84_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vclock_wrapper_tb__ConstPool__TABLE_h9f73484e_0;
extern const VlUnpacked<CData/*5:0*/, 1024> Vclock_wrapper_tb__ConstPool__TABLE_he779486d_0;

VL_ATTR_COLD void Vclock_wrapper_tb___024root___stl_sequent__TOP__0(Vclock_wrapper_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*9:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    SData/*9:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    SData/*9:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*3:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*3:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*3:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*3:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*3:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    vlSelf->o_serial_data = (1U & (IData)((vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data 
                                           >> 0x2fU)));
    vlSelf->o_serial_latch = vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_latch;
    vlSelf->o_serial_clk = vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk;
    vlSelf->o_parallel_data = vlSelf->clock_wrapper_tb__DOT__parallel_out_reg;
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__serial_busy 
        = (0U != (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state));
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__debounce_stb 
        = ((~ (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__debounce_clk_inst__DOT__prev_out)) 
           & (vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__debounce_clk_inst__DOT__counter 
              >> 0x1fU));
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_overflow 
        = ((0x3bU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
           & (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count));
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_overflow 
        = ((0x3bU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
           & (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count));
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_overflow 
        = ((0x17U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
           & (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count));
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_clk_stb 
        = ((~ (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__prev_out)) 
           & (vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter 
              >> 0x1fU));
    if (vlSelf->i_en) {
        __Vtableidx8 = vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_msb_reg;
        __Vtableidx9 = vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_lsb_reg;
        __Vtableidx10 = vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_msb_reg;
        __Vtableidx11 = vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_lsb_reg;
        __Vtableidx12 = vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_msb_reg;
        __Vtableidx13 = vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_lsb_reg;
    } else {
        __Vtableidx8 = 0xaU;
        __Vtableidx9 = 0xaU;
        __Vtableidx10 = 0xaU;
        __Vtableidx11 = 0xaU;
        __Vtableidx12 = 0xaU;
        __Vtableidx13 = 0xaU;
    }
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__hours_msb_7seg 
        = Vclock_wrapper_tb__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx8];
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__hours_lsb_7seg 
        = Vclock_wrapper_tb__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx9];
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__minutes_msb_7seg 
        = Vclock_wrapper_tb__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx10];
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__minutes_lsb_7seg 
        = Vclock_wrapper_tb__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx11];
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__seconds_msb_7seg 
        = Vclock_wrapper_tb__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx12];
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__seconds_lsb_7seg 
        = Vclock_wrapper_tb__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx13];
    __Vtableidx2 = (((0x1eU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                     << 3U) | ((((0x14U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                                 & (0x1eU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))) 
                                << 2U) | ((((0xaU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                                            & (0x14U 
                                               > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))) 
                                           << 1U) | 
                                          (0xaU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)))));
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_msb 
        = Vclock_wrapper_tb__ConstPool__TABLE_h9f73484e_0
        [__Vtableidx2];
    __Vtableidx4 = (((0x3cU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                     << 6U) | ((((0x32U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                 & (0x3cU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                << 5U) | ((((0x28U 
                                             <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                            & (0x32U 
                                               > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                           << 4U) | 
                                          ((((0x1eU 
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
                                                    > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))))))));
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_msb 
        = Vclock_wrapper_tb__ConstPool__TABLE_h9f73484e_0
        [__Vtableidx4];
    __Vtableidx6 = (((0x3cU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                     << 6U) | ((((0x32U <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                 & (0x3cU > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                << 5U) | ((((0x28U 
                                             <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                            & (0x32U 
                                               > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                           << 4U) | 
                                          ((((0x1eU 
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
                                                    > (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))))))));
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_msb 
        = Vclock_wrapper_tb__ConstPool__TABLE_h9f73484e_0
        [__Vtableidx6];
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clk_1hz_stb 
        = ((~ (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__prev_out)) 
           & (vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter 
              >> 0x1fU));
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode_db 
        = (((IData)((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode1_db_inst__DOT__samples))) 
            << 1U) | (0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode0_db_inst__DOT__samples)));
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_stb 
        = ((~ (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_pipe0)) 
           & (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_pipe1));
    __Vtableidx3 = (((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter) 
                     << 4U) | (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_msb));
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_lsb 
        = Vclock_wrapper_tb__ConstPool__TABLE_he779486d_0
        [__Vtableidx3];
    __Vtableidx5 = (((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter) 
                     << 4U) | (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_msb));
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_lsb 
        = Vclock_wrapper_tb__ConstPool__TABLE_he779486d_0
        [__Vtableidx5];
    __Vtableidx7 = (((IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter) 
                     << 4U) | (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_msb));
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_lsb 
        = Vclock_wrapper_tb__ConstPool__TABLE_he779486d_0
        [__Vtableidx7];
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_1hz_stb 
        = ((0x7fffU <= (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_div_inst__DOT__counter)) 
           & (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_stb));
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clk_update_stb 
        = (1U & ((0U != (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode_db))
                  ? ((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__samples))
                      ? ((~ (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__prev_out)) 
                         & (vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__counter 
                            >> 0x1fU)) : ((~ (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out)) 
                                          & (vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
                                             >> 0x1fU)))
                  : ((0x1fU == (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__samples))
                      ? (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_1hz_stb)
                      : (IData)(vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clk_1hz_stb))));
}

VL_ATTR_COLD void Vclock_wrapper_tb___024root___eval_stl(Vclock_wrapper_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vclock_wrapper_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_wrapper_tb___024root___dump_triggers__ico(Vclock_wrapper_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_wrapper_tb___024root___dump_triggers__act(Vclock_wrapper_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vclock_wrapper_tb___024root___dump_triggers__nba(Vclock_wrapper_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vclock_wrapper_tb___024root___ctor_var_reset(Vclock_wrapper_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_reset_n = VL_RAND_RESET_I(1);
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_refclk = VL_RAND_RESET_I(1);
    vlSelf->i_en = VL_RAND_RESET_I(1);
    vlSelf->i_fast_set = VL_RAND_RESET_I(1);
    vlSelf->i_use_refclk = VL_RAND_RESET_I(1);
    vlSelf->i_mode = VL_RAND_RESET_I(2);
    vlSelf->o_serial_data = VL_RAND_RESET_I(1);
    vlSelf->o_serial_latch = VL_RAND_RESET_I(1);
    vlSelf->o_serial_clk = VL_RAND_RESET_I(1);
    vlSelf->o_parallel_data = VL_RAND_RESET_Q(48);
    vlSelf->clock_wrapper_tb__DOT__shift_in_reg = VL_RAND_RESET_Q(48);
    vlSelf->clock_wrapper_tb__DOT__parallel_out_reg = VL_RAND_RESET_Q(48);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_stb = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clk_1hz_stb = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_1hz_stb = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__debounce_stb = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clk_update_stb = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode_db = VL_RAND_RESET_I(2);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_stb_delay = VL_RAND_RESET_I(4);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__colon_blink = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__serial_busy = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter = VL_RAND_RESET_I(32);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__prev_out = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter = VL_RAND_RESET_I(32);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__incriment = VL_RAND_RESET_I(32);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_pipe0 = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_pipe1 = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_ext = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_div_inst__DOT__counter = VL_RAND_RESET_I(16);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__counter = VL_RAND_RESET_I(32);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__incriment = VL_RAND_RESET_I(32);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__prev_out = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__debounce_clk_inst__DOT__counter = VL_RAND_RESET_I(32);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__debounce_clk_inst__DOT__prev_out = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__sample_pipe = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__sample_ext = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__samples = VL_RAND_RESET_I(5);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__sample_pipe = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__sample_ext = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__samples = VL_RAND_RESET_I(5);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode0_db_inst__DOT__sample_pipe = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode0_db_inst__DOT__sample_ext = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode0_db_inst__DOT__samples = VL_RAND_RESET_I(5);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode1_db_inst__DOT__sample_pipe = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode1_db_inst__DOT__sample_ext = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__mode1_db_inst__DOT__samples = VL_RAND_RESET_I(5);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_reset = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_overflow = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_overflow = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_overflow = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter = VL_RAND_RESET_I(6);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter = VL_RAND_RESET_I(6);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_msb_reg = VL_RAND_RESET_I(4);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_lsb_reg = VL_RAND_RESET_I(4);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_msb_reg = VL_RAND_RESET_I(4);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_lsb_reg = VL_RAND_RESET_I(4);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_msb_reg = VL_RAND_RESET_I(4);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_lsb_reg = VL_RAND_RESET_I(4);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_msb = VL_RAND_RESET_I(4);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_lsb = VL_RAND_RESET_I(6);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_msb = VL_RAND_RESET_I(4);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_lsb = VL_RAND_RESET_I(6);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_msb = VL_RAND_RESET_I(4);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_lsb = VL_RAND_RESET_I(6);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__hours_msb_7seg = VL_RAND_RESET_I(7);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__hours_lsb_7seg = VL_RAND_RESET_I(7);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__minutes_msb_7seg = VL_RAND_RESET_I(7);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__minutes_lsb_7seg = VL_RAND_RESET_I(7);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__seconds_msb_7seg = VL_RAND_RESET_I(7);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__seconds_lsb_7seg = VL_RAND_RESET_I(7);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_clk_stb = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter = VL_RAND_RESET_I(32);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__prev_out = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(97, vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_latch = VL_RAND_RESET_I(1);
    vlSelf->clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data = VL_RAND_RESET_Q(48);
    vlSelf->__Vdly__clock_wrapper_tb__DOT__shift_in_reg = VL_RAND_RESET_Q(48);
    vlSelf->__Vtrigprevexpr___TOP__o_serial_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__o_serial_latch__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__i_clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

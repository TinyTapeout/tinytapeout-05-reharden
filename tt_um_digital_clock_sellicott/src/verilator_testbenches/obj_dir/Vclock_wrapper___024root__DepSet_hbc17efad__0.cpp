// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclock_wrapper.h for the primary calling header

#include "verilated.h"

#include "Vclock_wrapper__Syms.h"
#include "Vclock_wrapper___024root.h"

extern const VlUnpacked<CData/*6:0*/, 16> Vclock_wrapper__ConstPool__TABLE_h356f3b84_0;

VL_INLINE_OPT void Vclock_wrapper___024root___ico_sequent__TOP__0(Vclock_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root___ico_sequent__TOP__0\n"); );
    // Init
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
    if (vlSelf->i_en) {
        __Vtableidx8 = vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_msb_reg;
        __Vtableidx9 = vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_lsb_reg;
        __Vtableidx10 = vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_msb_reg;
        __Vtableidx11 = vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_lsb_reg;
        __Vtableidx12 = vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_msb_reg;
        __Vtableidx13 = vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_lsb_reg;
    } else {
        __Vtableidx8 = 0xaU;
        __Vtableidx9 = 0xaU;
        __Vtableidx10 = 0xaU;
        __Vtableidx11 = 0xaU;
        __Vtableidx12 = 0xaU;
        __Vtableidx13 = 0xaU;
    }
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__hours_msb_7seg 
        = Vclock_wrapper__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx8];
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__hours_lsb_7seg 
        = Vclock_wrapper__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx9];
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__minutes_msb_7seg 
        = Vclock_wrapper__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx10];
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__minutes_lsb_7seg 
        = Vclock_wrapper__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx11];
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__seconds_msb_7seg 
        = Vclock_wrapper__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx12];
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__seconds_lsb_7seg 
        = Vclock_wrapper__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx13];
    vlSelf->clock_wrapper__DOT__clk_update_stb = (1U 
                                                  & ((0U 
                                                      != (IData)(vlSelf->i_mode))
                                                      ? 
                                                     ((~ (IData)(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out)) 
                                                      & (vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
                                                         >> 0x1fU))
                                                      : 
                                                     ((~ (IData)(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__prev_out)) 
                                                      & (vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter 
                                                         >> 0x1fU))));
}

void Vclock_wrapper___024root___eval_ico(Vclock_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vclock_wrapper___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vclock_wrapper___024root___eval_act(Vclock_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*3:0*/, 128> Vclock_wrapper__ConstPool__TABLE_h9f73484e_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vclock_wrapper__ConstPool__TABLE_h883563d3_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vclock_wrapper__ConstPool__TABLE_h1735635f_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vclock_wrapper__ConstPool__TABLE_h5d56e28a_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vclock_wrapper__ConstPool__TABLE_h48c448e2_0;
extern const VlUnpacked<CData/*5:0*/, 1024> Vclock_wrapper__ConstPool__TABLE_he779486d_0;

VL_INLINE_OPT void Vclock_wrapper___024root___nba_sequent__TOP__0(Vclock_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
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
    CData/*3:0*/ __Vdly__clock_wrapper__DOT__shift_out_stb_delay;
    __Vdly__clock_wrapper__DOT__shift_out_stb_delay = 0;
    IData/*31:0*/ __Vdly__clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter;
    __Vdly__clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter = 0;
    IData/*31:0*/ __Vdly__clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter;
    __Vdly__clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter = 0;
    IData/*31:0*/ __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter;
    __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter = 0;
    CData/*2:0*/ __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state;
    __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state = 0;
    VlWide<4>/*96:0*/ __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state;
    VL_ZERO_W(97, __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state);
    CData/*0:0*/ __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk;
    __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk = 0;
    QData/*47:0*/ __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data;
    __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_5;
    // Body
    __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter 
        = vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter;
    __Vdly__clock_wrapper__DOT__shift_out_stb_delay 
        = vlSelf->clock_wrapper__DOT__shift_out_stb_delay;
    __Vdly__clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter 
        = vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter;
    __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[0U] 
        = vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[0U];
    __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[1U] 
        = vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[1U];
    __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[2U] 
        = vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[2U];
    __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[3U] 
        = vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[3U];
    __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk 
        = vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk;
    __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state 
        = vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state;
    __Vdly__clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
        = vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter;
    __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data 
        = vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data;
    if (vlSelf->i_reset_n) {
        __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter 
            = ((IData)(0x20000000U) + vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter);
        __Vdly__clock_wrapper__DOT__shift_out_stb_delay 
            = ((0xeU & ((IData)(vlSelf->clock_wrapper__DOT__shift_out_stb_delay) 
                        << 1U)) | (IData)(vlSelf->clock_wrapper__DOT__clk_update_stb));
        if (vlSelf->i_en) {
            __Vdly__clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter 
                = ((IData)(0x68db8U) + vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter);
            __Vdly__clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
                = (vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
                   + vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__incriment);
            vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out 
                = (vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
                   >> 0x1fU);
            vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__prev_out 
                = (vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter 
                   >> 0x1fU);
        }
        if ((0U == (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state))) {
            __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[0U] = 0U;
            __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[1U] = 0U;
            __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[2U] = 0U;
            __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[3U] = 0U;
            __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk = 0U;
            __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data = 0ULL;
            vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_latch = 0U;
        } else {
            if (((2U == (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state)) 
                 & (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_clk_stb))) {
                __Vtemp_2[0U] = 1U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
                __Vtemp_2[3U] = 0U;
                VL_ADD_W(4, __Vtemp_3, __Vtemp_2, vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state);
                __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[0U] 
                    = __Vtemp_3[0U];
                __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[1U] 
                    = __Vtemp_3[1U];
                __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[2U] 
                    = __Vtemp_3[2U];
                __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[3U] 
                    = (1U & __Vtemp_3[3U]);
            }
            if ((1U == (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state))) {
                __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk = 0U;
                __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data 
                    = (((QData)((IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__hours_msb_7seg)) 
                        << 0x28U) | (((QData)((IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__hours_lsb_7seg)) 
                                      << 0x20U) | (QData)((IData)(
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
                                                                               | (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__seconds_lsb_7seg))))))))));
                vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_latch = 0U;
            } else {
                if (((2U == (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state)) 
                     & (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_clk_stb))) {
                    __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk 
                        = (1U & (~ (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk)));
                    if ((0U == (1U ^ (1U & vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[0U])))) {
                        __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data 
                            = (0xfffffffffffeULL & 
                               (vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data 
                                << 1U));
                    }
                } else if (((3U == (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state)) 
                            & (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_clk_stb))) {
                    __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk = 0U;
                }
                if ((1U & (~ ((2U == (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state)) 
                              & (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_clk_stb))))) {
                    if (((3U == (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state)) 
                         & (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_clk_stb))) {
                        vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_latch = 1U;
                    }
                }
            }
        }
        if ((IData)((((IData)(vlSelf->clock_wrapper__DOT__shift_out_stb_delay) 
                      >> 3U) & (~ (IData)(vlSelf->clock_wrapper__DOT__serial_busy))))) {
            __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state = 1U;
        } else if ((1U == (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state))) {
            __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state = 2U;
        } else {
            __Vtemp_5[0U] = 0x5fU;
            __Vtemp_5[1U] = 0U;
            __Vtemp_5[2U] = 0U;
            __Vtemp_5[3U] = 0U;
            if (((2U == (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state)) 
                 & VL_LTE_W(4, __Vtemp_5, vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state))) {
                __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state = 3U;
            } else if ((((3U == (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state)) 
                         & (IData)(vlSelf->o_serial_latch)) 
                        & (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_clk_stb))) {
                __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state = 0U;
            }
        }
        if (vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count) {
            vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter 
                = ((IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_overflow)
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))));
        }
        if (vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count) {
            vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter 
                = ((IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_overflow)
                    ? 0U : (0x3fU & ((IData)(1U) + (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))));
        }
        vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_lsb_reg 
            = (0xfU & (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_lsb));
        vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_lsb_reg 
            = (0xfU & (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_lsb));
        vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_lsb_reg 
            = (0xfU & (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_lsb));
        vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_msb_reg 
            = vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_msb;
        vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_msb_reg 
            = vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_msb;
        vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_msb_reg 
            = vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_msb;
        vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__incriment 
            = ((IData)(1U) + ((IData)(vlSelf->i_fast_set)
                               ? 0x20c49aU : 0xd1b70U));
    } else {
        __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter = 0U;
        __Vdly__clock_wrapper__DOT__shift_out_stb_delay = 0U;
        __Vdly__clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter = 0U;
        __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[0U] = 0U;
        __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[1U] = 0U;
        __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[2U] = 0U;
        __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[3U] = 0U;
        __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk = 0U;
        __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state = 0U;
        __Vdly__clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter = 0U;
        __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data = 0ULL;
        vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter = 0U;
        vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter = 0U;
        vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_lsb_reg = 0U;
        vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_lsb_reg = 0U;
        vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_lsb_reg = 0U;
        vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_msb_reg = 0U;
        vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_msb_reg = 0U;
        vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_msb_reg = 0U;
        vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_latch = 0U;
        vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out = 0U;
        vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__prev_out = 0U;
        vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__incriment = 1U;
    }
    if (((~ ((IData)(vlSelf->clock_wrapper__DOT__clk_update_stb) 
             & (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_reset))) 
         & (IData)(vlSelf->i_reset_n))) {
        if (vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count) {
            vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter 
                = ((IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_overflow)
                    ? 0U : (0x3fU & ((IData)(1U) + (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))));
        }
    } else {
        vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter = 0U;
    }
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__prev_out 
        = ((IData)(vlSelf->i_reset_n) & (vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter 
                                         >> 0x1fU));
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk 
        = __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk;
    vlSelf->clock_wrapper__DOT__shift_out_stb_delay 
        = __Vdly__clock_wrapper__DOT__shift_out_stb_delay;
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[0U] 
        = __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[0U];
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[1U] 
        = __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[1U];
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[2U] 
        = __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[2U];
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[3U] 
        = __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state[3U];
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data 
        = __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data;
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter 
        = __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter;
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state 
        = __Vdly__clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state;
    vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
        = __Vdly__clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter;
    vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter 
        = __Vdly__clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter;
    vlSelf->o_serial_clk = vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk;
    vlSelf->o_serial_data = (1U & (IData)((vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data 
                                           >> 0x2fU)));
    __Vtableidx2 = (((0x1eU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                     << 3U) | ((((0x14U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                                 & (0x1eU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))) 
                                << 2U) | ((((0xaU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
                                            & (0x14U 
                                               > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter))) 
                                           << 1U) | 
                                          (0xaU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)))));
    vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_msb 
        = Vclock_wrapper__ConstPool__TABLE_h9f73484e_0
        [__Vtableidx2];
    __Vtableidx4 = (((0x3cU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                     << 6U) | ((((0x32U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                 & (0x3cU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                << 5U) | ((((0x28U 
                                             <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
                                            & (0x32U 
                                               > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))) 
                                           << 4U) | 
                                          ((((0x1eU 
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
                                                    > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter))))))));
    vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_msb 
        = Vclock_wrapper__ConstPool__TABLE_h9f73484e_0
        [__Vtableidx4];
    __Vtableidx6 = (((0x3cU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                     << 6U) | ((((0x32U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                 & (0x3cU > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                << 5U) | ((((0x28U 
                                             <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
                                            & (0x32U 
                                               > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))) 
                                           << 4U) | 
                                          ((((0x1eU 
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
                                                    > (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter))))))));
    vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_msb 
        = Vclock_wrapper__ConstPool__TABLE_h9f73484e_0
        [__Vtableidx6];
    __Vtableidx1 = (((IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_overflow) 
                     << 4U) | (((IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_overflow) 
                                << 3U) | (((IData)(vlSelf->clock_wrapper__DOT__clk_update_stb) 
                                           << 2U) | (IData)(vlSelf->i_mode))));
    vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count 
        = Vclock_wrapper__ConstPool__TABLE_h883563d3_0
        [__Vtableidx1];
    vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count 
        = Vclock_wrapper__ConstPool__TABLE_h1735635f_0
        [__Vtableidx1];
    vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count 
        = Vclock_wrapper__ConstPool__TABLE_h5d56e28a_0
        [__Vtableidx1];
    vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_reset 
        = Vclock_wrapper__ConstPool__TABLE_h48c448e2_0
        [__Vtableidx1];
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_clk_stb 
        = ((~ (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__prev_out)) 
           & (vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter 
              >> 0x1fU));
    if (vlSelf->i_en) {
        __Vtableidx13 = vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_lsb_reg;
        __Vtableidx11 = vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_lsb_reg;
        __Vtableidx9 = vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_lsb_reg;
        __Vtableidx12 = vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_msb_reg;
        __Vtableidx10 = vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_msb_reg;
        __Vtableidx8 = vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_msb_reg;
    } else {
        __Vtableidx13 = 0xaU;
        __Vtableidx11 = 0xaU;
        __Vtableidx9 = 0xaU;
        __Vtableidx12 = 0xaU;
        __Vtableidx10 = 0xaU;
        __Vtableidx8 = 0xaU;
    }
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__seconds_lsb_7seg 
        = Vclock_wrapper__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx13];
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__minutes_lsb_7seg 
        = Vclock_wrapper__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx11];
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__hours_lsb_7seg 
        = Vclock_wrapper__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx9];
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__seconds_msb_7seg 
        = Vclock_wrapper__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx12];
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__minutes_msb_7seg 
        = Vclock_wrapper__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx10];
    vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__hours_msb_7seg 
        = Vclock_wrapper__ConstPool__TABLE_h356f3b84_0
        [__Vtableidx8];
    vlSelf->o_serial_latch = vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_latch;
    vlSelf->clock_wrapper__DOT__serial_busy = (0U != (IData)(vlSelf->clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state));
    __Vtableidx3 = (((IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter) 
                     << 4U) | (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_msb));
    vlSelf->clock_wrapper__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_lsb 
        = Vclock_wrapper__ConstPool__TABLE_he779486d_0
        [__Vtableidx3];
    __Vtableidx5 = (((IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter) 
                     << 4U) | (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_msb));
    vlSelf->clock_wrapper__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_lsb 
        = Vclock_wrapper__ConstPool__TABLE_he779486d_0
        [__Vtableidx5];
    __Vtableidx7 = (((IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter) 
                     << 4U) | (IData)(vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_msb));
    vlSelf->clock_wrapper__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_lsb 
        = Vclock_wrapper__ConstPool__TABLE_he779486d_0
        [__Vtableidx7];
    vlSelf->clock_wrapper__DOT__clk_update_stb = (1U 
                                                  & ((0U 
                                                      != (IData)(vlSelf->i_mode))
                                                      ? 
                                                     ((~ (IData)(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out)) 
                                                      & (vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter 
                                                         >> 0x1fU))
                                                      : 
                                                     ((~ (IData)(vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__prev_out)) 
                                                      & (vlSelf->clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter 
                                                         >> 0x1fU))));
    vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_overflow 
        = ((0x3bU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter)) 
           & (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count));
    vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_overflow 
        = ((0x3bU <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter)) 
           & (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count));
    vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_overflow 
        = ((0x17U <= (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter)) 
           & (IData)(vlSelf->clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count));
}

void Vclock_wrapper___024root___eval_nba(Vclock_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vclock_wrapper___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vclock_wrapper___024root___eval_triggers__ico(Vclock_wrapper___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_wrapper___024root___dump_triggers__ico(Vclock_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
void Vclock_wrapper___024root___eval_triggers__act(Vclock_wrapper___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_wrapper___024root___dump_triggers__act(Vclock_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_wrapper___024root___dump_triggers__nba(Vclock_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vclock_wrapper___024root___eval(Vclock_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vclock_wrapper___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vclock_wrapper___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("../clock_v2/clock_wrapper.v", 16, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vclock_wrapper___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vclock_wrapper___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vclock_wrapper___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../clock_v2/clock_wrapper.v", 16, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vclock_wrapper___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vclock_wrapper___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../clock_v2/clock_wrapper.v", 16, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vclock_wrapper___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vclock_wrapper___024root___eval_debug_assertions(Vclock_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_wrapper___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_reset_n & 0xfeU))) {
        Verilated::overWidthError("i_reset_n");}
    if (VL_UNLIKELY((vlSelf->i_en & 0xfeU))) {
        Verilated::overWidthError("i_en");}
    if (VL_UNLIKELY((vlSelf->i_fast_set & 0xfeU))) {
        Verilated::overWidthError("i_fast_set");}
    if (VL_UNLIKELY((vlSelf->i_mode & 0xfcU))) {
        Verilated::overWidthError("i_mode");}
}
#endif  // VL_DEBUG

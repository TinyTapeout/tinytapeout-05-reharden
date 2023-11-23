// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclock_wrapper.h for the primary calling header

#ifndef VERILATED_VCLOCK_WRAPPER___024ROOT_H_
#define VERILATED_VCLOCK_WRAPPER___024ROOT_H_  // guard

#include "verilated.h"


class Vclock_wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclock_wrapper___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_reset_n,0,0);
    VL_IN8(i_en,0,0);
    VL_IN8(i_fast_set,0,0);
    VL_IN8(i_mode,1,0);
    VL_OUT8(o_serial_data,0,0);
    VL_OUT8(o_serial_latch,0,0);
    VL_OUT8(o_serial_clk,0,0);
    CData/*0:0*/ clock_wrapper__DOT__clk_update_stb;
    CData/*3:0*/ clock_wrapper__DOT__shift_out_stb_delay;
    CData/*0:0*/ clock_wrapper__DOT__serial_busy;
    CData/*0:0*/ clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__prev_out;
    CData/*0:0*/ clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out;
    CData/*0:0*/ clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count;
    CData/*0:0*/ clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count;
    CData/*0:0*/ clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count;
    CData/*0:0*/ clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_reset;
    CData/*0:0*/ clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_overflow;
    CData/*0:0*/ clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_overflow;
    CData/*0:0*/ clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_overflow;
    CData/*5:0*/ clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter;
    CData/*5:0*/ clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter;
    CData/*4:0*/ clock_wrapper__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter;
    CData/*3:0*/ clock_wrapper__DOT__disp_out__DOT__hours_msb_reg;
    CData/*3:0*/ clock_wrapper__DOT__disp_out__DOT__hours_lsb_reg;
    CData/*3:0*/ clock_wrapper__DOT__disp_out__DOT__minutes_msb_reg;
    CData/*3:0*/ clock_wrapper__DOT__disp_out__DOT__minutes_lsb_reg;
    CData/*3:0*/ clock_wrapper__DOT__disp_out__DOT__seconds_msb_reg;
    CData/*3:0*/ clock_wrapper__DOT__disp_out__DOT__seconds_lsb_reg;
    CData/*3:0*/ clock_wrapper__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_msb;
    CData/*5:0*/ clock_wrapper__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_lsb;
    CData/*3:0*/ clock_wrapper__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_msb;
    CData/*5:0*/ clock_wrapper__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_lsb;
    CData/*3:0*/ clock_wrapper__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_msb;
    CData/*5:0*/ clock_wrapper__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_lsb;
    CData/*6:0*/ clock_wrapper__DOT__shift_out_inst__DOT__hours_msb_7seg;
    CData/*6:0*/ clock_wrapper__DOT__shift_out_inst__DOT__hours_lsb_7seg;
    CData/*6:0*/ clock_wrapper__DOT__shift_out_inst__DOT__minutes_msb_7seg;
    CData/*6:0*/ clock_wrapper__DOT__shift_out_inst__DOT__minutes_lsb_7seg;
    CData/*6:0*/ clock_wrapper__DOT__shift_out_inst__DOT__seconds_msb_7seg;
    CData/*6:0*/ clock_wrapper__DOT__shift_out_inst__DOT__seconds_lsb_7seg;
    CData/*0:0*/ clock_wrapper__DOT__shift_out_inst__DOT__shift_clk_stb;
    CData/*0:0*/ clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__prev_out;
    CData/*2:0*/ clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state;
    CData/*0:0*/ clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk;
    CData/*0:0*/ clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_latch;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ clock_wrapper__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter;
    IData/*31:0*/ clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter;
    IData/*31:0*/ clock_wrapper__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__incriment;
    IData/*31:0*/ clock_wrapper__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter;
    VlWide<4>/*96:0*/ clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*47:0*/ clock_wrapper__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vclock_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclock_wrapper___024root(Vclock_wrapper__Syms* symsp, const char* v__name);
    ~Vclock_wrapper___024root();
    VL_UNCOPYABLE(Vclock_wrapper___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclock_wrapper_tb.h for the primary calling header

#ifndef VERILATED_VCLOCK_WRAPPER_TB___024ROOT_H_
#define VERILATED_VCLOCK_WRAPPER_TB___024ROOT_H_  // guard

#include "verilated.h"


class Vclock_wrapper_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclock_wrapper_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(i_clk,0,0);
        VL_OUT8(o_serial_latch,0,0);
        VL_OUT8(o_serial_clk,0,0);
        VL_IN8(i_reset_n,0,0);
        VL_IN8(i_refclk,0,0);
        VL_IN8(i_en,0,0);
        VL_IN8(i_fast_set,0,0);
        VL_IN8(i_use_refclk,0,0);
        VL_IN8(i_mode,1,0);
        VL_OUT8(o_serial_data,0,0);
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__refclk_stb;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clk_1hz_stb;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__refclk_1hz_stb;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__debounce_stb;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clk_update_stb;
        CData/*1:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__mode_db;
        CData/*3:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_stb_delay;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__colon_blink;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__serial_busy;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__prev_out;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__prev_out;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_pipe0;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_pipe1;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_ext;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__prev_out;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__debounce_clk_inst__DOT__prev_out;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__sample_pipe;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__sample_ext;
        CData/*4:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__fast_set_db_inst__DOT__samples;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__sample_pipe;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__sample_ext;
        CData/*4:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__use_refclk_db_inst__DOT__samples;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__mode0_db_inst__DOT__sample_pipe;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__mode0_db_inst__DOT__sample_ext;
        CData/*4:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__mode0_db_inst__DOT__samples;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__mode1_db_inst__DOT__sample_pipe;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__mode1_db_inst__DOT__sample_ext;
        CData/*4:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__mode1_db_inst__DOT__samples;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_reset;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_overflow;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_overflow;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_overflow;
        CData/*5:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__seconds_count_inst__DOT__counter;
        CData/*5:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__minutes_count_inst__DOT__counter;
        CData/*4:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clock_inst__DOT__time_reg_inst__DOT__hours_count_inst__DOT__counter;
        CData/*3:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_msb_reg;
        CData/*3:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_lsb_reg;
        CData/*3:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_msb_reg;
        CData/*3:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_lsb_reg;
        CData/*3:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_msb_reg;
        CData/*3:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_lsb_reg;
        CData/*3:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_msb;
        CData/*5:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__hours_bcd_inst__DOT__bcd_lsb;
        CData/*3:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_msb;
        CData/*5:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__minutes_bcd_inst__DOT__bcd_lsb;
        CData/*3:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_msb;
        CData/*5:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__disp_out__DOT__seconds_bcd_inst__DOT__bcd_lsb;
        CData/*6:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__hours_msb_7seg;
        CData/*6:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__hours_lsb_7seg;
        CData/*6:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__minutes_msb_7seg;
        CData/*6:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__minutes_lsb_7seg;
    };
    struct {
        CData/*6:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__seconds_msb_7seg;
        CData/*6:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__seconds_lsb_7seg;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_clk_stb;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__prev_out;
        CData/*2:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__state;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_clk;
        CData/*0:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_latch;
        CData/*0:0*/ __Vtrigprevexpr___TOP__o_serial_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__o_serial_latch__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__refclk_div_inst__DOT__counter;
        IData/*31:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__sysclk_div_inst__DOT__counter;
        IData/*31:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__counter;
        IData/*31:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__clock_gen_inst__DOT__timeset_div_inst__DOT__divider_inst__DOT__incriment;
        IData/*31:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__counter;
        IData/*31:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__refclk_gen_inst__DOT__divider_inst__DOT__incriment;
        IData/*31:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__debounce_clk_inst__DOT__counter;
        IData/*31:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_reg_div_inst__DOT__counter;
        VlWide<4>/*96:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__transfer_state;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(o_parallel_data,47,0);
        QData/*47:0*/ clock_wrapper_tb__DOT__shift_in_reg;
        QData/*47:0*/ clock_wrapper_tb__DOT__parallel_out_reg;
        QData/*47:0*/ clock_wrapper_tb__DOT__clock_inst__DOT__shift_out_inst__DOT__shift_out_inst__DOT__serial_data;
        QData/*47:0*/ __Vdly__clock_wrapper_tb__DOT__shift_in_reg;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vclock_wrapper_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclock_wrapper_tb___024root(Vclock_wrapper_tb__Syms* symsp, const char* v__name);
    ~Vclock_wrapper_tb___024root();
    VL_UNCOPYABLE(Vclock_wrapper_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

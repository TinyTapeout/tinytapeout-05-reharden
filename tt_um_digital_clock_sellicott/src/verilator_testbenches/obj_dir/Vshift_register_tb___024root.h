// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vshift_register_tb.h for the primary calling header

#ifndef VERILATED_VSHIFT_REGISTER_TB___024ROOT_H_
#define VERILATED_VSHIFT_REGISTER_TB___024ROOT_H_  // guard

#include "verilated.h"


class Vshift_register_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vshift_register_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_OUT8(o_serial_clk,0,0);
    VL_OUT8(o_serial_latch,0,0);
    VL_IN8(i_reset_n,0,0);
    VL_IN8(i_start_stb,0,0);
    VL_OUT8(o_busy,0,0);
    VL_IN8(i_parallel_data,7,0);
    VL_OUT8(o_serial_data,0,0);
    VL_OUT8(o_parallel_data,7,0);
    CData/*0:0*/ shift_register_tb__DOT__shift_clk_stb;
    CData/*7:0*/ shift_register_tb__DOT__shift_in_reg;
    CData/*7:0*/ shift_register_tb__DOT__parallel_out_reg;
    CData/*0:0*/ shift_register_tb__DOT__shift_reg_div_inst__DOT__prev_out;
    CData/*2:0*/ shift_register_tb__DOT__shift_out_inst__DOT__state;
    CData/*0:0*/ shift_register_tb__DOT__shift_out_inst__DOT__serial_clk;
    CData/*0:0*/ shift_register_tb__DOT__shift_out_inst__DOT__serial_latch;
    CData/*7:0*/ shift_register_tb__DOT__shift_out_inst__DOT__serial_data;
    CData/*7:0*/ __Vdly__shift_register_tb__DOT__shift_in_reg;
    CData/*0:0*/ __Vtrigprevexpr___TOP__o_serial_clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__o_serial_latch__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ shift_register_tb__DOT__shift_reg_div_inst__DOT__counter;
    IData/*16:0*/ shift_register_tb__DOT__shift_out_inst__DOT__transfer_state;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vshift_register_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vshift_register_tb___024root(Vshift_register_tb__Syms* symsp, const char* v__name);
    ~Vshift_register_tb___024root();
    VL_UNCOPYABLE(Vshift_register_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

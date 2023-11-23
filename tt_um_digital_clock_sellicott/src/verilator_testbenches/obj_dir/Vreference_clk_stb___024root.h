// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vreference_clk_stb.h for the primary calling header

#ifndef VERILATED_VREFERENCE_CLK_STB___024ROOT_H_
#define VERILATED_VREFERENCE_CLK_STB___024ROOT_H_  // guard

#include "verilated.h"


class Vreference_clk_stb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vreference_clk_stb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_reset_n,0,0);
    VL_IN8(i_en,0,0);
    VL_IN8(i_fast_set,0,0);
    VL_IN8(i_refclk,0,0);
    VL_OUT8(o_refclk_stb,0,0);
    VL_OUT8(o_refclk_1hz_stb,0,0);
    VL_OUT8(o_refclk_timeset_stb,0,0);
    CData/*0:0*/ reference_clk_stb__DOT__refclk_pipe0;
    CData/*0:0*/ reference_clk_stb__DOT__refclk_pipe1;
    CData/*0:0*/ reference_clk_stb__DOT__refclk_ext;
    CData/*0:0*/ reference_clk_stb__DOT__divider_inst__DOT__prev_out;
    CData/*0:0*/ __Vtrigprevexpr___TOP__i_clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ reference_clk_stb__DOT__refclk_div_inst__DOT__counter;
    IData/*31:0*/ reference_clk_stb__DOT__divider_inst__DOT__counter;
    IData/*31:0*/ reference_clk_stb__DOT__divider_inst__DOT__incriment;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vreference_clk_stb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vreference_clk_stb___024root(Vreference_clk_stb__Syms* symsp, const char* v__name);
    ~Vreference_clk_stb___024root();
    VL_UNCOPYABLE(Vreference_clk_stb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

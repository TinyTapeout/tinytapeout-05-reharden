// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbin_to_bcd.h for the primary calling header

#ifndef VERILATED_VBIN_TO_BCD___024ROOT_H_
#define VERILATED_VBIN_TO_BCD___024ROOT_H_  // guard

#include "verilated.h"


class Vbin_to_bcd__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbin_to_bcd___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_bin,5,0);
    VL_OUT8(o_bcd_lsb,3,0);
    VL_OUT8(o_bcd_msb,3,0);
    CData/*3:0*/ bin_to_bcd__DOT__bcd_msb;
    CData/*5:0*/ bin_to_bcd__DOT__bcd_lsb;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbin_to_bcd__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbin_to_bcd___024root(Vbin_to_bcd__Syms* symsp, const char* v__name);
    ~Vbin_to_bcd___024root();
    VL_UNCOPYABLE(Vbin_to_bcd___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

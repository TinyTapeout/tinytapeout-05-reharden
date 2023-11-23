// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREFERENCE_CLK_STB__SYMS_H_
#define VERILATED_VREFERENCE_CLK_STB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vreference_clk_stb.h"

// INCLUDE MODULE CLASSES
#include "Vreference_clk_stb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vreference_clk_stb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vreference_clk_stb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vreference_clk_stb___024root   TOP;

    // CONSTRUCTORS
    Vreference_clk_stb__Syms(VerilatedContext* contextp, const char* namep, Vreference_clk_stb* modelp);
    ~Vreference_clk_stb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard

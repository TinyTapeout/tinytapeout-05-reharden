// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBIN_TO_BCD__SYMS_H_
#define VERILATED_VBIN_TO_BCD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbin_to_bcd.h"

// INCLUDE MODULE CLASSES
#include "Vbin_to_bcd___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vbin_to_bcd__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbin_to_bcd* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbin_to_bcd___024root          TOP;

    // CONSTRUCTORS
    Vbin_to_bcd__Syms(VerilatedContext* contextp, const char* namep, Vbin_to_bcd* modelp);
    ~Vbin_to_bcd__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard

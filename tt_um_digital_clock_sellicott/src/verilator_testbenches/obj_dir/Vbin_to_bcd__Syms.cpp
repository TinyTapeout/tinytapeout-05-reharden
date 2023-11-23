// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vbin_to_bcd__Syms.h"
#include "Vbin_to_bcd.h"
#include "Vbin_to_bcd___024root.h"

// FUNCTIONS
Vbin_to_bcd__Syms::~Vbin_to_bcd__Syms()
{
}

Vbin_to_bcd__Syms::Vbin_to_bcd__Syms(VerilatedContext* contextp, const char* namep, Vbin_to_bcd* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}

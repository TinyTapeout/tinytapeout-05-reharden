// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbin_to_bcd.h"
#include "Vbin_to_bcd__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbin_to_bcd::Vbin_to_bcd(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbin_to_bcd__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_bin{vlSymsp->TOP.i_bin}
    , o_bcd_lsb{vlSymsp->TOP.o_bcd_lsb}
    , o_bcd_msb{vlSymsp->TOP.o_bcd_msb}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbin_to_bcd::Vbin_to_bcd(const char* _vcname__)
    : Vbin_to_bcd(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbin_to_bcd::~Vbin_to_bcd() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbin_to_bcd___024root___eval_debug_assertions(Vbin_to_bcd___024root* vlSelf);
#endif  // VL_DEBUG
void Vbin_to_bcd___024root___eval_static(Vbin_to_bcd___024root* vlSelf);
void Vbin_to_bcd___024root___eval_initial(Vbin_to_bcd___024root* vlSelf);
void Vbin_to_bcd___024root___eval_settle(Vbin_to_bcd___024root* vlSelf);
void Vbin_to_bcd___024root___eval(Vbin_to_bcd___024root* vlSelf);

void Vbin_to_bcd::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbin_to_bcd::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbin_to_bcd___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbin_to_bcd___024root___eval_static(&(vlSymsp->TOP));
        Vbin_to_bcd___024root___eval_initial(&(vlSymsp->TOP));
        Vbin_to_bcd___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbin_to_bcd___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbin_to_bcd::eventsPending() { return false; }

uint64_t Vbin_to_bcd::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vbin_to_bcd::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbin_to_bcd___024root___eval_final(Vbin_to_bcd___024root* vlSelf);

VL_ATTR_COLD void Vbin_to_bcd::final() {
    Vbin_to_bcd___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbin_to_bcd::hierName() const { return vlSymsp->name(); }
const char* Vbin_to_bcd::modelName() const { return "Vbin_to_bcd"; }
unsigned Vbin_to_bcd::threads() const { return 1; }
void Vbin_to_bcd::prepareClone() const { contextp()->prepareClone(); }
void Vbin_to_bcd::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vbin_to_bcd::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbin_to_bcd___024root__trace_init_top(Vbin_to_bcd___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbin_to_bcd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbin_to_bcd___024root*>(voidSelf);
    Vbin_to_bcd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vbin_to_bcd___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vbin_to_bcd___024root__trace_register(Vbin_to_bcd___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbin_to_bcd::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbin_to_bcd::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbin_to_bcd___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

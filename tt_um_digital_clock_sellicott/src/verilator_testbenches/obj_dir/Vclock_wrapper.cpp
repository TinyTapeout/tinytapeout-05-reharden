// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vclock_wrapper.h"
#include "Vclock_wrapper__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vclock_wrapper::Vclock_wrapper(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vclock_wrapper__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_reset_n{vlSymsp->TOP.i_reset_n}
    , i_en{vlSymsp->TOP.i_en}
    , i_fast_set{vlSymsp->TOP.i_fast_set}
    , i_mode{vlSymsp->TOP.i_mode}
    , o_serial_data{vlSymsp->TOP.o_serial_data}
    , o_serial_latch{vlSymsp->TOP.o_serial_latch}
    , o_serial_clk{vlSymsp->TOP.o_serial_clk}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vclock_wrapper::Vclock_wrapper(const char* _vcname__)
    : Vclock_wrapper(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vclock_wrapper::~Vclock_wrapper() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vclock_wrapper___024root___eval_debug_assertions(Vclock_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
void Vclock_wrapper___024root___eval_static(Vclock_wrapper___024root* vlSelf);
void Vclock_wrapper___024root___eval_initial(Vclock_wrapper___024root* vlSelf);
void Vclock_wrapper___024root___eval_settle(Vclock_wrapper___024root* vlSelf);
void Vclock_wrapper___024root___eval(Vclock_wrapper___024root* vlSelf);

void Vclock_wrapper::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vclock_wrapper::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vclock_wrapper___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vclock_wrapper___024root___eval_static(&(vlSymsp->TOP));
        Vclock_wrapper___024root___eval_initial(&(vlSymsp->TOP));
        Vclock_wrapper___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vclock_wrapper___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vclock_wrapper::eventsPending() { return false; }

uint64_t Vclock_wrapper::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vclock_wrapper::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vclock_wrapper___024root___eval_final(Vclock_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vclock_wrapper::final() {
    Vclock_wrapper___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vclock_wrapper::hierName() const { return vlSymsp->name(); }
const char* Vclock_wrapper::modelName() const { return "Vclock_wrapper"; }
unsigned Vclock_wrapper::threads() const { return 1; }
void Vclock_wrapper::prepareClone() const { contextp()->prepareClone(); }
void Vclock_wrapper::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vclock_wrapper::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vclock_wrapper___024root__trace_init_top(Vclock_wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vclock_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclock_wrapper___024root*>(voidSelf);
    Vclock_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vclock_wrapper___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vclock_wrapper___024root__trace_register(Vclock_wrapper___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vclock_wrapper::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vclock_wrapper::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vclock_wrapper___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

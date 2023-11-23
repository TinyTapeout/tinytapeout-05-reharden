// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vshift_register_tb.h"
#include "Vshift_register_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vshift_register_tb::Vshift_register_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vshift_register_tb__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , o_serial_clk{vlSymsp->TOP.o_serial_clk}
    , o_serial_latch{vlSymsp->TOP.o_serial_latch}
    , i_reset_n{vlSymsp->TOP.i_reset_n}
    , i_start_stb{vlSymsp->TOP.i_start_stb}
    , o_busy{vlSymsp->TOP.o_busy}
    , i_parallel_data{vlSymsp->TOP.i_parallel_data}
    , o_serial_data{vlSymsp->TOP.o_serial_data}
    , o_parallel_data{vlSymsp->TOP.o_parallel_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vshift_register_tb::Vshift_register_tb(const char* _vcname__)
    : Vshift_register_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vshift_register_tb::~Vshift_register_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vshift_register_tb___024root___eval_debug_assertions(Vshift_register_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vshift_register_tb___024root___eval_static(Vshift_register_tb___024root* vlSelf);
void Vshift_register_tb___024root___eval_initial(Vshift_register_tb___024root* vlSelf);
void Vshift_register_tb___024root___eval_settle(Vshift_register_tb___024root* vlSelf);
void Vshift_register_tb___024root___eval(Vshift_register_tb___024root* vlSelf);

void Vshift_register_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vshift_register_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vshift_register_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vshift_register_tb___024root___eval_static(&(vlSymsp->TOP));
        Vshift_register_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vshift_register_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vshift_register_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vshift_register_tb::eventsPending() { return false; }

uint64_t Vshift_register_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vshift_register_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vshift_register_tb___024root___eval_final(Vshift_register_tb___024root* vlSelf);

VL_ATTR_COLD void Vshift_register_tb::final() {
    Vshift_register_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vshift_register_tb::hierName() const { return vlSymsp->name(); }
const char* Vshift_register_tb::modelName() const { return "Vshift_register_tb"; }
unsigned Vshift_register_tb::threads() const { return 1; }
void Vshift_register_tb::prepareClone() const { contextp()->prepareClone(); }
void Vshift_register_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vshift_register_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vshift_register_tb___024root__trace_init_top(Vshift_register_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vshift_register_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vshift_register_tb___024root*>(voidSelf);
    Vshift_register_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vshift_register_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vshift_register_tb___024root__trace_register(Vshift_register_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vshift_register_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vshift_register_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vshift_register_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

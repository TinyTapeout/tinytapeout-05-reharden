// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vreference_clk_stb.h"
#include "Vreference_clk_stb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vreference_clk_stb::Vreference_clk_stb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vreference_clk_stb__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_reset_n{vlSymsp->TOP.i_reset_n}
    , i_en{vlSymsp->TOP.i_en}
    , i_fast_set{vlSymsp->TOP.i_fast_set}
    , i_refclk{vlSymsp->TOP.i_refclk}
    , o_refclk_stb{vlSymsp->TOP.o_refclk_stb}
    , o_refclk_1hz_stb{vlSymsp->TOP.o_refclk_1hz_stb}
    , o_refclk_timeset_stb{vlSymsp->TOP.o_refclk_timeset_stb}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vreference_clk_stb::Vreference_clk_stb(const char* _vcname__)
    : Vreference_clk_stb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vreference_clk_stb::~Vreference_clk_stb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vreference_clk_stb___024root___eval_debug_assertions(Vreference_clk_stb___024root* vlSelf);
#endif  // VL_DEBUG
void Vreference_clk_stb___024root___eval_static(Vreference_clk_stb___024root* vlSelf);
void Vreference_clk_stb___024root___eval_initial(Vreference_clk_stb___024root* vlSelf);
void Vreference_clk_stb___024root___eval_settle(Vreference_clk_stb___024root* vlSelf);
void Vreference_clk_stb___024root___eval(Vreference_clk_stb___024root* vlSelf);

void Vreference_clk_stb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vreference_clk_stb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vreference_clk_stb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vreference_clk_stb___024root___eval_static(&(vlSymsp->TOP));
        Vreference_clk_stb___024root___eval_initial(&(vlSymsp->TOP));
        Vreference_clk_stb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vreference_clk_stb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vreference_clk_stb::eventsPending() { return false; }

uint64_t Vreference_clk_stb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vreference_clk_stb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vreference_clk_stb___024root___eval_final(Vreference_clk_stb___024root* vlSelf);

VL_ATTR_COLD void Vreference_clk_stb::final() {
    Vreference_clk_stb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vreference_clk_stb::hierName() const { return vlSymsp->name(); }
const char* Vreference_clk_stb::modelName() const { return "Vreference_clk_stb"; }
unsigned Vreference_clk_stb::threads() const { return 1; }
void Vreference_clk_stb::prepareClone() const { contextp()->prepareClone(); }
void Vreference_clk_stb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vreference_clk_stb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vreference_clk_stb___024root__trace_init_top(Vreference_clk_stb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vreference_clk_stb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreference_clk_stb___024root*>(voidSelf);
    Vreference_clk_stb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vreference_clk_stb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vreference_clk_stb___024root__trace_register(Vreference_clk_stb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vreference_clk_stb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vreference_clk_stb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vreference_clk_stb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

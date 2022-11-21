// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTOP.h"
#include "VTOP__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTOP::VTOP(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTOP__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , trigger{vlSymsp->TOP.trigger}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTOP::VTOP(const char* _vcname__)
    : VTOP(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTOP::~VTOP() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VTOP___024root___eval_initial(VTOP___024root* vlSelf);
void VTOP___024root___eval_settle(VTOP___024root* vlSelf);
void VTOP___024root___eval(VTOP___024root* vlSelf);
#ifdef VL_DEBUG
void VTOP___024root___eval_debug_assertions(VTOP___024root* vlSelf);
#endif  // VL_DEBUG
void VTOP___024root___final(VTOP___024root* vlSelf);

static void _eval_initial_loop(VTOP__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VTOP___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VTOP___024root___eval_settle(&(vlSymsp->TOP));
        VTOP___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VTOP::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTOP::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTOP___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VTOP___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VTOP::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VTOP::final() {
    VTOP___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTOP::hierName() const { return vlSymsp->name(); }
const char* VTOP::modelName() const { return "VTOP"; }
unsigned VTOP::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VTOP::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTOP___024root__trace_init_top(VTOP___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VTOP___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VTOP___024root__trace_register(VTOP___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTOP::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTOP___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

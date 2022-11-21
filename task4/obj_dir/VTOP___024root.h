// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class VTOP__Syms;

class VTOP___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(trigger,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ TOP__DOT__tick;
    CData/*0:0*/ TOP__DOT__cmd_seq;
    CData/*0:0*/ TOP__DOT__cmd_delay;
    CData/*6:0*/ TOP__DOT__lfsr__DOT__sreg;
    CData/*4:0*/ TOP__DOT__clktick__DOT__count;
    CData/*6:0*/ TOP__DOT__delay__DOT__count;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ TOP__DOT__delay__DOT__current_state;
    IData/*31:0*/ TOP__DOT__delay__DOT__next_state;
    IData/*31:0*/ TOP__DOT__f1_fsm__DOT__current_state;
    IData/*31:0*/ TOP__DOT__f1_fsm__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP___024root(VTOP__Syms* symsp, const char* name);
    ~VTOP___024root();
    VL_UNCOPYABLE(VTOP___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

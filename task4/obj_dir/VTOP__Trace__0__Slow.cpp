// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTOP__Syms.h"


VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBit(c+14,"trigger", false,-1);
    tracep->declBus(c+15,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBit(c+14,"trigger", false,-1);
    tracep->declBus(c+15,"data_out", false,-1, 7,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBit(c+2,"time_out", false,-1);
    tracep->declBit(c+16,"cmd_seq", false,-1);
    tracep->declBit(c+3,"cmd_delay", false,-1);
    tracep->declBus(c+4,"K", false,-1, 6,0);
    tracep->pushNamePrefix("clktick ");
    tracep->declBus(c+18,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBit(c+16,"en", false,-1);
    tracep->declBus(c+19,"N", false,-1, 4,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBus(c+5,"count", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay ");
    tracep->declBus(c+20,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBit(c+3,"trigger", false,-1);
    tracep->declBus(c+4,"n", false,-1, 6,0);
    tracep->declBit(c+2,"time_out", false,-1);
    tracep->declBus(c+6,"count", false,-1, 6,0);
    tracep->declBus(c+7,"current_state", false,-1, 31,0);
    tracep->declBus(c+8,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("f1_fsm ");
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBit(c+17,"en", false,-1);
    tracep->declBit(c+14,"trigger", false,-1);
    tracep->declBit(c+16,"cmd_seq", false,-1);
    tracep->declBit(c+3,"cmd_delay", false,-1);
    tracep->declBus(c+15,"data_out", false,-1, 7,0);
    tracep->declBus(c+9,"current_state", false,-1, 31,0);
    tracep->declBus(c+10,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lfsr ");
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+21,"en", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+4,"data_out", false,-1, 6,0);
    tracep->declBus(c+11,"sreg", false,-1, 7,1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VTOP___024root__trace_init_top(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_top\n"); );
    // Body
    VTOP___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTOP___024root__trace_register(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTOP___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTOP___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTOP___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTOP___024root__trace_full_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_full_top_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTOP___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTOP___024root__trace_full_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->TOP__DOT__tick));
    bufp->fullBit(oldp+2,(((0U != vlSelf->TOP__DOT__delay__DOT__current_state) 
                           & ((1U != vlSelf->TOP__DOT__delay__DOT__current_state) 
                              & (2U == vlSelf->TOP__DOT__delay__DOT__current_state)))));
    bufp->fullBit(oldp+3,(vlSelf->TOP__DOT__cmd_delay));
    bufp->fullCData(oldp+4,(vlSelf->TOP__DOT__lfsr__DOT__sreg),7);
    bufp->fullCData(oldp+5,(vlSelf->TOP__DOT__clktick__DOT__count),5);
    bufp->fullCData(oldp+6,(vlSelf->TOP__DOT__delay__DOT__count),7);
    bufp->fullIData(oldp+7,(vlSelf->TOP__DOT__delay__DOT__current_state),32);
    bufp->fullIData(oldp+8,(((0U == vlSelf->TOP__DOT__delay__DOT__current_state)
                              ? ((IData)(vlSelf->TOP__DOT__cmd_delay)
                                  ? 1U : vlSelf->TOP__DOT__delay__DOT__current_state)
                              : ((1U == vlSelf->TOP__DOT__delay__DOT__current_state)
                                  ? ((0U == (IData)(vlSelf->TOP__DOT__delay__DOT__count))
                                      ? 2U : vlSelf->TOP__DOT__delay__DOT__current_state)
                                  : ((2U == vlSelf->TOP__DOT__delay__DOT__current_state)
                                      ? ((IData)(vlSelf->TOP__DOT__cmd_delay)
                                          ? 3U : 0U)
                                      : ((3U == vlSelf->TOP__DOT__delay__DOT__current_state)
                                          ? ((IData)(vlSelf->TOP__DOT__cmd_delay)
                                              ? vlSelf->TOP__DOT__delay__DOT__current_state
                                              : 0U)
                                          : 0U))))),32);
    bufp->fullIData(oldp+9,(vlSelf->TOP__DOT__f1_fsm__DOT__current_state),32);
    bufp->fullIData(oldp+10,(vlSelf->TOP__DOT__f1_fsm__DOT__next_state),32);
    bufp->fullCData(oldp+11,(vlSelf->TOP__DOT__lfsr__DOT__sreg),7);
    bufp->fullBit(oldp+12,(vlSelf->clk));
    bufp->fullBit(oldp+13,(vlSelf->rst));
    bufp->fullBit(oldp+14,(vlSelf->trigger));
    bufp->fullCData(oldp+15,(vlSelf->data_out),8);
    bufp->fullBit(oldp+16,(vlSelf->TOP__DOT__cmd_seq));
    bufp->fullBit(oldp+17,(((IData)(vlSelf->TOP__DOT__cmd_seq)
                             ? (IData)(vlSelf->TOP__DOT__tick)
                             : ((0U != vlSelf->TOP__DOT__delay__DOT__current_state) 
                                & ((1U != vlSelf->TOP__DOT__delay__DOT__current_state) 
                                   & (2U == vlSelf->TOP__DOT__delay__DOT__current_state))))));
    bufp->fullIData(oldp+18,(5U),32);
    bufp->fullCData(oldp+19,(0x1dU),5);
    bufp->fullIData(oldp+20,(7U),32);
    bufp->fullBit(oldp+21,(1U));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTOP__Syms.h"


void VTOP___024root__trace_chg_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_chg_top_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTOP___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VTOP___024root__trace_chg_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->TOP__DOT__tick));
        bufp->chgBit(oldp+1,(((0U != vlSelf->TOP__DOT__delay__DOT__current_state) 
                              & ((1U != vlSelf->TOP__DOT__delay__DOT__current_state) 
                                 & (2U == vlSelf->TOP__DOT__delay__DOT__current_state)))));
        bufp->chgBit(oldp+2,(vlSelf->TOP__DOT__cmd_delay));
        bufp->chgCData(oldp+3,(vlSelf->TOP__DOT__lfsr__DOT__sreg),7);
        bufp->chgCData(oldp+4,(vlSelf->TOP__DOT__clktick__DOT__count),5);
        bufp->chgCData(oldp+5,(vlSelf->TOP__DOT__delay__DOT__count),7);
        bufp->chgIData(oldp+6,(vlSelf->TOP__DOT__delay__DOT__current_state),32);
        bufp->chgIData(oldp+7,(((0U == vlSelf->TOP__DOT__delay__DOT__current_state)
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
        bufp->chgIData(oldp+8,(vlSelf->TOP__DOT__f1_fsm__DOT__current_state),32);
        bufp->chgIData(oldp+9,(vlSelf->TOP__DOT__f1_fsm__DOT__next_state),32);
        bufp->chgCData(oldp+10,(vlSelf->TOP__DOT__lfsr__DOT__sreg),7);
    }
    bufp->chgBit(oldp+11,(vlSelf->clk));
    bufp->chgBit(oldp+12,(vlSelf->rst));
    bufp->chgBit(oldp+13,(vlSelf->trigger));
    bufp->chgCData(oldp+14,(vlSelf->data_out),8);
    bufp->chgBit(oldp+15,(vlSelf->TOP__DOT__cmd_seq));
    bufp->chgBit(oldp+16,(((IData)(vlSelf->TOP__DOT__cmd_seq)
                            ? (IData)(vlSelf->TOP__DOT__tick)
                            : ((0U != vlSelf->TOP__DOT__delay__DOT__current_state) 
                               & ((1U != vlSelf->TOP__DOT__delay__DOT__current_state) 
                                  & (2U == vlSelf->TOP__DOT__delay__DOT__current_state))))));
}

void VTOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_cleanup\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP___024root.h"

VL_INLINE_OPT void VTOP___024root___sequent__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vdly__TOP__DOT__lfsr__DOT__sreg;
    CData/*4:0*/ __Vdly__TOP__DOT__clktick__DOT__count;
    // Body
    __Vdly__TOP__DOT__lfsr__DOT__sreg = vlSelf->TOP__DOT__lfsr__DOT__sreg;
    __Vdly__TOP__DOT__clktick__DOT__count = vlSelf->TOP__DOT__clktick__DOT__count;
    if (vlSelf->rst) {
        __Vdly__TOP__DOT__lfsr__DOT__sreg = 1U;
        vlSelf->TOP__DOT__f1_fsm__DOT__current_state = 8U;
        vlSelf->TOP__DOT__tick = 0U;
        __Vdly__TOP__DOT__clktick__DOT__count = 0x1dU;
        vlSelf->TOP__DOT__delay__DOT__current_state = 0U;
    } else {
        __Vdly__TOP__DOT__lfsr__DOT__sreg = ((0x7eU 
                                              & ((IData)(vlSelf->TOP__DOT__lfsr__DOT__sreg) 
                                                 << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_8(
                                                              (0x44U 
                                                               & (IData)(vlSelf->TOP__DOT__lfsr__DOT__sreg)))));
        vlSelf->TOP__DOT__f1_fsm__DOT__current_state 
            = (((IData)(vlSelf->TOP__DOT__cmd_seq) ? (IData)(vlSelf->TOP__DOT__tick)
                 : ((0U != vlSelf->TOP__DOT__delay__DOT__current_state) 
                    & ((1U != vlSelf->TOP__DOT__delay__DOT__current_state) 
                       & (2U == vlSelf->TOP__DOT__delay__DOT__current_state))))
                ? vlSelf->TOP__DOT__f1_fsm__DOT__next_state
                : vlSelf->TOP__DOT__f1_fsm__DOT__current_state);
        if (vlSelf->TOP__DOT__cmd_seq) {
            if ((0U == (IData)(vlSelf->TOP__DOT__clktick__DOT__count))) {
                vlSelf->TOP__DOT__tick = 1U;
                __Vdly__TOP__DOT__clktick__DOT__count = 0x1dU;
            } else {
                __Vdly__TOP__DOT__clktick__DOT__count 
                    = (0x1fU & ((IData)(vlSelf->TOP__DOT__clktick__DOT__count) 
                                - (IData)(1U)));
                vlSelf->TOP__DOT__tick = 0U;
            }
        }
        vlSelf->TOP__DOT__delay__DOT__current_state 
            = vlSelf->TOP__DOT__delay__DOT__next_state;
    }
    vlSelf->TOP__DOT__delay__DOT__count = (0x7fU & 
                                           ((((IData)(vlSelf->rst) 
                                              | (IData)(vlSelf->TOP__DOT__cmd_delay)) 
                                             | (0U 
                                                == (IData)(vlSelf->TOP__DOT__delay__DOT__count)))
                                             ? ((IData)(vlSelf->TOP__DOT__lfsr__DOT__sreg) 
                                                - (IData)(1U))
                                             : ((IData)(vlSelf->TOP__DOT__delay__DOT__count) 
                                                - (IData)(1U))));
    vlSelf->TOP__DOT__lfsr__DOT__sreg = __Vdly__TOP__DOT__lfsr__DOT__sreg;
    if (((((((((8U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state) 
               | (0U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) 
              | (1U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) 
             | (2U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) 
            | (3U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) 
           | (4U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) 
          | (5U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) 
         | (6U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state))) {
        if ((8U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 0U;
            vlSelf->TOP__DOT__f1_fsm__DOT__next_state = 0U;
            vlSelf->TOP__DOT__cmd_delay = 0U;
        } else if ((0U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 1U;
            vlSelf->TOP__DOT__f1_fsm__DOT__next_state = 1U;
        } else if ((1U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 3U;
            vlSelf->TOP__DOT__f1_fsm__DOT__next_state = 2U;
        } else if ((2U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 7U;
            vlSelf->TOP__DOT__f1_fsm__DOT__next_state = 3U;
        } else if ((3U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 0xfU;
            vlSelf->TOP__DOT__f1_fsm__DOT__next_state = 4U;
        } else if ((4U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 0x1fU;
            vlSelf->TOP__DOT__f1_fsm__DOT__next_state = 5U;
        } else if ((5U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 0x3fU;
            vlSelf->TOP__DOT__f1_fsm__DOT__next_state = 6U;
        } else {
            vlSelf->data_out = 0x7fU;
            vlSelf->TOP__DOT__f1_fsm__DOT__next_state = 7U;
        }
    } else {
        if ((7U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 0xffU;
            vlSelf->TOP__DOT__cmd_delay = 1U;
        } else {
            vlSelf->data_out = 0U;
        }
        vlSelf->TOP__DOT__f1_fsm__DOT__next_state = 8U;
    }
    vlSelf->TOP__DOT__clktick__DOT__count = __Vdly__TOP__DOT__clktick__DOT__count;
    vlSelf->TOP__DOT__delay__DOT__next_state = ((0U 
                                                 == vlSelf->TOP__DOT__delay__DOT__current_state)
                                                 ? 
                                                ((IData)(vlSelf->TOP__DOT__cmd_delay)
                                                  ? 1U
                                                  : vlSelf->TOP__DOT__delay__DOT__current_state)
                                                 : 
                                                ((1U 
                                                  == vlSelf->TOP__DOT__delay__DOT__current_state)
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSelf->TOP__DOT__delay__DOT__count))
                                                   ? 2U
                                                   : vlSelf->TOP__DOT__delay__DOT__current_state)
                                                  : 
                                                 ((2U 
                                                   == vlSelf->TOP__DOT__delay__DOT__current_state)
                                                   ? 
                                                  ((IData)(vlSelf->TOP__DOT__cmd_delay)
                                                    ? 3U
                                                    : 0U)
                                                   : 
                                                  ((3U 
                                                    == vlSelf->TOP__DOT__delay__DOT__current_state)
                                                    ? 
                                                   ((IData)(vlSelf->TOP__DOT__cmd_delay)
                                                     ? vlSelf->TOP__DOT__delay__DOT__current_state
                                                     : 0U)
                                                    : 0U))));
}

VL_INLINE_OPT void VTOP___024root___combo__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___combo__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->TOP__DOT__cmd_seq = 0U;
    }
    if (((((((((8U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state) 
               | (0U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) 
              | (1U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) 
             | (2U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) 
            | (3U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) 
           | (4U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) 
          | (5U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) 
         | (6U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state))) {
        if ((8U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) {
            if (vlSelf->trigger) {
                vlSelf->TOP__DOT__cmd_seq = 1U;
            }
        } else {
            vlSelf->TOP__DOT__cmd_seq = 1U;
        }
    } else if ((7U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) {
        vlSelf->TOP__DOT__cmd_seq = 0U;
    }
}

void VTOP___024root___eval(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VTOP___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VTOP___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VTOP___024root___eval_debug_assertions(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG

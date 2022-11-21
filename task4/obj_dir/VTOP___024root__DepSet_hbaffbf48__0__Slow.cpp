// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP___024root.h"

VL_ATTR_COLD void VTOP___024root___initial__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->TOP__DOT__delay__DOT__count = 0U;
}

VL_ATTR_COLD void VTOP___024root___settle__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___settle__TOP__0\n"); );
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
            vlSelf->data_out = 0U;
            vlSelf->TOP__DOT__f1_fsm__DOT__next_state = 0U;
            vlSelf->TOP__DOT__cmd_delay = 0U;
            if (vlSelf->trigger) {
                vlSelf->TOP__DOT__cmd_seq = 1U;
            }
        } else {
            if ((0U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) {
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
            vlSelf->TOP__DOT__cmd_seq = 1U;
        }
    } else {
        if ((7U == vlSelf->TOP__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->data_out = 0xffU;
            vlSelf->TOP__DOT__cmd_delay = 1U;
            vlSelf->TOP__DOT__cmd_seq = 0U;
        } else {
            vlSelf->data_out = 0U;
        }
        vlSelf->TOP__DOT__f1_fsm__DOT__next_state = 8U;
    }
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

VL_ATTR_COLD void VTOP___024root___eval_initial(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    VTOP___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VTOP___024root___eval_settle(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_settle\n"); );
    // Body
    VTOP___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VTOP___024root___final(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___final\n"); );
}

VL_ATTR_COLD void VTOP___024root___ctor_var_reset(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__cmd_seq = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__cmd_delay = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__lfsr__DOT__sreg = VL_RAND_RESET_I(7);
    vlSelf->TOP__DOT__clktick__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__delay__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->TOP__DOT__delay__DOT__current_state = 0;
    vlSelf->TOP__DOT__delay__DOT__next_state = 0;
    vlSelf->TOP__DOT__f1_fsm__DOT__current_state = 0;
    vlSelf->TOP__DOT__f1_fsm__DOT__next_state = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

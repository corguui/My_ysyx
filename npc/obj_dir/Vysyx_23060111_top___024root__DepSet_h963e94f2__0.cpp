// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060111_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060111_top___024root.h"

VL_INLINE_OPT void Vysyx_23060111_top___024root___ico_sequent__TOP__0(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->val = vlSelf->inst;
}

void Vysyx_23060111_top___024root___eval_ico(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_23060111_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vysyx_23060111_top___024root___eval_act(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vysyx_23060111_top___024root___nba_sequent__TOP__1(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0;
    __Vdlyvdim0__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0;
    __Vdlyvval__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0;
    __Vdlyvset__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdly__dnpc;
    __Vdly__dnpc = 0;
    // Body
    __Vdly__dnpc = vlSelf->dnpc;
    __Vdlyvset__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0 = 0U;
    if (vlSelf->ysyx_23060111_top__DOT__wen) {
        __Vdlyvval__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0 
            = vlSelf->ysyx_23060111_top__DOT__wdata;
        __Vdlyvset__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0 
            = vlSelf->ysyx_23060111_top__DOT__waddr;
    }
    if (__Vdlyvset__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0) {
        vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[__Vdlyvdim0__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0] 
            = __Vdlyvval__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0;
    }
    vlSelf->ysyx_23060111_top__DOT__wen = ((0x13U == 
                                            (0x707fU 
                                             & vlSelf->inst)) 
                                           | ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->inst)) 
                                              | ((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst)) 
                                                 | ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst)) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->inst))))));
    __Vdly__dnpc = vlSelf->snpc;
    if ((0x13U == (0x707fU & vlSelf->inst))) {
        vlSelf->ysyx_23060111_top__DOT__raddr = (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 0xfU));
        vlSelf->ysyx_23060111_top__DOT__waddr = (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 7U));
        vlSelf->ysyx_23060111_top__DOT__wdata = (vlSelf->ysyx_23060111_top__DOT__rout 
                                                 + vlSelf->ysyx_23060111_top__DOT__init_exu__DOT__imm_32);
        vlSelf->ysyx_23060111_top__DOT__init_exu__DOT__imm_32 
            = (vlSelf->inst >> 0x14U);
    } else {
        if ((0x17U != (0x7fU & vlSelf->inst))) {
            if ((0x37U != (0x7fU & vlSelf->inst))) {
                if ((0x67U == (0x707fU & vlSelf->inst))) {
                    vlSelf->ysyx_23060111_top__DOT__raddr 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                }
            }
        }
        if ((0x17U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_23060111_top__DOT__waddr = 
                (0x1fU & (vlSelf->inst >> 7U));
            vlSelf->ysyx_23060111_top__DOT__wdata = 
                (vlSelf->pc + ((0xfff00U & (vlSelf->inst 
                                            >> 0xcU)) 
                               | (0xffU & (vlSelf->inst 
                                           >> 0xcU))));
        } else if ((0x37U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_23060111_top__DOT__waddr = 
                (0x1fU & (vlSelf->inst >> 7U));
            vlSelf->ysyx_23060111_top__DOT__wdata = 
                ((0xfff00U & (vlSelf->inst >> 0xcU)) 
                 | (0xffU & (vlSelf->inst >> 0xcU)));
        } else if ((0x67U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_23060111_top__DOT__waddr = 
                (0x1fU & (vlSelf->inst >> 7U));
            vlSelf->ysyx_23060111_top__DOT__wdata = vlSelf->snpc;
            __Vdly__dnpc = ((vlSelf->inst >> 0x14U) 
                            + vlSelf->ysyx_23060111_top__DOT__rout);
        } else if ((0x6fU == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_23060111_top__DOT__waddr = 
                (0x1fU & (vlSelf->inst >> 7U));
            vlSelf->ysyx_23060111_top__DOT__wdata = vlSelf->snpc;
            __Vdly__dnpc = (((0xfff00U & (vlSelf->inst 
                                          >> 0xcU)) 
                             | (0xffU & (vlSelf->inst 
                                         >> 0xcU))) 
                            + vlSelf->pc);
        }
    }
    vlSelf->ysyx_23060111_top__DOT__rout = vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf
        [vlSelf->ysyx_23060111_top__DOT__raddr];
    vlSelf->snpc = vlSelf->pc;
    vlSelf->pc = vlSelf->dnpc;
    vlSelf->dnpc = __Vdly__dnpc;
}

void Vysyx_23060111_top___024root___nba_sequent__TOP__0(Vysyx_23060111_top___024root* vlSelf);

void Vysyx_23060111_top___024root___eval_nba(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_23060111_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_23060111_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_23060111_top___024root___eval_triggers__ico(Vysyx_23060111_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_top___024root___dump_triggers__ico(Vysyx_23060111_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_23060111_top___024root___eval_triggers__act(Vysyx_23060111_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_top___024root___dump_triggers__act(Vysyx_23060111_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_top___024root___dump_triggers__nba(Vysyx_23060111_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060111_top___024root___eval(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_23060111_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060111_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060111_top.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_23060111_top___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_23060111_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_23060111_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/ysyx_23060111_top.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_23060111_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060111_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060111_top.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_23060111_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_23060111_top___024root___eval_debug_assertions(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG

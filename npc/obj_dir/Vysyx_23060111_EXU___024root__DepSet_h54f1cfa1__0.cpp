// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060111_EXU.h for the primary calling header

#include "verilated.h"

#include "Vysyx_23060111_EXU___024root.h"

void Vysyx_23060111_EXU___024root___eval_act(Vysyx_23060111_EXU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vysyx_23060111_EXU___024root___nba_sequent__TOP__0(Vysyx_23060111_EXU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT____Vlvbound_h731b7a34__0;
    ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT____Vlvbound_h731b7a34__0 = 0;
    CData/*2:0*/ __Vdlyvdim0__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0;
    __Vdlyvdim0__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0;
    __Vdlyvval__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0;
    __Vdlyvset__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 = 0U;
    ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT____Vlvbound_h731b7a34__0 
        = vlSelf->reg_out1;
    if ((4U >= (7U & (IData)(vlSelf->rd)))) {
        __Vdlyvval__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 
            = ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT____Vlvbound_h731b7a34__0;
        __Vdlyvset__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 
            = (7U & (IData)(vlSelf->rd));
    }
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : vlSelf->dnpc);
    vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0U] = 0U;
    if (__Vdlyvset__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0) {
        vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[__Vdlyvdim0__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0] 
            = __Vdlyvval__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0;
    }
}

void Vysyx_23060111_EXU___024root___eval_nba(Vysyx_23060111_EXU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_23060111_EXU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_23060111_EXU___024root___eval_triggers__act(Vysyx_23060111_EXU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_EXU___024root___dump_triggers__act(Vysyx_23060111_EXU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_EXU___024root___dump_triggers__nba(Vysyx_23060111_EXU___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060111_EXU___024root___eval(Vysyx_23060111_EXU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_23060111_EXU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_23060111_EXU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/ysyx_23060111_top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_23060111_EXU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060111_EXU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060111_top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_23060111_EXU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_23060111_EXU___024root___eval_debug_assertions(Vysyx_23060111_EXU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG

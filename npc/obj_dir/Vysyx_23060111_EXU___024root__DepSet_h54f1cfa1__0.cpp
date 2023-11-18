// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060111_EXU.h for the primary calling header

#include "verilated.h"

#include "Vysyx_23060111_EXU___024root.h"

VL_INLINE_OPT void Vysyx_23060111_EXU___024root___ico_sequent__TOP__0(Vysyx_23060111_EXU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->rs1 = (0x1fU & (vlSelf->inst >> 0xfU));
    vlSelf->rd = (0x1fU & (vlSelf->inst >> 7U));
    vlSelf->ysyx_23060111_MuxKeyInternal__DOT__pair_list[0U] 
        = (3U & (IData)(vlSelf->lut));
    vlSelf->ysyx_23060111_MuxKeyInternal__DOT__pair_list[1U] 
        = (3U & ((IData)(vlSelf->lut) >> 2U));
    vlSelf->ysyx_23060111_top__02Eout = (vlSelf->pc 
                                         | (vlSelf->snpc 
                                            | (vlSelf->inst 
                                               | vlSelf->snpc)));
    vlSelf->imm = (vlSelf->inst >> 0x14U);
    vlSelf->ysyx_23060111_MuxKeyInternal__DOT__data_list[0U] 
        = (1U & (IData)(vlSelf->lut));
    vlSelf->ysyx_23060111_MuxKeyInternal__DOT__data_list[1U] 
        = (1U & ((IData)(vlSelf->lut) >> 2U));
    vlSelf->ysyx_23060111_MuxKeyInternal__DOT__key_list[0U] 
        = (1U & ((IData)(vlSelf->lut) >> 1U));
    vlSelf->ysyx_23060111_MuxKeyInternal__DOT__key_list[1U] 
        = (1U & ((IData)(vlSelf->lut) >> 3U));
    vlSelf->reg_out1 = vlSelf->imm;
    vlSelf->ysyx_23060111_MuxKeyInternal__DOT__hit 
        = ((IData)(vlSelf->key) == vlSelf->ysyx_23060111_MuxKeyInternal__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060111_MuxKeyInternal__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__hit) 
           | ((IData)(vlSelf->key) == vlSelf->ysyx_23060111_MuxKeyInternal__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060111_MuxKeyInternal__DOT__lut_out 
        = (((IData)(vlSelf->key) == vlSelf->ysyx_23060111_MuxKeyInternal__DOT__key_list
            [0U]) & vlSelf->ysyx_23060111_MuxKeyInternal__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060111_MuxKeyInternal__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__lut_out) 
           | (((IData)(vlSelf->key) == vlSelf->ysyx_23060111_MuxKeyInternal__DOT__key_list
               [1U]) & vlSelf->ysyx_23060111_MuxKeyInternal__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060111_MuxKeyInternal__02Eout = vlSelf->ysyx_23060111_MuxKeyInternal__DOT__lut_out;
}

void Vysyx_23060111_EXU___024root___eval_ico(Vysyx_23060111_EXU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_23060111_EXU___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

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
    CData/*1:0*/ __Vdlyvdim0__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0;
    __Vdlyvdim0__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 = 0;
    IData/*30:0*/ __Vdlyvval__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0;
    __Vdlyvval__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 = 0;
    // Body
    __Vdlyvval__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 
        = vlSelf->imm;
    __Vdlyvdim0__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 
        = (3U & (vlSelf->inst >> 7U));
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT____Vcellout__renew_pc____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : (0x7fffffffU 
                                        & vlSelf->snpc));
    vlSelf->ysyx_23060111_top__DOT__reg_t0__DOT__rf[1U] = 0U;
    vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0U] = 0U;
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[__Vdlyvdim0__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0] 
        = __Vdlyvval__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0;
    vlSelf->pc = vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT____Vcellout__renew_pc____pinNumber4;
    vlSelf->ysyx_23060111_top__02Eout = (vlSelf->pc 
                                         | (vlSelf->snpc 
                                            | (vlSelf->inst 
                                               | vlSelf->snpc)));
}

void Vysyx_23060111_EXU___024root___eval_nba(Vysyx_23060111_EXU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_23060111_EXU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vysyx_23060111_EXU___024root___eval_triggers__ico(Vysyx_23060111_EXU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_EXU___024root___dump_triggers__ico(Vysyx_23060111_EXU___024root* vlSelf);
#endif  // VL_DEBUG
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
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_23060111_EXU___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060111_EXU___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060111_top.v", 46, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_23060111_EXU___024root___eval_ico(vlSelf);
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
            Vysyx_23060111_EXU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_23060111_EXU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/ysyx_23060111_top.v", 46, "", "Active region did not converge.");
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
                VL_FATAL_MT("vsrc/ysyx_23060111_top.v", 46, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->key & 0xfeU))) {
        Verilated::overWidthError("key");}
    if (VL_UNLIKELY((vlSelf->default_out & 0xfeU))) {
        Verilated::overWidthError("default_out");}
    if (VL_UNLIKELY((vlSelf->lut & 0xf0U))) {
        Verilated::overWidthError("lut");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->en_reg & 0xfeU))) {
        Verilated::overWidthError("en_reg");}
    if (VL_UNLIKELY((vlSelf->en_trigger & 0xfeU))) {
        Verilated::overWidthError("en_trigger");}
}
#endif  // VL_DEBUG

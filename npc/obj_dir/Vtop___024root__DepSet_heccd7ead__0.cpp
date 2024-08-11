// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__top__DOT__IDU__DOT__state;
    __Vdly__top__DOT__IDU__DOT__state = 0;
    // Body
    vlSelf->__Vdly__top__DOT__EXU__DOT__m2IDUstate 
        = vlSelf->top__DOT__EXU__DOT__m2IDUstate;
    __Vdly__top__DOT__IDU__DOT__state = vlSelf->top__DOT__IDU__DOT__state;
    if (vlSelf->reset) {
        vlSelf->__Vdly__top__DOT__EXU__DOT__m2IDUstate = 0U;
        __Vdly__top__DOT__IDU__DOT__state = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_27 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_26 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_25 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_24 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_23 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_22 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_21 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_20 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_19 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_18 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_17 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_16 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_15 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_14 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_13 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_12 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_8 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_1 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_3 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_0 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_5 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_2 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_7 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_4 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_9 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_6 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_10 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_11 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_28 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_29 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_30 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_31 = 0U;
        vlSelf->top__DOT__PC__DOT__io_pc_REG = 0x80000000U;
        vlSelf->top__DOT__IDU__DOT__lastalu_op = 0U;
        vlSelf->top__DOT__IFU__DOT__lastinst = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)))) {
            vlSelf->__Vdly__top__DOT__EXU__DOT__m2IDUstate 
                = ((IData)(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op) 
                   != (IData)(vlSelf->top__DOT__IDU__DOT__lastalu_op));
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__IDU__DOT__state)))) {
            __Vdly__top__DOT__IDU__DOT__state = (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                 != vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst);
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x1bU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_27 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x1aU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_26 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x19U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_25 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x18U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_24 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x17U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_23 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x16U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_22 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x15U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_21 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x14U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_20 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x13U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_19 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x12U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_18 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x11U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_17 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x10U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_16 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0xfU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_15 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0xeU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_14 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0xdU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_13 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0xcU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_12 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (8U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_8 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (1U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_1 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (3U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_3 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (~ (IData)((0U != (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))))) {
            vlSelf->top__DOT__Reg__DOT__reg_0 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (5U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_5 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (2U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_2 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (7U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_7 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (4U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_4 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (9U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_9 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (6U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_6 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0xaU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_10 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0xbU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_11 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x1cU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_28 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x1dU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_29 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x1eU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_30 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x1fU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_31 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        vlSelf->top__DOT__PC__DOT__io_pc_REG = vlSelf->top__DOT___EXU_io_dnpc;
        vlSelf->top__DOT__IDU__DOT__lastalu_op = vlSelf->top__DOT__IDU__DOT__exu_data_alu_op;
        vlSelf->top__DOT__IFU__DOT__lastinst = vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst;
    }
    vlSelf->top__DOT__IDU__DOT__state = __Vdly__top__DOT__IDU__DOT__state;
    vlSelf->io_pc = vlSelf->top__DOT__PC__DOT__io_pc_REG;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
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
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("build/top.sv", 870, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("build/top.sv", 870, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

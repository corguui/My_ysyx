// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__top__DOT__IFU__DOT__lastinst 
        = vlSelf->top__DOT__IFU__DOT__lastinst;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("build/top.sv", 1130, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__IDU__DOT___GEN_8;
    top__DOT__IDU__DOT___GEN_8 = 0;
    CData/*0:0*/ top__DOT__IDU__DOT___GEN_9;
    top__DOT__IDU__DOT___GEN_9 = 0;
    CData/*0:0*/ top__DOT__IDU__DOT___GEN_11;
    top__DOT__IDU__DOT___GEN_11 = 0;
    CData/*0:0*/ top__DOT__IDU__DOT___GEN_19;
    top__DOT__IDU__DOT___GEN_19 = 0;
    CData/*0:0*/ top__DOT__EXU__DOT___GEN_2;
    top__DOT__EXU__DOT___GEN_2 = 0;
    CData/*0:0*/ top__DOT__EXU__DOT___GEN_16;
    top__DOT__EXU__DOT___GEN_16 = 0;
    CData/*0:0*/ top__DOT__EXU__DOT___GEN_17;
    top__DOT__EXU__DOT___GEN_17 = 0;
    CData/*0:0*/ top__DOT__EXU__DOT___GEN_20;
    top__DOT__EXU__DOT___GEN_20 = 0;
    CData/*0:0*/ top__DOT__EXU__DOT___GEN_21;
    top__DOT__EXU__DOT___GEN_21 = 0;
    CData/*0:0*/ top__DOT__EXU__DOT___GEN_22;
    top__DOT__EXU__DOT___GEN_22 = 0;
    CData/*0:0*/ top__DOT__EXU__DOT___GEN_23;
    top__DOT__EXU__DOT___GEN_23 = 0;
    CData/*0:0*/ top__DOT__EXU__DOT___GEN_27;
    top__DOT__EXU__DOT___GEN_27 = 0;
    CData/*0:0*/ top__DOT__EXU__DOT___GEN_28;
    top__DOT__EXU__DOT___GEN_28 = 0;
    CData/*0:0*/ top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0;
    top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0 = 0;
    CData/*0:0*/ top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0;
    top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0 = 0;
    CData/*4:0*/ top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0;
    top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 = 0;
    CData/*1:0*/ __VdfgTmp_hfda52096__0;
    __VdfgTmp_hfda52096__0 = 0;
    CData/*0:0*/ __VdfgTmp_h14724db5__0;
    __VdfgTmp_h14724db5__0 = 0;
    IData/*31:0*/ __VdfgTmp_h293130ed__0;
    __VdfgTmp_h293130ed__0 = 0;
    // Body
    vlSelf->top__DOT__IDU__DOT___GEN_22 = ((3U == (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                                           | (0x23U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__IFU__DOT__lastinst)));
    vlSelf->top__DOT__IDU__DOT___GEN_21 = (IData)((
                                                   (0x2073U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                                                   | (1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                          >> 0xcU)))));
    if ((0x4000U & vlSelf->top__DOT__IFU__DOT__lastinst)) {
        if ((0x2000U & vlSelf->top__DOT__IFU__DOT__lastinst)) {
            if ((0x1000U & vlSelf->top__DOT__IFU__DOT__lastinst)) {
                vlSelf->top__DOT__IDU__DOT__casez_tmp = 2U;
                vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xbU;
            } else {
                vlSelf->top__DOT__IDU__DOT__casez_tmp = 3U;
                vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 9U;
            }
        } else if ((0x1000U & vlSelf->top__DOT__IFU__DOT__lastinst)) {
            vlSelf->top__DOT__IDU__DOT__casez_tmp = 
                (6U | (0U != (vlSelf->top__DOT__IFU__DOT__lastinst 
                              >> 0x19U)));
            vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xcU;
        } else {
            vlSelf->top__DOT__IDU__DOT__casez_tmp = 4U;
            vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 8U;
        }
    } else if ((0x2000U & vlSelf->top__DOT__IFU__DOT__lastinst)) {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = ((0x1000U 
                                                  & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                  ? 9U
                                                  : 8U);
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = vlSelf->top__DOT__IDU__DOT__lastaluop;
    } else if ((0x1000U & vlSelf->top__DOT__IFU__DOT__lastinst)) {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = 5U;
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xdU;
    } else {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = vlSelf->top__DOT__IDU__DOT__lastaluop;
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xaU;
    }
    top__DOT__IDU__DOT___GEN_9 = ((1U == (7U & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                >> 0xcU))) 
                                  | (2U == (7U & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                  >> 0xcU))));
    vlSelf->top__DOT__Reg__DOT__casez_tmp_0 = ((0x1000000U 
                                                & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                ? (
                                                   (0x800000U 
                                                    & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                    ? 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_31
                                                       : vlSelf->top__DOT__Reg__DOT__reg_30)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_29
                                                       : vlSelf->top__DOT__Reg__DOT__reg_28))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_27
                                                       : vlSelf->top__DOT__Reg__DOT__reg_26)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_25
                                                       : vlSelf->top__DOT__Reg__DOT__reg_24)))
                                                    : 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_23
                                                       : vlSelf->top__DOT__Reg__DOT__reg_22)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_21
                                                       : vlSelf->top__DOT__Reg__DOT__reg_20))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_19
                                                       : vlSelf->top__DOT__Reg__DOT__reg_18)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_17
                                                       : vlSelf->top__DOT__Reg__DOT__reg_16))))
                                                : (
                                                   (0x800000U 
                                                    & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                    ? 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_15
                                                       : vlSelf->top__DOT__Reg__DOT__reg_14)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_13
                                                       : vlSelf->top__DOT__Reg__DOT__reg_12))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_11
                                                       : vlSelf->top__DOT__Reg__DOT__reg_10)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_9
                                                       : vlSelf->top__DOT__Reg__DOT__reg_8)))
                                                    : 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_7
                                                       : vlSelf->top__DOT__Reg__DOT__reg_6)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_5
                                                       : vlSelf->top__DOT__Reg__DOT__reg_4))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_3
                                                       : vlSelf->top__DOT__Reg__DOT__reg_2)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_1
                                                       : vlSelf->top__DOT__Reg__DOT__reg_0)))));
    if (vlSelf->top__DOT__IFU__DOT__m2EXUstate) {
        vlSelf->io_pc = vlSelf->top__DOT__IFU__DOT__out_data_pc_REG;
        vlSelf->top__DOT___IDU_io_out2exu_bits_snpc 
            = ((IData)(4U) + vlSelf->io_pc);
    } else {
        vlSelf->io_pc = vlSelf->top__DOT__IFU__DOT__lastpc;
        vlSelf->top__DOT___IDU_io_out2exu_bits_snpc 
            = vlSelf->top__DOT__IFU__DOT__lastsnpc;
    }
    vlSelf->top__DOT__IDU__DOT___GEN_18 = ((0x17U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                                           | ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                                              | (0x67U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__IFU__DOT__lastinst))));
    top__DOT__IDU__DOT___GEN_8 = ((0x33U == (0x7fU 
                                             & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                                  | (0x13U == (0x7fU 
                                               & vlSelf->top__DOT__IFU__DOT__lastinst)));
    vlSelf->top__DOT__Reg__DOT__casez_tmp = ((0x80000U 
                                              & vlSelf->top__DOT__IFU__DOT__lastinst)
                                              ? ((0x40000U 
                                                  & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_31
                                                     : vlSelf->top__DOT__Reg__DOT__reg_30)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_29
                                                     : vlSelf->top__DOT__Reg__DOT__reg_28))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_27
                                                     : vlSelf->top__DOT__Reg__DOT__reg_26)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_25
                                                     : vlSelf->top__DOT__Reg__DOT__reg_24)))
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_23
                                                     : vlSelf->top__DOT__Reg__DOT__reg_22)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_21
                                                     : vlSelf->top__DOT__Reg__DOT__reg_20))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_19
                                                     : vlSelf->top__DOT__Reg__DOT__reg_18)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_17
                                                     : vlSelf->top__DOT__Reg__DOT__reg_16))))
                                              : ((0x40000U 
                                                  & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_15
                                                     : vlSelf->top__DOT__Reg__DOT__reg_14)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_13
                                                     : vlSelf->top__DOT__Reg__DOT__reg_12))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_11
                                                     : vlSelf->top__DOT__Reg__DOT__reg_10)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_9
                                                     : vlSelf->top__DOT__Reg__DOT__reg_8)))
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_7
                                                     : vlSelf->top__DOT__Reg__DOT__reg_6)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_5
                                                     : vlSelf->top__DOT__Reg__DOT__reg_4))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_3
                                                     : vlSelf->top__DOT__Reg__DOT__reg_2)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_1
                                                     : vlSelf->top__DOT__Reg__DOT__reg_0)))));
    vlSelf->top__DOT__IDU__DOT___exu_data_imm_T_3 = 
        (((- (IData)((vlSelf->top__DOT__IFU__DOT__lastinst 
                      >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT__IFU__DOT__lastinst 
                                              >> 0x14U));
    vlSelf->top__DOT__IDU__DOT___exu_data_imm_T_12 
        = (((- (IData)((vlSelf->top__DOT__IFU__DOT__lastinst 
                        >> 0x1fU))) << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                      >> 7U))));
    vlSelf->top__DOT__IDU__DOT___exu_data_imm_T_19 
        = (((- (IData)((vlSelf->top__DOT__IFU__DOT__lastinst 
                        >> 0x1fU))) << 0xcU) | ((0x800U 
                                                 & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                         >> 7U)))));
    vlSelf->top__DOT__IDU__DOT___exu_data_imm_T_29 
        = (((- (IData)((vlSelf->top__DOT__IFU__DOT__lastinst 
                        >> 0x1fU))) << 0x14U) | ((0xff000U 
                                                  & vlSelf->top__DOT__IFU__DOT__lastinst) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                          >> 0x14U)))));
    vlSelf->top__DOT__IDU__DOT___GEN_20 = (1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                                                 | (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst))));
    if (vlSelf->top__DOT__IDU__DOT__state) {
        if ((0x33U == (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst))) {
            vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type = 1U;
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = ((0U == (7U & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                 >> 0xcU))) ? (0U != 
                                               (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                >> 0x19U))
                    : (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp));
        } else if ((0x13U == (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst))) {
            vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type = 2U;
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = ((0U == (7U & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                 >> 0xcU))) ? 0U : (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp));
        } else {
            vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type 
                = ((3U == (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst))
                    ? 3U : ((0x23U == (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst))
                             ? 4U : ((0x63U == (0x7fU 
                                                & vlSelf->top__DOT__IFU__DOT__lastinst))
                                      ? 5U : ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT__lastinst))
                                               ? 6U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__IFU__DOT__lastinst))
                                                   ? 7U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst))
                                                    ? 8U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__IFU__DOT__lastinst))
                                                     ? 9U
                                                     : 
                                                    ((0x73U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst))
                                                      ? 
                                                     ((1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                           >> 0xcU)))
                                                       ? 0xaU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                            >> 0xcU)))
                                                        ? 0xbU
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                             >> 0xcU)))
                                                         ? 
                                                        (0xcU 
                                                         | (0U 
                                                            != 
                                                            (0x1fU 
                                                             & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                                >> 0x14U))))
                                                         : 0U)))
                                                      : 0U))))))));
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_22)
                    ? 0U : ((0x63U == (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst))
                             ? (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp_0)
                             : ((0x37U == (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst))
                                 ? (IData)(vlSelf->top__DOT__IDU__DOT__lastaluop)
                                 : ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_18)
                                     ? 0U : ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_21)
                                              ? (IData)(vlSelf->top__DOT__IDU__DOT__lastaluop)
                                              : 3U)))));
        }
    } else {
        vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type = 0U;
        vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
            = vlSelf->top__DOT__IDU__DOT__lastaluop;
    }
    vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask 
        = ((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                  | ((3U != (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                     | (IData)(top__DOT__IDU__DOT___GEN_8))))
            ? 0U : ((0U == (7U & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                  >> 0xcU))) ? 1U : 
                    ((1U == (7U & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                   >> 0xcU))) ? 2U : 
                     ((2U == (7U & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                    >> 0xcU))) ? 4U
                       : ((4U == (7U & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                        >> 0xcU))) ? 1U
                           : ((5U == (7U & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                            >> 0xcU))) 
                              << 1U))))));
    vlSelf->top__DOT___IDU_io_mem_ren = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
                                         & ((~ (IData)(top__DOT__IDU__DOT___GEN_8)) 
                                            & (3U == 
                                               (0x7fU 
                                                & vlSelf->top__DOT__IFU__DOT__lastinst))));
    top__DOT__IDU__DOT___GEN_11 = ((IData)(top__DOT__IDU__DOT___GEN_8) 
                                   | (3U == (0x7fU 
                                             & vlSelf->top__DOT__IFU__DOT__lastinst)));
    vlSelf->top__DOT__IDU__DOT__exu_data_imm = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_20)
                                                 ? vlSelf->top__DOT__IDU__DOT__lastimm
                                                 : 
                                                ((0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT__lastinst))
                                                  ? vlSelf->top__DOT__IDU__DOT___exu_data_imm_T_3
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__IFU__DOT__lastinst))
                                                   ? vlSelf->top__DOT__IDU__DOT___exu_data_imm_T_3
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__IFU__DOT__lastinst))
                                                    ? vlSelf->top__DOT__IDU__DOT___exu_data_imm_T_12
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__IFU__DOT__lastinst))
                                                     ? vlSelf->top__DOT__IDU__DOT___exu_data_imm_T_19
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst))
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__IFU__DOT__lastinst))
                                                       ? 
                                                      (0xfffff000U 
                                                       & vlSelf->top__DOT__IFU__DOT__lastinst)
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__IFU__DOT__lastinst))
                                                        ? vlSelf->top__DOT__IDU__DOT___exu_data_imm_T_29
                                                        : 
                                                       ((0x67U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__IFU__DOT__lastinst))
                                                         ? vlSelf->top__DOT__IDU__DOT___exu_data_imm_T_3
                                                         : 
                                                        ((0x73U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__IFU__DOT__lastinst))
                                                          ? vlSelf->top__DOT__IDU__DOT___exu_data_imm_T_3
                                                          : vlSelf->top__DOT__IDU__DOT__lastimm))))))))));
    top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0 = ((0xcU 
                                                   == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                  | (0xdU 
                                                     == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0 = ((6U 
                                                   == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                  | (7U 
                                                     == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    top__DOT__EXU__DOT___GEN_16 = ((0xaU == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                   | (0xbU == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    top__DOT__EXU__DOT___GEN_23 = ((2U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                   | ((3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                      | (4U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))));
    top__DOT__EXU__DOT___GEN_17 = ((8U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                   | (9U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_18 = ((4U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    top__DOT__EXU__DOT___GEN_2 = ((1U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                  | (2U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    top__DOT__EXU__DOT___GEN_20 = ((0xbU != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                   | (0xaU == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT___IDU_io_out2exu_bits_il_us = 
        ((IData)(vlSelf->top__DOT___IDU_io_mem_ren) 
         & ((~ ((0U == (7U & (vlSelf->top__DOT__IFU__DOT__lastinst 
                              >> 0xcU))) | (IData)(top__DOT__IDU__DOT___GEN_9))) 
            & ((4U == (7U & (vlSelf->top__DOT__IFU__DOT__lastinst 
                             >> 0xcU))) | (5U == (7U 
                                                  & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                     >> 0xcU))))));
    vlSelf->top__DOT___IDU_io_out2exu_bits_mem_wen 
        = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
           & ((~ (IData)(top__DOT__IDU__DOT___GEN_11)) 
              & (0x23U == (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst))));
    vlSelf->top__DOT___IDU_io_out2exu_bits_m_wmask 
        = ((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                  | ((0x23U != (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                     | (IData)(top__DOT__IDU__DOT___GEN_11))))
            ? 0U : ((0U == (7U & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                  >> 0xcU))) ? 1U : 
                    ((1U == (7U & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                   >> 0xcU))) ? 2U : 
                     ((2U == (7U & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                    >> 0xcU))) << 2U))));
    vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen = 
        (((IData)(vlSelf->top__DOT__IDU__DOT__state) 
          & ((IData)(top__DOT__IDU__DOT___GEN_11) | 
             ((~ ((0x23U == (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                  | (0x63U == (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst)))) 
              & ((0x37U == (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                 | ((0x17U == (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                    | ((0x6fU == (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                       | ((0x67U == (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                          | ((0x73U == (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                             & (IData)(top__DOT__IDU__DOT___GEN_9))))))))) 
         | (IData)(vlSelf->top__DOT__IDU__DOT__lastreg_wen));
    top__DOT__IDU__DOT___GEN_19 = ((IData)(top__DOT__IDU__DOT___GEN_11) 
                                   | ((0x23U == (0x7fU 
                                                 & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                                      | ((0x63U == 
                                          (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                                         | ((0x37U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                                            | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_18)))));
    __VdfgTmp_hfda52096__0 = ((0x341U == vlSelf->top__DOT__IDU__DOT__exu_data_imm)
                               ? 0U : ((0x342U == vlSelf->top__DOT__IDU__DOT__exu_data_imm)
                                        ? 1U : ((0x300U 
                                                 == vlSelf->top__DOT__IDU__DOT__exu_data_imm)
                                                 ? 2U
                                                 : 
                                                (3U 
                                                 & (- (IData)(
                                                              (0x305U 
                                                               == vlSelf->top__DOT__IDU__DOT__exu_data_imm)))))));
    vlSelf->top__DOT__EXU__DOT___GEN_19 = ((IData)(top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0) 
                                           | ((8U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                              | ((9U 
                                                  == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                 | (IData)(top__DOT__EXU__DOT___GEN_16))));
    top__DOT__EXU__DOT___GEN_21 = ((7U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                   | (IData)(top__DOT__EXU__DOT___GEN_17));
    vlSelf->top__DOT__EXU__DOT___GEN_3 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                | ((3U 
                                                    != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                   | (IData)(top__DOT__EXU__DOT___GEN_2))));
    vlSelf->top__DOT__EXU__DOT___GEN_7 = ((IData)(top__DOT__EXU__DOT___GEN_2) 
                                          | (3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    __VdfgTmp_h293130ed__0 = ((1U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                               ? vlSelf->top__DOT__Reg__DOT__casez_tmp_0
                               : ((IData)(top__DOT__EXU__DOT___GEN_23)
                                   ? vlSelf->top__DOT__IDU__DOT__exu_data_imm
                                   : ((5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                       ? vlSelf->top__DOT__Reg__DOT__casez_tmp_0
                                       : ((6U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                           ? 0U : (
                                                   ((7U 
                                                     == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                    | (8U 
                                                       == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)))
                                                    ? vlSelf->io_pc
                                                    : 
                                                   ((1U 
                                                     & ((~ (IData)(top__DOT__EXU__DOT___GEN_20)) 
                                                        | (9U 
                                                           == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))))
                                                     ? vlSelf->top__DOT__Reg__DOT__casez_tmp
                                                     : 0U))))));
    vlSelf->io_inv_flag = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
                           & ((~ (IData)(top__DOT__IDU__DOT___GEN_19)) 
                              & (0x73U != (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst))));
    vlSelf->top__DOT___IDU_io_reg_data_csr_raddr = 
        ((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                | ((0x73U != (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                   | (IData)(top__DOT__IDU__DOT___GEN_19))))
          ? 0U : (3U & ((IData)(top__DOT__IDU__DOT___GEN_9)
                         ? (IData)(__VdfgTmp_hfda52096__0)
                         : (- (IData)((IData)((0U == 
                                               (0x1f07000U 
                                                & vlSelf->top__DOT__IFU__DOT__lastinst))))))));
    __VdfgTmp_h14724db5__0 = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                              & ((~ ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19)) 
                                     | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18))) 
                                 | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7)));
    top__DOT__EXU__DOT___GEN_22 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7) 
                                   | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18));
    vlSelf->top__DOT__Reg__DOT__casez_tmp_1 = ((0U 
                                                == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                                ? vlSelf->top__DOT__Reg__DOT__csr_0
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                                    ? vlSelf->top__DOT__Reg__DOT__csr_1
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                                     ? vlSelf->top__DOT__Reg__DOT__csr_2
                                                     : vlSelf->top__DOT__Reg__DOT__csr_3)));
    vlSelf->top__DOT___EXU_io_reg_waddr = ((IData)(__VdfgTmp_h14724db5__0)
                                            ? (0x1fU 
                                               & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                  >> 7U))
                                            : 0U);
    vlSelf->top__DOT__Reg__DOT___GEN = (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                         & (((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7) 
                                             | ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)) 
                                                & (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19))) 
                                            & (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen))) 
                                        & ((IData)(__VdfgTmp_h14724db5__0) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                  >> 7U)))));
    vlSelf->top__DOT__EXU__DOT___GEN_25 = ((IData)(top__DOT__EXU__DOT___GEN_22) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19));
    top__DOT__EXU__DOT___GEN_27 = ((IData)(top__DOT__EXU__DOT___GEN_22) 
                                   | ((6U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                      | (IData)(top__DOT__EXU__DOT___GEN_21)));
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op 
        = (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
            & ((~ ((~ ((~ (IData)(top__DOT__EXU__DOT___GEN_20)) 
                       | (IData)(top__DOT__EXU__DOT___GEN_21))) 
                   | (6U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)))) 
               | (IData)(top__DOT__EXU__DOT___GEN_22)))
            ? (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op)
            : 0xfU);
    vlSelf->top__DOT___EXU_io_csr_wen_1 = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                           & ((~ (IData)(top__DOT__EXU__DOT___GEN_27)) 
                                              & ((IData)(top__DOT__EXU__DOT___GEN_16) 
                                                 | (IData)(top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0))));
    top__DOT__EXU__DOT___GEN_28 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                         | (IData)(top__DOT__EXU__DOT___GEN_27)));
    if (vlSelf->top__DOT__EXU__DOT__m2IDUstate) {
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 
            = __VdfgTmp_h293130ed__0;
        top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 
            = (0x1fU & __VdfgTmp_h293130ed__0);
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
            = ((IData)(top__DOT__EXU__DOT___GEN_22)
                ? vlSelf->top__DOT__Reg__DOT__casez_tmp
                : ((6U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                    ? 0U : ((IData)(top__DOT__EXU__DOT___GEN_21)
                             ? vlSelf->top__DOT__IDU__DOT__exu_data_imm
                             : ((IData)(top__DOT__EXU__DOT___GEN_20)
                                 ? 0U : vlSelf->top__DOT__Reg__DOT__casez_tmp_1))));
    } else {
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 = 0U;
        top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 = 0U;
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 = 0U;
    }
    vlSelf->top__DOT__EXU__DOT___alu_io_result = ((0U 
                                                   == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                   ? 
                                                  (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                   + vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                    ? 
                                                   (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                    - vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                     ? 
                                                    (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                     & vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                      ? 
                                                     (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                      | vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                       ? 
                                                      (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                       ^ vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                        ? 
                                                       (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                        << (IData)(top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0))
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                         ? 
                                                        (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                         >> (IData)(top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0))
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                          ? 
                                                         VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1, (IData)(top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0))
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                           ? 
                                                          VL_LTS_III(32, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                           : 
                                                          ((9U 
                                                            == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                            ? 
                                                           (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                            < vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                            : 
                                                           ((0xaU 
                                                             == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                             ? 
                                                            (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                             == vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                             : 
                                                            ((0xbU 
                                                              == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                              ? 
                                                             (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                              >= vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                              : 
                                                             ((0xcU 
                                                               == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                               ? 
                                                              VL_GTES_III(32, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                               : 
                                                              ((0xdU 
                                                                == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                                ? 
                                                               (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                                != vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                                                                : 0U))))))))))))));
    if (vlSelf->top__DOT__EXU__DOT__m2IDUstate) {
        vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc 
            = (((1U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                | (IData)(top__DOT__EXU__DOT___GEN_23))
                ? vlSelf->top__DOT___IDU_io_out2exu_bits_snpc
                : ((5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                    ? ((1U == vlSelf->top__DOT__EXU__DOT___alu_io_result)
                        ? (vlSelf->top__DOT__IDU__DOT__exu_data_imm 
                           + vlSelf->io_pc) : vlSelf->top__DOT___IDU_io_out2exu_bits_snpc)
                    : ((IData)(top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0)
                        ? vlSelf->top__DOT___IDU_io_out2exu_bits_snpc
                        : ((IData)(top__DOT__EXU__DOT___GEN_17)
                            ? vlSelf->top__DOT__EXU__DOT___alu_io_result
                            : ((1U & ((~ (IData)(top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0)) 
                                      | (IData)(top__DOT__EXU__DOT___GEN_16)))
                                ? vlSelf->top__DOT___IDU_io_out2exu_bits_snpc
                                : vlSelf->top__DOT__Reg__DOT__casez_tmp_1)))));
        vlSelf->top__DOT___EXU_io_reg_wdata = ((IData)(top__DOT__EXU__DOT___GEN_2)
                                                ? vlSelf->top__DOT__EXU__DOT___alu_io_result
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                    ? 
                                                   (((~ (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us)) 
                                                     & (1U 
                                                        == vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT___Mem_io_mem_m_rdata 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelf->top__DOT___Mem_io_mem_m_rdata))
                                                     : 
                                                    (((~ (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us)) 
                                                      & (2U 
                                                         == vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT___Mem_io_mem_m_rdata 
                                                                      >> 0xfU)))) 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & vlSelf->top__DOT___Mem_io_mem_m_rdata))
                                                      : 
                                                     (((1U 
                                                        == vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask) 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us))
                                                       ? 
                                                      (0xffU 
                                                       & vlSelf->top__DOT___Mem_io_mem_m_rdata)
                                                       : 
                                                      (((2U 
                                                         == vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask) 
                                                        & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us))
                                                        ? 
                                                       (0xffffU 
                                                        & vlSelf->top__DOT___Mem_io_mem_m_rdata)
                                                        : vlSelf->top__DOT___Mem_io_mem_m_rdata))))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)
                                                     ? 0U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                      ? vlSelf->top__DOT__IDU__DOT__exu_data_imm
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                       ? vlSelf->top__DOT__EXU__DOT___alu_io_result
                                                       : 
                                                      ((IData)(top__DOT__EXU__DOT___GEN_17)
                                                        ? vlSelf->top__DOT___IDU_io_out2exu_bits_snpc
                                                        : 
                                                       ((IData)(top__DOT__EXU__DOT___GEN_16)
                                                         ? vlSelf->top__DOT__Reg__DOT__casez_tmp_1
                                                         : 0U)))))));
    } else {
        vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc = 0x80000000U;
        vlSelf->top__DOT___EXU_io_reg_wdata = 0U;
    }
    if (top__DOT__EXU__DOT___GEN_28) {
        vlSelf->top__DOT___EXU_io_csr_waddr_1 = 0U;
        vlSelf->top__DOT___EXU_io_csr_wdata_1 = 0U;
    } else {
        vlSelf->top__DOT___EXU_io_csr_waddr_1 = ((IData)(top__DOT__EXU__DOT___GEN_16)
                                                  ? (IData)(__VdfgTmp_hfda52096__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                   ? 1U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                   << 1U)));
        vlSelf->top__DOT___EXU_io_csr_wdata_1 = ((0xaU 
                                                  == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                  ? vlSelf->top__DOT__Reg__DOT__casez_tmp
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                   ? vlSelf->top__DOT__EXU__DOT___alu_io_result
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                    ? 
                                                   ((0xffffffffU 
                                                     == vlSelf->top__DOT__Reg__DOT__reg_15)
                                                     ? 0U
                                                     : vlSelf->top__DOT__Reg__DOT__reg_15)
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                     ? 
                                                    ((0xf0000000U 
                                                      & vlSelf->top__DOT__Reg__DOT__csr_2) 
                                                     | (0xfffffffU 
                                                        & (0x80U 
                                                           | (vlSelf->top__DOT__Reg__DOT__csr_2 
                                                              | (8U 
                                                                 & (vlSelf->top__DOT__Reg__DOT__csr_2 
                                                                    >> 4U))))))
                                                     : 0U))));
    }
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] top.IFU.lastinst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] top.IFU.lastinst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_pc = VL_RAND_RESET_I(32);
    vlSelf->io_inv_flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___Mem_io_mem_m_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___EXU_io_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___EXU_io_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT___EXU_io_csr_waddr_1 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT___EXU_io_csr_wdata_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___EXU_io_csr_wen_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___IDU_io_out2exu_bits_snpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___IDU_io_out2exu_bits_mem_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___IDU_io_out2exu_bits_m_wmask = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type = VL_RAND_RESET_I(4);
    vlSelf->top__DOT___IDU_io_out2exu_bits_il_us = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___IDU_io_reg_data_csr_raddr = VL_RAND_RESET_I(2);
    vlSelf->top__DOT___IDU_io_mem_ren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__m2EXUstate = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__lastpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__lastsnpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__lasten = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__lastinst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__out_data_pc_REG = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__exu_data_alu_op = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__IDU__DOT__exu_data_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__lastaluop = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__IDU__DOT__lastimm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__lastreg_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__casez_tmp = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__IDU__DOT___exu_data_imm_T_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT___exu_data_imm_T_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT___exu_data_imm_T_19 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__IDU__DOT___exu_data_imm_T_29 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___GEN_22 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT___alu_io_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__lastdnpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__m2IDUstate = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__csr_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__csr_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__csr_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__csr_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_16 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_17 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_18 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_19 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_20 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_21 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_22 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_23 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_24 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_25 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_26 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_27 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_28 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_29 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_30 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__reg_31 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__casez_tmp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__casez_tmp_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT__casez_tmp_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Reg__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__IFU__DOT__m2EXUstate = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__top__DOT__IFU__DOT__lastinst = VL_RAND_RESET_I(32);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

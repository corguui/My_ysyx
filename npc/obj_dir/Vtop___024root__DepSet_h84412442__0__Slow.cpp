// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(IData/*31:0*/ m_raddr, IData/*31:0*/ rmask, IData/*31:0*/ &vlg_pmem_read__Vfuncrtn);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
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
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0x10U;
    } else if ((0x1000U & vlSelf->top__DOT__IFU__DOT__lastinst)) {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = 5U;
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xdU;
    } else {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = 0x10U;
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xaU;
    }
    vlSelf->io_pc = ((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
                      ? vlSelf->top__DOT__IFU__DOT__out_data_pc_REG
                      : vlSelf->top__DOT__IFU__DOT__lastpc);
    vlSelf->top__DOT__IDU__DOT___GEN_15 = ((1U == (7U 
                                                   & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                      >> 0xcU))) 
                                           | (2U == 
                                              (7U & 
                                               (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                >> 0xcU))));
    vlSelf->__VdfgTmp_h8a0b1431__0 = ((0x341U == vlSelf->top__DOT__IDU__DOT__exu_data_imm)
                                       ? 0U : ((0x342U 
                                                == vlSelf->top__DOT__IDU__DOT__exu_data_imm)
                                                ? 1U
                                                : (
                                                   (0x300U 
                                                    == vlSelf->top__DOT__IDU__DOT__exu_data_imm)
                                                    ? 2U
                                                    : 
                                                   (3U 
                                                    & (- (IData)(
                                                                 (0x305U 
                                                                  == vlSelf->top__DOT__IDU__DOT__exu_data_imm)))))));
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0 
        = ((0xcU == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
           | (0xdU == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__IDU__DOT___GEN_20 = ((0x33U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                                           | (0x13U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__IFU__DOT__lastinst)));
    vlSelf->top__DOT__IDU__DOT___GEN_12 = ((0x17U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                                           | ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                                              | (0x67U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__IFU__DOT__lastinst))));
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
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0 
        = ((6U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
           | (7U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_16 = ((0xaU == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (0xbU 
                                              == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_23 = ((2U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                              | (4U 
                                                 == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))));
    vlSelf->top__DOT__EXU__DOT___GEN_17 = ((8U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (9U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_18 = ((4U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (5U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_2 = ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                          | (2U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_20 = ((0xbU != (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (0xaU 
                                              == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__IDU__DOT___GEN_19 = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_20) 
                                           | (3U == 
                                              (0x7fU 
                                               & vlSelf->top__DOT__IFU__DOT__lastinst)));
    vlSelf->top__DOT__IDU__DOT___GEN_13 = ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                                           | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_12));
    vlSelf->top__DOT__EXU__DOT___GEN_19 = ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0) 
                                           | ((8U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                              | ((9U 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                                 | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_16))));
    vlSelf->top__DOT__EXU__DOT___GEN_21 = ((7U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_17));
    vlSelf->top__DOT__EXU__DOT___GEN_3 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                | ((3U 
                                                    != (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                                   | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_2))));
    vlSelf->top__DOT__EXU__DOT___GEN_7 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_2) 
                                          | (3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->__VdfgTmp_h570e6332__0 = ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                       ? vlSelf->top__DOT__IDU__DOT__exu_data_src2
                                       : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_23)
                                           ? vlSelf->top__DOT__IDU__DOT__exu_data_imm
                                           : ((5U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                               ? vlSelf->top__DOT__IDU__DOT__exu_data_src2
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                   ? 0U
                                                   : 
                                                  (((7U 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                                    | (8U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)))
                                                    ? vlSelf->top__DOT__IDU__DOT__exu_data_pc
                                                    : 
                                                   ((1U 
                                                     & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_20)) 
                                                        | (9U 
                                                           == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))))
                                                     ? vlSelf->top__DOT__IDU__DOT__exu_data_src1
                                                     : 0U))))));
    vlSelf->top__DOT__IDU__DOT___GEN_14 = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_19) 
                                           | ((0x23U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                                              | ((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_13))));
    vlSelf->__VdfgTmp_h075e1d2a__0 = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                      & ((~ ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19)) 
                                             | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18))) 
                                         | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7)));
    vlSelf->top__DOT__EXU__DOT___GEN_22 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18));
    vlSelf->io_inv_flag = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
                           & ((~ (IData)(vlSelf->top__DOT__IDU__DOT___GEN_14)) 
                              & (0x73U != (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst))));
    vlSelf->top__DOT___IDU_io_reg_data_csr_raddr = 
        ((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                | ((0x73U != (0x7fU & vlSelf->top__DOT__IFU__DOT__lastinst)) 
                   | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_14))))
          ? 0U : (3U & ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_15)
                         ? (IData)(vlSelf->__VdfgTmp_h8a0b1431__0)
                         : (- (IData)((IData)((0U == 
                                               (0x1f07000U 
                                                & vlSelf->top__DOT__IFU__DOT__lastinst))))))));
    vlSelf->top__DOT___EXU_io_reg_waddr = ((IData)(vlSelf->__VdfgTmp_h075e1d2a__0)
                                            ? (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_waddr)
                                            : 0U);
    vlSelf->top__DOT__Reg__DOT___GEN = (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                         & (((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7) 
                                             | ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)) 
                                                & (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19))) 
                                            & (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen))) 
                                        & ((IData)(vlSelf->__VdfgTmp_h075e1d2a__0) 
                                           & (0U != (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_waddr))));
    vlSelf->top__DOT__EXU__DOT___GEN_25 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_22) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19));
    vlSelf->top__DOT__EXU__DOT___GEN_27 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_22) 
                                           | ((6U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                              | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_21)));
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op 
        = (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
            & ((~ ((~ ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_20)) 
                       | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_21))) 
                   | (6U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)))) 
               | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_22)))
            ? (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op)
            : 0xfU);
    vlSelf->top__DOT___EXU_io_csr_wen_1 = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                           & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_27)) 
                                              & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_16) 
                                                 | (IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0))));
    vlSelf->top__DOT__EXU__DOT___GEN_28 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                 | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_27)));
    if (vlSelf->top__DOT__EXU__DOT__m2IDUstate) {
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 
            = vlSelf->__VdfgTmp_h570e6332__0;
        vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 
            = (0x1fU & vlSelf->__VdfgTmp_h570e6332__0);
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
            = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_22)
                ? vlSelf->top__DOT__IDU__DOT__exu_data_src1
                : ((6U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                    ? 0U : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_21)
                             ? vlSelf->top__DOT__IDU__DOT__exu_data_imm
                             : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_20)
                                 ? 0U : vlSelf->top__DOT__IDU__DOT__exu_data_csr))));
    } else {
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 = 0U;
        vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 = 0U;
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
                                                        << (IData)(vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0))
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                         ? 
                                                        (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                                                         >> (IData)(vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0))
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                                                          ? 
                                                         VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1, (IData)(vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0))
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
    if (vlSelf->top__DOT__EXU__DOT___GEN_28) {
        vlSelf->top__DOT___EXU_io_csr_waddr_1 = 0U;
        vlSelf->top__DOT___EXU_io_csr_wdata_1 = 0U;
    } else {
        vlSelf->top__DOT___EXU_io_csr_waddr_1 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_16)
                                                  ? (IData)(vlSelf->__VdfgTmp_h8a0b1431__0)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                   ? 1U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                                   << 1U)));
        vlSelf->top__DOT___EXU_io_csr_wdata_1 = ((0xaU 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                  ? vlSelf->top__DOT__IDU__DOT__exu_data_src1
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                   ? vlSelf->top__DOT__EXU__DOT___alu_io_result
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                    ? vlSelf->top__DOT__IDU__DOT__exu_data_csr_a5
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                     ? vlSelf->top__DOT__IDU__DOT__exu_data_mstatus
                                                     : 0U))));
    }
    vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc = 
        ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)
          ? (((1U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
              | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_23))
              ? vlSelf->top__DOT__IDU__DOT__exu_data_snpc
              : ((5U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                  ? ((1U == vlSelf->top__DOT__EXU__DOT___alu_io_result)
                      ? (vlSelf->top__DOT__IDU__DOT__exu_data_imm 
                         + vlSelf->top__DOT__IDU__DOT__exu_data_pc)
                      : vlSelf->top__DOT__IDU__DOT__exu_data_snpc)
                  : ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0)
                      ? vlSelf->top__DOT__IDU__DOT__exu_data_snpc
                      : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_17)
                          ? vlSelf->top__DOT__EXU__DOT___alu_io_result
                          : ((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0)) 
                                    | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_16)))
                              ? vlSelf->top__DOT__IDU__DOT__exu_data_snpc
                              : vlSelf->top__DOT__IDU__DOT__exu_data_csr)))))
          : 0x80000000U);
    if (vlSelf->top__DOT__IDU__DOT__lastmem_ren) {
        Vtop___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(
                                                                  ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                                                                    ? 0U
                                                                    : vlSelf->top__DOT__EXU__DOT___alu_io_result), 
                                                                  ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                                                                    ? 0U
                                                                    : vlSelf->top__DOT__IDU__DOT__exu_data_m_rmask), vlSelf->__Vfunc_vlg_pmem_read__2__Vfuncout);
        vlSelf->top__DOT___Mem_io_mem_m_rdata = vlSelf->__Vfunc_vlg_pmem_read__2__Vfuncout;
    } else {
        vlSelf->top__DOT___Mem_io_mem_m_rdata = 0U;
    }
    vlSelf->top__DOT___EXU_io_reg_wdata = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)
                                            ? ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_2)
                                                ? vlSelf->top__DOT__EXU__DOT___alu_io_result
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                    ? 
                                                   (((~ (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_il_us)) 
                                                     & (1U 
                                                        == vlSelf->top__DOT__IDU__DOT__exu_data_m_rmask))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT___Mem_io_mem_m_rdata 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelf->top__DOT___Mem_io_mem_m_rdata))
                                                     : 
                                                    (((~ (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_il_us)) 
                                                      & (2U 
                                                         == vlSelf->top__DOT__IDU__DOT__exu_data_m_rmask))
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
                                                        == vlSelf->top__DOT__IDU__DOT__exu_data_m_rmask) 
                                                       & (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_il_us))
                                                       ? 
                                                      (0xffU 
                                                       & vlSelf->top__DOT___Mem_io_mem_m_rdata)
                                                       : 
                                                      (((2U 
                                                         == vlSelf->top__DOT__IDU__DOT__exu_data_m_rmask) 
                                                        & (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_il_us))
                                                        ? 
                                                       (0xffffU 
                                                        & vlSelf->top__DOT___Mem_io_mem_m_rdata)
                                                        : vlSelf->top__DOT___Mem_io_mem_m_rdata))))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)
                                                     ? 0U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                      ? vlSelf->top__DOT__IDU__DOT__exu_data_imm
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                       ? vlSelf->top__DOT__EXU__DOT___alu_io_result
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_17)
                                                        ? vlSelf->top__DOT__IDU__DOT__exu_data_snpc
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_16)
                                                         ? vlSelf->top__DOT__IDU__DOT__exu_data_csr
                                                         : 0U)))))))
                                            : 0U);
}

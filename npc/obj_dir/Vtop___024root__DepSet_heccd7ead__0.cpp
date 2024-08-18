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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__top__DOT__IFU__DOT__m2EXUstate = 0U;
        vlSelf->top__DOT__IFU__DOT__rready_reg = 0U;
        vlSelf->top__DOT__IFU__DOT__inst_reg = 0U;
        vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg = 0U;
    } else {
        if (vlSelf->top__DOT__IFU__DOT__m2EXUstate) {
            vlSelf->top__DOT__IFU__DOT__rready_reg 
                = ((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                   & (IData)(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_reg));
        } else {
            vlSelf->__Vdly__top__DOT__IFU__DOT__m2EXUstate 
                = vlSelf->top__DOT___EXU_io_out2ifu_valid;
        }
        if (vlSelf->top__DOT__IFU__DOT__arvalid_reg) {
            vlSelf->top__DOT__IFU__DOT__inst_reg = 
                ((((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
                   & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)) 
                  & (IData)(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_reg))
                  ? ((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                      ? vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg
                      : 0U) : 0U);
            vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg 
                = vlSelf->top__DOT__Inst_fetch__DOT___vlg_pc_read_inst;
        }
    }
    vlSelf->top__DOT__IFU__DOT__m2EXUstate = vlSelf->__Vdly__top__DOT__IFU__DOT__m2EXUstate;
    vlSelf->top__DOT___EXU_io_out2ifu_valid = ((3U 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                ? (IData)(vlSelf->top__DOT__EXU__DOT__rready_reg)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                    ? (IData)(vlSelf->top__DOT__EXU__DOT__bready_reg)
                                                    : 
                                                   (vlSelf->top__DOT__EXU__DOT__lastdnpc 
                                                    != vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc)));
    vlSelf->io_pc = ((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
                      ? vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_REG
                      : 0U);
    vlSelf->top__DOT__Inst_fetch__DOT__rvalid_reg = 
        ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg));
    if ((0x4000U & vlSelf->top__DOT__IFU__DOT__inst_reg)) {
        if ((0x2000U & vlSelf->top__DOT__IFU__DOT__inst_reg)) {
            if ((0x1000U & vlSelf->top__DOT__IFU__DOT__inst_reg)) {
                vlSelf->top__DOT__IDU__DOT__casez_tmp = 2U;
                vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xbU;
            } else {
                vlSelf->top__DOT__IDU__DOT__casez_tmp = 3U;
                vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 9U;
            }
        } else if ((0x1000U & vlSelf->top__DOT__IFU__DOT__inst_reg)) {
            vlSelf->top__DOT__IDU__DOT__casez_tmp = 
                (6U | (0U != (vlSelf->top__DOT__IFU__DOT__inst_reg 
                              >> 0x19U)));
            vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xcU;
        } else {
            vlSelf->top__DOT__IDU__DOT__casez_tmp = 4U;
            vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 8U;
        }
    } else if ((0x2000U & vlSelf->top__DOT__IFU__DOT__inst_reg)) {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = ((0x1000U 
                                                  & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                  ? 9U
                                                  : 8U);
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0x10U;
    } else if ((0x1000U & vlSelf->top__DOT__IFU__DOT__inst_reg)) {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = 5U;
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xdU;
    } else {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = 0x10U;
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xaU;
    }
    vlSelf->top__DOT__IDU__DOT___GEN_15 = ((1U == (7U 
                                                   & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                      >> 0xcU))) 
                                           | (2U == 
                                              (7U & 
                                               (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                >> 0xcU))));
    vlSelf->top__DOT__IDU__DOT__csr_imm = (((- (IData)(
                                                       (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                              >> 0x14U));
    vlSelf->top__DOT__IDU__DOT___GEN_17 = ((0x33U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__IFU__DOT__inst_reg)) 
                                           | (0x13U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__IFU__DOT__inst_reg)));
    vlSelf->top__DOT__IDU__DOT___GEN_12 = ((0x17U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__IFU__DOT__inst_reg)) 
                                           | ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT__inst_reg)) 
                                              | (0x67U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__IFU__DOT__inst_reg))));
    vlSelf->top__DOT__Reg__DOT__casez_tmp = ((0x80000U 
                                              & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                              ? ((0x40000U 
                                                  & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_31
                                                     : vlSelf->top__DOT__Reg__DOT__reg_30)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_29
                                                     : vlSelf->top__DOT__Reg__DOT__reg_28))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_27
                                                     : vlSelf->top__DOT__Reg__DOT__reg_26)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_25
                                                     : vlSelf->top__DOT__Reg__DOT__reg_24)))
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_23
                                                     : vlSelf->top__DOT__Reg__DOT__reg_22)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_21
                                                     : vlSelf->top__DOT__Reg__DOT__reg_20))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_19
                                                     : vlSelf->top__DOT__Reg__DOT__reg_18)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_17
                                                     : vlSelf->top__DOT__Reg__DOT__reg_16))))
                                              : ((0x40000U 
                                                  & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_15
                                                     : vlSelf->top__DOT__Reg__DOT__reg_14)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_13
                                                     : vlSelf->top__DOT__Reg__DOT__reg_12))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_11
                                                     : vlSelf->top__DOT__Reg__DOT__reg_10)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_9
                                                     : vlSelf->top__DOT__Reg__DOT__reg_8)))
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_7
                                                     : vlSelf->top__DOT__Reg__DOT__reg_6)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_5
                                                     : vlSelf->top__DOT__Reg__DOT__reg_4))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_3
                                                     : vlSelf->top__DOT__Reg__DOT__reg_2)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_1
                                                     : vlSelf->top__DOT__Reg__DOT__reg_0)))));
    vlSelf->top__DOT__Reg__DOT__casez_tmp_0 = ((0x1000000U 
                                                & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                ? (
                                                   (0x800000U 
                                                    & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                    ? 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_31
                                                       : vlSelf->top__DOT__Reg__DOT__reg_30)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_29
                                                       : vlSelf->top__DOT__Reg__DOT__reg_28))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_27
                                                       : vlSelf->top__DOT__Reg__DOT__reg_26)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_25
                                                       : vlSelf->top__DOT__Reg__DOT__reg_24)))
                                                    : 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_23
                                                       : vlSelf->top__DOT__Reg__DOT__reg_22)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_21
                                                       : vlSelf->top__DOT__Reg__DOT__reg_20))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_19
                                                       : vlSelf->top__DOT__Reg__DOT__reg_18)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_17
                                                       : vlSelf->top__DOT__Reg__DOT__reg_16))))
                                                : (
                                                   (0x800000U 
                                                    & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                    ? 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_15
                                                       : vlSelf->top__DOT__Reg__DOT__reg_14)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_13
                                                       : vlSelf->top__DOT__Reg__DOT__reg_12))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_11
                                                       : vlSelf->top__DOT__Reg__DOT__reg_10)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_9
                                                       : vlSelf->top__DOT__Reg__DOT__reg_8)))
                                                    : 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_7
                                                       : vlSelf->top__DOT__Reg__DOT__reg_6)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_5
                                                       : vlSelf->top__DOT__Reg__DOT__reg_4))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_3
                                                       : vlSelf->top__DOT__Reg__DOT__reg_2)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT__inst_reg)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_1
                                                       : vlSelf->top__DOT__Reg__DOT__reg_0)))));
    vlSelf->top__DOT__IFU__DOT__arvalid_reg = vlSelf->__Vdly__top__DOT__IFU__DOT__arvalid_reg;
    vlSelf->top__DOT__IDU__DOT___GEN_18 = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_17) 
                                           | (3U == 
                                              (0x7fU 
                                               & vlSelf->top__DOT__IFU__DOT__inst_reg)));
    vlSelf->top__DOT__IDU__DOT___GEN_13 = ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__IFU__DOT__inst_reg)) 
                                           | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_12));
    vlSelf->top__DOT__IDU__DOT___GEN_14 = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_18) 
                                           | ((0x23U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT__inst_reg)) 
                                              | ((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT__inst_reg)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_13))));
    vlSelf->io_inv_flag = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
                           & ((~ (IData)(vlSelf->top__DOT__IDU__DOT___GEN_14)) 
                              & (0x73U != (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg))));
    vlSelf->top__DOT___IDU_io_reg_data_csr_raddr = 
        ((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                | ((0x73U != (0x7fU & vlSelf->top__DOT__IFU__DOT__inst_reg)) 
                   | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_14))))
          ? 0U : (3U & ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_15)
                         ? ((0x341U == vlSelf->top__DOT__IDU__DOT__csr_imm)
                             ? 0U : ((0x342U == vlSelf->top__DOT__IDU__DOT__csr_imm)
                                      ? 1U : ((0x300U 
                                               == vlSelf->top__DOT__IDU__DOT__csr_imm)
                                               ? 2U
                                               : (- (IData)(
                                                            (0x305U 
                                                             == vlSelf->top__DOT__IDU__DOT__csr_imm))))))
                         : (- (IData)((IData)((0U == 
                                               (0x1f07000U 
                                                & vlSelf->top__DOT__IFU__DOT__inst_reg))))))));
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
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
    VlTriggerVec<2> __VpreTriggered;
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
                    VL_FATAL_MT("build/top.sv", 1337, "", "Active region did not converge.");
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
                VL_FATAL_MT("build/top.sv", 1337, "", "NBA region did not converge.");
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

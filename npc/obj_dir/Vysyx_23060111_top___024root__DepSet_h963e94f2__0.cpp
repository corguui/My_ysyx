// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060111_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060111_top___024root.h"

void Vysyx_23060111_top___024root___act_sequent__TOP__0(Vysyx_23060111_top___024root* vlSelf);
void Vysyx_23060111_top___024root___act_sequent__TOP__1(Vysyx_23060111_top___024root* vlSelf);

void Vysyx_23060111_top___024root___eval_act(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        Vysyx_23060111_top___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        Vysyx_23060111_top___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vysyx_23060111_top___024root___nba_sequent__TOP__2(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    if ((0x40U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                vlSelf->ysyx_23060111_top__DOT__dnpc 
                    = vlSelf->ysyx_23060111_top__DOT__snpc;
                vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
            } else if ((8U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                vlSelf->ysyx_23060111_top__DOT__wen 
                    = (IData)((7U == (7U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))));
                if ((4U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                            vlSelf->ysyx_23060111_top__DOT__dnpc 
                                = (vlSelf->pc + vlSelf->ysyx_23060111_top__DOT__imm);
                            vlSelf->ysyx_23060111_top__DOT__wdata 
                                = vlSelf->ysyx_23060111_top__DOT__snpc;
                        } else {
                            vlSelf->ysyx_23060111_top__DOT__dnpc 
                                = vlSelf->ysyx_23060111_top__DOT__snpc;
                            vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
                        }
                    } else {
                        vlSelf->ysyx_23060111_top__DOT__dnpc 
                            = vlSelf->ysyx_23060111_top__DOT__snpc;
                        vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
                    }
                } else {
                    vlSelf->ysyx_23060111_top__DOT__dnpc 
                        = vlSelf->ysyx_23060111_top__DOT__snpc;
                    vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
                }
            } else if ((4U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                vlSelf->ysyx_23060111_top__DOT__wen 
                    = (IData)((3U == (3U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))));
                if ((2U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                        vlSelf->ysyx_23060111_top__DOT__dnpc 
                            = (vlSelf->ysyx_23060111_top__DOT__imm 
                               + vlSelf->ysyx_23060111_top__DOT__rout1);
                        vlSelf->ysyx_23060111_top__DOT__wdata 
                            = vlSelf->ysyx_23060111_top__DOT__snpc;
                    } else {
                        vlSelf->ysyx_23060111_top__DOT__dnpc 
                            = vlSelf->ysyx_23060111_top__DOT__snpc;
                        vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
                    }
                } else {
                    vlSelf->ysyx_23060111_top__DOT__dnpc 
                        = vlSelf->ysyx_23060111_top__DOT__snpc;
                    vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
                }
            } else if ((2U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                    vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                    if ((1U & (~ ((IData)(vlSelf->ysyx_23060111_top__DOT__funct3) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))) {
                            vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                            vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
                        }
                    }
                    vlSelf->ysyx_23060111_top__DOT__dnpc 
                        = ((4U & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                            ? ((2U & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                ? ((1U & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                    ? ((IData)(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bgeu)
                                        ? (vlSelf->pc 
                                           + vlSelf->ysyx_23060111_top__DOT__imm)
                                        : vlSelf->ysyx_23060111_top__DOT__snpc)
                                    : ((IData)(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bgeu)
                                        ? vlSelf->ysyx_23060111_top__DOT__snpc
                                        : (vlSelf->pc 
                                           + vlSelf->ysyx_23060111_top__DOT__imm)))
                                : ((1U & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                    ? ((IData)(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bge)
                                        ? (vlSelf->pc 
                                           + vlSelf->ysyx_23060111_top__DOT__imm)
                                        : vlSelf->ysyx_23060111_top__DOT__snpc)
                                    : ((IData)(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bge)
                                        ? vlSelf->ysyx_23060111_top__DOT__snpc
                                        : (vlSelf->pc 
                                           + vlSelf->ysyx_23060111_top__DOT__imm))))
                            : ((2U & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                ? vlSelf->ysyx_23060111_top__DOT__snpc
                                : ((1U & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                    ? ((IData)(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_beq)
                                        ? vlSelf->ysyx_23060111_top__DOT__snpc
                                        : (vlSelf->pc 
                                           + vlSelf->ysyx_23060111_top__DOT__imm))
                                    : ((IData)(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_beq)
                                        ? (vlSelf->pc 
                                           + vlSelf->ysyx_23060111_top__DOT__imm)
                                        : vlSelf->ysyx_23060111_top__DOT__snpc))));
                } else {
                    vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                    vlSelf->ysyx_23060111_top__DOT__dnpc 
                        = vlSelf->ysyx_23060111_top__DOT__snpc;
                    vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
                }
            } else {
                vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                vlSelf->ysyx_23060111_top__DOT__dnpc 
                    = vlSelf->ysyx_23060111_top__DOT__snpc;
                vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
            }
        } else {
            vlSelf->ysyx_23060111_top__DOT__wen = 0U;
            vlSelf->ysyx_23060111_top__DOT__dnpc = vlSelf->ysyx_23060111_top__DOT__snpc;
            vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
        }
    } else {
        if ((0x20U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                vlSelf->ysyx_23060111_top__DOT__wen 
                    = (1U & ((~ ((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                                 >> 3U)) & ((4U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                                             ? (((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                                             : (((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode)))));
                vlSelf->ysyx_23060111_top__DOT__wdata 
                    = ((8U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                        ? 0U : ((4U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                                 ? ((2U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                                     ? ((1U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                                         ? vlSelf->ysyx_23060111_top__DOT__imm
                                         : 0U) : 0U)
                                 : ((2U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                                     ? ((1U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                                         ? ((4U & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                             ? ((2U 
                                                 & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                  ? 
                                                 (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                  & vlSelf->ysyx_23060111_top__DOT__rout2)
                                                  : 
                                                 (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                  | vlSelf->ysyx_23060111_top__DOT__rout2))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                  ? 
                                                 ((0x20U 
                                                   & (IData)(vlSelf->ysyx_23060111_top__DOT__funct7))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_23060111_top__DOT__rout1, 
                                                                 (0x1fU 
                                                                  & vlSelf->ysyx_23060111_top__DOT__rout2))
                                                   : 
                                                  (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->ysyx_23060111_top__DOT__rout2)))
                                                  : 
                                                 (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                  ^ vlSelf->ysyx_23060111_top__DOT__rout2)))
                                             : ((2U 
                                                 & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                  ? 
                                                 ((vlSelf->ysyx_23060111_top__DOT__rout1 
                                                   < vlSelf->ysyx_23060111_top__DOT__rout2)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (VL_LTS_III(32, vlSelf->ysyx_23060111_top__DOT__rout1, vlSelf->ysyx_23060111_top__DOT__rout2)
                                                   ? 1U
                                                   : 0U))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                  ? 
                                                 (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->ysyx_23060111_top__DOT__rout2))
                                                  : 
                                                 ((0x20U 
                                                   & (IData)(vlSelf->ysyx_23060111_top__DOT__funct7))
                                                   ? 
                                                  (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                   - vlSelf->ysyx_23060111_top__DOT__rout2)
                                                   : 
                                                  (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                   + vlSelf->ysyx_23060111_top__DOT__rout2)))))
                                         : 0U) : 0U)));
            } else if ((8U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
            } else if ((4U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
            } else if ((2U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                    vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                    if ((0U != (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))) {
                        if ((1U != (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))) {
                            if ((2U != (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))) {
                                vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                                vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
                            }
                        }
                    }
                } else {
                    vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                    vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
                }
            } else {
                vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
            }
        } else if ((0x10U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
            vlSelf->ysyx_23060111_top__DOT__wen = (1U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                                                        >> 3U)) 
                                                      & ((4U 
                                                          & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                                                          ? 
                                                         (((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                                                           >> 1U) 
                                                          & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                                                          : 
                                                         (((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                                                           >> 1U) 
                                                          & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode)))));
            vlSelf->ysyx_23060111_top__DOT__wdata = 
                ((8U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                  ? 0U : ((4U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                           ? ((2U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                               ? ((1U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                                   ? (vlSelf->pc + vlSelf->ysyx_23060111_top__DOT__imm)
                                   : 0U) : 0U) : ((2U 
                                                   & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                       ? 
                                                      (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                       & vlSelf->ysyx_23060111_top__DOT__imm)
                                                       : 
                                                      (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                       | vlSelf->ysyx_23060111_top__DOT__imm))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                       ? 
                                                      ((0x20U 
                                                        & (IData)(vlSelf->ysyx_23060111_top__DOT__funct7))
                                                        ? 
                                                       VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_23060111_top__DOT__rout1, 
                                                                      (0x1fU 
                                                                       & vlSelf->ysyx_23060111_top__DOT__imm))
                                                        : 
                                                       (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->ysyx_23060111_top__DOT__imm)))
                                                       : 
                                                      (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                       ^ vlSelf->ysyx_23060111_top__DOT__imm)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                       ? 
                                                      ((vlSelf->ysyx_23060111_top__DOT__rout1 
                                                        < vlSelf->ysyx_23060111_top__DOT__imm)
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      (VL_LTS_III(32, vlSelf->ysyx_23060111_top__DOT__rout1, vlSelf->ysyx_23060111_top__DOT__imm)
                                                        ? 1U
                                                        : 0U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                       ? 
                                                      (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                       << 
                                                       (0x1fU 
                                                        & vlSelf->ysyx_23060111_top__DOT__imm))
                                                       : 
                                                      (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                       + vlSelf->ysyx_23060111_top__DOT__imm))))
                                                    : 0U)
                                                   : 0U)));
        } else {
            vlSelf->ysyx_23060111_top__DOT__wen = (1U 
                                                   & (IData)(
                                                             ((3U 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) 
                                                              & ((4U 
                                                                  & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                                  ? 
                                                                 (~ 
                                                                  ((IData)(vlSelf->ysyx_23060111_top__DOT__funct3) 
                                                                   >> 1U))
                                                                  : (IData)(
                                                                            (3U 
                                                                             != 
                                                                             (3U 
                                                                              & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))))))));
            vlSelf->ysyx_23060111_top__DOT__wdata = 
                ((8U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                  ? 0U : ((4U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                           ? 0U : ((2U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                                    ? ((1U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))
                                        ? ((4U & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                            ? ((2U 
                                                & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelf->ysyx_23060111_top__DOT__m_rdata)
                                                    : 
                                                   (0xffU 
                                                    & vlSelf->ysyx_23060111_top__DOT__m_rdata)))
                                            : ((2U 
                                                & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                    ? 0U
                                                    : vlSelf->ysyx_23060111_top__DOT__m_rdata)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_23060111_top__DOT__m_rdata 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->ysyx_23060111_top__DOT__m_rdata))
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_23060111_top__DOT__m_rdata 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlSelf->ysyx_23060111_top__DOT__m_rdata)))))
                                        : 0U) : 0U)));
        }
        vlSelf->ysyx_23060111_top__DOT__dnpc = vlSelf->ysyx_23060111_top__DOT__snpc;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_23060111_top__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->ysyx_23060111_top__DOT__opcode))) {
                                if ((0U == (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))) {
                                    vlSelf->ysyx_23060111_top__DOT__m_wmask = 1U;
                                    vlSelf->ysyx_23060111_top__DOT__m_wdata 
                                        = vlSelf->ysyx_23060111_top__DOT__rout2;
                                    vlSelf->ysyx_23060111_top__DOT__m_waddr 
                                        = (vlSelf->ysyx_23060111_top__DOT__rout1 
                                           + vlSelf->ysyx_23060111_top__DOT__imm);
                                } else if ((1U == (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))) {
                                    vlSelf->ysyx_23060111_top__DOT__m_wmask = 2U;
                                    vlSelf->ysyx_23060111_top__DOT__m_wdata 
                                        = vlSelf->ysyx_23060111_top__DOT__rout2;
                                    vlSelf->ysyx_23060111_top__DOT__m_waddr 
                                        = (vlSelf->ysyx_23060111_top__DOT__rout1 
                                           + vlSelf->ysyx_23060111_top__DOT__imm);
                                } else if ((2U == (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))) {
                                    vlSelf->ysyx_23060111_top__DOT__m_wmask = 4U;
                                    vlSelf->ysyx_23060111_top__DOT__m_wdata 
                                        = vlSelf->ysyx_23060111_top__DOT__rout2;
                                    vlSelf->ysyx_23060111_top__DOT__m_waddr 
                                        = (vlSelf->ysyx_23060111_top__DOT__rout1 
                                           + vlSelf->ysyx_23060111_top__DOT__imm);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_23060111_top__DOT__m_wen = (IData)(
                                                    ((0x23U 
                                                      == (IData)(vlSelf->ysyx_23060111_top__DOT__opcode)) 
                                                     & ((0U 
                                                         == (IData)(vlSelf->ysyx_23060111_top__DOT__funct3)) 
                                                        | ((1U 
                                                            == (IData)(vlSelf->ysyx_23060111_top__DOT__funct3)) 
                                                           | (2U 
                                                              == (IData)(vlSelf->ysyx_23060111_top__DOT__funct3))))));
}

VL_INLINE_OPT void Vysyx_23060111_top___024root___nba_sequent__TOP__3(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->ysyx_23060111_top__DOT__rout2 = vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf
        [(0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                   >> 0x14U))];
    vlSelf->ysyx_23060111_top__DOT__rout1 = vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf
        [(0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                   >> 0xfU))];
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_beq 
        = (vlSelf->ysyx_23060111_top__DOT__rout1 == vlSelf->ysyx_23060111_top__DOT__rout2);
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bge 
        = VL_GTES_III(32, vlSelf->ysyx_23060111_top__DOT__rout1, vlSelf->ysyx_23060111_top__DOT__rout2);
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bgeu 
        = (vlSelf->ysyx_23060111_top__DOT__rout1 >= vlSelf->ysyx_23060111_top__DOT__rout2);
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : vlSelf->ysyx_23060111_top__DOT__dnpc);
    vlSelf->ysyx_23060111_top__DOT__snpc = ((IData)(4U) 
                                            + vlSelf->pc);
}

void Vysyx_23060111_top___024root___nba_sequent__TOP__0(Vysyx_23060111_top___024root* vlSelf);
void Vysyx_23060111_top___024root___nba_sequent__TOP__1(Vysyx_23060111_top___024root* vlSelf);

void Vysyx_23060111_top___024root___eval_nba(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vysyx_23060111_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_23060111_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_23060111_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_23060111_top___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

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
    VlTriggerVec<4> __VpreTriggered;
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
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__VactTriggered.at(1U) = (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                      != vlSelf->__Vtrigrprev__TOP__top__DOT__IFU__DOT___vlg_pc_read_inst);
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->top__DOT__EXU__DOT__mem__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__EXU__DOT__mem__DOT__clk)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__top__DOT__IFU__DOT___vlg_pc_read_inst 
        = vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst;
    vlSelf->__Vtrigrprev__TOP__top__DOT__EXU__DOT__mem__DOT__clk 
        = vlSelf->top__DOT__EXU__DOT__mem__DOT__clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_vlg_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
         & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_4)) 
            & ((4U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
               & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_wen))))) {
        Vtop___024unit____Vdpiimwrap_vlg_pmem_write_TOP____024unit(
                                                                   ((1U 
                                                                     & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                                        | ((4U 
                                                                            != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_4))))
                                                                     ? 0U
                                                                     : vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp), 
                                                                   ((1U 
                                                                     & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                                        | ((4U 
                                                                            != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_4))))
                                                                     ? 0U
                                                                     : vlSelf->top__DOT__Reg__DOT__casez_tmp_0), 
                                                                   ((1U 
                                                                     & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                                        | ((4U 
                                                                            != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_4))))
                                                                     ? 0U
                                                                     : vlSelf->top__DOT___IDU_io_out2exu_bits_m_wmask));
    }
}

void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ inst);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit(vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst);
}

void Vtop___024unit____Vdpiimwrap_vlg_pc_read_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ &vlg_pc_read__Vfuncrtn);
void Vtop___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(IData/*31:0*/ m_raddr, IData/*31:0*/ rmask, IData/*31:0*/ &vlg_pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__EXU__DOT__m2IDUstate = vlSelf->__Vdly__top__DOT__EXU__DOT__m2IDUstate;
    Vtop___024unit____Vdpiimwrap_vlg_pc_read_TOP____024unit(vlSelf->io_pc, vlSelf->__Vfunc_vlg_pc_read__0__Vfuncout);
    vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst = vlSelf->__Vfunc_vlg_pc_read__0__Vfuncout;
    vlSelf->top__DOT__IDU__DOT___GEN_14 = ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                                           | ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                                              | (0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))));
    if ((0x4000U & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) {
        if ((0x2000U & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) {
            if ((0x1000U & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) {
                vlSelf->top__DOT__IDU__DOT__casez_tmp = 2U;
                vlSelf->top__DOT__IDU__DOT__casez_tmp_0 
                    = (0xbU | ((7U != (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                             >> 0xcU))) 
                               << 2U));
            } else {
                vlSelf->top__DOT__IDU__DOT__casez_tmp = 3U;
                vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xfU;
            }
        } else if ((0x1000U & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) {
            vlSelf->top__DOT__IDU__DOT__casez_tmp = 
                (6U | (0U != (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                              >> 0x19U)));
            vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xcU;
        } else {
            vlSelf->top__DOT__IDU__DOT__casez_tmp = 4U;
            vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xeU;
        }
    } else if ((0x2000U & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = ((0x1000U 
                                                  & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                  ? 9U
                                                  : 8U);
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = (0xbU 
                                                   | ((7U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                           >> 0xcU))) 
                                                      << 2U));
    } else if ((0x1000U & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = 5U;
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xdU;
    } else {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = 0xfU;
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xaU;
    }
    vlSelf->top__DOT__Reg__DOT__casez_tmp = ((0x80000U 
                                              & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                              ? ((0x40000U 
                                                  & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_31
                                                     : vlSelf->top__DOT__Reg__DOT__reg_30)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_29
                                                     : vlSelf->top__DOT__Reg__DOT__reg_28))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_27
                                                     : vlSelf->top__DOT__Reg__DOT__reg_26)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_25
                                                     : vlSelf->top__DOT__Reg__DOT__reg_24)))
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_23
                                                     : vlSelf->top__DOT__Reg__DOT__reg_22)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_21
                                                     : vlSelf->top__DOT__Reg__DOT__reg_20))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_19
                                                     : vlSelf->top__DOT__Reg__DOT__reg_18)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_17
                                                     : vlSelf->top__DOT__Reg__DOT__reg_16))))
                                              : ((0x40000U 
                                                  & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                  ? 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_15
                                                     : vlSelf->top__DOT__Reg__DOT__reg_14)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_13
                                                     : vlSelf->top__DOT__Reg__DOT__reg_12))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_11
                                                     : vlSelf->top__DOT__Reg__DOT__reg_10)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_9
                                                     : vlSelf->top__DOT__Reg__DOT__reg_8)))
                                                  : 
                                                 ((0x20000U 
                                                   & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                   ? 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_7
                                                     : vlSelf->top__DOT__Reg__DOT__reg_6)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_5
                                                     : vlSelf->top__DOT__Reg__DOT__reg_4))
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_3
                                                     : vlSelf->top__DOT__Reg__DOT__reg_2)
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_1
                                                     : vlSelf->top__DOT__Reg__DOT__reg_0)))));
    vlSelf->top__DOT__IDU__DOT___GEN_5 = ((0x33U == 
                                           (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                                          | (0x13U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)));
    vlSelf->top__DOT__Reg__DOT__casez_tmp_0 = ((0x1000000U 
                                                & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                ? (
                                                   (0x800000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_31
                                                       : vlSelf->top__DOT__Reg__DOT__reg_30)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_29
                                                       : vlSelf->top__DOT__Reg__DOT__reg_28))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_27
                                                       : vlSelf->top__DOT__Reg__DOT__reg_26)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_25
                                                       : vlSelf->top__DOT__Reg__DOT__reg_24)))
                                                    : 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_23
                                                       : vlSelf->top__DOT__Reg__DOT__reg_22)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_21
                                                       : vlSelf->top__DOT__Reg__DOT__reg_20))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_19
                                                       : vlSelf->top__DOT__Reg__DOT__reg_18)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_17
                                                       : vlSelf->top__DOT__Reg__DOT__reg_16))))
                                                : (
                                                   (0x800000U 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                    ? 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_15
                                                       : vlSelf->top__DOT__Reg__DOT__reg_14)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_13
                                                       : vlSelf->top__DOT__Reg__DOT__reg_12))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_11
                                                       : vlSelf->top__DOT__Reg__DOT__reg_10)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_9
                                                       : vlSelf->top__DOT__Reg__DOT__reg_8)))
                                                    : 
                                                   ((0x400000U 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                     ? 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_7
                                                       : vlSelf->top__DOT__Reg__DOT__reg_6)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_5
                                                       : vlSelf->top__DOT__Reg__DOT__reg_4))
                                                     : 
                                                    ((0x200000U 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                      ? 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_3
                                                       : vlSelf->top__DOT__Reg__DOT__reg_2)
                                                      : 
                                                     ((0x100000U 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_1
                                                       : vlSelf->top__DOT__Reg__DOT__reg_0)))));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0 
        = (((- (IData)((vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                >> 0x14U));
    if (vlSelf->top__DOT__IDU__DOT__state) {
        if ((0x33U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))) {
            vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type = 1U;
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = ((0U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                 >> 0xcU))) ? (0U != 
                                               (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                >> 0x19U))
                    : (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp));
        } else if ((0x13U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))) {
            vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type = 2U;
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = ((0U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                 >> 0xcU))) ? 0U : (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp));
        } else {
            vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type 
                = ((3U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                    ? 3U : ((0x23U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                             ? 4U : ((0x63U == (0x7fU 
                                                & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                      ? 5U : ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                               ? 6U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                   ? 7U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                    ? 8U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                     ? 9U
                                                     : 0U)))))));
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = (((3U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                    | ((0x63U != (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                       | (0x23U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))))
                    ? 0xfU : (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp_0));
        }
    } else {
        vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type = 0U;
        vlSelf->top__DOT__IDU__DOT__exu_data_alu_op = 0xfU;
    }
    vlSelf->__VdfgTmp_h7344b924__0 = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_14) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)));
    vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren 
        = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
           & ((~ (IData)(vlSelf->top__DOT__IDU__DOT___GEN_5)) 
              & (3U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))));
    vlSelf->top__DOT__IDU__DOT___GEN_7 = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_5) 
                                          | (3U == 
                                             (0x7fU 
                                              & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)));
    vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask 
        = ((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                  | ((3U != (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                     | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_5))))
            ? 0U : ((0U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                  >> 0xcU))) ? 1U : 
                    ((1U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                   >> 0xcU))) ? 2U : 
                     ((2U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                    >> 0xcU))) ? 4U
                       : ((4U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                        >> 0xcU))) ? 1U
                           : ((5U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                            >> 0xcU))) 
                              << 1U))))));
    vlSelf->top__DOT___IDU_io_out2exu_bits_imm = ((1U 
                                                   & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                                                      | (0x33U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))))
                                                   ? 0U
                                                   : 
                                                  ((0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                    ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                     ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0xfe0U 
                                                          & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                               >> 7U))))
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                   >> 7U)))))
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                        ? 
                                                       (0xfffff000U 
                                                        & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)
                                                         : 
                                                        ((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                          ? 
                                                         ((0x7ff00000U 
                                                           & ((- (IData)(
                                                                         (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                          >> 0x1fU))) 
                                                              << 0x14U)) 
                                                          | ((0xff000U 
                                                              & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst) 
                                                             | ((0x800U 
                                                                 & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                    >> 9U)) 
                                                                | (0x7feU 
                                                                   & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                      >> 0x14U)))))
                                                          : 
                                                         ((0x67U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))
                                                           ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0
                                                           : 0U)))))))));
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0 
        = ((6U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
           | (7U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_14 = ((8U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (9U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_8 = ((4U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                          | (5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_9 = ((2U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                          | ((3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                             | (4U 
                                                == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))));
    vlSelf->top__DOT__EXU__DOT___GEN_2 = ((1U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                          | (2U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT___IDU_io_out2exu_bits_mem_wen 
        = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
           & ((~ (IData)(vlSelf->top__DOT__IDU__DOT___GEN_7)) 
              & (0x23U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst))));
    vlSelf->top__DOT___IDU_io_out2exu_bits_m_wmask 
        = ((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                  | ((0x23U != (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                     | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_7))))
            ? 0U : ((0U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                  >> 0xcU))) ? 1U : 
                    ((1U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                   >> 0xcU))) ? 2U : 
                     ((2U == (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                    >> 0xcU))) << 2U))));
    vlSelf->io_inv_flag = ((~ ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_7) 
                               | ((0x23U == (0x7fU 
                                             & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                                  | ((0x63U == (0x7fU 
                                                & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                                     | (IData)(vlSelf->__VdfgTmp_h7344b924__0))))) 
                           & (IData)(vlSelf->top__DOT__IDU__DOT__state));
    vlSelf->top__DOT___IDU_io_out2exu_bits_reg_wen 
        = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
           & ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_7) 
              | ((~ ((0x23U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)) 
                     | (0x63U == (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)))) 
                 & (IData)(vlSelf->__VdfgTmp_h7344b924__0))));
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h010edc33__0 
        = (vlSelf->top__DOT___IDU_io_out2exu_bits_imm 
           + vlSelf->top__DOT__PC__DOT__io_pc_REG);
    vlSelf->__VdfgTmp_heeb5510b__0 = ((1U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                       ? vlSelf->top__DOT__Reg__DOT__casez_tmp_0
                                       : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_9)
                                           ? vlSelf->top__DOT___IDU_io_out2exu_bits_imm
                                           : ((5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                               ? vlSelf->top__DOT__Reg__DOT__casez_tmp_0
                                               : 0U)));
    vlSelf->top__DOT__EXU__DOT___GEN_3 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                | ((3U 
                                                    != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                   | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_2))));
    vlSelf->top__DOT__EXU__DOT___GEN_4 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_2) 
                                          | (3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->__VdfgTmp_ha44a2961__0 = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                      & (IData)(vlSelf->top__DOT__EXU__DOT___GEN_4));
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
        = (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
            & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_4) 
               | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_8)))
            ? vlSelf->top__DOT__Reg__DOT__casez_tmp
            : 0U);
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op 
        = (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
            & ((~ ((5U != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                   | (4U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)))) 
               | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_4)))
            ? (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op)
            : 0xfU);
    vlSelf->top__DOT___EXU_io_reg_waddr = ((IData)(vlSelf->__VdfgTmp_ha44a2961__0)
                                            ? (0x1fU 
                                               & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                  >> 7U))
                                            : 0U);
    vlSelf->top__DOT__Reg__DOT___GEN = (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                         & (((IData)(vlSelf->top__DOT__EXU__DOT___GEN_4) 
                                             | ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_8)) 
                                                & ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0) 
                                                   | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_14)))) 
                                            & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_reg_wen))) 
                                        & ((IData)(vlSelf->__VdfgTmp_ha44a2961__0) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                  >> 7U)))));
    if (vlSelf->top__DOT__EXU__DOT__m2IDUstate) {
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 
            = vlSelf->__VdfgTmp_heeb5510b__0;
        vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 
            = (0x1fU & vlSelf->__VdfgTmp_heeb5510b__0);
    } else {
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 = 0U;
        vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 = 0U;
    }
    vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp 
        = ((8U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
            ? ((4U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                ? ((2U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                    ? ((1U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                        ? (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           < vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                        : VL_LTS_III(32, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2))
                    : ((1U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                        ? (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           != vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                        : VL_GTES_III(32, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)))
                : ((2U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                    ? ((1U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                        ? (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           >= vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                        : (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           == vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2))
                    : ((1U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                        ? (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           < vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                        : VL_LTS_III(32, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2))))
            : ((4U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                ? ((2U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                    ? ((1U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1, 
                                         (0x1fU & vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2))
                        : (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           >> (0x1fU & vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)))
                    : ((1U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                        ? (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           << (IData)(vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0))
                        : (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           ^ vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)))
                : ((2U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                    ? ((1U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                        ? (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           | vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                        : (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           & vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2))
                    : ((1U & (IData)(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op))
                        ? (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           - vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)
                        : (vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
                           + vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2)))));
    vlSelf->top__DOT___EXU_io_dnpc = ((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                             | ((1U 
                                                 == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_9))))
                                       ? ((IData)(4U) 
                                          + vlSelf->top__DOT__PC__DOT__io_pc_REG)
                                       : ((5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                           ? ((1U == vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp)
                                               ? vlSelf->top__DOT__EXU__DOT____VdfgTmp_h010edc33__0
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__PC__DOT__io_pc_REG))
                                           : ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0)
                                               ? ((IData)(4U) 
                                                  + vlSelf->top__DOT__PC__DOT__io_pc_REG)
                                               : ((8U 
                                                   == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                   ? vlSelf->top__DOT__EXU__DOT____VdfgTmp_h010edc33__0
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                    ? 
                                                   (vlSelf->top__DOT___IDU_io_out2exu_bits_imm 
                                                    + vlSelf->top__DOT__Reg__DOT__casez_tmp)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__PC__DOT__io_pc_REG))))));
    if (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
         & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_2)) 
            & ((3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
               & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren))))) {
        Vtop___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(
                                                                  ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                                                                    ? 0U
                                                                    : vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp), 
                                                                  ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                                                                    ? 0U
                                                                    : vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask), vlSelf->__Vfunc_vlg_pmem_read__2__Vfuncout);
        vlSelf->top__DOT__EXU__DOT___mem_m_rdata = vlSelf->__Vfunc_vlg_pmem_read__2__Vfuncout;
    } else {
        vlSelf->top__DOT__EXU__DOT___mem_m_rdata = 0U;
    }
    vlSelf->top__DOT___EXU_io_reg_wdata = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)
                                            ? ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_2)
                                                ? vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                    ? 
                                                   ((1U 
                                                     == vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask)
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__EXU__DOT___mem_m_rdata 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelf->top__DOT__EXU__DOT___mem_m_rdata))
                                                     : 
                                                    ((2U 
                                                      == vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask)
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__EXU__DOT___mem_m_rdata 
                                                                      >> 0xfU)))) 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & vlSelf->top__DOT__EXU__DOT___mem_m_rdata))
                                                      : vlSelf->top__DOT__EXU__DOT___mem_m_rdata))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_8)
                                                     ? 0U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                      ? vlSelf->top__DOT___IDU_io_out2exu_bits_imm
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                       ? vlSelf->top__DOT__EXU__DOT____VdfgTmp_h010edc33__0
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_14)
                                                        ? 
                                                       ((IData)(4U) 
                                                        + vlSelf->top__DOT__PC__DOT__io_pc_REG)
                                                        : 0U))))))
                                            : 0U);
}

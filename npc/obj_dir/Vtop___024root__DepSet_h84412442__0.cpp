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
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->top__DOT__IFU__DOT__vlg_pc_read__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__IFU__DOT__vlg_pc_read__DOT__clk)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__VactTriggered.at(2U) = (vlSelf->top__DOT__IFU__DOT__out_data_inst 
                                      != vlSelf->__Vtrigrprev__TOP__top__DOT__IFU__DOT__out_data_inst);
    vlSelf->__Vtrigrprev__TOP__top__DOT__IFU__DOT__vlg_pc_read__DOT__clk 
        = vlSelf->top__DOT__IFU__DOT__vlg_pc_read__DOT__clk;
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__top__DOT__IFU__DOT__out_data_inst 
        = vlSelf->top__DOT__IFU__DOT__out_data_inst;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_vlg_pc_read_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ &vlg_pc_read__Vfuncrtn);
void Vtop___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(IData/*31:0*/ m_raddr, IData/*31:0*/ rmask, IData/*31:0*/ &vlg_pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_vlg_pc_read__0__Vfuncout;
    __Vfunc_vlg_pc_read__0__Vfuncout = 0;
    // Body
    if (vlSelf->top__DOT__IFU__DOT__m2EXUstate) {
        Vtop___024unit____Vdpiimwrap_vlg_pc_read_TOP____024unit(vlSelf->io_pc, __Vfunc_vlg_pc_read__0__Vfuncout);
        vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
            = __Vfunc_vlg_pc_read__0__Vfuncout;
    } else {
        vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst = 0U;
    }
    if (vlSelf->top__DOT__IFU__DOT__m2EXUstate) {
        vlSelf->top__DOT__IFU__DOT__out_data_inst = vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst;
        vlSelf->top__DOT___IDU_io_reg_data_raddr_1 
            = (0x1fU & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                        >> 0xfU));
        vlSelf->top__DOT___IDU_io_out2exu_bits_reg_waddr 
            = (0x1fU & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                        >> 7U));
        vlSelf->top__DOT___IDU_io_reg_data_raddr_2 
            = (0x1fU & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                        >> 0x14U));
        vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0 
            = (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                     >> 0xcU));
        vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0 
            = (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst);
    } else {
        vlSelf->top__DOT__IFU__DOT__out_data_inst = 0U;
        vlSelf->top__DOT___IDU_io_reg_data_raddr_1 = 0U;
        vlSelf->top__DOT___IDU_io_out2exu_bits_reg_waddr = 0U;
        vlSelf->top__DOT___IDU_io_reg_data_raddr_2 = 0U;
        vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0 = 0U;
        vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0 = 0U;
    }
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_h60c96407__0 
        = (((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
             ? (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                >> 0xcU) : 0U) << 0xcU);
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf12b015b__0 
        = ((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
           & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
              >> 0x1fU));
    if ((0x4000U & vlSelf->top__DOT__IFU__DOT__out_data_inst)) {
        if ((0x2000U & vlSelf->top__DOT__IFU__DOT__out_data_inst)) {
            if ((0x1000U & vlSelf->top__DOT__IFU__DOT__out_data_inst)) {
                vlSelf->top__DOT__IDU__DOT__casez_tmp = 2U;
                vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xbU;
            } else {
                vlSelf->top__DOT__IDU__DOT__casez_tmp = 3U;
                vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 9U;
            }
        } else if ((0x1000U & vlSelf->top__DOT__IFU__DOT__out_data_inst)) {
            vlSelf->top__DOT__IDU__DOT__casez_tmp = 
                (6U | (0U != (vlSelf->top__DOT__IFU__DOT__out_data_inst 
                              >> 0x19U)));
            vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xcU;
        } else {
            vlSelf->top__DOT__IDU__DOT__casez_tmp = 4U;
            vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 8U;
        }
    } else if ((0x2000U & vlSelf->top__DOT__IFU__DOT__out_data_inst)) {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = ((0x1000U 
                                                  & vlSelf->top__DOT__IFU__DOT__out_data_inst)
                                                  ? 9U
                                                  : 8U);
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0x10U;
    } else if ((0x1000U & vlSelf->top__DOT__IFU__DOT__out_data_inst)) {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = 5U;
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xdU;
    } else {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = 0x10U;
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xaU;
    }
    vlSelf->top__DOT__Reg__DOT__casez_tmp = ((0x10U 
                                              & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                              ? ((8U 
                                                  & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_31
                                                     : vlSelf->top__DOT__Reg__DOT__reg_30)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_29
                                                     : vlSelf->top__DOT__Reg__DOT__reg_28))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_27
                                                     : vlSelf->top__DOT__Reg__DOT__reg_26)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_25
                                                     : vlSelf->top__DOT__Reg__DOT__reg_24)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_23
                                                     : vlSelf->top__DOT__Reg__DOT__reg_22)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_21
                                                     : vlSelf->top__DOT__Reg__DOT__reg_20))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_19
                                                     : vlSelf->top__DOT__Reg__DOT__reg_18)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_17
                                                     : vlSelf->top__DOT__Reg__DOT__reg_16))))
                                              : ((8U 
                                                  & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_15
                                                     : vlSelf->top__DOT__Reg__DOT__reg_14)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_13
                                                     : vlSelf->top__DOT__Reg__DOT__reg_12))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_11
                                                     : vlSelf->top__DOT__Reg__DOT__reg_10)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_9
                                                     : vlSelf->top__DOT__Reg__DOT__reg_8)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_7
                                                     : vlSelf->top__DOT__Reg__DOT__reg_6)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_5
                                                     : vlSelf->top__DOT__Reg__DOT__reg_4))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_3
                                                     : vlSelf->top__DOT__Reg__DOT__reg_2)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_1
                                                     : vlSelf->top__DOT__Reg__DOT__reg_0)))));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0 
        = (((- (IData)((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf12b015b__0))) 
            << 0xcU) | ((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
                         ? (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                            >> 0x14U) : 0U));
    vlSelf->top__DOT__Reg__DOT__casez_tmp_0 = ((0x10U 
                                                & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                ? (
                                                   (8U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_31
                                                       : vlSelf->top__DOT__Reg__DOT__reg_30)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_29
                                                       : vlSelf->top__DOT__Reg__DOT__reg_28))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_27
                                                       : vlSelf->top__DOT__Reg__DOT__reg_26)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_25
                                                       : vlSelf->top__DOT__Reg__DOT__reg_24)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_23
                                                       : vlSelf->top__DOT__Reg__DOT__reg_22)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_21
                                                       : vlSelf->top__DOT__Reg__DOT__reg_20))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_19
                                                       : vlSelf->top__DOT__Reg__DOT__reg_18)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_17
                                                       : vlSelf->top__DOT__Reg__DOT__reg_16))))
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_15
                                                       : vlSelf->top__DOT__Reg__DOT__reg_14)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_13
                                                       : vlSelf->top__DOT__Reg__DOT__reg_12))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_11
                                                       : vlSelf->top__DOT__Reg__DOT__reg_10)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_9
                                                       : vlSelf->top__DOT__Reg__DOT__reg_8)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_7
                                                       : vlSelf->top__DOT__Reg__DOT__reg_6)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_5
                                                       : vlSelf->top__DOT__Reg__DOT__reg_4))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_3
                                                       : vlSelf->top__DOT__Reg__DOT__reg_2)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_1
                                                       : vlSelf->top__DOT__Reg__DOT__reg_0)))));
    vlSelf->top__DOT__IDU__DOT___GEN_19 = ((1U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)) 
                                           | (2U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)));
    vlSelf->top__DOT__IDU__DOT___GEN_16 = ((0x17U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                           | ((0x6fU 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                              | (0x67U 
                                                 == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))));
    vlSelf->top__DOT__IDU__DOT___GEN_7 = ((0x33U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                          | (0x13U 
                                             == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)));
    vlSelf->__VdfgTmp_hd5680bdc__0 = (1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                                            | (0x33U 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))));
    if (vlSelf->top__DOT__IDU__DOT__state) {
        if ((0x33U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))) {
            vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type = 1U;
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = ((0U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                    ? ((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
                       & (0U != (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                 >> 0x19U))) : (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp));
        } else if ((0x13U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))) {
            vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type = 2U;
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = ((0U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                    ? 0U : (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp));
        } else {
            vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type 
                = ((3U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                    ? 3U : ((0x23U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                             ? 4U : ((0x63U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                      ? 5U : ((0x37U 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                               ? 6U
                                               : ((0x17U 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                   ? 7U
                                                   : 
                                                  ((0x6fU 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                    ? 8U
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                     ? 9U
                                                     : 
                                                    ((0x73U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                      ? 
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                                                       ? 0xaU
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                                                        ? 0xbU
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                                                         ? 
                                                        (0xcU 
                                                         | (0U 
                                                            != (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2)))
                                                         : 0U)))
                                                      : 0U))))))));
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = (((3U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                    | (0x23U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)))
                    ? 0U : ((0x63U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                             ? (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp_0)
                             : ((0x37U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                 ? 0x10U : ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_16)
                                             ? 0U : 
                                            (((0x73U 
                                               != (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                              | ((2U 
                                                  != (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)) 
                                                 | (1U 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))))
                                              ? 0x10U
                                              : 3U)))));
        }
    } else {
        vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type = 0U;
        vlSelf->top__DOT__IDU__DOT__exu_data_alu_op = 0x10U;
    }
    vlSelf->__VdfgTmp_h2e2aee8c__0 = ((0x13U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                       ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0
                                       : ((3U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                           ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0
                                           : ((0x23U 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                               ? ((
                                                   (- (IData)((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf12b015b__0))) 
                                                   << 0xcU) 
                                                  | ((((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
                                                        ? 
                                                       (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                        >> 0x19U)
                                                        : 0U) 
                                                      << 5U) 
                                                     | (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_reg_waddr)))
                                               : ((0x63U 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                   ? 
                                                  (((- (IData)((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf12b015b__0))) 
                                                    << 0xcU) 
                                                   | ((0xfffff800U 
                                                       & (((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
                                                           << 0xbU) 
                                                          & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                             << 4U))) 
                                                      | ((((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
                                                            ? 
                                                           (0x3fU 
                                                            & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                               >> 0x19U))
                                                            : 0U) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
                                                              ? 
                                                             (0xfU 
                                                              & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                 >> 8U))
                                                              : 0U) 
                                                            << 1U))))
                                                   : 
                                                  ((0x37U 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                    ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_h60c96407__0
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                     ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_h60c96407__0
                                                     : 
                                                    ((0x6fU 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                      ? 
                                                     (((- (IData)((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf12b015b__0))) 
                                                       << 0x14U) 
                                                      | ((((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
                                                            ? 
                                                           (0xffU 
                                                            & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                               >> 0xcU))
                                                            : 0U) 
                                                          << 0xcU) 
                                                         | ((0x7ff800U 
                                                             & (((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
                                                                 << 0xbU) 
                                                                & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                   >> 9U))) 
                                                            | (((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
                                                                 ? 
                                                                (0x3ffU 
                                                                 & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                    >> 0x15U))
                                                                 : 0U) 
                                                               << 1U))))
                                                      : 
                                                     ((0x67U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                       ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0
                                                       : 
                                                      ((0x73U 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                        ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0
                                                        : 0U)))))))));
    vlSelf->top__DOT__IDU__DOT___GEN_17 = ((0x37U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                           | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_16));
    vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask 
        = ((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                  | ((3U != (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                     | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_7))))
            ? 0U : ((0U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                     ? 1U : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                              ? 2U : ((2U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                                       ? 4U : ((4U 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                                                ? 1U
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)) 
                                                   << 1U))))));
    vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren 
        = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
           & ((~ (IData)(vlSelf->top__DOT__IDU__DOT___GEN_7)) 
              & (3U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))));
    vlSelf->top__DOT__IDU__DOT___GEN_9 = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_7) 
                                          | (3U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)));
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0 
        = ((0xcU == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
           | (0xdU == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0 
        = ((6U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
           | (7U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_16 = ((0xaU == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (0xbU 
                                              == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_23 = ((2U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | ((3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                              | (4U 
                                                 == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))));
    vlSelf->top__DOT__EXU__DOT___GEN_17 = ((8U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (9U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_18 = ((4U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_2 = ((1U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                          | (2U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_20 = ((0xbU != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (0xaU 
                                              == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__IDU__DOT__exu_data_imm = ((IData)(vlSelf->__VdfgTmp_hd5680bdc__0)
                                                 ? 0U
                                                 : vlSelf->__VdfgTmp_h2e2aee8c__0);
    vlSelf->top__DOT___IDU_io_out2exu_bits_il_us = 
        ((IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren) 
         & ((~ ((0U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)) 
                | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_19))) 
            & ((4U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)) 
               | (5U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)))));
    vlSelf->top__DOT__IDU__DOT___GEN_18 = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_9) 
                                           | ((0x23U 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                              | ((0x63U 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_17))));
    vlSelf->top__DOT__EXU__DOT___GEN_19 = ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0) 
                                           | ((8U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                              | ((9U 
                                                  == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                 | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_16))));
    vlSelf->top__DOT__EXU__DOT___GEN_21 = ((7U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_17));
    vlSelf->top__DOT__EXU__DOT___GEN_3 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                | ((3U 
                                                    != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                   | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_2))));
    vlSelf->top__DOT__EXU__DOT___GEN_7 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_2) 
                                          | (3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->__VdfgTmp_hf4fc35c0__0 = ((0x341U == vlSelf->top__DOT__IDU__DOT__exu_data_imm)
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
    vlSelf->__VdfgTmp_h2d0c1b22__0 = ((1U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                       ? vlSelf->top__DOT__Reg__DOT__casez_tmp_0
                                       : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_23)
                                           ? vlSelf->top__DOT__IDU__DOT__exu_data_imm
                                           : ((5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                               ? vlSelf->top__DOT__Reg__DOT__casez_tmp_0
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                   ? 0U
                                                   : 
                                                  (((7U 
                                                     == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                    | (8U 
                                                       == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)))
                                                    ? vlSelf->io_pc
                                                    : 
                                                   ((1U 
                                                     & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_20)) 
                                                        | (9U 
                                                           == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))))
                                                     ? vlSelf->top__DOT__Reg__DOT__casez_tmp
                                                     : 0U))))));
    vlSelf->io_inv_flag = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
                           & ((~ (IData)(vlSelf->top__DOT__IDU__DOT___GEN_18)) 
                              & (0x73U != (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))));
    vlSelf->__VdfgTmp_he4da6003__0 = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                      & ((~ ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19)) 
                                             | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18))) 
                                         | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7)));
    vlSelf->top__DOT__EXU__DOT___GEN_22 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18));
    vlSelf->top__DOT___IDU_io_reg_data_csr_raddr = 
        ((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                | ((0x73U != (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                   | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_18))))
          ? 0U : (3U & ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_19)
                         ? (IData)(vlSelf->__VdfgTmp_hf4fc35c0__0)
                         : (- (IData)(((0U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)) 
                                       & (0U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))))))));
    vlSelf->top__DOT___EXU_io_reg_waddr = ((IData)(vlSelf->__VdfgTmp_he4da6003__0)
                                            ? (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_reg_waddr)
                                            : 0U);
    vlSelf->top__DOT__Reg__DOT___GEN = (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                         & (((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7) 
                                             | ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)) 
                                                & (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19))) 
                                            & ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
                                               & ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_9) 
                                                  | ((~ 
                                                      ((0x23U 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                                       | (0x63U 
                                                          == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)))) 
                                                     & ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_17) 
                                                        | ((0x73U 
                                                            == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                                           & (IData)(vlSelf->top__DOT__IDU__DOT___GEN_19)))))))) 
                                        & ((IData)(vlSelf->__VdfgTmp_he4da6003__0) 
                                           & (0U != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_reg_waddr))));
    vlSelf->top__DOT__EXU__DOT___GEN_25 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_22) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19));
    vlSelf->top__DOT__EXU__DOT___GEN_27 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_22) 
                                           | ((6U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                              | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_21)));
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op 
        = (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
            & ((~ ((~ ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_20)) 
                       | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_21))) 
                   | (6U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)))) 
               | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_22)))
            ? (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op)
            : 0xfU);
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
    vlSelf->top__DOT___EXU_io_csr_wen_1 = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                           & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_27)) 
                                              & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_16) 
                                                 | (IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0))));
    vlSelf->top__DOT__EXU__DOT___GEN_28 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                 | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_27)));
    if (vlSelf->top__DOT__EXU__DOT__m2IDUstate) {
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 
            = vlSelf->__VdfgTmp_h2d0c1b22__0;
        vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 
            = (0x1fU & vlSelf->__VdfgTmp_h2d0c1b22__0);
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
            = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_22)
                ? vlSelf->top__DOT__Reg__DOT__casez_tmp
                : ((6U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                    ? 0U : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_21)
                             ? vlSelf->top__DOT__IDU__DOT__exu_data_imm
                             : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_20)
                                 ? 0U : vlSelf->top__DOT__Reg__DOT__casez_tmp_1))));
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
                                                  ? (IData)(vlSelf->__VdfgTmp_hf4fc35c0__0)
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
    vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc = 
        ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
         & (((1U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
             | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_23))
             ? (IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_haca7adaf__0)
             : ((5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                 ? ((1U == vlSelf->top__DOT__EXU__DOT___alu_io_result)
                     ? (((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
                         & vlSelf->top__DOT__IFU__DOT__out_data_pc_REG) 
                        + ((~ (IData)(vlSelf->__VdfgTmp_hd5680bdc__0)) 
                           & vlSelf->__VdfgTmp_h2e2aee8c__0))
                     : (IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_haca7adaf__0))
                 : ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0)
                     ? (IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_haca7adaf__0)
                     : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_17)
                         ? vlSelf->top__DOT__EXU__DOT___alu_io_result
                         : ((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0)) 
                                   | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_16)))
                             ? (IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_haca7adaf__0)
                             : vlSelf->top__DOT__Reg__DOT__casez_tmp_1))))));
    if (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
         & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_2)) 
            & ((3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
               & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren))))) {
        Vtop___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(
                                                                  ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                                                                    ? 0U
                                                                    : vlSelf->top__DOT__EXU__DOT___alu_io_result), 
                                                                  ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                                                                    ? 0U
                                                                    : vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask), vlSelf->__Vfunc_vlg_pmem_read__2__Vfuncout);
        vlSelf->top__DOT__EXU__DOT___mem_m_rdata = vlSelf->__Vfunc_vlg_pmem_read__2__Vfuncout;
    } else {
        vlSelf->top__DOT__EXU__DOT___mem_m_rdata = 0U;
    }
    vlSelf->top__DOT___EXU_io_reg_wdata = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)
                                            ? ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_2)
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
                                                                  & (vlSelf->top__DOT__EXU__DOT___mem_m_rdata 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelf->top__DOT__EXU__DOT___mem_m_rdata))
                                                     : 
                                                    (((~ (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us)) 
                                                      & (2U 
                                                         == vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__EXU__DOT___mem_m_rdata 
                                                                      >> 0xfU)))) 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & vlSelf->top__DOT__EXU__DOT___mem_m_rdata))
                                                      : 
                                                     (((1U 
                                                        == vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask) 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us))
                                                       ? 
                                                      (0xffU 
                                                       & vlSelf->top__DOT__EXU__DOT___mem_m_rdata)
                                                       : 
                                                      (((2U 
                                                         == vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask) 
                                                        & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us))
                                                        ? 
                                                       (0xffffU 
                                                        & vlSelf->top__DOT__EXU__DOT___mem_m_rdata)
                                                        : vlSelf->top__DOT__EXU__DOT___mem_m_rdata))))
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
                                                      ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_17)
                                                        ? 
                                                       ((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
                                                         ? 
                                                        ((IData)(4U) 
                                                         + vlSelf->io_pc)
                                                         : 0U)
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_16)
                                                         ? vlSelf->top__DOT__Reg__DOT__casez_tmp_1
                                                         : 0U)))))))
                                            : 0U);
}

void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ inst);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit(vlSelf->top__DOT__IFU__DOT__out_data_inst);
}

void Vtop___024unit____Vdpiimwrap_vlg_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__top__DOT__IFU__DOT__m2EXUstate;
    __Vdly__top__DOT__IFU__DOT__m2EXUstate = 0;
    CData/*0:0*/ __Vdly__top__DOT__IDU__DOT__state;
    __Vdly__top__DOT__IDU__DOT__state = 0;
    CData/*0:0*/ __Vdly__top__DOT__EXU__DOT__m2IDUstate;
    __Vdly__top__DOT__EXU__DOT__m2IDUstate = 0;
    // Body
    __Vdly__top__DOT__EXU__DOT__m2IDUstate = vlSelf->top__DOT__EXU__DOT__m2IDUstate;
    __Vdly__top__DOT__IDU__DOT__state = vlSelf->top__DOT__IDU__DOT__state;
    if (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
         & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7)) 
            & ((4U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
               & ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
                  & ((~ (IData)(vlSelf->top__DOT__IDU__DOT___GEN_9)) 
                     & (0x23U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)))))))) {
        Vtop___024unit____Vdpiimwrap_vlg_pmem_write_TOP____024unit(
                                                                   ((1U 
                                                                     & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                                        | ((4U 
                                                                            != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                                                                     ? 0U
                                                                     : vlSelf->top__DOT__EXU__DOT___alu_io_result), 
                                                                   ((1U 
                                                                     & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                                        | ((4U 
                                                                            != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                                                                     ? 0U
                                                                     : vlSelf->top__DOT__Reg__DOT__casez_tmp_0), 
                                                                   ((1U 
                                                                     & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                                        | ((4U 
                                                                            != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                                                                     ? 0U
                                                                     : 
                                                                    ((1U 
                                                                      & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                                                                         | ((0x23U 
                                                                             != (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_9))))
                                                                      ? 0U
                                                                      : 
                                                                     ((0U 
                                                                       == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                                                                       ? 1U
                                                                       : 
                                                                      ((1U 
                                                                        == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                                                                        ? 2U
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)) 
                                                                        << 2U))))));
    }
    __Vdly__top__DOT__IFU__DOT__m2EXUstate = vlSelf->top__DOT__IFU__DOT__m2EXUstate;
    if (vlSelf->reset) {
        __Vdly__top__DOT__EXU__DOT__m2IDUstate = 0U;
        __Vdly__top__DOT__IDU__DOT__state = 0U;
        __Vdly__top__DOT__IFU__DOT__m2EXUstate = 0U;
        vlSelf->top__DOT__Reg__DOT__csr_1 = 0U;
        vlSelf->top__DOT__Reg__DOT__csr_3 = 0U;
        vlSelf->top__DOT__Reg__DOT__csr_2 = 0U;
        vlSelf->top__DOT__IFU__DOT__out_data_pc_REG = 0x80000000U;
        vlSelf->top__DOT__Reg__DOT__reg_23 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_22 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_21 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_20 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_19 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_18 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_17 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_16 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_14 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_13 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_12 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_11 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_10 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_9 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_8 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_4 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_0 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_1 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_2 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_5 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_6 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_3 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_7 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_24 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_25 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_26 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_27 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_28 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_29 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_30 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_31 = 0U;
        vlSelf->top__DOT__Reg__DOT__reg_15 = 0U;
        vlSelf->top__DOT__Reg__DOT__csr_0 = 0U;
        vlSelf->top__DOT__IDU__DOT__lastalu_op = 0U;
        vlSelf->top__DOT__IFU__DOT__lastinst = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)))) {
            __Vdly__top__DOT__EXU__DOT__m2IDUstate 
                = ((IData)(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op) 
                   != (IData)(vlSelf->top__DOT__IDU__DOT__lastalu_op));
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__IDU__DOT__state)))) {
            __Vdly__top__DOT__IDU__DOT__state = (vlSelf->top__DOT__IFU__DOT__lastinst 
                                                 != vlSelf->top__DOT__IFU__DOT__out_data_inst);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)))) {
            __Vdly__top__DOT__IFU__DOT__m2EXUstate 
                = ((IData)(vlSelf->top__DOT__EXU__DOT__lastdnpc) 
                   != (IData)(vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc));
        }
        if (((IData)(vlSelf->top__DOT___EXU_io_csr_wen_1) 
             & (1U == (IData)(vlSelf->top__DOT___EXU_io_csr_waddr_1)))) {
            vlSelf->top__DOT__Reg__DOT__csr_1 = vlSelf->top__DOT___EXU_io_csr_wdata_1;
        }
        if (((IData)(vlSelf->top__DOT___EXU_io_csr_wen_1) 
             & (3U == (IData)(vlSelf->top__DOT___EXU_io_csr_waddr_1)))) {
            vlSelf->top__DOT__Reg__DOT__csr_3 = vlSelf->top__DOT___EXU_io_csr_wdata_1;
        }
        if (((IData)(vlSelf->top__DOT___EXU_io_csr_wen_1) 
             & (2U == (IData)(vlSelf->top__DOT___EXU_io_csr_waddr_1)))) {
            vlSelf->top__DOT__Reg__DOT__csr_2 = vlSelf->top__DOT___EXU_io_csr_wdata_1;
        }
        vlSelf->top__DOT__IFU__DOT__out_data_pc_REG 
            = (- (IData)((IData)(vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc)));
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
             & (0xbU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_11 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0xaU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_10 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (9U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_9 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (8U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_8 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (4U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_4 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (~ (IData)((0U != (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))))) {
            vlSelf->top__DOT__Reg__DOT__reg_0 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (1U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_1 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (2U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_2 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (5U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_5 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (6U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_6 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (3U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_3 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (7U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_7 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x18U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_24 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x19U == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_25 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x1aU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_26 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0x1bU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_27 = vlSelf->top__DOT___EXU_io_reg_wdata;
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
        if (((IData)(vlSelf->top__DOT__Reg__DOT___GEN) 
             & (0xfU == (IData)(vlSelf->top__DOT___EXU_io_reg_waddr)))) {
            vlSelf->top__DOT__Reg__DOT__reg_15 = vlSelf->top__DOT___EXU_io_reg_wdata;
        }
        if (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
             & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_25)) 
                & (0xcU == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))))) {
            vlSelf->top__DOT__Reg__DOT__csr_0 = ((1U 
                                                  & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                     | ((0xcU 
                                                         != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                        | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_25))))
                                                  ? 0U
                                                  : vlSelf->io_pc);
        } else if (((IData)(vlSelf->top__DOT___EXU_io_csr_wen_1) 
                    & (0U == (IData)(vlSelf->top__DOT___EXU_io_csr_waddr_1)))) {
            vlSelf->top__DOT__Reg__DOT__csr_0 = vlSelf->top__DOT___EXU_io_csr_wdata_1;
        }
        vlSelf->top__DOT__IDU__DOT__lastalu_op = vlSelf->top__DOT__IDU__DOT__exu_data_alu_op;
        vlSelf->top__DOT__IFU__DOT__lastinst = vlSelf->top__DOT__IFU__DOT__out_data_inst;
    }
    vlSelf->top__DOT__IDU__DOT__state = __Vdly__top__DOT__IDU__DOT__state;
    vlSelf->top__DOT__IFU__DOT__m2EXUstate = __Vdly__top__DOT__IFU__DOT__m2EXUstate;
    vlSelf->top__DOT__EXU__DOT__m2IDUstate = __Vdly__top__DOT__EXU__DOT__m2IDUstate;
    vlSelf->top__DOT__EXU__DOT__lastdnpc = ((~ (IData)(vlSelf->reset)) 
                                            & (IData)(vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc));
    if (vlSelf->top__DOT__IFU__DOT__m2EXUstate) {
        vlSelf->top__DOT___IDU_io_reg_data_raddr_1 
            = (0x1fU & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                        >> 0xfU));
        vlSelf->top__DOT___IDU_io_out2exu_bits_reg_waddr 
            = (0x1fU & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                        >> 7U));
        vlSelf->top__DOT___IDU_io_reg_data_raddr_2 
            = (0x1fU & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                        >> 0x14U));
        vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0 
            = (7U & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                     >> 0xcU));
        vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0 
            = (0x7fU & vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst);
        vlSelf->io_pc = vlSelf->top__DOT__IFU__DOT__out_data_pc_REG;
        vlSelf->top__DOT__IFU__DOT__out_data_inst = vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst;
    } else {
        vlSelf->top__DOT___IDU_io_reg_data_raddr_1 = 0U;
        vlSelf->top__DOT___IDU_io_out2exu_bits_reg_waddr = 0U;
        vlSelf->top__DOT___IDU_io_reg_data_raddr_2 = 0U;
        vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0 = 0U;
        vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0 = 0U;
        vlSelf->io_pc = 0U;
        vlSelf->top__DOT__IFU__DOT__out_data_inst = 0U;
    }
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_h60c96407__0 
        = (((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
             ? (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                >> 0xcU) : 0U) << 0xcU);
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf12b015b__0 
        = ((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
           & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
              >> 0x1fU));
    vlSelf->top__DOT__Reg__DOT__casez_tmp = ((0x10U 
                                              & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                              ? ((8U 
                                                  & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_31
                                                     : vlSelf->top__DOT__Reg__DOT__reg_30)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_29
                                                     : vlSelf->top__DOT__Reg__DOT__reg_28))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_27
                                                     : vlSelf->top__DOT__Reg__DOT__reg_26)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_25
                                                     : vlSelf->top__DOT__Reg__DOT__reg_24)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_23
                                                     : vlSelf->top__DOT__Reg__DOT__reg_22)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_21
                                                     : vlSelf->top__DOT__Reg__DOT__reg_20))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_19
                                                     : vlSelf->top__DOT__Reg__DOT__reg_18)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_17
                                                     : vlSelf->top__DOT__Reg__DOT__reg_16))))
                                              : ((8U 
                                                  & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_15
                                                     : vlSelf->top__DOT__Reg__DOT__reg_14)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_13
                                                     : vlSelf->top__DOT__Reg__DOT__reg_12))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_11
                                                     : vlSelf->top__DOT__Reg__DOT__reg_10)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_9
                                                     : vlSelf->top__DOT__Reg__DOT__reg_8)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_7
                                                     : vlSelf->top__DOT__Reg__DOT__reg_6)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_5
                                                     : vlSelf->top__DOT__Reg__DOT__reg_4))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_3
                                                     : vlSelf->top__DOT__Reg__DOT__reg_2)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_1))
                                                     ? vlSelf->top__DOT__Reg__DOT__reg_1
                                                     : vlSelf->top__DOT__Reg__DOT__reg_0)))));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0 
        = (((- (IData)((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf12b015b__0))) 
            << 0xcU) | ((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
                         ? (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                            >> 0x14U) : 0U));
    vlSelf->top__DOT__Reg__DOT__casez_tmp_0 = ((0x10U 
                                                & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                ? (
                                                   (8U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_31
                                                       : vlSelf->top__DOT__Reg__DOT__reg_30)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_29
                                                       : vlSelf->top__DOT__Reg__DOT__reg_28))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_27
                                                       : vlSelf->top__DOT__Reg__DOT__reg_26)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_25
                                                       : vlSelf->top__DOT__Reg__DOT__reg_24)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_23
                                                       : vlSelf->top__DOT__Reg__DOT__reg_22)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_21
                                                       : vlSelf->top__DOT__Reg__DOT__reg_20))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_19
                                                       : vlSelf->top__DOT__Reg__DOT__reg_18)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_17
                                                       : vlSelf->top__DOT__Reg__DOT__reg_16))))
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_15
                                                       : vlSelf->top__DOT__Reg__DOT__reg_14)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_13
                                                       : vlSelf->top__DOT__Reg__DOT__reg_12))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_11
                                                       : vlSelf->top__DOT__Reg__DOT__reg_10)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_9
                                                       : vlSelf->top__DOT__Reg__DOT__reg_8)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_7
                                                       : vlSelf->top__DOT__Reg__DOT__reg_6)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_5
                                                       : vlSelf->top__DOT__Reg__DOT__reg_4))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_3
                                                       : vlSelf->top__DOT__Reg__DOT__reg_2)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))
                                                       ? vlSelf->top__DOT__Reg__DOT__reg_1
                                                       : vlSelf->top__DOT__Reg__DOT__reg_0)))));
    vlSelf->top__DOT__IDU__DOT___GEN_19 = ((1U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)) 
                                           | (2U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)));
    vlSelf->top__DOT__IDU__DOT___GEN_16 = ((0x17U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                           | ((0x6fU 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                              | (0x67U 
                                                 == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))));
    vlSelf->top__DOT__IDU__DOT___GEN_7 = ((0x33U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                          | (0x13U 
                                             == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)));
    vlSelf->__VdfgTmp_hd5680bdc__0 = (1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                                            | (0x33U 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))));
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_haca7adaf__0 
        = ((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
           & vlSelf->io_pc);
    if ((0x4000U & vlSelf->top__DOT__IFU__DOT__out_data_inst)) {
        if ((0x2000U & vlSelf->top__DOT__IFU__DOT__out_data_inst)) {
            if ((0x1000U & vlSelf->top__DOT__IFU__DOT__out_data_inst)) {
                vlSelf->top__DOT__IDU__DOT__casez_tmp = 2U;
                vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xbU;
            } else {
                vlSelf->top__DOT__IDU__DOT__casez_tmp = 3U;
                vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 9U;
            }
        } else if ((0x1000U & vlSelf->top__DOT__IFU__DOT__out_data_inst)) {
            vlSelf->top__DOT__IDU__DOT__casez_tmp = 
                (6U | (0U != (vlSelf->top__DOT__IFU__DOT__out_data_inst 
                              >> 0x19U)));
            vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xcU;
        } else {
            vlSelf->top__DOT__IDU__DOT__casez_tmp = 4U;
            vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 8U;
        }
    } else if ((0x2000U & vlSelf->top__DOT__IFU__DOT__out_data_inst)) {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = ((0x1000U 
                                                  & vlSelf->top__DOT__IFU__DOT__out_data_inst)
                                                  ? 9U
                                                  : 8U);
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0x10U;
    } else if ((0x1000U & vlSelf->top__DOT__IFU__DOT__out_data_inst)) {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = 5U;
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xdU;
    } else {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = 0x10U;
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xaU;
    }
    if (vlSelf->top__DOT__IDU__DOT__state) {
        if ((0x33U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))) {
            vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type = 1U;
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = ((0U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                    ? ((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
                       & (0U != (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                 >> 0x19U))) : (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp));
        } else if ((0x13U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))) {
            vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type = 2U;
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = ((0U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                    ? 0U : (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp));
        } else {
            vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type 
                = ((3U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                    ? 3U : ((0x23U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                             ? 4U : ((0x63U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                      ? 5U : ((0x37U 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                               ? 6U
                                               : ((0x17U 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                   ? 7U
                                                   : 
                                                  ((0x6fU 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                    ? 8U
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                     ? 9U
                                                     : 
                                                    ((0x73U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                      ? 
                                                     ((1U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                                                       ? 0xaU
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                                                        ? 0xbU
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                                                         ? 
                                                        (0xcU 
                                                         | (0U 
                                                            != (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2)))
                                                         : 0U)))
                                                      : 0U))))))));
            vlSelf->top__DOT__IDU__DOT__exu_data_alu_op 
                = (((3U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                    | (0x23U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)))
                    ? 0U : ((0x63U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                             ? (IData)(vlSelf->top__DOT__IDU__DOT__casez_tmp_0)
                             : ((0x37U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                 ? 0x10U : ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_16)
                                             ? 0U : 
                                            (((0x73U 
                                               != (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                              | ((2U 
                                                  != (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)) 
                                                 | (1U 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))))
                                              ? 0x10U
                                              : 3U)))));
        }
    } else {
        vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type = 0U;
        vlSelf->top__DOT__IDU__DOT__exu_data_alu_op = 0x10U;
    }
    vlSelf->__VdfgTmp_h2e2aee8c__0 = ((0x13U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                       ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0
                                       : ((3U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                           ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0
                                           : ((0x23U 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                               ? ((
                                                   (- (IData)((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf12b015b__0))) 
                                                   << 0xcU) 
                                                  | ((((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
                                                        ? 
                                                       (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                        >> 0x19U)
                                                        : 0U) 
                                                      << 5U) 
                                                     | (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_reg_waddr)))
                                               : ((0x63U 
                                                   == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                   ? 
                                                  (((- (IData)((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf12b015b__0))) 
                                                    << 0xcU) 
                                                   | ((0xfffff800U 
                                                       & (((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
                                                           << 0xbU) 
                                                          & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                             << 4U))) 
                                                      | ((((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
                                                            ? 
                                                           (0x3fU 
                                                            & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                               >> 0x19U))
                                                            : 0U) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
                                                              ? 
                                                             (0xfU 
                                                              & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                 >> 8U))
                                                              : 0U) 
                                                            << 1U))))
                                                   : 
                                                  ((0x37U 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                    ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_h60c96407__0
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                     ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_h60c96407__0
                                                     : 
                                                    ((0x6fU 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                      ? 
                                                     (((- (IData)((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf12b015b__0))) 
                                                       << 0x14U) 
                                                      | ((((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
                                                            ? 
                                                           (0xffU 
                                                            & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                               >> 0xcU))
                                                            : 0U) 
                                                          << 0xcU) 
                                                         | ((0x7ff800U 
                                                             & (((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
                                                                 << 0xbU) 
                                                                & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                   >> 9U))) 
                                                            | (((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
                                                                 ? 
                                                                (0x3ffU 
                                                                 & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                                                    >> 0x15U))
                                                                 : 0U) 
                                                               << 1U))))
                                                      : 
                                                     ((0x67U 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                       ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0
                                                       : 
                                                      ((0x73U 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))
                                                        ? vlSelf->top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0
                                                        : 0U)))))))));
    vlSelf->top__DOT__IDU__DOT___GEN_17 = ((0x37U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                           | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_16));
    vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask 
        = ((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                  | ((3U != (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                     | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_7))))
            ? 0U : ((0U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                     ? 1U : ((1U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                              ? 2U : ((2U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                                       ? 4U : ((4U 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0))
                                                ? 1U
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)) 
                                                   << 1U))))));
    vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren 
        = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
           & ((~ (IData)(vlSelf->top__DOT__IDU__DOT___GEN_7)) 
              & (3U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))));
    vlSelf->top__DOT__IDU__DOT___GEN_9 = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_7) 
                                          | (3U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)));
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0 
        = ((0xcU == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
           | (0xdU == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0 
        = ((6U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
           | (7U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_16 = ((0xaU == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (0xbU 
                                              == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_23 = ((2U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | ((3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                              | (4U 
                                                 == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))));
    vlSelf->top__DOT__EXU__DOT___GEN_17 = ((8U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (9U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_18 = ((4U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_2 = ((1U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                          | (2U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_20 = ((0xbU != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (0xaU 
                                              == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->top__DOT__IDU__DOT__exu_data_imm = ((IData)(vlSelf->__VdfgTmp_hd5680bdc__0)
                                                 ? 0U
                                                 : vlSelf->__VdfgTmp_h2e2aee8c__0);
    vlSelf->top__DOT___IDU_io_out2exu_bits_il_us = 
        ((IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren) 
         & ((~ ((0U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)) 
                | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_19))) 
            & ((4U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)) 
               | (5U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)))));
    vlSelf->top__DOT__IDU__DOT___GEN_18 = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_9) 
                                           | ((0x23U 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                              | ((0x63U 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_17))));
    vlSelf->top__DOT__EXU__DOT___GEN_19 = ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0) 
                                           | ((8U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                              | ((9U 
                                                  == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                 | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_16))));
    vlSelf->top__DOT__EXU__DOT___GEN_21 = ((7U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_17));
    vlSelf->top__DOT__EXU__DOT___GEN_3 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                | ((3U 
                                                    != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                   | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_2))));
    vlSelf->top__DOT__EXU__DOT___GEN_7 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_2) 
                                          | (3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)));
    vlSelf->__VdfgTmp_hf4fc35c0__0 = ((0x341U == vlSelf->top__DOT__IDU__DOT__exu_data_imm)
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
    vlSelf->__VdfgTmp_h2d0c1b22__0 = ((1U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                       ? vlSelf->top__DOT__Reg__DOT__casez_tmp_0
                                       : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_23)
                                           ? vlSelf->top__DOT__IDU__DOT__exu_data_imm
                                           : ((5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                               ? vlSelf->top__DOT__Reg__DOT__casez_tmp_0
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                                   ? 0U
                                                   : 
                                                  (((7U 
                                                     == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                    | (8U 
                                                       == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)))
                                                    ? vlSelf->io_pc
                                                    : 
                                                   ((1U 
                                                     & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_20)) 
                                                        | (9U 
                                                           == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))))
                                                     ? vlSelf->top__DOT__Reg__DOT__casez_tmp
                                                     : 0U))))));
    vlSelf->io_inv_flag = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
                           & ((~ (IData)(vlSelf->top__DOT__IDU__DOT___GEN_18)) 
                              & (0x73U != (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))));
    vlSelf->__VdfgTmp_he4da6003__0 = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                      & ((~ ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19)) 
                                             | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18))) 
                                         | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7)));
    vlSelf->top__DOT__EXU__DOT___GEN_22 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18));
    vlSelf->top__DOT___IDU_io_reg_data_csr_raddr = 
        ((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                | ((0x73U != (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                   | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_18))))
          ? 0U : (3U & ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_19)
                         ? (IData)(vlSelf->__VdfgTmp_hf4fc35c0__0)
                         : (- (IData)(((0U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)) 
                                       & (0U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))))))));
    vlSelf->top__DOT___EXU_io_reg_waddr = ((IData)(vlSelf->__VdfgTmp_he4da6003__0)
                                            ? (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_reg_waddr)
                                            : 0U);
    vlSelf->top__DOT__Reg__DOT___GEN = (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                         & (((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7) 
                                             | ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)) 
                                                & (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19))) 
                                            & ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
                                               & ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_9) 
                                                  | ((~ 
                                                      ((0x23U 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                                       | (0x63U 
                                                          == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)))) 
                                                     & ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_17) 
                                                        | ((0x73U 
                                                            == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                                           & (IData)(vlSelf->top__DOT__IDU__DOT___GEN_19)))))))) 
                                        & ((IData)(vlSelf->__VdfgTmp_he4da6003__0) 
                                           & (0U != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_reg_waddr))));
    vlSelf->top__DOT__EXU__DOT___GEN_25 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_22) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19));
    vlSelf->top__DOT__EXU__DOT___GEN_27 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_22) 
                                           | ((6U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                              | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_21)));
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op 
        = (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
            & ((~ ((~ ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_20)) 
                       | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_21))) 
                   | (6U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)))) 
               | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_22)))
            ? (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op)
            : 0xfU);
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
    vlSelf->top__DOT___EXU_io_csr_wen_1 = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                           & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_27)) 
                                              & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_16) 
                                                 | (IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0))));
    vlSelf->top__DOT__EXU__DOT___GEN_28 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                 | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_27)));
    if (vlSelf->top__DOT__EXU__DOT__m2IDUstate) {
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 
            = vlSelf->__VdfgTmp_h2d0c1b22__0;
        vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 
            = (0x1fU & vlSelf->__VdfgTmp_h2d0c1b22__0);
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
            = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_22)
                ? vlSelf->top__DOT__Reg__DOT__casez_tmp
                : ((6U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                    ? 0U : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_21)
                             ? vlSelf->top__DOT__IDU__DOT__exu_data_imm
                             : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_20)
                                 ? 0U : vlSelf->top__DOT__Reg__DOT__casez_tmp_1))));
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
                                                  ? (IData)(vlSelf->__VdfgTmp_hf4fc35c0__0)
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
    vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc = 
        ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
         & (((1U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
             | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_23))
             ? (IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_haca7adaf__0)
             : ((5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                 ? ((1U == vlSelf->top__DOT__EXU__DOT___alu_io_result)
                     ? (((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
                         & vlSelf->top__DOT__IFU__DOT__out_data_pc_REG) 
                        + ((~ (IData)(vlSelf->__VdfgTmp_hd5680bdc__0)) 
                           & vlSelf->__VdfgTmp_h2e2aee8c__0))
                     : (IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_haca7adaf__0))
                 : ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0)
                     ? (IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_haca7adaf__0)
                     : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_17)
                         ? vlSelf->top__DOT__EXU__DOT___alu_io_result
                         : ((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0)) 
                                   | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_16)))
                             ? (IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_haca7adaf__0)
                             : vlSelf->top__DOT__Reg__DOT__casez_tmp_1))))));
    if (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
         & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_2)) 
            & ((3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
               & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren))))) {
        Vtop___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(
                                                                  ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                                                                    ? 0U
                                                                    : vlSelf->top__DOT__EXU__DOT___alu_io_result), 
                                                                  ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                                                                    ? 0U
                                                                    : vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask), vlSelf->__Vfunc_vlg_pmem_read__2__Vfuncout);
        vlSelf->top__DOT__EXU__DOT___mem_m_rdata = vlSelf->__Vfunc_vlg_pmem_read__2__Vfuncout;
    } else {
        vlSelf->top__DOT__EXU__DOT___mem_m_rdata = 0U;
    }
    vlSelf->top__DOT___EXU_io_reg_wdata = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)
                                            ? ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_2)
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
                                                                  & (vlSelf->top__DOT__EXU__DOT___mem_m_rdata 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelf->top__DOT__EXU__DOT___mem_m_rdata))
                                                     : 
                                                    (((~ (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us)) 
                                                      & (2U 
                                                         == vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__EXU__DOT___mem_m_rdata 
                                                                      >> 0xfU)))) 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & vlSelf->top__DOT__EXU__DOT___mem_m_rdata))
                                                      : 
                                                     (((1U 
                                                        == vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask) 
                                                       & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us))
                                                       ? 
                                                      (0xffU 
                                                       & vlSelf->top__DOT__EXU__DOT___mem_m_rdata)
                                                       : 
                                                      (((2U 
                                                         == vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask) 
                                                        & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us))
                                                        ? 
                                                       (0xffffU 
                                                        & vlSelf->top__DOT__EXU__DOT___mem_m_rdata)
                                                        : vlSelf->top__DOT__EXU__DOT___mem_m_rdata))))
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
                                                      ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_17)
                                                        ? 
                                                       ((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
                                                         ? 
                                                        ((IData)(4U) 
                                                         + vlSelf->io_pc)
                                                         : 0U)
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_16)
                                                         ? vlSelf->top__DOT__Reg__DOT__casez_tmp_1
                                                         : 0U)))))))
                                            : 0U);
}

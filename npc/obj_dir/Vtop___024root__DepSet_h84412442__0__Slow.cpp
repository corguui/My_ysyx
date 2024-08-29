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
    vlSelf->top__DOT___AXI_arbiter_io_ifu_axi_r_rvalid 
        = ((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
           & (IData)(vlSelf->top__DOT__SRAM__DOT__rvalid_reg));
    vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_0 = 
        ((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate)
          ? vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_REG
          : 0U);
    vlSelf->top__DOT__LSU__DOT___GEN_1 = ((4U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type))
                                           ? (IData)(vlSelf->top__DOT__LSU__DOT__mem_wen_reg)
                                           : 0U);
    vlSelf->top__DOT__LSU__DOT__delay_ar__DOT___GEN_0 
        = (((3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
            & (IData)(vlSelf->top__DOT__LSU__DOT__exu2in_valid_reg)) 
           & (0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter)));
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
    vlSelf->top__DOT__LSU__DOT___GEN_2 = ((4U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
                                          & (IData)(vlSelf->top__DOT__LSU__DOT__exu2in_valid_reg));
    vlSelf->top__DOT__LSU__DOT__io_lsu_axi_b_bready_0 
        = ((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter)) 
           & (vlSelf->top__DOT__LSU__DOT__delay_b__DOT__dataReg 
              & (IData)(vlSelf->top__DOT__LSU__DOT__bready_reg)));
    vlSelf->top__DOT__IDU__DOT___GEN_20 = ((0x33U == 
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
    vlSelf->top__DOT__WBU__DOT____VdfgTmp_h2b8a6806__0 
        = ((0xcU == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)) 
           | (0xdU == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h24c9dbcb__0 
        = ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
           | ((2U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
              | ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                 | ((4U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                    | (5U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))))));
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
    vlSelf->top__DOT__EXU__DOT___GEN_8 = ((9U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                          | (0xbU == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f82b556__0 
        = ((7U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
           | (8U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__LSU__DOT__io_lsu_axi_r_rready_0 
        = ((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter)) 
           & (vlSelf->top__DOT__LSU__DOT__delay_r__DOT__dataReg 
              & (IData)(vlSelf->top__DOT__LSU__DOT__rready_reg)));
    vlSelf->top__DOT__WBU__DOT____VdfgTmp_hc8eaa83d__0 
        = ((6U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)) 
           | (7U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)));
    vlSelf->top__DOT__WBU__DOT___GEN_12 = ((8U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)) 
                                           | (9U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)));
    vlSelf->top__DOT__WBU__DOT___GEN_13 = ((4U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)) 
                                           | (5U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)));
    vlSelf->top__DOT__WBU__DOT___GEN_11 = ((0xaU == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)) 
                                           | (0xbU 
                                              == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)));
    vlSelf->top__DOT__WBU__DOT___GEN_14 = ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)) 
                                           | (2U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)));
    vlSelf->top__DOT__LSU__DOT__io_lsu_axi_w_wvalid_0 
        = ((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter)) 
           & (vlSelf->top__DOT__LSU__DOT__delay_w__DOT__dataReg 
              & (IData)(vlSelf->top__DOT__LSU__DOT__m_wen_reg_delay)));
    vlSelf->top__DOT__LSU__DOT____VdfgTmp_hd83711f5__0 
        = (1U & ((~ (IData)(vlSelf->top__DOT__LSU__DOT__m2EXUstate)) 
                 | (3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type))));
    vlSelf->top__DOT__LSU__DOT__io_lsu_axi_ar_arvalid_0 
        = ((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter)) 
           & (vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__dataReg 
              & (IData)(vlSelf->top__DOT__LSU__DOT__mem_ren_reg)));
    vlSelf->top__DOT__LSU__DOT__io_lsu_axi_aw_awvalid_0 
        = ((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter)) 
           & (vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__dataReg 
              & (IData)(vlSelf->top__DOT__LSU__DOT__m_wen_reg_delay)));
    vlSelf->top__DOT__LSU__DOT__delay_aw__DOT___GEN_0 
        = ((IData)(vlSelf->top__DOT__LSU__DOT___GEN_2) 
           & (0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter)));
    vlSelf->top__DOT__LSU__DOT__delay_w__DOT___GEN_0 
        = ((IData)(vlSelf->top__DOT__LSU__DOT___GEN_2) 
           & (0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter)));
    vlSelf->top__DOT__IDU__DOT___GEN_17 = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_20) 
                                           | (3U == 
                                              (0x7fU 
                                               & vlSelf->top__DOT__IFU__DOT__inst_reg)));
    vlSelf->top__DOT__IDU__DOT___GEN_13 = ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__IFU__DOT__inst_reg)) 
                                           | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_12));
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op 
        = (((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
            & ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h24c9dbcb__0) 
               | ((7U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                  | ((8U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                     | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_8)))))
            ? (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op)
            : 0xfU);
    vlSelf->__VdfgTmp_h149de1f0__0 = ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                       ? vlSelf->top__DOT__IDU__DOT__exu_data_src2
                                       : (((2U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                              | (4U 
                                                 == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))))
                                           ? vlSelf->top__DOT__IDU__DOT__exu_data_imm
                                           : ((5U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                               ? vlSelf->top__DOT__IDU__DOT__exu_data_src2
                                               : ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f82b556__0)
                                                   ? vlSelf->top__DOT__IDU__DOT__exu_data_pc
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_8)
                                                    ? vlSelf->top__DOT__IDU__DOT__exu_data_src1
                                                    : 0U)))));
    if (vlSelf->top__DOT__EXU__DOT__m2IDUstate) {
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
            = ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h24c9dbcb__0)
                ? vlSelf->top__DOT__IDU__DOT__exu_data_src1
                : (((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f82b556__0) 
                    | (9U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)))
                    ? vlSelf->top__DOT__IDU__DOT__exu_data_imm
                    : ((0xbU == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                        ? vlSelf->top__DOT__IDU__DOT__exu_data_csr
                        : 0U)));
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 
            = vlSelf->__VdfgTmp_h149de1f0__0;
        vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 
            = (0x1fU & vlSelf->__VdfgTmp_h149de1f0__0);
    } else {
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 = 0U;
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 = 0U;
        vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 = 0U;
    }
    vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0 
        = ((3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type))
            ? (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_r_rready_0)
            : ((4U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type))
                ? (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_b_bready_0)
                : (IData)(vlSelf->top__DOT__LSU__DOT__state_reg)));
    vlSelf->top__DOT__WBU__DOT___GEN_15 = ((IData)(vlSelf->top__DOT__WBU__DOT____VdfgTmp_hc8eaa83d__0) 
                                           | ((8U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)) 
                                              | ((9U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)) 
                                                 | (IData)(vlSelf->top__DOT__WBU__DOT___GEN_11))));
    vlSelf->top__DOT__WBU__DOT____VdfgTmp_h43fa6f6f__0 
        = ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_14) 
           | ((3U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)) 
              | (IData)(vlSelf->top__DOT__WBU__DOT___GEN_13)));
    vlSelf->top__DOT__LSU__DOT___GEN_4 = (1U & ((~ 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
                                                  & (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_w_wvalid_0))) 
                                                | (IData)(vlSelf->top__DOT__LSU__DOT____VdfgTmp_hd83711f5__0)));
    vlSelf->top__DOT__LSU__DOT____VdfgTmp_h791150d4__0 
        = ((IData)(vlSelf->top__DOT__LSU__DOT__m2EXUstate) 
           & ((3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
              & (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_ar_arvalid_0)));
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN = ((~ (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)) 
                                                & ((IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_ar_arvalid_0) 
                                                   | ((IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_aw_awvalid_0) 
                                                      & (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_w_wvalid_0))));
    vlSelf->__VdfgTmp_hb1f015da__0 = (1U & ((~ ((4U 
                                                 == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
                                                & (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_aw_awvalid_0))) 
                                            | (IData)(vlSelf->top__DOT__LSU__DOT____VdfgTmp_hd83711f5__0)));
    vlSelf->top__DOT__IDU__DOT___GEN_14 = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_17) 
                                           | ((0x23U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT__inst_reg)) 
                                              | ((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__IFU__DOT__inst_reg)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_13))));
    vlSelf->__VdfgTmp_h38812605__0 = ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_14)
                                       ? (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_waddr)
                                       : ((3U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))
                                           ? ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rresp))
                                               ? (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_waddr)
                                               : 0U)
                                           : ((1U & 
                                               ((~ (IData)(vlSelf->top__DOT__WBU__DOT___GEN_15)) 
                                                | (IData)(vlSelf->top__DOT__WBU__DOT___GEN_13)))
                                               ? 0U
                                               : (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_waddr))));
    if (vlSelf->top__DOT__WBU__DOT__m2LSUstate) {
        if (vlSelf->top__DOT__WBU__DOT___GEN_14) {
            vlSelf->top__DOT___WBU_io_reg_wdata = vlSelf->top__DOT__LSU__DOT__wbu_data_alu_result;
            vlSelf->top__DOT__WBU__DOT__ifu_outdata_dnpc 
                = vlSelf->top__DOT__LSU__DOT__wbu_data_snpc;
        } else if ((3U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))) {
            if ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rresp))) {
                vlSelf->top__DOT___WBU_io_reg_wdata 
                    = vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rdata;
                vlSelf->top__DOT__WBU__DOT__ifu_outdata_dnpc 
                    = vlSelf->top__DOT__LSU__DOT__wbu_data_snpc;
            } else {
                vlSelf->top__DOT___WBU_io_reg_wdata = 0U;
                vlSelf->top__DOT__WBU__DOT__ifu_outdata_dnpc = 0x80000000U;
            }
        } else {
            vlSelf->top__DOT___WBU_io_reg_wdata = ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_13)
                                                    ? 0U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))
                                                     ? vlSelf->top__DOT__LSU__DOT__wbu_data_imm
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))
                                                      ? vlSelf->top__DOT__LSU__DOT__wbu_data_alu_result
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_12)
                                                       ? vlSelf->top__DOT__LSU__DOT__wbu_data_snpc
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_11)
                                                        ? vlSelf->top__DOT__LSU__DOT__wbu_data_csr
                                                        : 0U)))));
            vlSelf->top__DOT__WBU__DOT__ifu_outdata_dnpc 
                = ((4U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))
                    ? ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_bresp))
                        ? vlSelf->top__DOT__LSU__DOT__wbu_data_snpc
                        : 0x80000000U) : ((5U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))
                                           ? ((1U == vlSelf->top__DOT__LSU__DOT__wbu_data_alu_result)
                                               ? (vlSelf->top__DOT__LSU__DOT__wbu_data_imm 
                                                  + vlSelf->top__DOT__LSU__DOT__wbu_data_pc)
                                               : vlSelf->top__DOT__LSU__DOT__wbu_data_snpc)
                                           : ((IData)(vlSelf->top__DOT__WBU__DOT____VdfgTmp_hc8eaa83d__0)
                                               ? vlSelf->top__DOT__LSU__DOT__wbu_data_snpc
                                               : ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_12)
                                                   ? vlSelf->top__DOT__LSU__DOT__wbu_data_alu_result
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_11)
                                                    ? vlSelf->top__DOT__LSU__DOT__wbu_data_snpc
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__WBU__DOT____VdfgTmp_h2b8a6806__0)
                                                     ? vlSelf->top__DOT__LSU__DOT__wbu_data_csr
                                                     : 0x80000000U))))));
        }
        vlSelf->top__DOT___WBU_io_reg_waddr = vlSelf->__VdfgTmp_h38812605__0;
    } else {
        vlSelf->top__DOT___WBU_io_reg_wdata = 0U;
        vlSelf->top__DOT__WBU__DOT__ifu_outdata_dnpc = 0x80000000U;
        vlSelf->top__DOT___WBU_io_reg_waddr = 0U;
    }
    vlSelf->top__DOT___WBU_io_out2ifu_valid = ((vlSelf->top__DOT__WBU__DOT__lastdnpc 
                                                != vlSelf->top__DOT__WBU__DOT__ifu_outdata_dnpc) 
                                               & ((0x80000000U 
                                                   != vlSelf->top__DOT__WBU__DOT__ifu_outdata_dnpc) 
                                                  | (0U 
                                                     == vlSelf->top__DOT__WBU__DOT__lastdnpc)));
    vlSelf->top__DOT__WBU__DOT___GEN_17 = ((IData)(vlSelf->top__DOT__WBU__DOT____VdfgTmp_h43fa6f6f__0) 
                                           | (IData)(vlSelf->top__DOT__WBU__DOT___GEN_15));
    vlSelf->top__DOT__WBU__DOT___GEN_19 = ((IData)(vlSelf->top__DOT__WBU__DOT____VdfgTmp_h43fa6f6f__0) 
                                           | ((6U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)) 
                                              | ((7U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)) 
                                                 | (IData)(vlSelf->top__DOT__WBU__DOT___GEN_12))));
    if (vlSelf->top__DOT__LSU__DOT___GEN_4) {
        vlSelf->top__DOT___LSU_io_lsu_axi_w_wdata = 0U;
        vlSelf->top__DOT___LSU_io_lsu_axi_w_wstrb = 0U;
    } else {
        vlSelf->top__DOT___LSU_io_lsu_axi_w_wdata = vlSelf->top__DOT__LSU__DOT__mem_wdata_reg;
        vlSelf->top__DOT___LSU_io_lsu_axi_w_wstrb = 
            (0xfU & vlSelf->top__DOT__LSU__DOT__mem_wstrb_reg);
    }
    vlSelf->top__DOT___LSU_io_lsu_axi_ar_araddr = ((IData)(vlSelf->top__DOT__LSU__DOT____VdfgTmp_h791150d4__0)
                                                    ? vlSelf->top__DOT__LSU__DOT__mem_raddr_reg
                                                    : 0U);
    vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hb0ea07fc__0 
        = (1U & ((~ (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN)) 
                 | (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)));
    vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_h0eb34983__0 
        = ((~ (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)) 
           & (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN));
    vlSelf->top__DOT___LSU_io_lsu_axi_aw_awaddr = ((IData)(vlSelf->__VdfgTmp_hb1f015da__0)
                                                    ? 0U
                                                    : vlSelf->top__DOT__LSU__DOT__mem_awaddr_reg);
    vlSelf->top__DOT__inv_flag = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
                                  & ((~ (IData)(vlSelf->top__DOT__IDU__DOT___GEN_14)) 
                                     & (0x73U != (0x7fU 
                                                  & vlSelf->top__DOT__IFU__DOT__inst_reg))));
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
    vlSelf->top__DOT__Reg__DOT___GEN = ((IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate) 
                                        & (((IData)(vlSelf->top__DOT__WBU__DOT___GEN_14)
                                             ? (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen)
                                             : ((3U 
                                                 == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))
                                                 ? 
                                                ((1U 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rresp)) 
                                                 & (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen))
                                                 : 
                                                ((~ (IData)(vlSelf->top__DOT__WBU__DOT___GEN_13)) 
                                                 & ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_15) 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen))))) 
                                           & (0U != (IData)(vlSelf->__VdfgTmp_h38812605__0))));
    vlSelf->top__DOT___WBU_io_csr_wen_1 = ((IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate) 
                                           & ((~ (IData)(vlSelf->top__DOT__WBU__DOT___GEN_19)) 
                                              & ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_11) 
                                                 | (IData)(vlSelf->top__DOT__WBU__DOT____VdfgTmp_h2b8a6806__0))));
    vlSelf->top__DOT__WBU__DOT___GEN_20 = (1U & ((~ (IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate)) 
                                                 | (IData)(vlSelf->top__DOT__WBU__DOT___GEN_19)));
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN_5 = ((0xa0000047U 
                                                   < vlSelf->top__DOT___LSU_io_lsu_axi_ar_araddr) 
                                                  & (0xa0000050U 
                                                     > vlSelf->top__DOT___LSU_io_lsu_axi_ar_araddr));
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN_3 = (((IData)(vlSelf->top__DOT__LSU__DOT____VdfgTmp_h791150d4__0) 
                                                   & ((vlSelf->top__DOT__LSU__DOT__mem_raddr_reg 
                                                       >> 0x1fU) 
                                                      & (0x90000000U 
                                                         > vlSelf->top__DOT___LSU_io_lsu_axi_ar_araddr))) 
                                                  | ((~ (IData)(vlSelf->__VdfgTmp_hb1f015da__0)) 
                                                     & ((vlSelf->top__DOT__LSU__DOT__mem_awaddr_reg 
                                                         >> 0x1fU) 
                                                        & (0x90000000U 
                                                           > vlSelf->top__DOT___LSU_io_lsu_axi_aw_awaddr))));
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN_0 = ((0xa00003f7U 
                                                   < vlSelf->top__DOT___LSU_io_lsu_axi_aw_awaddr) 
                                                  & (0xa0000400U 
                                                     > vlSelf->top__DOT___LSU_io_lsu_axi_aw_awaddr));
    if (vlSelf->top__DOT__WBU__DOT___GEN_20) {
        vlSelf->top__DOT___WBU_io_csr_waddr_1 = 0U;
        vlSelf->top__DOT___WBU_io_csr_wdata_1 = 0U;
    } else {
        vlSelf->top__DOT___WBU_io_csr_waddr_1 = (3U 
                                                 & ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_11)
                                                     ? 
                                                    ((0x341U 
                                                      == vlSelf->top__DOT__LSU__DOT__wbu_data_imm)
                                                      ? 0U
                                                      : 
                                                     ((0x342U 
                                                       == vlSelf->top__DOT__LSU__DOT__wbu_data_imm)
                                                       ? 1U
                                                       : 
                                                      ((0x300U 
                                                        == vlSelf->top__DOT__LSU__DOT__wbu_data_imm)
                                                        ? 2U
                                                        : 
                                                       (- (IData)(
                                                                  (0x305U 
                                                                   == vlSelf->top__DOT__LSU__DOT__wbu_data_imm))))))
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))
                                                      ? 1U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)) 
                                                      << 1U))));
        vlSelf->top__DOT___WBU_io_csr_wdata_1 = ((0xaU 
                                                  == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))
                                                  ? vlSelf->top__DOT__LSU__DOT__wbu_data_src1
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))
                                                   ? vlSelf->top__DOT__LSU__DOT__wbu_data_alu_result
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))
                                                    ? vlSelf->top__DOT__LSU__DOT__wbu_data_csr_a5
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))
                                                     ? vlSelf->top__DOT__LSU__DOT__wbu_data_mstatus
                                                     : 0U))));
    }
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN_7 = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hb0ea07fc__0) 
                                                  | (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_0));
    vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_b_bvalid 
        = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_h0eb34983__0) 
           & ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_0)
               ? (IData)(vlSelf->top__DOT__UART__DOT__bvalid_reg)
               : ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_3)
                   ? (IData)(vlSelf->top__DOT__SRAM__DOT__bvalid_reg)
                   : (~ (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_5)))));
    vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hc8f955bb__0 
        = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN) 
           & ((~ (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_0)) 
              & (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_3)));
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN_6 = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_0) 
                                                  | (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_3));
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN_1 = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN) 
                                                  & (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_0));
    vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_ha6f808b4__0 
        = ((~ (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_0)) 
           & (IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_h0eb34983__0));
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN_4 = (1U 
                                                  & ((~ (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_3)) 
                                                     | (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_7)));
    if (vlSelf->top__DOT__IFU__DOT__arvalid_reg) {
        vlSelf->top__DOT___AXI_arbiter_io_axi_r_rready 
            = vlSelf->top__DOT__IFU__DOT__rready_reg;
        vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid 
            = vlSelf->top__DOT__IFU__DOT__arvalid_reg;
    } else {
        vlSelf->top__DOT___AXI_arbiter_io_axi_r_rready 
            = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hc8f955bb__0) 
               & (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_r_rready_0));
        vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid 
            = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hc8f955bb__0) 
               & (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_ar_arvalid_0));
    }
    vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hff3363a0__0 
        = (1U & ((~ (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_5)) 
                 | (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_6)));
    vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_h76d06acc__0 
        = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_h0eb34983__0) 
           & ((~ (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_6)) 
              & (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_5)));
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN_2 = (1U 
                                                  & ((~ (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_1)) 
                                                     | (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)));
    vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hf6818992__0 
        = ((~ (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)) 
           & (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_1));
    vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_r_rvalid 
        = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_ha6f808b4__0) 
           & ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_3)
               ? (IData)(vlSelf->top__DOT__SRAM__DOT__rvalid_reg)
               : ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_5) 
                  & (IData)(vlSelf->top__DOT__RTC__DOT__rvalid_reg))));
    vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_ha75ffa7c__0 
        = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_ha6f808b4__0) 
           & (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_3));
    if (vlSelf->top__DOT__AXI_arbiter__DOT___GEN_4) {
        vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awaddr = 0U;
        vlSelf->top__DOT___AXI_arbiter_io_axi_w_wstrb = 0U;
    } else {
        vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awaddr 
            = vlSelf->top__DOT___LSU_io_lsu_axi_aw_awaddr;
        vlSelf->top__DOT___AXI_arbiter_io_axi_w_wstrb 
            = vlSelf->top__DOT___LSU_io_lsu_axi_w_wstrb;
    }
    vlSelf->top__DOT__SRAM__DOT___GEN_0 = ((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_r_rready) 
                                           & (IData)(vlSelf->top__DOT__SRAM__DOT__rvalid_reg));
    vlSelf->top__DOT__SRAM__DOT__delay__DOT___GEN_0 
        = (((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid) 
            & ((IData)(vlSelf->top__DOT__SRAM__DOT__arvalid_reg) 
               != (IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid))) 
           & (0U == (IData)(vlSelf->top__DOT__SRAM__DOT__delay__DOT__counter)));
    vlSelf->top__DOT__LSU__DOT___GEN_5 = ((IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_w_wvalid_0) 
                                          & (((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_h0eb34983__0) 
                                              & (IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hff3363a0__0)) 
                                             & ((IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_aw_awvalid_0) 
                                                & (IData)(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_b_bvalid))));
    vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_r_rready 
        = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_h76d06acc__0) 
           & (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_r_rready_0));
    vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid 
        = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_h76d06acc__0) 
           & (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_ar_arvalid_0));
    if (vlSelf->top__DOT__AXI_arbiter__DOT___GEN_2) {
        vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awaddr = 0U;
        vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wstrb = 0U;
    } else {
        vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awaddr 
            = vlSelf->top__DOT___LSU_io_lsu_axi_aw_awaddr;
        vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wstrb 
            = vlSelf->top__DOT___LSU_io_lsu_axi_w_wstrb;
    }
    vlSelf->top__DOT___AXI_arbiter_io_uart_axi_b_bready 
        = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hf6818992__0) 
           & (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_b_bready_0));
    vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awvalid 
        = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hf6818992__0) 
           & (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_aw_awvalid_0));
    vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wvalid 
        = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hf6818992__0) 
           & (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_w_wvalid_0));
    vlSelf->top__DOT__LSU__DOT___GEN_3 = ((IData)(vlSelf->top__DOT__LSU__DOT____VdfgTmp_h791150d4__0) 
                                          & (IData)(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_r_rvalid));
    vlSelf->top__DOT___AXI_arbiter_io_axi_b_bready 
        = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_ha75ffa7c__0) 
           & (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_b_bready_0));
    vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awvalid 
        = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_ha75ffa7c__0) 
           & (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_aw_awvalid_0));
    vlSelf->top__DOT___AXI_arbiter_io_axi_w_wvalid 
        = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_ha75ffa7c__0) 
           & (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_w_wvalid_0));
    if (vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid) {
        vlSelf->top__DOT__SRAM__DOT__rvalid_en = ((~ (IData)(vlSelf->top__DOT__SRAM__DOT___GEN_0)) 
                                                  & ((~ (IData)(vlSelf->top__DOT__SRAM__DOT__delay__DOT___GEN_0)) 
                                                     & ((0U 
                                                         != (IData)(vlSelf->top__DOT__SRAM__DOT__delay__DOT__counter)) 
                                                        & (1U 
                                                           == (IData)(vlSelf->top__DOT__SRAM__DOT__delay__DOT__counter)))));
        vlSelf->top__DOT__SRAM__DOT___GEN = ((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                              ? (((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
                                                  & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg))
                                                  ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                                  : 0U)
                                              : ((1U 
                                                  & ((~ (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN)) 
                                                     | ((~ (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_3)) 
                                                        | (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_0))))
                                                  ? 0U
                                                  : vlSelf->top__DOT___LSU_io_lsu_axi_ar_araddr));
        vlSelf->top__DOT___SRAM_io_axi_r_rdata = ((IData)(vlSelf->top__DOT__SRAM__DOT___GEN_0)
                                                   ? vlSelf->top__DOT__SRAM__DOT__rdata_reg
                                                   : 0U);
    } else {
        vlSelf->top__DOT__SRAM__DOT__rvalid_en = 0U;
        vlSelf->top__DOT__SRAM__DOT___GEN = 0U;
        vlSelf->top__DOT___SRAM_io_axi_r_rdata = 2U;
    }
    if (vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid) {
        Vtop___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(vlSelf->top__DOT__SRAM__DOT___GEN, 
                                                                  ((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid) 
                                                                   << 2U), vlSelf->__Vfunc_vlg_pmem_read__1__Vfuncout);
        vlSelf->top__DOT__SRAM__DOT___m_m_rdata = vlSelf->__Vfunc_vlg_pmem_read__1__Vfuncout;
    } else {
        vlSelf->top__DOT__SRAM__DOT___m_m_rdata = 0U;
    }
    vlSelf->top__DOT__LSU__DOT___GEN_6 = ((4U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
                                          & (IData)(vlSelf->top__DOT__LSU__DOT___GEN_5));
    vlSelf->top__DOT__RTC__DOT___GEN = ((IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_r_rready) 
                                        & (IData)(vlSelf->top__DOT__RTC__DOT__rvalid_reg));
    vlSelf->top__DOT__RTC__DOT__rtc_raddr = ((IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                              ? (((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hb0ea07fc__0) 
                                                  | (IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hff3363a0__0))
                                                  ? 0U
                                                  : vlSelf->top__DOT___LSU_io_lsu_axi_ar_araddr)
                                              : 0U);
    vlSelf->top__DOT__RTC__DOT__delay__DOT___GEN_0 
        = (((IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid) 
            & ((IData)(vlSelf->top__DOT__RTC__DOT__arvalid_reg) 
               != (IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid))) 
           & (0U == (IData)(vlSelf->top__DOT__RTC__DOT__delay__DOT__counter)));
    vlSelf->top__DOT__UART__DOT___GEN = ((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awvalid) 
                                         & (IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wvalid));
    vlSelf->top__DOT__LSU__DOT__delay_r__DOT___GEN_0 
        = (((~ (((IData)(vlSelf->top__DOT__LSU__DOT__rvalid_reg) 
                 != (IData)(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_r_rvalid)) 
                & (IData)(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_r_rvalid))) 
            & (IData)(vlSelf->top__DOT__LSU__DOT___GEN_3)) 
           & (0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter)));
    vlSelf->top__DOT__SRAM__DOT___GEN_1 = ((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awvalid) 
                                           & (IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wvalid));
    vlSelf->top__DOT__LSU__DOT__delay_b__DOT___GEN_0 
        = (((IData)(vlSelf->top__DOT__LSU__DOT__m2EXUstate) 
            & ((3U != (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
               & ((~ (((IData)(vlSelf->top__DOT__LSU__DOT__bvalid_reg) 
                       != (IData)(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_b_bvalid)) 
                      & (IData)(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_b_bvalid))) 
                  & (IData)(vlSelf->top__DOT__LSU__DOT___GEN_6)))) 
           & (0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter)));
    vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_r_rdata 
        = ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_7)
            ? 0U : ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_3)
                     ? vlSelf->top__DOT___SRAM_io_axi_r_rdata
                     : ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_5)
                         ? ((IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                             ? ((IData)(vlSelf->top__DOT__RTC__DOT___GEN)
                                 ? vlSelf->top__DOT__RTC__DOT__rdata_reg
                                 : 0U) : 2U) : 0U)));
    vlSelf->top__DOT__RTC__DOT__rvalid_en = ((IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid) 
                                             & ((~ (IData)(vlSelf->top__DOT__RTC__DOT___GEN)) 
                                                & ((~ (IData)(vlSelf->top__DOT__RTC__DOT__delay__DOT___GEN_0)) 
                                                   & ((0U 
                                                       != (IData)(vlSelf->top__DOT__RTC__DOT__delay__DOT__counter)) 
                                                      & (1U 
                                                         == (IData)(vlSelf->top__DOT__RTC__DOT__delay__DOT__counter))))));
    vlSelf->top__DOT__UART__DOT__delay_w__DOT___GEN_0 
        = (((IData)(vlSelf->top__DOT__UART__DOT___GEN) 
            & (((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wvalid) 
                != (IData)(vlSelf->top__DOT__UART__DOT__wvalid_reg)) 
               & ((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wvalid) 
                  & (((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awvalid) 
                      != (IData)(vlSelf->top__DOT__UART__DOT__awvalid_reg)) 
                     & (IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awvalid))))) 
           & (0U == (IData)(vlSelf->top__DOT__UART__DOT__delay_w__DOT__counter)));
    vlSelf->top__DOT__SRAM__DOT__delay_w__DOT___GEN_0 
        = (((IData)(vlSelf->top__DOT__SRAM__DOT___GEN_1) 
            & (((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wvalid) 
                != (IData)(vlSelf->top__DOT__SRAM__DOT__wvalid_reg)) 
               & ((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wvalid) 
                  & (((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awvalid) 
                      != (IData)(vlSelf->top__DOT__SRAM__DOT__awvalid_reg)) 
                     & (IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awvalid))))) 
           & (0U == (IData)(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__counter)));
    vlSelf->top__DOT__UART__DOT__bvalid_en = ((IData)(vlSelf->top__DOT__UART__DOT___GEN) 
                                              & ((~ (IData)(vlSelf->top__DOT__UART__DOT__delay_w__DOT___GEN_0)) 
                                                 & ((0U 
                                                     != (IData)(vlSelf->top__DOT__UART__DOT__delay_w__DOT__counter)) 
                                                    & (1U 
                                                       == (IData)(vlSelf->top__DOT__UART__DOT__delay_w__DOT__counter)))));
    vlSelf->top__DOT__SRAM__DOT__bvalid_en = ((IData)(vlSelf->top__DOT__SRAM__DOT___GEN_1) 
                                              & ((~ (IData)(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT___GEN_0)) 
                                                 & ((0U 
                                                     != (IData)(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__counter)) 
                                                    & (1U 
                                                       == (IData)(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__counter)))));
}

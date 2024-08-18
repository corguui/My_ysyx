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
    vlSelf->top__DOT___IDU_io_out2exu_valid = ((IData)(vlSelf->top__DOT__IDU__DOT__exu_data_mem_ren) 
                                               | ((IData)(vlSelf->top__DOT__IDU__DOT__exu_data_mem_wen) 
                                                  | ((vlSelf->top__DOT__IDU__DOT__exu_data_imm 
                                                      != vlSelf->top__DOT__IDU__DOT__lastimm) 
                                                     | ((IData)(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op) 
                                                        != (IData)(vlSelf->top__DOT__IDU__DOT__lastaluop)))));
    vlSelf->top__DOT__EXU__DOT___GEN_8 = ((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg) 
                                          & (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg));
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0 
        = ((0xcU == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
           | (0xdU == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0 
        = ((6U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
           | (7U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_16 = ((0xaU == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (0xbU 
                                              == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__Mem__DOT___GEN_1 = ((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg) 
                                          & ((IData)(vlSelf->top__DOT__EXU__DOT__rready_reg) 
                                             & (IData)(vlSelf->top__DOT__Mem__DOT__rvalid_reg)));
    vlSelf->top__DOT__EXU__DOT___GEN_17 = ((8U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (9U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_18 = ((4U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (5U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__EXU__DOT___GEN_20 = ((0xbU != (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (0xaU 
                                              == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__IFU__DOT____VdfgTmp_haf7782c8__0 
        = ((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
           & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate));
    vlSelf->top__DOT__EXU__DOT___GEN_4 = ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                          | (2U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->top__DOT__Inst_fetch__DOT___GEN = ((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                               & ((IData)(vlSelf->top__DOT__IFU__DOT__rready_reg) 
                                                  & (IData)(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_reg)));
    vlSelf->top__DOT__EXU__DOT___GEN_19 = ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0) 
                                           | ((8U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                              | ((9U 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                                 | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_16))));
    vlSelf->top__DOT__EXU__DOT___GEN_3 = ((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg) 
                                          & ((IData)(vlSelf->top__DOT__Mem__DOT__rvalid_reg) 
                                             & (1U 
                                                == 
                                                ((IData)(vlSelf->top__DOT__Mem__DOT___GEN_1)
                                                  ? (IData)(vlSelf->top__DOT__Mem__DOT__rresp_reg)
                                                  : 0U))));
    vlSelf->top__DOT__EXU__DOT___GEN_21 = ((7U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_17));
    vlSelf->__VdfgTmp_h570e6332__0 = ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                       ? vlSelf->top__DOT__IDU__DOT__exu_data_src2
                                       : (((2U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                              | (4U 
                                                 == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))))
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
    vlSelf->top__DOT__IFU__DOT___GEN = ((IData)(vlSelf->top__DOT__IFU__DOT____VdfgTmp_haf7782c8__0) 
                                        & (IData)(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_reg));
    vlSelf->top__DOT__EXU__DOT___GEN_5 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                | ((~ 
                                                    ((3U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg))) 
                                                   | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_4))));
    vlSelf->top__DOT__EXU__DOT___GEN_6 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_4) 
                                          | (3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)));
    vlSelf->__VdfgTmp_h29d0e493__0 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_4)
                                       ? (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_waddr)
                                       : ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                           ? ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                                               ? (IData)(vlSelf->top__DOT__EXU__DOT__reg_waddr_reg)
                                               : 0U)
                                           : ((1U & 
                                               ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19)) 
                                                | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)))
                                               ? 0U
                                               : (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_waddr))));
    if (vlSelf->top__DOT__IFU__DOT___GEN) {
        vlSelf->io_pc = vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_REG;
        vlSelf->__VdfgTmp_h88198790__0 = (1U == ((IData)(vlSelf->top__DOT__Inst_fetch__DOT___GEN)
                                                  ? (IData)(vlSelf->top__DOT__Inst_fetch__DOT__rresp_reg)
                                                  : 0U));
    } else {
        vlSelf->io_pc = 0U;
        vlSelf->__VdfgTmp_h88198790__0 = 0U;
    }
    vlSelf->top__DOT__EXU__DOT___GEN_7 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                | ((~ 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                                     & (IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg))) 
                                                   | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_6))));
    vlSelf->top__DOT__EXU__DOT___GEN_22 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_6) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18));
    vlSelf->top__DOT__Reg__DOT___GEN = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                        & (((IData)(vlSelf->top__DOT__EXU__DOT___GEN_4)
                                             ? (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen)
                                             : ((3U 
                                                 == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3) 
                                                 & (IData)(vlSelf->top__DOT__EXU__DOT__reg_wen_reg))
                                                 : 
                                                ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)) 
                                                 & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_19) 
                                                    & (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen))))) 
                                           & (0U != (IData)(vlSelf->__VdfgTmp_h29d0e493__0))));
    if (vlSelf->__VdfgTmp_h88198790__0) {
        if (vlSelf->top__DOT__Inst_fetch__DOT___GEN) {
            vlSelf->top__DOT___IFU_io_out_bits_inst 
                = vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg;
            vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0 
                = (7U & (vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg 
                         >> 0xcU));
            vlSelf->top__DOT___IDU_io_reg_data_raddr_1 
                = (0x1fU & (vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg 
                            >> 0xfU));
            vlSelf->top__DOT___IDU_io_reg_data_raddr_2 
                = (0x1fU & (vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg 
                            >> 0x14U));
            vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0 
                = (0x7fU & vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg);
        } else {
            vlSelf->top__DOT___IFU_io_out_bits_inst = 0U;
            vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0 = 0U;
            vlSelf->top__DOT___IDU_io_reg_data_raddr_1 = 0U;
            vlSelf->top__DOT___IDU_io_reg_data_raddr_2 = 0U;
            vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0 = 0U;
        }
    } else {
        vlSelf->top__DOT___IFU_io_out_bits_inst = 0U;
        vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0 = 0U;
        vlSelf->top__DOT___IDU_io_reg_data_raddr_1 = 0U;
        vlSelf->top__DOT___IDU_io_reg_data_raddr_2 = 0U;
        vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0 = 0U;
    }
    vlSelf->top__DOT__IDU__DOT__csr_imm = (((- (IData)(
                                                       ((IData)(vlSelf->__VdfgTmp_h88198790__0) 
                                                        & ((IData)(vlSelf->top__DOT__Inst_fetch__DOT___GEN) 
                                                           & (vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg 
                                                              >> 0x1fU))))) 
                                            << 0xcU) 
                                           | ((IData)(vlSelf->__VdfgTmp_h88198790__0)
                                               ? ((IData)(vlSelf->top__DOT__Inst_fetch__DOT___GEN)
                                                   ? 
                                                  (vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg 
                                                   >> 0x14U)
                                                   : 0U)
                                               : 0U));
    if (vlSelf->top__DOT__EXU__DOT__mem_ren_reg) {
        if (vlSelf->top__DOT__EXU__DOT___GEN_5) {
            vlSelf->top__DOT__Mem__DOT___GEN = 0U;
            vlSelf->top__DOT__Mem__DOT___GEN_0 = 0U;
        } else {
            vlSelf->top__DOT__Mem__DOT___GEN = vlSelf->top__DOT__EXU__DOT__mem_raddr_reg;
            vlSelf->top__DOT__Mem__DOT___GEN_0 = (7U 
                                                  & vlSelf->top__DOT__EXU__DOT__mem_rmask_reg);
        }
    } else {
        vlSelf->top__DOT__Mem__DOT___GEN = 0U;
        vlSelf->top__DOT__Mem__DOT___GEN_0 = 0U;
    }
    if (vlSelf->top__DOT__EXU__DOT__m2IDUstate) {
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 
            = vlSelf->__VdfgTmp_h570e6332__0;
        vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 
            = (0x1fU & vlSelf->__VdfgTmp_h570e6332__0);
        vlSelf->top__DOT___EXU_io_reg_waddr = vlSelf->__VdfgTmp_h29d0e493__0;
    } else {
        vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 = 0U;
        vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 = 0U;
        vlSelf->top__DOT___EXU_io_reg_waddr = 0U;
    }
    if (vlSelf->top__DOT__EXU__DOT__mem_ren_reg) {
        Vtop___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(vlSelf->top__DOT__Mem__DOT___GEN, vlSelf->top__DOT__Mem__DOT___GEN_0, vlSelf->__Vfunc_vlg_pmem_read__1__Vfuncout);
        vlSelf->top__DOT__Mem__DOT___m_m_rdata = vlSelf->__Vfunc_vlg_pmem_read__1__Vfuncout;
    } else {
        vlSelf->top__DOT__Mem__DOT___m_m_rdata = 0U;
    }
    if (vlSelf->top__DOT__EXU__DOT___GEN_7) {
        vlSelf->top__DOT___EXU_io_w_exu_mem_wdata = 0U;
        vlSelf->top__DOT___EXU_io_w_exu_mem_wmask = 0U;
        vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr = 0U;
    } else {
        vlSelf->top__DOT___EXU_io_w_exu_mem_wdata = vlSelf->top__DOT__EXU__DOT__mem_wdata_reg;
        vlSelf->top__DOT___EXU_io_w_exu_mem_wmask = 
            (7U & vlSelf->top__DOT__EXU__DOT__mem_wmask_reg);
        vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr 
            = vlSelf->top__DOT__EXU__DOT__mem_awaddr_reg;
    }
    vlSelf->top__DOT__EXU__DOT___GEN_24 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_22) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19));
    vlSelf->top__DOT__EXU__DOT___GEN_26 = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_22) 
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
    if ((0x4000U & vlSelf->top__DOT___IFU_io_out_bits_inst)) {
        if ((0x2000U & vlSelf->top__DOT___IFU_io_out_bits_inst)) {
            if ((0x1000U & vlSelf->top__DOT___IFU_io_out_bits_inst)) {
                vlSelf->top__DOT__IDU__DOT__casez_tmp = 2U;
                vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xbU;
            } else {
                vlSelf->top__DOT__IDU__DOT__casez_tmp = 3U;
                vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 9U;
            }
        } else if ((0x1000U & vlSelf->top__DOT___IFU_io_out_bits_inst)) {
            vlSelf->top__DOT__IDU__DOT__casez_tmp = 
                (6U | (0U != (vlSelf->top__DOT___IFU_io_out_bits_inst 
                              >> 0x19U)));
            vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xcU;
        } else {
            vlSelf->top__DOT__IDU__DOT__casez_tmp = 4U;
            vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 8U;
        }
    } else if ((0x2000U & vlSelf->top__DOT___IFU_io_out_bits_inst)) {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = ((0x1000U 
                                                  & vlSelf->top__DOT___IFU_io_out_bits_inst)
                                                  ? 9U
                                                  : 8U);
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0x10U;
    } else if ((0x1000U & vlSelf->top__DOT___IFU_io_out_bits_inst)) {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = 5U;
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xdU;
    } else {
        vlSelf->top__DOT__IDU__DOT__casez_tmp = 0x10U;
        vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = 0xaU;
    }
    vlSelf->top__DOT__IDU__DOT___GEN_15 = ((1U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)) 
                                           | (2U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)));
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
    vlSelf->top__DOT__IDU__DOT___GEN_17 = ((0x33U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                           | (0x13U 
                                              == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)));
    vlSelf->top__DOT__IDU__DOT___GEN_12 = ((0x17U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                           | ((0x6fU 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                              | (0x67U 
                                                 == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))));
    vlSelf->top__DOT___EXU_io_csr_wen_1 = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                                           & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_26)) 
                                              & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_16) 
                                                 | (IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0))));
    vlSelf->top__DOT__EXU__DOT___GEN_27 = (1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                                 | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_26)));
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 
        = ((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)
            ? ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_22)
                ? vlSelf->top__DOT__IDU__DOT__exu_data_src1
                : ((6U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                    ? 0U : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_21)
                             ? vlSelf->top__DOT__IDU__DOT__exu_data_imm
                             : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_20)
                                 ? 0U : vlSelf->top__DOT__IDU__DOT__exu_data_csr))))
            : 0U);
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
    if (vlSelf->top__DOT__EXU__DOT__m2IDUstate) {
        if (vlSelf->top__DOT__EXU__DOT___GEN_4) {
            vlSelf->top__DOT___EXU_io_reg_wdata = vlSelf->top__DOT__EXU__DOT___alu_io_result;
            vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc 
                = vlSelf->top__DOT__IDU__DOT__exu_data_snpc;
        } else if ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))) {
            if (vlSelf->top__DOT__EXU__DOT___GEN_3) {
                vlSelf->top__DOT___EXU_io_reg_wdata 
                    = ((IData)(vlSelf->top__DOT__Mem__DOT___GEN_1)
                        ? vlSelf->top__DOT__Mem__DOT__rdata_reg
                        : 0U);
                vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc 
                    = vlSelf->top__DOT__IDU__DOT__exu_data_snpc;
            } else {
                vlSelf->top__DOT___EXU_io_reg_wdata = 0U;
                vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc = 0x80000000U;
            }
        } else {
            vlSelf->top__DOT___EXU_io_reg_wdata = ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)
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
                                                        : 0U)))));
            vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc 
                = ((4U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                    ? (((IData)(vlSelf->top__DOT__EXU__DOT___GEN_8) 
                        & (1U == (((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg) 
                                   & ((IData)(vlSelf->top__DOT__EXU__DOT__bready_reg) 
                                      & (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg)))
                                   ? (IData)(vlSelf->top__DOT__Mem__DOT__bresp_reg)
                                   : 0U))) ? vlSelf->top__DOT__IDU__DOT__exu_data_snpc
                        : 0x80000000U) : ((5U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                           ? ((1U == vlSelf->top__DOT__EXU__DOT___alu_io_result)
                                               ? (vlSelf->top__DOT__IDU__DOT__exu_data_imm 
                                                  + vlSelf->top__DOT__IDU__DOT__exu_data_pc)
                                               : vlSelf->top__DOT__IDU__DOT__exu_data_snpc)
                                           : ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0)
                                               ? vlSelf->top__DOT__IDU__DOT__exu_data_snpc
                                               : ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_17)
                                                   ? vlSelf->top__DOT__EXU__DOT___alu_io_result
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_16)
                                                    ? vlSelf->top__DOT__IDU__DOT__exu_data_snpc
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0)
                                                     ? vlSelf->top__DOT__IDU__DOT__exu_data_csr
                                                     : 0x80000000U))))));
        }
    } else {
        vlSelf->top__DOT___EXU_io_reg_wdata = 0U;
        vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc = 0x80000000U;
    }
    vlSelf->top__DOT__IDU__DOT___GEN_18 = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_17) 
                                           | (3U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)));
    vlSelf->top__DOT__IDU__DOT___GEN_13 = ((0x37U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                           | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_12));
    if (vlSelf->top__DOT__EXU__DOT___GEN_27) {
        vlSelf->top__DOT___EXU_io_csr_waddr_1 = 0U;
        vlSelf->top__DOT___EXU_io_csr_wdata_1 = 0U;
    } else {
        vlSelf->top__DOT___EXU_io_csr_waddr_1 = (3U 
                                                 & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_16)
                                                     ? 
                                                    ((0x341U 
                                                      == vlSelf->top__DOT__IDU__DOT__exu_data_imm)
                                                      ? 0U
                                                      : 
                                                     ((0x342U 
                                                       == vlSelf->top__DOT__IDU__DOT__exu_data_imm)
                                                       ? 1U
                                                       : 
                                                      ((0x300U 
                                                        == vlSelf->top__DOT__IDU__DOT__exu_data_imm)
                                                        ? 2U
                                                        : 
                                                       (- (IData)(
                                                                  (0x305U 
                                                                   == vlSelf->top__DOT__IDU__DOT__exu_data_imm))))))
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                                      ? 1U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                                      << 1U))));
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
    vlSelf->top__DOT__IDU__DOT___GEN_14 = ((IData)(vlSelf->top__DOT__IDU__DOT___GEN_18) 
                                           | ((0x23U 
                                               == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                              | ((0x63U 
                                                  == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT___GEN_13))));
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
    vlSelf->io_inv_flag = ((IData)(vlSelf->top__DOT__IDU__DOT__state) 
                           & ((~ (IData)(vlSelf->top__DOT__IDU__DOT___GEN_14)) 
                              & (0x73U != (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0))));
    vlSelf->top__DOT___IDU_io_reg_data_csr_raddr = 
        ((1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__state)) 
                | ((0x73U != (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0)) 
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
                         : (- (IData)(((0U == (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf084048e__0)) 
                                       & (0U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_raddr_2))))))));
}

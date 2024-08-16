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
                VL_FATAL_MT("build/top.sv", 1232, "", "Settle region did not converge.");
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

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
    vlSelf->top__DOT___Mem_io_r_mem_exu_rresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT___EXU_io_w_exu_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___EXU_io_w_exu_mem_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___EXU_io_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___EXU_io_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT___EXU_io_csr_waddr_1 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT___EXU_io_csr_wdata_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___EXU_io_csr_wen_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___IDU_io_out2exu_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___IDU_io_reg_data_csr_raddr = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__m2EXUstate = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__lastpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__lastsnpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__lasten = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__lastinst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__out_data_pc_REG = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__exu_data_snpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__exu_data_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__exu_data_mem_ren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__exu_data_mem_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__exu_data_m_rmask = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__exu_data_m_wmask = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__exu_data_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__exu_data_src1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__exu_data_src2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__exu_data_csr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__exu_data_csr_a5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__exu_data_mstatus = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__exu_data_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__exu_data_alu_op = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__IDU__DOT__exu_data_inst_type = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__IDU__DOT__lastaluop = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__IDU__DOT__lastimm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__csr_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__casez_tmp = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__IDU__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___GEN_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__memwen_reg_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__rready_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___alu_io_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__lastdnpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__m2IDUstate = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__reg_wen_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__reg_waddr_reg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EXU__DOT__mem_raddr_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__mem_rmask_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__mem_ren_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_22 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_23 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_25 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___GEN_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0 = 0;
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0 = 0;
    vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 = 0;
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
    vlSelf->top__DOT__Reg__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT___m_m_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Mem__DOT__lastawaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Mem__DOT__lastwdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Mem__DOT__rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Mem__DOT__rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__rresp_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__Mem__DOT___GEN = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Mem__DOT___GEN_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Mem__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Mem__DOT__m__DOT__m_wready = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_hd76c6d79__0 = 0;
    vlSelf->__VdfgTmp_h570e6332__0 = 0;
    vlSelf->__Vfunc_vlg_pmem_read__2__Vfuncout = 0;
    vlSelf->__Vdly__top__DOT__IFU__DOT__m2EXUstate = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__IDU__DOT__exu_data_inst_type = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__top__DOT__EXU__DOT__mem_ren_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__top__DOT__IFU__DOT__lastinst = VL_RAND_RESET_I(32);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

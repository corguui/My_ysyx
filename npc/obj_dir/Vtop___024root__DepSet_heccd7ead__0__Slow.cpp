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
    vlSelf->__Vtrigrprev__TOP__top__DOT__IFU__DOT__inst_reg 
        = vlSelf->top__DOT__IFU__DOT__inst_reg;
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
                VL_FATAL_MT("build/top.sv", 2083, "", "Settle region did not converge.");
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
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] top.IFU.inst_reg)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] top.IFU.inst_reg)\n");
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
    vlSelf->top__DOT___SRAM_io_axi_r_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___AXI_arbiter_io_axi_r_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___AXI_arbiter_io_axi_w_wstrb = VL_RAND_RESET_I(4);
    vlSelf->top__DOT___AXI_arbiter_io_axi_w_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___AXI_arbiter_io_axi_b_bready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wstrb = VL_RAND_RESET_I(4);
    vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___AXI_arbiter_io_uart_axi_b_bready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_r_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_r_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_r_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_b_bvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___AXI_arbiter_io_ifu_axi_r_rvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___WBU_io_out2ifu_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___WBU_io_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___WBU_io_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT___WBU_io_csr_waddr_1 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT___WBU_io_csr_wdata_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___WBU_io_csr_wen_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT___LSU_io_lsu_axi_ar_araddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___LSU_io_lsu_axi_w_wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___LSU_io_lsu_axi_w_wstrb = VL_RAND_RESET_I(4);
    vlSelf->top__DOT___LSU_io_lsu_axi_aw_awaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT___IDU_io_reg_data_csr_raddr = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__m2EXUstate = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__exu2in_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__indata_dnpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__rready_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__ardata_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__inst_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__arvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_REG = VL_RAND_RESET_I(32);
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
    vlSelf->top__DOT__IDU__DOT__exu_data_il_us = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__csr_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__casez_tmp = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__IDU__DOT__casez_tmp_0 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__IDU__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT___alu_io_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__m2IDUstate = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__alu_result_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__lsu_data_snpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__lsu_data_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__lsu_data_mem_ren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__lsu_data_mem_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__lsu_data_m_rmask = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__lsu_data_m_wmask = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__lsu_data_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EXU__DOT__lsu_data_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__lsu_data_src1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__lsu_data_src2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__lsu_data_csr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__lsu_data_csr_a5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__lsu_data_mstatus = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__lsu_data_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__EXU__DOT__lsu_data_il_us = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT__lsu_data_alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h24c9dbcb__0 = 0;
    vlSelf->top__DOT__EXU__DOT____VdfgTmp_h6f82b556__0 = 0;
    vlSelf->top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0 = 0;
    vlSelf->top__DOT__LSU__DOT__io_lsu_axi_b_bready_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__io_lsu_axi_r_rready_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__m2EXUstate = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__exu2in_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__exu2in_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__rready_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__mem_raddr_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__mem_rmask_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__mem_ren_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__io_lsu_axi_ar_arvalid_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__bready_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__mem_awaddr_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__mem_wstrb_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__mem_wdata_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__mem_wen_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__m_wen_reg_delay = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__io_lsu_axi_aw_awvalid_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT___GEN_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__io_lsu_axi_w_wvalid_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__bvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__wbu_data_snpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__wbu_data_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__wbu_data_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__wbu_data_src1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__wbu_data_csr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__wbu_data_csr_a5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__wbu_data_mstatus = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__wbu_data_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__wbu_data_mem_bresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__LSU__DOT__wbu_data_alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT____VdfgTmp_h791150d4__0 = 0;
    vlSelf->top__DOT__LSU__DOT____VdfgTmp_hd83711f5__0 = 0;
    vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__dataReg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__delay_ar__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__delay_r__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__delay_r__DOT__dataReg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__delay_r__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__dataReg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__delay_aw__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__delay_w__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__delay_w__DOT__dataReg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__delay_w__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__delay_b__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__LSU__DOT__delay_b__DOT__dataReg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__delay_b__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT__ifu_outdata_dnpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WBU__DOT__m2LSUstate = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT__lastdnpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WBU__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT___GEN_17 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WBU__DOT____VdfgTmp_hc8eaa83d__0 = 0;
    vlSelf->top__DOT__WBU__DOT____VdfgTmp_h2b8a6806__0 = 0;
    vlSelf->top__DOT__WBU__DOT____VdfgTmp_h43fa6f6f__0 = 0;
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
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_arbiter__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hc8f955bb__0 = 0;
    vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_ha75ffa7c__0 = 0;
    vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hf6818992__0 = 0;
    vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hb0ea07fc__0 = 0;
    vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hff3363a0__0 = 0;
    vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_h76d06acc__0 = 0;
    vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_ha6f808b4__0 = 0;
    vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_h0eb34983__0 = 0;
    vlSelf->top__DOT__RTC__DOT__rtc_raddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RTC__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RTC__DOT__rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RTC__DOT__rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RTC__DOT__rresp_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__RTC__DOT__arvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RTC__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RTC__DOT__rvalid_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RTC__DOT__delay__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RTC__DOT__delay__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RTC__DOT__delay__DOT__dataReg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RTC__DOT__delay__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__SRAM__DOT___m_m_rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__SRAM__DOT__rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__SRAM__DOT__rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__SRAM__DOT__rresp_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__SRAM__DOT__arvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__SRAM__DOT__bvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__SRAM__DOT__bresp_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__SRAM__DOT__waddr_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__SRAM__DOT__wstrb_reg = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__SRAM__DOT__awvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__SRAM__DOT__wvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__SRAM__DOT___GEN = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__SRAM__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__SRAM__DOT__rvalid_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__SRAM__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__SRAM__DOT__bvalid_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__SRAM__DOT__delay__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__SRAM__DOT__delay__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__SRAM__DOT__delay__DOT__dataReg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__SRAM__DOT__delay__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__dataReg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__SRAM__DOT__delay_w__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__bvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__bresp_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__UART__DOT__waddr_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__UART__DOT__wstrb_reg = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__UART__DOT__awvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__wvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__bvalid_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__UART__DOT__delay_w__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__UART__DOT__delay_w__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__UART__DOT__delay_w__DOT__dataReg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__UART__DOT__delay_w__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_hb1f015da__0 = 0;
    vlSelf->__VdfgTmp_h38812605__0 = 0;
    vlSelf->__VdfgTmp_h149de1f0__0 = 0;
    vlSelf->__Vfunc_vlg_pmem_read__1__Vfuncout = 0;
    vlSelf->__Vdly__top__DOT__IFU__DOT__m2EXUstate = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top__DOT__IFU__DOT__arvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__top__DOT__IFU__DOT__inst_reg = VL_RAND_RESET_I(32);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

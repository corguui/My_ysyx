// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBit(c+234,"inv_flag", false,-1);
    tracep->pushNamePrefix("AXI_arbiter ");
    tracep->declBus(c+201,"io_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+235,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+236,"io_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+202,"io_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+1,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+237,"io_axi_r_rready", false,-1);
    tracep->declBus(c+238,"io_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+239,"io_axi_aw_awvalid", false,-1);
    tracep->declBus(c+203,"io_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+240,"io_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+241,"io_axi_w_wvalid", false,-1);
    tracep->declBus(c+204,"io_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+2,"io_axi_b_bvalid", false,-1);
    tracep->declBit(c+242,"io_axi_b_bready", false,-1);
    tracep->declBus(c+243,"io_uart_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+244,"io_uart_axi_aw_awvalid", false,-1);
    tracep->declBus(c+205,"io_uart_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+245,"io_uart_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+246,"io_uart_axi_w_wvalid", false,-1);
    tracep->declBus(c+206,"io_uart_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+3,"io_uart_axi_b_bvalid", false,-1);
    tracep->declBit(c+247,"io_uart_axi_b_bready", false,-1);
    tracep->declBus(c+207,"io_rtc_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+248,"io_rtc_axi_ar_arvalid", false,-1);
    tracep->declBus(c+208,"io_rtc_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+209,"io_rtc_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+4,"io_rtc_axi_r_rvalid", false,-1);
    tracep->declBit(c+249,"io_rtc_axi_r_rready", false,-1);
    tracep->declBus(c+5,"io_lsu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+6,"io_lsu_axi_ar_arvalid", false,-1);
    tracep->declBus(c+250,"io_lsu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+210,"io_lsu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+251,"io_lsu_axi_r_rvalid", false,-1);
    tracep->declBit(c+7,"io_lsu_axi_r_rready", false,-1);
    tracep->declBus(c+8,"io_lsu_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+9,"io_lsu_axi_aw_awvalid", false,-1);
    tracep->declBit(c+211,"io_lsu_axi_aw_awready", false,-1);
    tracep->declBus(c+10,"io_lsu_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+11,"io_lsu_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+12,"io_lsu_axi_w_wvalid", false,-1);
    tracep->declBit(c+211,"io_lsu_axi_w_wready", false,-1);
    tracep->declBus(c+212,"io_lsu_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+252,"io_lsu_axi_b_bvalid", false,-1);
    tracep->declBit(c+13,"io_lsu_axi_b_bready", false,-1);
    tracep->declBit(c+14,"io_lsu_sta", false,-1);
    tracep->declBus(c+213,"io_ifu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+253,"io_ifu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+253,"io_ifu_axi_ar_arready", false,-1);
    tracep->declBus(c+254,"io_ifu_axi_r_rdata", false,-1, 31,0);
    tracep->declBit(c+255,"io_ifu_axi_r_rvalid", false,-1);
    tracep->declBit(c+256,"io_ifu_axi_r_rready", false,-1);
    tracep->declBit(c+214,"io_ifu_axi_b_bvalid", false,-1);
    tracep->declBit(c+253,"io_ifu_sta", false,-1);
    tracep->declBit(c+211,"io_lsu_axi_w_wready_0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBit(c+15,"io_idu2in_valid", false,-1);
    tracep->declBus(c+16,"io_idu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+17,"io_idu2in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+18,"io_idu2in_bits_mem_ren", false,-1);
    tracep->declBit(c+19,"io_idu2in_bits_mem_wen", false,-1);
    tracep->declBus(c+20,"io_idu2in_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+21,"io_idu2in_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+22,"io_idu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+23,"io_idu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+24,"io_idu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+25,"io_idu2in_bits_src2", false,-1, 31,0);
    tracep->declBus(c+26,"io_idu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+27,"io_idu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+28,"io_idu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+29,"io_idu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+30,"io_idu2in_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+31,"io_idu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+32,"io_idu2in_bits_il_us", false,-1);
    tracep->declBit(c+33,"io_out2lsu_valid", false,-1);
    tracep->declBus(c+34,"io_out2lsu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+35,"io_out2lsu_bits_pc", false,-1, 31,0);
    tracep->declBit(c+36,"io_out2lsu_bits_mem_ren", false,-1);
    tracep->declBit(c+37,"io_out2lsu_bits_mem_wen", false,-1);
    tracep->declBus(c+38,"io_out2lsu_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+39,"io_out2lsu_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+40,"io_out2lsu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+41,"io_out2lsu_bits_reg_wen", false,-1);
    tracep->declBus(c+42,"io_out2lsu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+43,"io_out2lsu_bits_src2", false,-1, 31,0);
    tracep->declBus(c+44,"io_out2lsu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+45,"io_out2lsu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+46,"io_out2lsu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+47,"io_out2lsu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+48,"io_out2lsu_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+49,"io_out2lsu_bits_il_us", false,-1);
    tracep->declBus(c+50,"io_out2lsu_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+51,"m2IDUstate", false,-1);
    tracep->declBit(c+33,"state_reg", false,-1);
    tracep->declBus(c+52,"alu_result_reg", false,-1, 31,0);
    tracep->declBus(c+34,"lsu_data_snpc", false,-1, 31,0);
    tracep->declBus(c+35,"lsu_data_pc", false,-1, 31,0);
    tracep->declBit(c+36,"lsu_data_mem_ren", false,-1);
    tracep->declBit(c+37,"lsu_data_mem_wen", false,-1);
    tracep->declBus(c+38,"lsu_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+39,"lsu_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+40,"lsu_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+41,"lsu_data_reg_wen", false,-1);
    tracep->declBus(c+42,"lsu_data_src1", false,-1, 31,0);
    tracep->declBus(c+43,"lsu_data_src2", false,-1, 31,0);
    tracep->declBus(c+44,"lsu_data_csr", false,-1, 31,0);
    tracep->declBus(c+45,"lsu_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+46,"lsu_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+47,"lsu_data_imm", false,-1, 31,0);
    tracep->declBus(c+48,"lsu_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+49,"lsu_data_il_us", false,-1);
    tracep->declBus(c+50,"lsu_data_alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+53,"io_src1", false,-1, 31,0);
    tracep->declBus(c+54,"io_src2", false,-1, 31,0);
    tracep->declBus(c+55,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+56,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBit(c+256,"io_ifu2in_valid", false,-1);
    tracep->declBus(c+257,"io_ifu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+258,"io_ifu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+259,"io_ifu2in_bits_inst", false,-1, 31,0);
    tracep->declBit(c+15,"io_out2exu_valid", false,-1);
    tracep->declBus(c+16,"io_out2exu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+17,"io_out2exu_bits_pc", false,-1, 31,0);
    tracep->declBit(c+18,"io_out2exu_bits_mem_ren", false,-1);
    tracep->declBit(c+19,"io_out2exu_bits_mem_wen", false,-1);
    tracep->declBus(c+20,"io_out2exu_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+21,"io_out2exu_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+22,"io_out2exu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+23,"io_out2exu_bits_reg_wen", false,-1);
    tracep->declBus(c+24,"io_out2exu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+25,"io_out2exu_bits_src2", false,-1, 31,0);
    tracep->declBus(c+26,"io_out2exu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+27,"io_out2exu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+28,"io_out2exu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+29,"io_out2exu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+30,"io_out2exu_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+31,"io_out2exu_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+32,"io_out2exu_bits_il_us", false,-1);
    tracep->declBus(c+260,"io_reg_data_raddr_1", false,-1, 4,0);
    tracep->declBus(c+261,"io_reg_data_rdata_1", false,-1, 31,0);
    tracep->declBus(c+262,"io_reg_data_raddr_2", false,-1, 4,0);
    tracep->declBus(c+263,"io_reg_data_rdata_2", false,-1, 31,0);
    tracep->declBus(c+264,"io_reg_data_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+215,"io_reg_data_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+57,"io_reg_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+58,"io_reg_data_mstatus", false,-1, 31,0);
    tracep->declBit(c+234,"io_inv_flag", false,-1);
    tracep->declBus(c+16,"exu_data_snpc", false,-1, 31,0);
    tracep->declBus(c+17,"exu_data_pc", false,-1, 31,0);
    tracep->declBit(c+18,"exu_data_mem_ren", false,-1);
    tracep->declBit(c+19,"exu_data_mem_wen", false,-1);
    tracep->declBus(c+20,"exu_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+21,"exu_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+22,"exu_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+23,"exu_data_reg_wen", false,-1);
    tracep->declBus(c+24,"exu_data_src1", false,-1, 31,0);
    tracep->declBus(c+25,"exu_data_src2", false,-1, 31,0);
    tracep->declBus(c+26,"exu_data_csr", false,-1, 31,0);
    tracep->declBus(c+27,"exu_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+28,"exu_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+29,"exu_data_imm", false,-1, 31,0);
    tracep->declBus(c+30,"exu_data_alu_op", false,-1, 4,0);
    tracep->declBus(c+31,"exu_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+32,"exu_data_il_us", false,-1);
    tracep->declBit(c+59,"state", false,-1);
    tracep->declBit(c+15,"state_reg", false,-1);
    tracep->declBus(c+265,"csr_imm", false,-1, 31,0);
    tracep->declBus(c+266,"casez_tmp", false,-1, 4,0);
    tracep->declBus(c+267,"casez_tmp_0", false,-1, 4,0);
    tracep->pushNamePrefix("npc_break ");
    tracep->declBus(c+259,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBit(c+256,"io_out_valid", false,-1);
    tracep->declBus(c+257,"io_out_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+258,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+259,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBit(c+268,"io_exu2in_valid", false,-1);
    tracep->declBus(c+60,"io_exu2in_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+213,"io_ifu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+253,"io_ifu_axi_ar_arvalid", false,-1);
    tracep->declBit(c+253,"io_ifu_axi_ar_arready", false,-1);
    tracep->declBus(c+254,"io_ifu_axi_r_rdata", false,-1, 31,0);
    tracep->declBit(c+255,"io_ifu_axi_r_rvalid", false,-1);
    tracep->declBit(c+256,"io_ifu_axi_r_rready", false,-1);
    tracep->declBit(c+214,"io_ifu_axi_b_bvalid", false,-1);
    tracep->declBit(c+253,"io_ifu_sta", false,-1);
    tracep->declBus(c+258,"io_out_bits_pc_0", false,-1, 31,0);
    tracep->declBit(c+269,"m2EXUstate", false,-1);
    tracep->declBit(c+61,"exu2in_reg", false,-1);
    tracep->declBus(c+62,"indata_dnpc", false,-1, 31,0);
    tracep->declBit(c+256,"rready_reg", false,-1);
    tracep->declBus(c+63,"ardata_reg", false,-1, 31,0);
    tracep->declBus(c+259,"inst_reg", false,-1, 31,0);
    tracep->declBit(c+253,"arvalid_reg", false,-1);
    tracep->declBus(c+64,"io_out_bits_pc_REG", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBit(c+33,"io_exu2in_valid", false,-1);
    tracep->declBus(c+34,"io_exu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+35,"io_exu2in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+36,"io_exu2in_bits_mem_ren", false,-1);
    tracep->declBit(c+37,"io_exu2in_bits_mem_wen", false,-1);
    tracep->declBus(c+38,"io_exu2in_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+39,"io_exu2in_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+40,"io_exu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+41,"io_exu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+42,"io_exu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+43,"io_exu2in_bits_src2", false,-1, 31,0);
    tracep->declBus(c+44,"io_exu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+45,"io_exu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+46,"io_exu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+47,"io_exu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+48,"io_exu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+49,"io_exu2in_bits_il_us", false,-1);
    tracep->declBus(c+50,"io_exu2in_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+65,"io_out2wbu_valid", false,-1);
    tracep->declBus(c+66,"io_out2wbu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+67,"io_out2wbu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+68,"io_out2wbu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+69,"io_out2wbu_bits_reg_wen", false,-1);
    tracep->declBus(c+70,"io_out2wbu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+71,"io_out2wbu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+72,"io_out2wbu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+73,"io_out2wbu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+74,"io_out2wbu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+75,"io_out2wbu_bits_inst_type", false,-1, 3,0);
    tracep->declBus(c+76,"io_out2wbu_bits_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+77,"io_out2wbu_bits_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+78,"io_out2wbu_bits_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+79,"io_out2wbu_bits_alu_result", false,-1, 31,0);
    tracep->declBus(c+5,"io_lsu_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+6,"io_lsu_axi_ar_arvalid", false,-1);
    tracep->declBus(c+250,"io_lsu_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+210,"io_lsu_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+251,"io_lsu_axi_r_rvalid", false,-1);
    tracep->declBit(c+7,"io_lsu_axi_r_rready", false,-1);
    tracep->declBus(c+10,"io_lsu_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+11,"io_lsu_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+12,"io_lsu_axi_w_wvalid", false,-1);
    tracep->declBit(c+211,"io_lsu_axi_w_wready", false,-1);
    tracep->declBus(c+8,"io_lsu_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+9,"io_lsu_axi_aw_awvalid", false,-1);
    tracep->declBit(c+211,"io_lsu_axi_aw_awready", false,-1);
    tracep->declBus(c+212,"io_lsu_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+252,"io_lsu_axi_b_bvalid", false,-1);
    tracep->declBit(c+13,"io_lsu_axi_b_bready", false,-1);
    tracep->declBit(c+14,"io_lsu_sta", false,-1);
    tracep->declBit(c+13,"io_lsu_axi_b_bready_0", false,-1);
    tracep->declBit(c+7,"io_lsu_axi_r_rready_0", false,-1);
    tracep->declBit(c+80,"m2EXUstate", false,-1);
    tracep->declBit(c+81,"state_reg", false,-1);
    tracep->declBit(c+65,"io_out2wbu_valid_0", false,-1);
    tracep->declBit(c+82,"exu2in_valid", false,-1);
    tracep->declBit(c+83,"exu2in_valid_reg", false,-1);
    tracep->declBit(c+84,"rready_reg", false,-1);
    tracep->declBus(c+85,"mem_raddr_reg", false,-1, 31,0);
    tracep->declBus(c+86,"mem_rmask_reg", false,-1, 31,0);
    tracep->declBit(c+87,"mem_ren_reg", false,-1);
    tracep->declBit(c+6,"io_lsu_axi_ar_arvalid_0", false,-1);
    tracep->declBit(c+88,"rvalid_reg", false,-1);
    tracep->declBit(c+89,"bready_reg", false,-1);
    tracep->declBus(c+90,"mem_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+91,"mem_wstrb_reg", false,-1, 31,0);
    tracep->declBus(c+92,"mem_wdata_reg", false,-1, 31,0);
    tracep->declBit(c+93,"mem_wen_reg", false,-1);
    tracep->declBit(c+94,"m_wen_reg_delay", false,-1);
    tracep->declBit(c+9,"io_lsu_axi_aw_awvalid_0", false,-1);
    tracep->declBit(c+12,"io_lsu_axi_w_wvalid_0", false,-1);
    tracep->declBit(c+95,"bvalid_reg", false,-1);
    tracep->declBus(c+66,"wbu_data_snpc", false,-1, 31,0);
    tracep->declBus(c+67,"wbu_data_pc", false,-1, 31,0);
    tracep->declBus(c+68,"wbu_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+69,"wbu_data_reg_wen", false,-1);
    tracep->declBus(c+70,"wbu_data_src1", false,-1, 31,0);
    tracep->declBus(c+71,"wbu_data_csr", false,-1, 31,0);
    tracep->declBus(c+72,"wbu_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+73,"wbu_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+74,"wbu_data_imm", false,-1, 31,0);
    tracep->declBus(c+75,"wbu_data_inst_type", false,-1, 3,0);
    tracep->declBus(c+76,"wbu_data_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+77,"wbu_data_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+78,"wbu_data_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+79,"wbu_data_alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("delay_ar ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBus(c+96,"io_inData", false,-1, 31,0);
    tracep->declBit(c+97,"io_inValid", false,-1);
    tracep->declBus(c+98,"io_outData", false,-1, 31,0);
    tracep->declBit(c+99,"io_delayDone", false,-1);
    tracep->declBus(c+100,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+101,"counter", false,-1, 4,0);
    tracep->declBus(c+102,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_aw ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBus(c+103,"io_inData", false,-1, 31,0);
    tracep->declBit(c+104,"io_inValid", false,-1);
    tracep->declBus(c+105,"io_outData", false,-1, 31,0);
    tracep->declBit(c+106,"io_delayDone", false,-1);
    tracep->declBus(c+107,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+108,"counter", false,-1, 4,0);
    tracep->declBus(c+109,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_b ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBus(c+216,"io_inData", false,-1, 31,0);
    tracep->declBit(c+217,"io_inValid", false,-1);
    tracep->declBus(c+110,"io_outData", false,-1, 31,0);
    tracep->declBit(c+218,"io_delayDone", false,-1);
    tracep->declBus(c+111,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+112,"counter", false,-1, 4,0);
    tracep->declBus(c+113,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_r ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBus(c+270,"io_inData", false,-1, 31,0);
    tracep->declBit(c+219,"io_inValid", false,-1);
    tracep->declBus(c+114,"io_outData", false,-1, 31,0);
    tracep->declBit(c+220,"io_delayDone", false,-1);
    tracep->declBus(c+115,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+116,"counter", false,-1, 4,0);
    tracep->declBus(c+117,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_w ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBus(c+103,"io_inData", false,-1, 31,0);
    tracep->declBit(c+104,"io_inValid", false,-1);
    tracep->declBus(c+118,"io_outData", false,-1, 31,0);
    tracep->declBit(c+119,"io_delayDone", false,-1);
    tracep->declBus(c+120,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+121,"counter", false,-1, 4,0);
    tracep->declBus(c+122,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RTC ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBus(c+207,"io_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+248,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+208,"io_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+209,"io_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+4,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+249,"io_axi_r_rready", false,-1);
    tracep->declBus(c+271,"rtc_raddr", false,-1, 31,0);
    tracep->declQuad(c+123,"mtime", false,-1, 63,0);
    tracep->declBus(c+125,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+4,"rvalid_reg", false,-1);
    tracep->declBus(c+126,"rresp_reg", false,-1, 1,0);
    tracep->declBit(c+127,"arvalid_reg", false,-1);
    tracep->declBit(c+272,"rvalid_en", false,-1);
    tracep->pushNamePrefix("delay ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBus(c+221,"io_inData", false,-1, 31,0);
    tracep->declBit(c+222,"io_inValid", false,-1);
    tracep->declBus(c+128,"io_outData", false,-1, 31,0);
    tracep->declBit(c+223,"io_delayDone", false,-1);
    tracep->declBus(c+129,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+130,"counter", false,-1, 4,0);
    tracep->declBus(c+131,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Reg ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBit(c+132,"io_csr_wen_2", false,-1);
    tracep->declBus(c+133,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBus(c+260,"io_reg_read_raddr_1", false,-1, 4,0);
    tracep->declBus(c+261,"io_reg_read_rdata_1", false,-1, 31,0);
    tracep->declBus(c+262,"io_reg_read_raddr_2", false,-1, 4,0);
    tracep->declBus(c+263,"io_reg_read_rdata_2", false,-1, 31,0);
    tracep->declBus(c+264,"io_reg_read_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+215,"io_reg_read_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+57,"io_reg_read_csr_a5", false,-1, 31,0);
    tracep->declBus(c+58,"io_reg_read_mstatus", false,-1, 31,0);
    tracep->declBit(c+134,"io_wen", false,-1);
    tracep->declBus(c+135,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+136,"io_wdata", false,-1, 31,0);
    tracep->declBit(c+137,"io_csr_wen_1", false,-1);
    tracep->declBus(c+138,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+139,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBus(c+140,"csr_0", false,-1, 31,0);
    tracep->declBus(c+141,"csr_1", false,-1, 31,0);
    tracep->declBus(c+58,"csr_2", false,-1, 31,0);
    tracep->declBus(c+142,"csr_3", false,-1, 31,0);
    tracep->declBus(c+143,"reg_0", false,-1, 31,0);
    tracep->declBus(c+144,"reg_1", false,-1, 31,0);
    tracep->declBus(c+145,"reg_2", false,-1, 31,0);
    tracep->declBus(c+146,"reg_3", false,-1, 31,0);
    tracep->declBus(c+147,"reg_4", false,-1, 31,0);
    tracep->declBus(c+148,"reg_5", false,-1, 31,0);
    tracep->declBus(c+149,"reg_6", false,-1, 31,0);
    tracep->declBus(c+150,"reg_7", false,-1, 31,0);
    tracep->declBus(c+151,"reg_8", false,-1, 31,0);
    tracep->declBus(c+152,"reg_9", false,-1, 31,0);
    tracep->declBus(c+153,"reg_10", false,-1, 31,0);
    tracep->declBus(c+154,"reg_11", false,-1, 31,0);
    tracep->declBus(c+155,"reg_12", false,-1, 31,0);
    tracep->declBus(c+156,"reg_13", false,-1, 31,0);
    tracep->declBus(c+157,"reg_14", false,-1, 31,0);
    tracep->declBus(c+57,"reg_15", false,-1, 31,0);
    tracep->declBus(c+158,"reg_16", false,-1, 31,0);
    tracep->declBus(c+159,"reg_17", false,-1, 31,0);
    tracep->declBus(c+160,"reg_18", false,-1, 31,0);
    tracep->declBus(c+161,"reg_19", false,-1, 31,0);
    tracep->declBus(c+162,"reg_20", false,-1, 31,0);
    tracep->declBus(c+163,"reg_21", false,-1, 31,0);
    tracep->declBus(c+164,"reg_22", false,-1, 31,0);
    tracep->declBus(c+165,"reg_23", false,-1, 31,0);
    tracep->declBus(c+166,"reg_24", false,-1, 31,0);
    tracep->declBus(c+167,"reg_25", false,-1, 31,0);
    tracep->declBus(c+168,"reg_26", false,-1, 31,0);
    tracep->declBus(c+169,"reg_27", false,-1, 31,0);
    tracep->declBus(c+170,"reg_28", false,-1, 31,0);
    tracep->declBus(c+171,"reg_29", false,-1, 31,0);
    tracep->declBus(c+172,"reg_30", false,-1, 31,0);
    tracep->declBus(c+173,"reg_31", false,-1, 31,0);
    tracep->declBus(c+261,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+263,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+215,"casez_tmp_1", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBus(c+201,"io_axi_ar_araddr", false,-1, 31,0);
    tracep->declBit(c+235,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+236,"io_axi_r_rdata", false,-1, 31,0);
    tracep->declBus(c+202,"io_axi_r_rresp", false,-1, 1,0);
    tracep->declBit(c+1,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+237,"io_axi_r_rready", false,-1);
    tracep->declBus(c+203,"io_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+240,"io_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+241,"io_axi_w_wvalid", false,-1);
    tracep->declBus(c+238,"io_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+239,"io_axi_aw_awvalid", false,-1);
    tracep->declBus(c+204,"io_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+2,"io_axi_b_bvalid", false,-1);
    tracep->declBit(c+242,"io_axi_b_bready", false,-1);
    tracep->declBus(c+174,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+1,"rvalid_reg", false,-1);
    tracep->declBus(c+175,"rresp_reg", false,-1, 1,0);
    tracep->declBit(c+176,"arvalid_reg", false,-1);
    tracep->declBit(c+2,"bvalid_reg", false,-1);
    tracep->declBus(c+177,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+178,"waddr_reg", false,-1, 31,0);
    tracep->declBus(c+179,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+180,"awvalid_reg", false,-1);
    tracep->declBit(c+181,"wvalid_reg", false,-1);
    tracep->declBit(c+273,"rvalid_en", false,-1);
    tracep->declBit(c+274,"bvalid_en", false,-1);
    tracep->pushNamePrefix("delay ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBus(c+275,"io_inData", false,-1, 31,0);
    tracep->declBit(c+224,"io_inValid", false,-1);
    tracep->declBus(c+182,"io_outData", false,-1, 31,0);
    tracep->declBit(c+225,"io_delayDone", false,-1);
    tracep->declBus(c+183,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+184,"counter", false,-1, 4,0);
    tracep->declBus(c+185,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_w ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBus(c+276,"io_inData", false,-1, 31,0);
    tracep->declBit(c+226,"io_inValid", false,-1);
    tracep->declBus(c+186,"io_outData", false,-1, 31,0);
    tracep->declBit(c+227,"io_delayDone", false,-1);
    tracep->declBus(c+187,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+188,"counter", false,-1, 4,0);
    tracep->declBus(c+189,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBus(c+277,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+228,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+278,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+229,"m_wen", false,-1);
    tracep->declBus(c+279,"m_raddr", false,-1, 31,0);
    tracep->declBus(c+280,"m_rmask", false,-1, 31,0);
    tracep->declBit(c+235,"m_ren", false,-1);
    tracep->declBus(c+281,"m_rdata", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("UART ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBus(c+205,"io_axi_w_wdata", false,-1, 31,0);
    tracep->declBus(c+245,"io_axi_w_wstrb", false,-1, 3,0);
    tracep->declBit(c+246,"io_axi_w_wvalid", false,-1);
    tracep->declBus(c+243,"io_axi_aw_awaddr", false,-1, 31,0);
    tracep->declBit(c+244,"io_axi_aw_awvalid", false,-1);
    tracep->declBus(c+206,"io_axi_b_bresp", false,-1, 1,0);
    tracep->declBit(c+3,"io_axi_b_bvalid", false,-1);
    tracep->declBit(c+247,"io_axi_b_bready", false,-1);
    tracep->declBit(c+3,"bvalid_reg", false,-1);
    tracep->declBus(c+190,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+191,"waddr_reg", false,-1, 31,0);
    tracep->declBus(c+192,"wstrb_reg", false,-1, 3,0);
    tracep->declBit(c+193,"awvalid_reg", false,-1);
    tracep->declBit(c+194,"wvalid_reg", false,-1);
    tracep->declBit(c+282,"bvalid_en", false,-1);
    tracep->pushNamePrefix("delay_w ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBus(c+283,"io_inData", false,-1, 31,0);
    tracep->declBit(c+230,"io_inValid", false,-1);
    tracep->declBus(c+195,"io_outData", false,-1, 31,0);
    tracep->declBit(c+231,"io_delayDone", false,-1);
    tracep->declBus(c+196,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+197,"counter", false,-1, 4,0);
    tracep->declBus(c+198,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+232,"wen", false,-1);
    tracep->declBus(c+284,"addr", false,-1, 31,0);
    tracep->declBus(c+233,"data", false,-1, 31,0);
    tracep->declBus(c+285,"mask", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+286,"clock", false,-1);
    tracep->declBit(c+287,"reset", false,-1);
    tracep->declBit(c+65,"io_lsu2in_valid", false,-1);
    tracep->declBus(c+66,"io_lsu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+67,"io_lsu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+68,"io_lsu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+69,"io_lsu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+70,"io_lsu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+71,"io_lsu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+72,"io_lsu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+73,"io_lsu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+74,"io_lsu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+75,"io_lsu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBus(c+76,"io_lsu2in_bits_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+77,"io_lsu2in_bits_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+78,"io_lsu2in_bits_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+79,"io_lsu2in_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+268,"io_out2ifu_valid", false,-1);
    tracep->declBus(c+60,"io_out2ifu_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+136,"io_reg_wdata", false,-1, 31,0);
    tracep->declBit(c+134,"io_reg_wen", false,-1);
    tracep->declBus(c+135,"io_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+138,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+139,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBit(c+137,"io_csr_wen_1", false,-1);
    tracep->declBus(c+133,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBit(c+132,"io_csr_wen_2", false,-1);
    tracep->declBus(c+60,"ifu_outdata_dnpc", false,-1, 31,0);
    tracep->declBit(c+199,"m2LSUstate", false,-1);
    tracep->declBus(c+200,"lastdnpc", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__SRAM__DOT__rvalid_reg));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__SRAM__DOT__bvalid_reg));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__UART__DOT__bvalid_reg));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__RTC__DOT__rvalid_reg));
    bufp->fullIData(oldp+5,(vlSelf->top__DOT___LSU_io_lsu_axi_ar_araddr),32);
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_ar_arvalid_0));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_r_rready_0));
    bufp->fullIData(oldp+8,(vlSelf->top__DOT___LSU_io_lsu_axi_aw_awaddr),32);
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_aw_awvalid_0));
    bufp->fullIData(oldp+10,(vlSelf->top__DOT___LSU_io_lsu_axi_w_wdata),32);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT___LSU_io_lsu_axi_w_wstrb),4);
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_w_wvalid_0));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_b_bready_0));
    bufp->fullBit(oldp+14,(((IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_ar_arvalid_0) 
                            | ((IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_aw_awvalid_0) 
                               & (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_w_wvalid_0)))));
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__IDU__DOT__state_reg));
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__IDU__DOT__exu_data_snpc),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__IDU__DOT__exu_data_pc),32);
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__IDU__DOT__exu_data_mem_ren));
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__IDU__DOT__exu_data_mem_wen));
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__IDU__DOT__exu_data_m_rmask),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__IDU__DOT__exu_data_m_wmask),32);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__IDU__DOT__exu_data_reg_waddr),5);
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen));
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__IDU__DOT__exu_data_src1),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__IDU__DOT__exu_data_src2),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__IDU__DOT__exu_data_csr),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__IDU__DOT__exu_data_csr_a5),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__IDU__DOT__exu_data_mstatus),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__IDU__DOT__exu_data_imm),32);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op),5);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type),4);
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__IDU__DOT__exu_data_il_us));
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__EXU__DOT__state_reg));
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__EXU__DOT__lsu_data_snpc),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__EXU__DOT__lsu_data_pc),32);
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__EXU__DOT__lsu_data_mem_ren));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__EXU__DOT__lsu_data_mem_wen));
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__EXU__DOT__lsu_data_m_rmask),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__EXU__DOT__lsu_data_m_wmask),32);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__EXU__DOT__lsu_data_reg_waddr),5);
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__EXU__DOT__lsu_data_reg_wen));
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__EXU__DOT__lsu_data_src1),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__EXU__DOT__lsu_data_src2),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__EXU__DOT__lsu_data_csr),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__EXU__DOT__lsu_data_csr_a5),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__EXU__DOT__lsu_data_mstatus),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__EXU__DOT__lsu_data_imm),32);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type),4);
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__EXU__DOT__lsu_data_il_us));
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__EXU__DOT__lsu_data_alu_result),32);
    bufp->fullBit(oldp+51,(vlSelf->top__DOT__EXU__DOT__m2IDUstate));
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__EXU__DOT__alu_result_reg),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__EXU__DOT___alu_io_result),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__Reg__DOT__reg_15),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__Reg__DOT__csr_2),32);
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__IDU__DOT__state));
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__WBU__DOT__ifu_outdata_dnpc),32);
    bufp->fullBit(oldp+61,(vlSelf->top__DOT__IFU__DOT__exu2in_reg));
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__IFU__DOT__indata_dnpc),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__IFU__DOT__ardata_reg),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_REG),32);
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0));
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__LSU__DOT__wbu_data_snpc),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__LSU__DOT__wbu_data_pc),32);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_waddr),5);
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen));
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__LSU__DOT__wbu_data_src1),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__LSU__DOT__wbu_data_csr),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__LSU__DOT__wbu_data_csr_a5),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__LSU__DOT__wbu_data_mstatus),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__LSU__DOT__wbu_data_imm),32);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type),4);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rdata),32);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_bresp),2);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rresp),2);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__LSU__DOT__wbu_data_alu_result),32);
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__LSU__DOT__m2EXUstate));
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__LSU__DOT__state_reg));
    bufp->fullBit(oldp+82,(vlSelf->top__DOT__LSU__DOT__exu2in_valid));
    bufp->fullBit(oldp+83,(vlSelf->top__DOT__LSU__DOT__exu2in_valid_reg));
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__LSU__DOT__rready_reg));
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__LSU__DOT__mem_raddr_reg),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__LSU__DOT__mem_rmask_reg),32);
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__LSU__DOT__mem_ren_reg));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__LSU__DOT__rvalid_reg));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__LSU__DOT__bready_reg));
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__LSU__DOT__mem_awaddr_reg),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__LSU__DOT__mem_wstrb_reg),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__LSU__DOT__mem_wdata_reg),32);
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__LSU__DOT__mem_wen_reg));
    bufp->fullBit(oldp+94,(vlSelf->top__DOT__LSU__DOT__m_wen_reg_delay));
    bufp->fullBit(oldp+95,(vlSelf->top__DOT__LSU__DOT__bvalid_reg));
    bufp->fullIData(oldp+96,(((3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type))
                               ? (IData)(vlSelf->top__DOT__LSU__DOT__mem_ren_reg)
                               : 0U)),32);
    bufp->fullBit(oldp+97,(((3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
                            & (IData)(vlSelf->top__DOT__LSU__DOT__exu2in_valid_reg))));
    bufp->fullIData(oldp+98,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter))
                               ? vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__dataReg
                               : 0U)),32);
    bufp->fullBit(oldp+99,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT___GEN_0)) 
                            & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter)) 
                               & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter))))));
    bufp->fullCData(oldp+100,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__shiftReg),5);
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter),5);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__dataReg),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__LSU__DOT___GEN_1),32);
    bufp->fullBit(oldp+104,(vlSelf->top__DOT__LSU__DOT___GEN_2));
    bufp->fullIData(oldp+105,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+106,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter))))));
    bufp->fullCData(oldp+107,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__shiftReg),5);
    bufp->fullCData(oldp+108,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter),5);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__dataReg),32);
    bufp->fullIData(oldp+110,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_b__DOT__dataReg
                                : 0U)),32);
    bufp->fullCData(oldp+111,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__shiftReg),5);
    bufp->fullCData(oldp+112,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter),5);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__dataReg),32);
    bufp->fullIData(oldp+114,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_r__DOT__dataReg
                                : 0U)),32);
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__shiftReg),5);
    bufp->fullCData(oldp+116,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter),5);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__dataReg),32);
    bufp->fullIData(oldp+118,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_w__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+119,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter))))));
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__shiftReg),5);
    bufp->fullCData(oldp+121,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter),5);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__dataReg),32);
    bufp->fullQData(oldp+123,(vlSelf->top__DOT__RTC__DOT__mtime),64);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__RTC__DOT__rdata_reg),32);
    bufp->fullCData(oldp+126,(vlSelf->top__DOT__RTC__DOT__rresp_reg),2);
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__RTC__DOT__arvalid_reg));
    bufp->fullIData(oldp+128,(((0U == (IData)(vlSelf->top__DOT__RTC__DOT__delay__DOT__counter))
                                ? vlSelf->top__DOT__RTC__DOT__delay__DOT__dataReg
                                : 0U)),32);
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__RTC__DOT__delay__DOT__shiftReg),5);
    bufp->fullCData(oldp+130,(vlSelf->top__DOT__RTC__DOT__delay__DOT__counter),5);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__RTC__DOT__delay__DOT__dataReg),32);
    bufp->fullBit(oldp+132,(((IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate) 
                             & ((~ (IData)(vlSelf->top__DOT__WBU__DOT___GEN_17)) 
                                & (0xcU == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))))));
    bufp->fullIData(oldp+133,(((1U & ((~ (IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate)) 
                                      | ((0xcU != (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)) 
                                         | (IData)(vlSelf->top__DOT__WBU__DOT___GEN_17))))
                                ? 0U : vlSelf->top__DOT__LSU__DOT__wbu_data_pc)),32);
    bufp->fullBit(oldp+134,(((IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate) 
                             & ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_14)
                                 ? (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen)
                                 : ((3U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))
                                     ? ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rresp)) 
                                        & (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen))
                                     : ((~ (IData)(vlSelf->top__DOT__WBU__DOT___GEN_13)) 
                                        & ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_15) 
                                           & (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen))))))));
    bufp->fullCData(oldp+135,(vlSelf->top__DOT___WBU_io_reg_waddr),5);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT___WBU_io_reg_wdata),32);
    bufp->fullBit(oldp+137,(vlSelf->top__DOT___WBU_io_csr_wen_1));
    bufp->fullCData(oldp+138,(vlSelf->top__DOT___WBU_io_csr_waddr_1),2);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT___WBU_io_csr_wdata_1),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__Reg__DOT__csr_0),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__Reg__DOT__csr_1),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__Reg__DOT__csr_3),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__Reg__DOT__reg_0),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__Reg__DOT__reg_1),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__Reg__DOT__reg_2),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__Reg__DOT__reg_3),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__Reg__DOT__reg_4),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__Reg__DOT__reg_5),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__Reg__DOT__reg_6),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__Reg__DOT__reg_7),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__Reg__DOT__reg_8),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__Reg__DOT__reg_9),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__Reg__DOT__reg_10),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__Reg__DOT__reg_11),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__Reg__DOT__reg_12),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__Reg__DOT__reg_13),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__Reg__DOT__reg_14),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__Reg__DOT__reg_16),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__Reg__DOT__reg_17),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__Reg__DOT__reg_18),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__Reg__DOT__reg_19),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__Reg__DOT__reg_20),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__Reg__DOT__reg_21),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__Reg__DOT__reg_22),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__Reg__DOT__reg_23),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__Reg__DOT__reg_24),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__Reg__DOT__reg_25),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__Reg__DOT__reg_26),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__Reg__DOT__reg_27),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__Reg__DOT__reg_28),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__Reg__DOT__reg_29),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__Reg__DOT__reg_30),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__Reg__DOT__reg_31),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__SRAM__DOT__rdata_reg),32);
    bufp->fullCData(oldp+175,(vlSelf->top__DOT__SRAM__DOT__rresp_reg),2);
    bufp->fullBit(oldp+176,(vlSelf->top__DOT__SRAM__DOT__arvalid_reg));
    bufp->fullCData(oldp+177,(vlSelf->top__DOT__SRAM__DOT__bresp_reg),2);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__SRAM__DOT__waddr_reg),32);
    bufp->fullCData(oldp+179,(vlSelf->top__DOT__SRAM__DOT__wstrb_reg),4);
    bufp->fullBit(oldp+180,(vlSelf->top__DOT__SRAM__DOT__awvalid_reg));
    bufp->fullBit(oldp+181,(vlSelf->top__DOT__SRAM__DOT__wvalid_reg));
    bufp->fullIData(oldp+182,(((0U == (IData)(vlSelf->top__DOT__SRAM__DOT__delay__DOT__counter))
                                ? vlSelf->top__DOT__SRAM__DOT__delay__DOT__dataReg
                                : 0U)),32);
    bufp->fullCData(oldp+183,(vlSelf->top__DOT__SRAM__DOT__delay__DOT__shiftReg),5);
    bufp->fullCData(oldp+184,(vlSelf->top__DOT__SRAM__DOT__delay__DOT__counter),5);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__SRAM__DOT__delay__DOT__dataReg),32);
    bufp->fullIData(oldp+186,(((0U == (IData)(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__counter))
                                ? vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__dataReg
                                : 0U)),32);
    bufp->fullCData(oldp+187,(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__shiftReg),5);
    bufp->fullCData(oldp+188,(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__counter),5);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__dataReg),32);
    bufp->fullCData(oldp+190,(vlSelf->top__DOT__UART__DOT__bresp_reg),2);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__UART__DOT__waddr_reg),32);
    bufp->fullCData(oldp+192,(vlSelf->top__DOT__UART__DOT__wstrb_reg),4);
    bufp->fullBit(oldp+193,(vlSelf->top__DOT__UART__DOT__awvalid_reg));
    bufp->fullBit(oldp+194,(vlSelf->top__DOT__UART__DOT__wvalid_reg));
    bufp->fullIData(oldp+195,(((0U == (IData)(vlSelf->top__DOT__UART__DOT__delay_w__DOT__counter))
                                ? vlSelf->top__DOT__UART__DOT__delay_w__DOT__dataReg
                                : 0U)),32);
    bufp->fullCData(oldp+196,(vlSelf->top__DOT__UART__DOT__delay_w__DOT__shiftReg),5);
    bufp->fullCData(oldp+197,(vlSelf->top__DOT__UART__DOT__delay_w__DOT__counter),5);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__UART__DOT__delay_w__DOT__dataReg),32);
    bufp->fullBit(oldp+199,(vlSelf->top__DOT__WBU__DOT__m2LSUstate));
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__WBU__DOT__lastdnpc),32);
    bufp->fullIData(oldp+201,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                ? (((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
                                    & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg))
                                    ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                    : 0U) : ((1U & 
                                              ((~ (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN)) 
                                               | ((~ (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_3)) 
                                                  | (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_0))))
                                              ? 0U : vlSelf->top__DOT___LSU_io_lsu_axi_ar_araddr))),32);
    bufp->fullCData(oldp+202,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid)
                                ? ((IData)(vlSelf->top__DOT__SRAM__DOT___GEN_0)
                                    ? (IData)(vlSelf->top__DOT__SRAM__DOT__rresp_reg)
                                    : 0U) : 3U)),2);
    bufp->fullIData(oldp+203,(((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_4)
                                ? 0U : vlSelf->top__DOT___LSU_io_lsu_axi_w_wdata)),32);
    bufp->fullCData(oldp+204,(((IData)(vlSelf->top__DOT__SRAM__DOT___GEN_1)
                                ? (((IData)(vlSelf->top__DOT__SRAM__DOT__bvalid_reg) 
                                    & (IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_b_bready))
                                    ? (IData)(vlSelf->top__DOT__SRAM__DOT__bresp_reg)
                                    : 0U) : 3U)),2);
    bufp->fullIData(oldp+205,(((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_2)
                                ? 0U : vlSelf->top__DOT___LSU_io_lsu_axi_w_wdata)),32);
    bufp->fullCData(oldp+206,(((IData)(vlSelf->top__DOT__UART__DOT___GEN)
                                ? (((IData)(vlSelf->top__DOT__UART__DOT__bvalid_reg) 
                                    & (IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_b_bready))
                                    ? (IData)(vlSelf->top__DOT__UART__DOT__bresp_reg)
                                    : 0U) : 3U)),2);
    bufp->fullIData(oldp+207,((((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hb0ea07fc__0) 
                                | (IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hff3363a0__0))
                                ? 0U : vlSelf->top__DOT___LSU_io_lsu_axi_ar_araddr)),32);
    bufp->fullIData(oldp+208,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                ? ((IData)(vlSelf->top__DOT__RTC__DOT___GEN)
                                    ? vlSelf->top__DOT__RTC__DOT__rdata_reg
                                    : 0U) : 2U)),32);
    bufp->fullCData(oldp+209,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                ? ((IData)(vlSelf->top__DOT__RTC__DOT___GEN)
                                    ? (IData)(vlSelf->top__DOT__RTC__DOT__rresp_reg)
                                    : 0U) : 3U)),2);
    bufp->fullCData(oldp+210,(((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_7)
                                ? 0U : ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_3)
                                         ? ((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid)
                                             ? ((IData)(vlSelf->top__DOT__SRAM__DOT___GEN_0)
                                                 ? (IData)(vlSelf->top__DOT__SRAM__DOT__rresp_reg)
                                                 : 0U)
                                             : 3U) : 
                                        ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_5)
                                          ? ((IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                              ? ((IData)(vlSelf->top__DOT__RTC__DOT___GEN)
                                                  ? (IData)(vlSelf->top__DOT__RTC__DOT__rresp_reg)
                                                  : 0U)
                                              : 3U)
                                          : 0U)))),2);
    bufp->fullBit(oldp+211,(((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_h0eb34983__0) 
                             & (IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hff3363a0__0))));
    bufp->fullCData(oldp+212,(((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hb0ea07fc__0)
                                ? 0U : ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_0)
                                         ? ((IData)(vlSelf->top__DOT__UART__DOT___GEN)
                                             ? (((IData)(vlSelf->top__DOT__UART__DOT__bvalid_reg) 
                                                 & (IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_b_bready))
                                                 ? (IData)(vlSelf->top__DOT__UART__DOT__bresp_reg)
                                                 : 0U)
                                             : 3U) : 
                                        ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_3)
                                          ? ((IData)(vlSelf->top__DOT__SRAM__DOT___GEN_1)
                                              ? (((IData)(vlSelf->top__DOT__SRAM__DOT__bvalid_reg) 
                                                  & (IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_b_bready))
                                                  ? (IData)(vlSelf->top__DOT__SRAM__DOT__bresp_reg)
                                                  : 0U)
                                              : 3U)
                                          : 0U)))),2);
    bufp->fullIData(oldp+213,((((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
                                & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg))
                                ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                : 0U)),32);
    bufp->fullBit(oldp+214,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                             & (IData)(vlSelf->top__DOT__SRAM__DOT__bvalid_reg))));
    bufp->fullIData(oldp+215,(((0U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                ? vlSelf->top__DOT__Reg__DOT__csr_0
                                : ((1U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                    ? vlSelf->top__DOT__Reg__DOT__csr_1
                                    : ((2U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                        ? vlSelf->top__DOT__Reg__DOT__csr_2
                                        : vlSelf->top__DOT__Reg__DOT__csr_3)))),32);
    bufp->fullIData(oldp+216,(((IData)(vlSelf->top__DOT__LSU__DOT____VdfgTmp_hd83711f5__0)
                                ? 0U : (IData)(vlSelf->top__DOT__LSU__DOT___GEN_6))),32);
    bufp->fullBit(oldp+217,(((IData)(vlSelf->top__DOT__LSU__DOT__m2EXUstate) 
                             & ((3U != (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
                                & ((~ (((IData)(vlSelf->top__DOT__LSU__DOT__bvalid_reg) 
                                        != (IData)(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_b_bvalid)) 
                                       & (IData)(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_b_bvalid))) 
                                   & (IData)(vlSelf->top__DOT__LSU__DOT___GEN_6))))));
    bufp->fullBit(oldp+218,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter))))));
    bufp->fullBit(oldp+219,(((~ (((IData)(vlSelf->top__DOT__LSU__DOT__rvalid_reg) 
                                  != (IData)(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_r_rvalid)) 
                                 & (IData)(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_r_rvalid))) 
                             & (IData)(vlSelf->top__DOT__LSU__DOT___GEN_3))));
    bufp->fullBit(oldp+220,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter))))));
    bufp->fullIData(oldp+221,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                ? (((0xa0000048U == vlSelf->top__DOT__RTC__DOT__rtc_raddr) 
                                    & (IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid))
                                    ? (IData)(vlSelf->top__DOT__RTC__DOT__mtime)
                                    : (((0xa000004cU 
                                         == vlSelf->top__DOT__RTC__DOT__rtc_raddr) 
                                        & (IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid))
                                        ? (IData)((vlSelf->top__DOT__RTC__DOT__mtime 
                                                   >> 0x20U))
                                        : 0U)) : 0U)),32);
    bufp->fullBit(oldp+222,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid) 
                             & ((IData)(vlSelf->top__DOT__RTC__DOT__arvalid_reg) 
                                != (IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)))));
    bufp->fullBit(oldp+223,(((~ (IData)(vlSelf->top__DOT__RTC__DOT__delay__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__RTC__DOT__delay__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__RTC__DOT__delay__DOT__counter))))));
    bufp->fullBit(oldp+224,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid) 
                             & ((IData)(vlSelf->top__DOT__SRAM__DOT__arvalid_reg) 
                                != (IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid)))));
    bufp->fullBit(oldp+225,(((~ (IData)(vlSelf->top__DOT__SRAM__DOT__delay__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__SRAM__DOT__delay__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__SRAM__DOT__delay__DOT__counter))))));
    bufp->fullBit(oldp+226,(((IData)(vlSelf->top__DOT__SRAM__DOT___GEN_1) 
                             & (((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wvalid) 
                                 != (IData)(vlSelf->top__DOT__SRAM__DOT__wvalid_reg)) 
                                & ((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wvalid) 
                                   & (((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awvalid) 
                                       != (IData)(vlSelf->top__DOT__SRAM__DOT__awvalid_reg)) 
                                      & (IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awvalid)))))));
    bufp->fullBit(oldp+227,(((~ (IData)(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__counter))))));
    bufp->fullIData(oldp+228,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wvalid)
                                ? ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_4)
                                    ? 0U : vlSelf->top__DOT___LSU_io_lsu_axi_w_wdata)
                                : 0U)),32);
    bufp->fullBit(oldp+229,(((IData)(vlSelf->top__DOT__SRAM__DOT___GEN_1) 
                             & (((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wstrb) 
                                 != (IData)(vlSelf->top__DOT__SRAM__DOT__wstrb_reg)) 
                                & (vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awaddr 
                                   != vlSelf->top__DOT__SRAM__DOT__waddr_reg)))));
    bufp->fullBit(oldp+230,(((IData)(vlSelf->top__DOT__UART__DOT___GEN) 
                             & (((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wvalid) 
                                 != (IData)(vlSelf->top__DOT__UART__DOT__wvalid_reg)) 
                                & ((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wvalid) 
                                   & (((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awvalid) 
                                       != (IData)(vlSelf->top__DOT__UART__DOT__awvalid_reg)) 
                                      & (IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awvalid)))))));
    bufp->fullBit(oldp+231,(((~ (IData)(vlSelf->top__DOT__UART__DOT__delay_w__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__UART__DOT__delay_w__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__UART__DOT__delay_w__DOT__counter))))));
    bufp->fullBit(oldp+232,(((IData)(vlSelf->top__DOT__UART__DOT___GEN) 
                             & (((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wstrb) 
                                 != (IData)(vlSelf->top__DOT__UART__DOT__wstrb_reg)) 
                                & (vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awaddr 
                                   != vlSelf->top__DOT__UART__DOT__waddr_reg)))));
    bufp->fullIData(oldp+233,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wvalid)
                                ? ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_2)
                                    ? 0U : vlSelf->top__DOT___LSU_io_lsu_axi_w_wdata)
                                : 0U)),32);
    bufp->fullBit(oldp+234,(vlSelf->top__DOT__inv_flag));
    bufp->fullBit(oldp+235,(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid));
    bufp->fullIData(oldp+236,(vlSelf->top__DOT___SRAM_io_axi_r_rdata),32);
    bufp->fullBit(oldp+237,(vlSelf->top__DOT___AXI_arbiter_io_axi_r_rready));
    bufp->fullIData(oldp+238,(vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awaddr),32);
    bufp->fullBit(oldp+239,(vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awvalid));
    bufp->fullCData(oldp+240,(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wstrb),4);
    bufp->fullBit(oldp+241,(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wvalid));
    bufp->fullBit(oldp+242,(vlSelf->top__DOT___AXI_arbiter_io_axi_b_bready));
    bufp->fullIData(oldp+243,(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awaddr),32);
    bufp->fullBit(oldp+244,(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awvalid));
    bufp->fullCData(oldp+245,(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wstrb),4);
    bufp->fullBit(oldp+246,(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wvalid));
    bufp->fullBit(oldp+247,(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_b_bready));
    bufp->fullBit(oldp+248,(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid));
    bufp->fullBit(oldp+249,(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_r_rready));
    bufp->fullIData(oldp+250,(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_r_rdata),32);
    bufp->fullBit(oldp+251,(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_r_rvalid));
    bufp->fullBit(oldp+252,(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_b_bvalid));
    bufp->fullBit(oldp+253,(vlSelf->top__DOT__IFU__DOT__arvalid_reg));
    bufp->fullIData(oldp+254,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                ? vlSelf->top__DOT___SRAM_io_axi_r_rdata
                                : 0U)),32);
    bufp->fullBit(oldp+255,(vlSelf->top__DOT___AXI_arbiter_io_ifu_axi_r_rvalid));
    bufp->fullBit(oldp+256,(vlSelf->top__DOT__IFU__DOT__rready_reg));
    bufp->fullIData(oldp+257,(((IData)(4U) + vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_0)),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_0),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__IFU__DOT__inst_reg),32);
    bufp->fullCData(oldp+260,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                        >> 0xfU))),5);
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__Reg__DOT__casez_tmp),32);
    bufp->fullCData(oldp+262,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__Reg__DOT__casez_tmp_0),32);
    bufp->fullCData(oldp+264,(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr),2);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__IDU__DOT__csr_imm),32);
    bufp->fullCData(oldp+266,(vlSelf->top__DOT__IDU__DOT__casez_tmp),5);
    bufp->fullCData(oldp+267,(vlSelf->top__DOT__IDU__DOT__casez_tmp_0),5);
    bufp->fullBit(oldp+268,(vlSelf->top__DOT___WBU_io_out2ifu_valid));
    bufp->fullBit(oldp+269,(vlSelf->top__DOT__IFU__DOT__m2EXUstate));
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__LSU__DOT___GEN_3),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__RTC__DOT__rtc_raddr),32);
    bufp->fullBit(oldp+272,(vlSelf->top__DOT__RTC__DOT__rvalid_en));
    bufp->fullBit(oldp+273,(vlSelf->top__DOT__SRAM__DOT__rvalid_en));
    bufp->fullBit(oldp+274,(vlSelf->top__DOT__SRAM__DOT__bvalid_en));
    bufp->fullIData(oldp+275,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid)
                                ? vlSelf->top__DOT__SRAM__DOT___m_m_rdata
                                : 0U)),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__SRAM__DOT___GEN_1),32);
    bufp->fullIData(oldp+277,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awvalid)
                                ? vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awaddr
                                : 0U)),32);
    bufp->fullIData(oldp+278,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wvalid)
                                ? (IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wstrb)
                                : 0U)),32);
    bufp->fullIData(oldp+279,(vlSelf->top__DOT__SRAM__DOT___GEN),32);
    bufp->fullIData(oldp+280,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid) 
                               << 2U)),32);
    bufp->fullIData(oldp+281,(vlSelf->top__DOT__SRAM__DOT___m_m_rdata),32);
    bufp->fullBit(oldp+282,(vlSelf->top__DOT__UART__DOT__bvalid_en));
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__UART__DOT___GEN),32);
    bufp->fullIData(oldp+284,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awvalid)
                                ? vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awaddr
                                : 0U)),32);
    bufp->fullIData(oldp+285,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wvalid)
                                ? (IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wstrb)
                                : 0U)),32);
    bufp->fullBit(oldp+286,(vlSelf->clock));
    bufp->fullBit(oldp+287,(vlSelf->reset));
}

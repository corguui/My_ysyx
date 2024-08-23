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
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBus(c+234,"io_pc", false,-1, 31,0);
    tracep->declBit(c+235,"io_inv_flag", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBus(c+234,"io_pc", false,-1, 31,0);
    tracep->declBit(c+235,"io_inv_flag", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBit(c+1,"io_idu2in_valid", false,-1);
    tracep->declBus(c+2,"io_idu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+3,"io_idu2in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+4,"io_idu2in_bits_mem_ren", false,-1);
    tracep->declBit(c+5,"io_idu2in_bits_mem_wen", false,-1);
    tracep->declBus(c+6,"io_idu2in_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+7,"io_idu2in_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+8,"io_idu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+9,"io_idu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+10,"io_idu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+11,"io_idu2in_bits_src2", false,-1, 31,0);
    tracep->declBus(c+12,"io_idu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+13,"io_idu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+14,"io_idu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+15,"io_idu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+16,"io_idu2in_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+17,"io_idu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+18,"io_idu2in_bits_il_us", false,-1);
    tracep->declBit(c+19,"io_out2lsu_valid", false,-1);
    tracep->declBus(c+20,"io_out2lsu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+21,"io_out2lsu_bits_pc", false,-1, 31,0);
    tracep->declBit(c+22,"io_out2lsu_bits_mem_ren", false,-1);
    tracep->declBit(c+23,"io_out2lsu_bits_mem_wen", false,-1);
    tracep->declBus(c+24,"io_out2lsu_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+25,"io_out2lsu_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+26,"io_out2lsu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+27,"io_out2lsu_bits_reg_wen", false,-1);
    tracep->declBus(c+28,"io_out2lsu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+29,"io_out2lsu_bits_src2", false,-1, 31,0);
    tracep->declBus(c+30,"io_out2lsu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+31,"io_out2lsu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+32,"io_out2lsu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+33,"io_out2lsu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+34,"io_out2lsu_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+35,"io_out2lsu_bits_il_us", false,-1);
    tracep->declBus(c+36,"io_out2lsu_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+37,"m2IDUstate", false,-1);
    tracep->declBit(c+19,"state_reg", false,-1);
    tracep->declBus(c+38,"alu_result_reg", false,-1, 31,0);
    tracep->declBus(c+20,"lsu_data_snpc", false,-1, 31,0);
    tracep->declBus(c+21,"lsu_data_pc", false,-1, 31,0);
    tracep->declBit(c+22,"lsu_data_mem_ren", false,-1);
    tracep->declBit(c+23,"lsu_data_mem_wen", false,-1);
    tracep->declBus(c+24,"lsu_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+25,"lsu_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+26,"lsu_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+27,"lsu_data_reg_wen", false,-1);
    tracep->declBus(c+28,"lsu_data_src1", false,-1, 31,0);
    tracep->declBus(c+29,"lsu_data_src2", false,-1, 31,0);
    tracep->declBus(c+30,"lsu_data_csr", false,-1, 31,0);
    tracep->declBus(c+31,"lsu_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+32,"lsu_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+33,"lsu_data_imm", false,-1, 31,0);
    tracep->declBus(c+34,"lsu_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+35,"lsu_data_il_us", false,-1);
    tracep->declBus(c+36,"lsu_data_alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+39,"io_src1", false,-1, 31,0);
    tracep->declBus(c+40,"io_src2", false,-1, 31,0);
    tracep->declBus(c+41,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+42,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBit(c+204,"io_ifu2in_valid", false,-1);
    tracep->declBus(c+236,"io_ifu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+234,"io_ifu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+205,"io_ifu2in_bits_inst", false,-1, 31,0);
    tracep->declBit(c+1,"io_out2exu_valid", false,-1);
    tracep->declBus(c+2,"io_out2exu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+3,"io_out2exu_bits_pc", false,-1, 31,0);
    tracep->declBit(c+4,"io_out2exu_bits_mem_ren", false,-1);
    tracep->declBit(c+5,"io_out2exu_bits_mem_wen", false,-1);
    tracep->declBus(c+6,"io_out2exu_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+7,"io_out2exu_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+8,"io_out2exu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+9,"io_out2exu_bits_reg_wen", false,-1);
    tracep->declBus(c+10,"io_out2exu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+11,"io_out2exu_bits_src2", false,-1, 31,0);
    tracep->declBus(c+12,"io_out2exu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+13,"io_out2exu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+14,"io_out2exu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+15,"io_out2exu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+16,"io_out2exu_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+17,"io_out2exu_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+18,"io_out2exu_bits_il_us", false,-1);
    tracep->declBus(c+206,"io_reg_data_raddr_1", false,-1, 4,0);
    tracep->declBus(c+207,"io_reg_data_rdata_1", false,-1, 31,0);
    tracep->declBus(c+208,"io_reg_data_raddr_2", false,-1, 4,0);
    tracep->declBus(c+209,"io_reg_data_rdata_2", false,-1, 31,0);
    tracep->declBus(c+210,"io_reg_data_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+237,"io_reg_data_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+43,"io_reg_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+44,"io_reg_data_mstatus", false,-1, 31,0);
    tracep->declBit(c+235,"io_inv_flag", false,-1);
    tracep->declBus(c+2,"exu_data_snpc", false,-1, 31,0);
    tracep->declBus(c+3,"exu_data_pc", false,-1, 31,0);
    tracep->declBit(c+4,"exu_data_mem_ren", false,-1);
    tracep->declBit(c+5,"exu_data_mem_wen", false,-1);
    tracep->declBus(c+6,"exu_data_m_rmask", false,-1, 31,0);
    tracep->declBus(c+7,"exu_data_m_wmask", false,-1, 31,0);
    tracep->declBus(c+8,"exu_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+9,"exu_data_reg_wen", false,-1);
    tracep->declBus(c+10,"exu_data_src1", false,-1, 31,0);
    tracep->declBus(c+11,"exu_data_src2", false,-1, 31,0);
    tracep->declBus(c+12,"exu_data_csr", false,-1, 31,0);
    tracep->declBus(c+13,"exu_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+14,"exu_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+15,"exu_data_imm", false,-1, 31,0);
    tracep->declBus(c+16,"exu_data_alu_op", false,-1, 4,0);
    tracep->declBus(c+17,"exu_data_inst_type", false,-1, 3,0);
    tracep->declBit(c+18,"exu_data_il_us", false,-1);
    tracep->declBit(c+45,"state", false,-1);
    tracep->declBit(c+1,"state_reg", false,-1);
    tracep->declBus(c+211,"csr_imm", false,-1, 31,0);
    tracep->declBus(c+212,"casez_tmp", false,-1, 4,0);
    tracep->declBus(c+213,"casez_tmp_0", false,-1, 4,0);
    tracep->pushNamePrefix("npc_break ");
    tracep->declBus(c+205,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBit(c+204,"io_out_valid", false,-1);
    tracep->declBus(c+236,"io_out_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+234,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+205,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBit(c+214,"io_exu2in_valid", false,-1);
    tracep->declBus(c+215,"io_exu2in_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+216,"io_axi_ar_pc", false,-1, 31,0);
    tracep->declBit(c+217,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+218,"io_axi_r_inst", false,-1, 31,0);
    tracep->declBit(c+219,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+204,"io_axi_r_rready", false,-1);
    tracep->declBus(c+234,"io_out_bits_pc_0", false,-1, 31,0);
    tracep->declBit(c+220,"m2EXUstate", false,-1);
    tracep->declBit(c+221,"exu2in_reg", false,-1);
    tracep->declBus(c+222,"indata_dnpc", false,-1, 31,0);
    tracep->declBit(c+204,"rready_reg", false,-1);
    tracep->declBus(c+223,"ardata_reg", false,-1, 31,0);
    tracep->declBus(c+205,"inst_reg", false,-1, 31,0);
    tracep->declBit(c+217,"arvalid_reg", false,-1);
    tracep->declBus(c+224,"io_out_bits_pc_REG", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Inst_fetch ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBus(c+218,"io_axi_r_inst", false,-1, 31,0);
    tracep->declBit(c+219,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+204,"io_axi_r_rready", false,-1);
    tracep->declBus(c+216,"io_axi_ar_pc", false,-1, 31,0);
    tracep->declBit(c+217,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+225,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+219,"rvalid_reg", false,-1);
    tracep->declBit(c+46,"arvalid_reg", false,-1);
    tracep->declBit(c+226,"rvalid_en", false,-1);
    tracep->pushNamePrefix("delay ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBus(c+238,"io_inData", false,-1, 31,0);
    tracep->declBit(c+239,"io_inValid", false,-1);
    tracep->declBus(c+227,"io_outData", false,-1, 31,0);
    tracep->declBit(c+228,"io_delayDone", false,-1);
    tracep->declBus(c+47,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+229,"counter", false,-1, 4,0);
    tracep->declBus(c+230,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vlg_pc_read ");
    tracep->declBit(c+232,"clk", false,-1);
    tracep->declBus(c+231,"pc", false,-1, 31,0);
    tracep->declBit(c+217,"pc_en", false,-1);
    tracep->declBus(c+48,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBit(c+19,"io_exu2in_valid", false,-1);
    tracep->declBus(c+20,"io_exu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+21,"io_exu2in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+22,"io_exu2in_bits_mem_ren", false,-1);
    tracep->declBit(c+23,"io_exu2in_bits_mem_wen", false,-1);
    tracep->declBus(c+24,"io_exu2in_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+25,"io_exu2in_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+26,"io_exu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+27,"io_exu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+28,"io_exu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+29,"io_exu2in_bits_src2", false,-1, 31,0);
    tracep->declBus(c+30,"io_exu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+31,"io_exu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+32,"io_exu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+33,"io_exu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+34,"io_exu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+35,"io_exu2in_bits_il_us", false,-1);
    tracep->declBus(c+36,"io_exu2in_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+49,"io_out2wbu_valid", false,-1);
    tracep->declBus(c+50,"io_out2wbu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+51,"io_out2wbu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+52,"io_out2wbu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+53,"io_out2wbu_bits_reg_wen", false,-1);
    tracep->declBus(c+54,"io_out2wbu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+55,"io_out2wbu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+56,"io_out2wbu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+57,"io_out2wbu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+58,"io_out2wbu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+59,"io_out2wbu_bits_inst_type", false,-1, 3,0);
    tracep->declBus(c+60,"io_out2wbu_bits_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+61,"io_out2wbu_bits_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+62,"io_out2wbu_bits_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+63,"io_out2wbu_bits_alu_result", false,-1, 31,0);
    tracep->declBus(c+64,"io_ar_lsu_mem_raddr", false,-1, 31,0);
    tracep->declBus(c+65,"io_ar_lsu_mem_rmask", false,-1, 2,0);
    tracep->declBit(c+66,"io_ar_lsu_mem_arvalid", false,-1);
    tracep->declBus(c+67,"io_r_mem_lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+68,"io_r_mem_lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+69,"io_r_mem_lsu_rvalid", false,-1);
    tracep->declBit(c+70,"io_r_mem_lsu_rready", false,-1);
    tracep->declBus(c+71,"io_w_lsu_mem_wdata", false,-1, 31,0);
    tracep->declBus(c+72,"io_w_lsu_mem_wmask", false,-1, 2,0);
    tracep->declBit(c+73,"io_w_lsu_mem_wvalid", false,-1);
    tracep->declBus(c+74,"io_aw_lsu_mem_awaddr", false,-1, 31,0);
    tracep->declBit(c+75,"io_aw_lsu_mem_awvalid", false,-1);
    tracep->declBus(c+76,"io_b_mem_lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+77,"io_b_mem_lsu_bvalid", false,-1);
    tracep->declBit(c+78,"io_b_mem_lsu_bready", false,-1);
    tracep->declBit(c+78,"io_b_mem_lsu_bready_0", false,-1);
    tracep->declBit(c+70,"io_r_mem_lsu_rready_0", false,-1);
    tracep->declBit(c+79,"m2EXUstate", false,-1);
    tracep->declBit(c+80,"state_reg", false,-1);
    tracep->declBit(c+49,"io_out2wbu_valid_0", false,-1);
    tracep->declBit(c+81,"exu2in_valid", false,-1);
    tracep->declBit(c+82,"exu2in_valid_reg", false,-1);
    tracep->declBit(c+83,"rready_reg", false,-1);
    tracep->declBus(c+84,"mem_raddr_reg", false,-1, 31,0);
    tracep->declBus(c+85,"mem_rmask_reg", false,-1, 31,0);
    tracep->declBit(c+86,"mem_ren_reg", false,-1);
    tracep->declBit(c+66,"io_ar_lsu_mem_arvalid_0", false,-1);
    tracep->declBit(c+87,"rvalid_reg", false,-1);
    tracep->declBit(c+88,"bready_reg", false,-1);
    tracep->declBus(c+89,"mem_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+90,"mem_wmask_reg", false,-1, 31,0);
    tracep->declBus(c+91,"mem_wdata_reg", false,-1, 31,0);
    tracep->declBit(c+92,"mem_wen_reg", false,-1);
    tracep->declBit(c+93,"m_wen_reg_delay", false,-1);
    tracep->declBit(c+75,"io_aw_lsu_mem_awvalid_0", false,-1);
    tracep->declBit(c+73,"io_w_lsu_mem_wvalid_0", false,-1);
    tracep->declBit(c+94,"bvalid_reg", false,-1);
    tracep->declBus(c+50,"wbu_data_snpc", false,-1, 31,0);
    tracep->declBus(c+51,"wbu_data_pc", false,-1, 31,0);
    tracep->declBus(c+52,"wbu_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+53,"wbu_data_reg_wen", false,-1);
    tracep->declBus(c+54,"wbu_data_src1", false,-1, 31,0);
    tracep->declBus(c+55,"wbu_data_csr", false,-1, 31,0);
    tracep->declBus(c+56,"wbu_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+57,"wbu_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+58,"wbu_data_imm", false,-1, 31,0);
    tracep->declBus(c+59,"wbu_data_inst_type", false,-1, 3,0);
    tracep->declBus(c+60,"wbu_data_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+61,"wbu_data_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+62,"wbu_data_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+63,"wbu_data_alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("delay_ar ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBus(c+95,"io_inData", false,-1, 31,0);
    tracep->declBit(c+96,"io_inValid", false,-1);
    tracep->declBus(c+97,"io_outData", false,-1, 31,0);
    tracep->declBit(c+98,"io_delayDone", false,-1);
    tracep->declBus(c+99,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+100,"counter", false,-1, 4,0);
    tracep->declBus(c+101,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_aw ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBus(c+102,"io_inData", false,-1, 31,0);
    tracep->declBit(c+103,"io_inValid", false,-1);
    tracep->declBus(c+104,"io_outData", false,-1, 31,0);
    tracep->declBit(c+105,"io_delayDone", false,-1);
    tracep->declBus(c+106,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+107,"counter", false,-1, 4,0);
    tracep->declBus(c+108,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_b ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBus(c+109,"io_inData", false,-1, 31,0);
    tracep->declBit(c+110,"io_inValid", false,-1);
    tracep->declBus(c+111,"io_outData", false,-1, 31,0);
    tracep->declBit(c+112,"io_delayDone", false,-1);
    tracep->declBus(c+113,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+114,"counter", false,-1, 4,0);
    tracep->declBus(c+115,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_r ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBus(c+116,"io_inData", false,-1, 31,0);
    tracep->declBit(c+117,"io_inValid", false,-1);
    tracep->declBus(c+118,"io_outData", false,-1, 31,0);
    tracep->declBit(c+119,"io_delayDone", false,-1);
    tracep->declBus(c+120,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+121,"counter", false,-1, 4,0);
    tracep->declBus(c+122,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_w ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBus(c+102,"io_inData", false,-1, 31,0);
    tracep->declBit(c+103,"io_inValid", false,-1);
    tracep->declBus(c+123,"io_outData", false,-1, 31,0);
    tracep->declBit(c+124,"io_delayDone", false,-1);
    tracep->declBus(c+125,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+126,"counter", false,-1, 4,0);
    tracep->declBus(c+127,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Mem ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBus(c+64,"io_ar_lsu_mem_raddr", false,-1, 31,0);
    tracep->declBus(c+65,"io_ar_lsu_mem_rmask", false,-1, 2,0);
    tracep->declBit(c+66,"io_ar_lsu_mem_arvalid", false,-1);
    tracep->declBus(c+67,"io_r_mem_lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+68,"io_r_mem_lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+69,"io_r_mem_lsu_rvalid", false,-1);
    tracep->declBit(c+70,"io_r_mem_lsu_rready", false,-1);
    tracep->declBus(c+71,"io_w_lsu_mem_wdata", false,-1, 31,0);
    tracep->declBus(c+72,"io_w_lsu_mem_wmask", false,-1, 2,0);
    tracep->declBit(c+73,"io_w_lsu_mem_wvalid", false,-1);
    tracep->declBus(c+74,"io_aw_lsu_mem_awaddr", false,-1, 31,0);
    tracep->declBit(c+75,"io_aw_lsu_mem_awvalid", false,-1);
    tracep->declBus(c+76,"io_b_mem_lsu_bresp", false,-1, 1,0);
    tracep->declBit(c+77,"io_b_mem_lsu_bvalid", false,-1);
    tracep->declBit(c+78,"io_b_mem_lsu_bready", false,-1);
    tracep->declBus(c+128,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+69,"rvalid_reg", false,-1);
    tracep->declBus(c+129,"rresp_reg", false,-1, 1,0);
    tracep->declBit(c+130,"arvalid_reg", false,-1);
    tracep->declBit(c+77,"bvalid_reg", false,-1);
    tracep->declBus(c+131,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+132,"waddr_reg", false,-1, 31,0);
    tracep->declBus(c+133,"wmask_reg", false,-1, 2,0);
    tracep->declBit(c+134,"awvalid_reg", false,-1);
    tracep->declBit(c+135,"wvalid_reg", false,-1);
    tracep->declBit(c+136,"rvalid_en", false,-1);
    tracep->declBit(c+137,"bvalid_en", false,-1);
    tracep->pushNamePrefix("delay ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBus(c+138,"io_inData", false,-1, 31,0);
    tracep->declBit(c+139,"io_inValid", false,-1);
    tracep->declBus(c+140,"io_outData", false,-1, 31,0);
    tracep->declBit(c+141,"io_delayDone", false,-1);
    tracep->declBus(c+142,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+143,"counter", false,-1, 4,0);
    tracep->declBus(c+144,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_w ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBus(c+145,"io_inData", false,-1, 31,0);
    tracep->declBit(c+146,"io_inValid", false,-1);
    tracep->declBus(c+147,"io_outData", false,-1, 31,0);
    tracep->declBit(c+148,"io_delayDone", false,-1);
    tracep->declBus(c+149,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+150,"counter", false,-1, 4,0);
    tracep->declBus(c+151,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBus(c+152,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+153,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+154,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+155,"m_wen", false,-1);
    tracep->declBus(c+156,"m_raddr", false,-1, 31,0);
    tracep->declBus(c+157,"m_rmask", false,-1, 31,0);
    tracep->declBit(c+66,"m_ren", false,-1);
    tracep->declBus(c+158,"m_rdata", false,-1, 31,0);
    tracep->declBit(c+159,"m_wready", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Reg ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBit(c+160,"io_csr_wen_2", false,-1);
    tracep->declBus(c+161,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBus(c+206,"io_reg_read_raddr_1", false,-1, 4,0);
    tracep->declBus(c+207,"io_reg_read_rdata_1", false,-1, 31,0);
    tracep->declBus(c+208,"io_reg_read_raddr_2", false,-1, 4,0);
    tracep->declBus(c+209,"io_reg_read_rdata_2", false,-1, 31,0);
    tracep->declBus(c+210,"io_reg_read_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+237,"io_reg_read_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+43,"io_reg_read_csr_a5", false,-1, 31,0);
    tracep->declBus(c+44,"io_reg_read_mstatus", false,-1, 31,0);
    tracep->declBit(c+162,"io_wen", false,-1);
    tracep->declBus(c+163,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+164,"io_wdata", false,-1, 31,0);
    tracep->declBit(c+165,"io_csr_wen_1", false,-1);
    tracep->declBus(c+166,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+167,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBus(c+168,"csr_0", false,-1, 31,0);
    tracep->declBus(c+169,"csr_1", false,-1, 31,0);
    tracep->declBus(c+44,"csr_2", false,-1, 31,0);
    tracep->declBus(c+170,"csr_3", false,-1, 31,0);
    tracep->declBus(c+171,"reg_0", false,-1, 31,0);
    tracep->declBus(c+172,"reg_1", false,-1, 31,0);
    tracep->declBus(c+173,"reg_2", false,-1, 31,0);
    tracep->declBus(c+174,"reg_3", false,-1, 31,0);
    tracep->declBus(c+175,"reg_4", false,-1, 31,0);
    tracep->declBus(c+176,"reg_5", false,-1, 31,0);
    tracep->declBus(c+177,"reg_6", false,-1, 31,0);
    tracep->declBus(c+178,"reg_7", false,-1, 31,0);
    tracep->declBus(c+179,"reg_8", false,-1, 31,0);
    tracep->declBus(c+180,"reg_9", false,-1, 31,0);
    tracep->declBus(c+181,"reg_10", false,-1, 31,0);
    tracep->declBus(c+182,"reg_11", false,-1, 31,0);
    tracep->declBus(c+183,"reg_12", false,-1, 31,0);
    tracep->declBus(c+184,"reg_13", false,-1, 31,0);
    tracep->declBus(c+185,"reg_14", false,-1, 31,0);
    tracep->declBus(c+43,"reg_15", false,-1, 31,0);
    tracep->declBus(c+186,"reg_16", false,-1, 31,0);
    tracep->declBus(c+187,"reg_17", false,-1, 31,0);
    tracep->declBus(c+188,"reg_18", false,-1, 31,0);
    tracep->declBus(c+189,"reg_19", false,-1, 31,0);
    tracep->declBus(c+190,"reg_20", false,-1, 31,0);
    tracep->declBus(c+191,"reg_21", false,-1, 31,0);
    tracep->declBus(c+192,"reg_22", false,-1, 31,0);
    tracep->declBus(c+193,"reg_23", false,-1, 31,0);
    tracep->declBus(c+194,"reg_24", false,-1, 31,0);
    tracep->declBus(c+195,"reg_25", false,-1, 31,0);
    tracep->declBus(c+196,"reg_26", false,-1, 31,0);
    tracep->declBus(c+197,"reg_27", false,-1, 31,0);
    tracep->declBus(c+198,"reg_28", false,-1, 31,0);
    tracep->declBus(c+199,"reg_29", false,-1, 31,0);
    tracep->declBus(c+200,"reg_30", false,-1, 31,0);
    tracep->declBus(c+201,"reg_31", false,-1, 31,0);
    tracep->declBus(c+207,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+209,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+237,"casez_tmp_1", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+232,"clock", false,-1);
    tracep->declBit(c+233,"reset", false,-1);
    tracep->declBit(c+49,"io_lsu2in_valid", false,-1);
    tracep->declBus(c+50,"io_lsu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+51,"io_lsu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+52,"io_lsu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+53,"io_lsu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+54,"io_lsu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+55,"io_lsu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+56,"io_lsu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+57,"io_lsu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+58,"io_lsu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+59,"io_lsu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBus(c+60,"io_lsu2in_bits_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+61,"io_lsu2in_bits_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+62,"io_lsu2in_bits_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+63,"io_lsu2in_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+214,"io_out2ifu_valid", false,-1);
    tracep->declBus(c+215,"io_out2ifu_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+164,"io_reg_wdata", false,-1, 31,0);
    tracep->declBit(c+162,"io_reg_wen", false,-1);
    tracep->declBus(c+163,"io_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+166,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+167,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBit(c+165,"io_csr_wen_1", false,-1);
    tracep->declBus(c+161,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBit(c+160,"io_csr_wen_2", false,-1);
    tracep->declBus(c+215,"ifu_outdata_dnpc", false,-1, 31,0);
    tracep->declBit(c+202,"m2LSUstate", false,-1);
    tracep->declBus(c+203,"lastdnpc", false,-1, 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__IDU__DOT__state_reg));
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__IDU__DOT__exu_data_snpc),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__IDU__DOT__exu_data_pc),32);
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__IDU__DOT__exu_data_mem_ren));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__IDU__DOT__exu_data_mem_wen));
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__IDU__DOT__exu_data_m_rmask),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__IDU__DOT__exu_data_m_wmask),32);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__IDU__DOT__exu_data_reg_waddr),5);
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen));
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__IDU__DOT__exu_data_src1),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__IDU__DOT__exu_data_src2),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__IDU__DOT__exu_data_csr),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__IDU__DOT__exu_data_csr_a5),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__IDU__DOT__exu_data_mstatus),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__IDU__DOT__exu_data_imm),32);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op),5);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type),4);
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__IDU__DOT__exu_data_il_us));
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__EXU__DOT__state_reg));
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__EXU__DOT__lsu_data_snpc),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__EXU__DOT__lsu_data_pc),32);
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__EXU__DOT__lsu_data_mem_ren));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__EXU__DOT__lsu_data_mem_wen));
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__EXU__DOT__lsu_data_m_rmask),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__EXU__DOT__lsu_data_m_wmask),32);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__EXU__DOT__lsu_data_reg_waddr),5);
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__EXU__DOT__lsu_data_reg_wen));
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__EXU__DOT__lsu_data_src1),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__EXU__DOT__lsu_data_src2),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__EXU__DOT__lsu_data_csr),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__EXU__DOT__lsu_data_csr_a5),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__EXU__DOT__lsu_data_mstatus),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__EXU__DOT__lsu_data_imm),32);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type),4);
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__EXU__DOT__lsu_data_il_us));
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__EXU__DOT__lsu_data_alu_result),32);
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__EXU__DOT__m2IDUstate));
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__EXU__DOT__alu_result_reg),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__EXU__DOT___alu_io_result),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__Reg__DOT__reg_15),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__Reg__DOT__csr_2),32);
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__Inst_fetch__DOT__arvalid_reg));
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__shiftReg),5);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__Inst_fetch__DOT___vlg_pc_read_inst),32);
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0));
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__LSU__DOT__wbu_data_snpc),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__LSU__DOT__wbu_data_pc),32);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_waddr),5);
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen));
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__LSU__DOT__wbu_data_src1),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__LSU__DOT__wbu_data_csr),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__LSU__DOT__wbu_data_csr_a5),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__LSU__DOT__wbu_data_mstatus),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__LSU__DOT__wbu_data_imm),32);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type),4);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rdata),32);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_bresp),2);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rresp),2);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__LSU__DOT__wbu_data_alu_result),32);
    bufp->fullIData(oldp+64,(((IData)(vlSelf->top__DOT__LSU__DOT___GEN_4)
                               ? vlSelf->top__DOT__LSU__DOT__mem_raddr_reg
                               : 0U)),32);
    bufp->fullCData(oldp+65,(((IData)(vlSelf->top__DOT__LSU__DOT___GEN_4)
                               ? (7U & vlSelf->top__DOT__LSU__DOT__mem_rmask_reg)
                               : 0U)),3);
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__LSU__DOT__io_ar_lsu_mem_arvalid_0));
    bufp->fullIData(oldp+67,(vlSelf->top__DOT___Mem_io_r_mem_lsu_rdata),32);
    bufp->fullCData(oldp+68,(((IData)(vlSelf->top__DOT__LSU__DOT__io_ar_lsu_mem_arvalid_0)
                               ? ((IData)(vlSelf->top__DOT__Mem__DOT___GEN_1)
                                   ? (IData)(vlSelf->top__DOT__Mem__DOT__rresp_reg)
                                   : 0U) : 3U)),2);
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__Mem__DOT__rvalid_reg));
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__LSU__DOT__io_r_mem_lsu_rready_0));
    bufp->fullIData(oldp+71,(((IData)(vlSelf->top__DOT__LSU__DOT___GEN_5)
                               ? 0U : vlSelf->top__DOT__LSU__DOT__mem_wdata_reg)),32);
    bufp->fullCData(oldp+72,(vlSelf->top__DOT___LSU_io_w_lsu_mem_wmask),3);
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__LSU__DOT__io_w_lsu_mem_wvalid_0));
    bufp->fullIData(oldp+74,(vlSelf->top__DOT___LSU_io_aw_lsu_mem_awaddr),32);
    bufp->fullBit(oldp+75,(vlSelf->top__DOT__LSU__DOT__io_aw_lsu_mem_awvalid_0));
    bufp->fullCData(oldp+76,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T)
                               ? (((IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg) 
                                   & (IData)(vlSelf->top__DOT__LSU__DOT__io_b_mem_lsu_bready_0))
                                   ? (IData)(vlSelf->top__DOT__Mem__DOT__bresp_reg)
                                   : 0U) : 3U)),2);
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__Mem__DOT__bvalid_reg));
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__LSU__DOT__io_b_mem_lsu_bready_0));
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__LSU__DOT__m2EXUstate));
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__LSU__DOT__state_reg));
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__LSU__DOT__exu2in_valid));
    bufp->fullBit(oldp+82,(vlSelf->top__DOT__LSU__DOT__exu2in_valid_reg));
    bufp->fullBit(oldp+83,(vlSelf->top__DOT__LSU__DOT__rready_reg));
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__LSU__DOT__mem_raddr_reg),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__LSU__DOT__mem_rmask_reg),32);
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__LSU__DOT__mem_ren_reg));
    bufp->fullBit(oldp+87,(vlSelf->top__DOT__LSU__DOT__rvalid_reg));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__LSU__DOT__bready_reg));
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__LSU__DOT__mem_awaddr_reg),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__LSU__DOT__mem_wmask_reg),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__LSU__DOT__mem_wdata_reg),32);
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__LSU__DOT__mem_wen_reg));
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__LSU__DOT__m_wen_reg_delay));
    bufp->fullBit(oldp+94,(vlSelf->top__DOT__LSU__DOT__bvalid_reg));
    bufp->fullIData(oldp+95,(((3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type))
                               ? (IData)(vlSelf->top__DOT__LSU__DOT__mem_ren_reg)
                               : 0U)),32);
    bufp->fullBit(oldp+96,(((3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
                            & (IData)(vlSelf->top__DOT__LSU__DOT__exu2in_valid_reg))));
    bufp->fullIData(oldp+97,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter))
                               ? vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__dataReg
                               : 0U)),32);
    bufp->fullBit(oldp+98,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT___GEN_0)) 
                            & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter)) 
                               & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter))))));
    bufp->fullCData(oldp+99,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__shiftReg),5);
    bufp->fullCData(oldp+100,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter),5);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__dataReg),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__LSU__DOT___GEN_1),32);
    bufp->fullBit(oldp+103,(vlSelf->top__DOT__LSU__DOT___GEN_2));
    bufp->fullIData(oldp+104,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+105,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter))))));
    bufp->fullCData(oldp+106,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__shiftReg),5);
    bufp->fullCData(oldp+107,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter),5);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__dataReg),32);
    bufp->fullIData(oldp+109,(((IData)(vlSelf->top__DOT__LSU__DOT____VdfgTmp_hd83711f5__0)
                                ? 0U : (IData)(vlSelf->top__DOT__LSU__DOT___GEN_7))),32);
    bufp->fullBit(oldp+110,(((IData)(vlSelf->top__DOT__LSU__DOT__m2EXUstate) 
                             & ((3U != (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
                                & ((~ (((IData)(vlSelf->top__DOT__LSU__DOT__bvalid_reg) 
                                        != (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg)) 
                                       & (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg))) 
                                   & (IData)(vlSelf->top__DOT__LSU__DOT___GEN_7))))));
    bufp->fullIData(oldp+111,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_b__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+112,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter))))));
    bufp->fullCData(oldp+113,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__shiftReg),5);
    bufp->fullCData(oldp+114,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter),5);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__dataReg),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__LSU__DOT___GEN_3),32);
    bufp->fullBit(oldp+117,(((~ (((IData)(vlSelf->top__DOT__LSU__DOT__rvalid_reg) 
                                  != (IData)(vlSelf->top__DOT__Mem__DOT__rvalid_reg)) 
                                 & (IData)(vlSelf->top__DOT__Mem__DOT__rvalid_reg))) 
                             & (IData)(vlSelf->top__DOT__LSU__DOT___GEN_3))));
    bufp->fullIData(oldp+118,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_r__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+119,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter))))));
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__shiftReg),5);
    bufp->fullCData(oldp+121,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter),5);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__dataReg),32);
    bufp->fullIData(oldp+123,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_w__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+124,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter))))));
    bufp->fullCData(oldp+125,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__shiftReg),5);
    bufp->fullCData(oldp+126,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter),5);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__dataReg),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__Mem__DOT__rdata_reg),32);
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__Mem__DOT__rresp_reg),2);
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__Mem__DOT__arvalid_reg));
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__Mem__DOT__bresp_reg),2);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__Mem__DOT__waddr_reg),32);
    bufp->fullCData(oldp+133,(vlSelf->top__DOT__Mem__DOT__wmask_reg),3);
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__Mem__DOT__awvalid_reg));
    bufp->fullBit(oldp+135,(vlSelf->top__DOT__Mem__DOT__wvalid_reg));
    bufp->fullBit(oldp+136,(vlSelf->top__DOT__Mem__DOT__rvalid_en));
    bufp->fullBit(oldp+137,(vlSelf->top__DOT__Mem__DOT__bvalid_en));
    bufp->fullIData(oldp+138,(((IData)(vlSelf->top__DOT__LSU__DOT__io_ar_lsu_mem_arvalid_0)
                                ? vlSelf->top__DOT__Mem__DOT___m_m_rdata
                                : 0U)),32);
    bufp->fullBit(oldp+139,(((IData)(vlSelf->top__DOT__LSU__DOT__io_ar_lsu_mem_arvalid_0) 
                             & ((IData)(vlSelf->top__DOT__Mem__DOT__arvalid_reg) 
                                != (IData)(vlSelf->top__DOT__LSU__DOT__io_ar_lsu_mem_arvalid_0)))));
    bufp->fullIData(oldp+140,(((0U == (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter))
                                ? vlSelf->top__DOT__Mem__DOT__delay__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+141,(((~ (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter))))));
    bufp->fullCData(oldp+142,(vlSelf->top__DOT__Mem__DOT__delay__DOT__shiftReg),5);
    bufp->fullCData(oldp+143,(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter),5);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__Mem__DOT__delay__DOT__dataReg),32);
    bufp->fullIData(oldp+145,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T)
                                ? (IData)(vlSelf->top__DOT__Mem__DOT___m_m_wready)
                                : 0U)),32);
    bufp->fullBit(oldp+146,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T) 
                             & (((IData)(vlSelf->top__DOT__LSU__DOT__io_w_lsu_mem_wvalid_0) 
                                 != (IData)(vlSelf->top__DOT__Mem__DOT__wvalid_reg)) 
                                & ((IData)(vlSelf->top__DOT__LSU__DOT__io_w_lsu_mem_wvalid_0) 
                                   & (((IData)(vlSelf->top__DOT__LSU__DOT__io_aw_lsu_mem_awvalid_0) 
                                       != (IData)(vlSelf->top__DOT__Mem__DOT__awvalid_reg)) 
                                      & (IData)(vlSelf->top__DOT__LSU__DOT__io_aw_lsu_mem_awvalid_0)))))));
    bufp->fullIData(oldp+147,(((0U == (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter))
                                ? vlSelf->top__DOT__Mem__DOT__delay_w__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+148,(((~ (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter))))));
    bufp->fullCData(oldp+149,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__shiftReg),5);
    bufp->fullCData(oldp+150,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter),5);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__dataReg),32);
    bufp->fullIData(oldp+152,(((IData)(vlSelf->top__DOT__LSU__DOT__io_aw_lsu_mem_awvalid_0)
                                ? vlSelf->top__DOT___LSU_io_aw_lsu_mem_awaddr
                                : 0U)),32);
    bufp->fullIData(oldp+153,(((IData)(vlSelf->top__DOT__LSU__DOT__io_w_lsu_mem_wvalid_0)
                                ? ((IData)(vlSelf->top__DOT__LSU__DOT___GEN_5)
                                    ? 0U : vlSelf->top__DOT__LSU__DOT__mem_wdata_reg)
                                : 0U)),32);
    bufp->fullIData(oldp+154,(((IData)(vlSelf->top__DOT__LSU__DOT__io_w_lsu_mem_wvalid_0)
                                ? (IData)(vlSelf->top__DOT___LSU_io_w_lsu_mem_wmask)
                                : 0U)),32);
    bufp->fullBit(oldp+155,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T) 
                             & (((IData)(vlSelf->top__DOT___LSU_io_w_lsu_mem_wmask) 
                                 != (IData)(vlSelf->top__DOT__Mem__DOT__wmask_reg)) 
                                & (vlSelf->top__DOT___LSU_io_aw_lsu_mem_awaddr 
                                   != vlSelf->top__DOT__Mem__DOT__waddr_reg)))));
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__Mem__DOT___GEN),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__Mem__DOT___GEN_0),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__Mem__DOT___m_m_rdata),32);
    bufp->fullBit(oldp+159,(vlSelf->top__DOT__Mem__DOT___m_m_wready));
    bufp->fullBit(oldp+160,(((IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate) 
                             & ((~ (IData)(vlSelf->top__DOT__WBU__DOT___GEN_17)) 
                                & (0xcU == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))))));
    bufp->fullIData(oldp+161,(((1U & ((~ (IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate)) 
                                      | ((0xcU != (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)) 
                                         | (IData)(vlSelf->top__DOT__WBU__DOT___GEN_17))))
                                ? 0U : vlSelf->top__DOT__LSU__DOT__wbu_data_pc)),32);
    bufp->fullBit(oldp+162,(((IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate) 
                             & ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_14)
                                 ? (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen)
                                 : ((3U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))
                                     ? ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rresp)) 
                                        & (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen))
                                     : ((~ (IData)(vlSelf->top__DOT__WBU__DOT___GEN_13)) 
                                        & ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_15) 
                                           & (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen))))))));
    bufp->fullCData(oldp+163,(vlSelf->top__DOT___WBU_io_reg_waddr),5);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT___WBU_io_reg_wdata),32);
    bufp->fullBit(oldp+165,(vlSelf->top__DOT___WBU_io_csr_wen_1));
    bufp->fullCData(oldp+166,(vlSelf->top__DOT___WBU_io_csr_waddr_1),2);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT___WBU_io_csr_wdata_1),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__Reg__DOT__csr_0),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__Reg__DOT__csr_1),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__Reg__DOT__csr_3),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__Reg__DOT__reg_0),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__Reg__DOT__reg_1),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__Reg__DOT__reg_2),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__Reg__DOT__reg_3),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__Reg__DOT__reg_4),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__Reg__DOT__reg_5),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__Reg__DOT__reg_6),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__Reg__DOT__reg_7),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__Reg__DOT__reg_8),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__Reg__DOT__reg_9),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__Reg__DOT__reg_10),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__Reg__DOT__reg_11),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__Reg__DOT__reg_12),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__Reg__DOT__reg_13),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__Reg__DOT__reg_14),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__Reg__DOT__reg_16),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__Reg__DOT__reg_17),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__Reg__DOT__reg_18),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__Reg__DOT__reg_19),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__Reg__DOT__reg_20),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__Reg__DOT__reg_21),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__Reg__DOT__reg_22),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__Reg__DOT__reg_23),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__Reg__DOT__reg_24),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__Reg__DOT__reg_25),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__Reg__DOT__reg_26),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__Reg__DOT__reg_27),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__Reg__DOT__reg_28),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__Reg__DOT__reg_29),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__Reg__DOT__reg_30),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__Reg__DOT__reg_31),32);
    bufp->fullBit(oldp+202,(vlSelf->top__DOT__WBU__DOT__m2LSUstate));
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__WBU__DOT__lastdnpc),32);
    bufp->fullBit(oldp+204,(vlSelf->top__DOT__IFU__DOT__rready_reg));
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__IFU__DOT__inst_reg),32);
    bufp->fullCData(oldp+206,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                        >> 0xfU))),5);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__Reg__DOT__casez_tmp),32);
    bufp->fullCData(oldp+208,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__Reg__DOT__casez_tmp_0),32);
    bufp->fullCData(oldp+210,(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr),2);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__IDU__DOT__csr_imm),32);
    bufp->fullCData(oldp+212,(vlSelf->top__DOT__IDU__DOT__casez_tmp),5);
    bufp->fullCData(oldp+213,(vlSelf->top__DOT__IDU__DOT__casez_tmp_0),5);
    bufp->fullBit(oldp+214,(vlSelf->top__DOT___WBU_io_out2ifu_valid));
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__WBU__DOT__ifu_outdata_dnpc),32);
    bufp->fullIData(oldp+216,((((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                                ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                : 0U)),32);
    bufp->fullBit(oldp+217,(vlSelf->top__DOT__IFU__DOT__arvalid_reg));
    bufp->fullIData(oldp+218,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                ? vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg
                                : 0U)),32);
    bufp->fullBit(oldp+219,(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_reg));
    bufp->fullBit(oldp+220,(vlSelf->top__DOT__IFU__DOT__m2EXUstate));
    bufp->fullBit(oldp+221,(vlSelf->top__DOT__IFU__DOT__exu2in_reg));
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__IFU__DOT__indata_dnpc),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__IFU__DOT__ardata_reg),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_REG),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg),32);
    bufp->fullBit(oldp+226,(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_en));
    bufp->fullIData(oldp+227,(((0U == (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter))
                                ? vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+228,(((~ (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter))))));
    bufp->fullCData(oldp+229,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter),5);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__dataReg),32);
    bufp->fullIData(oldp+231,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                ? (((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                    & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                                    ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                    : 0U) : 0U)),32);
    bufp->fullBit(oldp+232,(vlSelf->clock));
    bufp->fullBit(oldp+233,(vlSelf->reset));
    bufp->fullIData(oldp+234,(vlSelf->io_pc),32);
    bufp->fullBit(oldp+235,(vlSelf->io_inv_flag));
    bufp->fullIData(oldp+236,(((IData)(4U) + vlSelf->io_pc)),32);
    bufp->fullIData(oldp+237,(((0U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                ? vlSelf->top__DOT__Reg__DOT__csr_0
                                : ((1U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                    ? vlSelf->top__DOT__Reg__DOT__csr_1
                                    : ((2U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                        ? vlSelf->top__DOT__Reg__DOT__csr_2
                                        : vlSelf->top__DOT__Reg__DOT__csr_3)))),32);
    bufp->fullIData(oldp+238,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                ? vlSelf->top__DOT__Inst_fetch__DOT___vlg_pc_read_inst
                                : 0U)),32);
    bufp->fullBit(oldp+239,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                             & ((IData)(vlSelf->top__DOT__Inst_fetch__DOT__arvalid_reg) 
                                != (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)))));
}

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
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
    tracep->declBus(c+232,"io_pc", false,-1, 31,0);
    tracep->declBit(c+233,"io_inv_flag", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
    tracep->declBus(c+232,"io_pc", false,-1, 31,0);
    tracep->declBit(c+233,"io_inv_flag", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
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
    tracep->declBus(c+38,"io_src1", false,-1, 31,0);
    tracep->declBus(c+39,"io_src2", false,-1, 31,0);
    tracep->declBus(c+40,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+41,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
    tracep->declBit(c+202,"io_ifu2in_valid", false,-1);
    tracep->declBus(c+234,"io_ifu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+232,"io_ifu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+203,"io_ifu2in_bits_inst", false,-1, 31,0);
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
    tracep->declBus(c+204,"io_reg_data_raddr_1", false,-1, 4,0);
    tracep->declBus(c+205,"io_reg_data_rdata_1", false,-1, 31,0);
    tracep->declBus(c+206,"io_reg_data_raddr_2", false,-1, 4,0);
    tracep->declBus(c+207,"io_reg_data_rdata_2", false,-1, 31,0);
    tracep->declBus(c+208,"io_reg_data_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+235,"io_reg_data_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+42,"io_reg_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+43,"io_reg_data_mstatus", false,-1, 31,0);
    tracep->declBit(c+233,"io_inv_flag", false,-1);
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
    tracep->declBit(c+44,"state", false,-1);
    tracep->declBit(c+1,"state_reg", false,-1);
    tracep->declBus(c+209,"csr_imm", false,-1, 31,0);
    tracep->declBus(c+210,"casez_tmp", false,-1, 4,0);
    tracep->declBus(c+211,"casez_tmp_0", false,-1, 4,0);
    tracep->pushNamePrefix("npc_break ");
    tracep->declBus(c+203,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
    tracep->declBit(c+202,"io_out_valid", false,-1);
    tracep->declBus(c+234,"io_out_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+232,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+203,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBit(c+212,"io_exu2in_valid", false,-1);
    tracep->declBus(c+213,"io_exu2in_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+214,"io_axi_ar_pc", false,-1, 31,0);
    tracep->declBit(c+215,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+216,"io_axi_r_inst", false,-1, 31,0);
    tracep->declBit(c+217,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+202,"io_axi_r_rready", false,-1);
    tracep->declBus(c+232,"io_out_bits_pc_0", false,-1, 31,0);
    tracep->declBit(c+218,"m2EXUstate", false,-1);
    tracep->declBit(c+219,"exu2in_reg", false,-1);
    tracep->declBus(c+220,"indata_dnpc", false,-1, 31,0);
    tracep->declBit(c+202,"rready_reg", false,-1);
    tracep->declBus(c+221,"ardata_reg", false,-1, 31,0);
    tracep->declBus(c+203,"inst_reg", false,-1, 31,0);
    tracep->declBit(c+215,"arvalid_reg", false,-1);
    tracep->declBus(c+222,"io_out_bits_pc_REG", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Inst_fetch ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
    tracep->declBus(c+216,"io_axi_r_inst", false,-1, 31,0);
    tracep->declBit(c+217,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+202,"io_axi_r_rready", false,-1);
    tracep->declBus(c+214,"io_axi_ar_pc", false,-1, 31,0);
    tracep->declBit(c+215,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+223,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+217,"rvalid_reg", false,-1);
    tracep->declBit(c+45,"arvalid_reg", false,-1);
    tracep->declBit(c+224,"rvalid_en", false,-1);
    tracep->pushNamePrefix("delay ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
    tracep->declBus(c+236,"io_inData", false,-1, 31,0);
    tracep->declBit(c+237,"io_inValid", false,-1);
    tracep->declBus(c+225,"io_outData", false,-1, 31,0);
    tracep->declBit(c+226,"io_delayDone", false,-1);
    tracep->declBus(c+46,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+227,"counter", false,-1, 4,0);
    tracep->declBus(c+228,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vlg_pc_read ");
    tracep->declBit(c+230,"clk", false,-1);
    tracep->declBus(c+229,"pc", false,-1, 31,0);
    tracep->declBit(c+215,"pc_en", false,-1);
    tracep->declBus(c+47,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
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
    tracep->declBit(c+48,"io_out2wbu_valid", false,-1);
    tracep->declBus(c+49,"io_out2wbu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+50,"io_out2wbu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+51,"io_out2wbu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+52,"io_out2wbu_bits_reg_wen", false,-1);
    tracep->declBus(c+53,"io_out2wbu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+54,"io_out2wbu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+55,"io_out2wbu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+56,"io_out2wbu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+57,"io_out2wbu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+58,"io_out2wbu_bits_inst_type", false,-1, 3,0);
    tracep->declBus(c+59,"io_out2wbu_bits_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+60,"io_out2wbu_bits_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+61,"io_out2wbu_bits_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+62,"io_out2wbu_bits_alu_result", false,-1, 31,0);
    tracep->declBus(c+63,"io_ar_exu_mem_raddr", false,-1, 31,0);
    tracep->declBus(c+64,"io_ar_exu_mem_rmask", false,-1, 2,0);
    tracep->declBit(c+65,"io_ar_exu_mem_arvalid", false,-1);
    tracep->declBus(c+66,"io_r_mem_exu_rdata", false,-1, 31,0);
    tracep->declBus(c+67,"io_r_mem_exu_rresp", false,-1, 1,0);
    tracep->declBit(c+68,"io_r_mem_exu_rvalid", false,-1);
    tracep->declBit(c+69,"io_r_mem_exu_rready", false,-1);
    tracep->declBus(c+70,"io_w_exu_mem_wdata", false,-1, 31,0);
    tracep->declBus(c+71,"io_w_exu_mem_wmask", false,-1, 2,0);
    tracep->declBit(c+72,"io_w_exu_mem_wvalid", false,-1);
    tracep->declBus(c+73,"io_aw_exu_mem_awaddr", false,-1, 31,0);
    tracep->declBit(c+74,"io_aw_exu_mem_awvalid", false,-1);
    tracep->declBus(c+75,"io_b_mem_exu_bresp", false,-1, 1,0);
    tracep->declBit(c+76,"io_b_mem_exu_bvalid", false,-1);
    tracep->declBit(c+77,"io_b_mem_exu_bready", false,-1);
    tracep->declBus(c+50,"wbu_data_pc", false,-1, 31,0);
    tracep->declBit(c+77,"io_b_mem_exu_bready_0", false,-1);
    tracep->declBit(c+69,"io_r_mem_exu_rready_0", false,-1);
    tracep->declBit(c+78,"m2EXUstate", false,-1);
    tracep->declBus(c+79,"pc_reg", false,-1, 31,0);
    tracep->declBit(c+80,"rready_reg", false,-1);
    tracep->declBus(c+81,"mem_raddr_reg", false,-1, 31,0);
    tracep->declBus(c+82,"mem_rmask_reg", false,-1, 31,0);
    tracep->declBit(c+83,"mem_ren_reg", false,-1);
    tracep->declBit(c+84,"exu2in_valid", false,-1);
    tracep->declBit(c+65,"io_ar_exu_mem_arvalid_0", false,-1);
    tracep->declBit(c+85,"rvalid_reg", false,-1);
    tracep->declBit(c+86,"bready_reg", false,-1);
    tracep->declBus(c+87,"mem_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+88,"mem_wmask_reg", false,-1, 31,0);
    tracep->declBus(c+89,"mem_wdata_reg", false,-1, 31,0);
    tracep->declBit(c+90,"mem_wen_reg", false,-1);
    tracep->declBit(c+91,"m_wen_reg_delay", false,-1);
    tracep->declBit(c+74,"io_aw_exu_mem_awvalid_0", false,-1);
    tracep->declBit(c+72,"io_w_exu_mem_wvalid_0", false,-1);
    tracep->declBit(c+92,"bvalid_reg", false,-1);
    tracep->declBus(c+49,"wbu_data_snpc", false,-1, 31,0);
    tracep->declBus(c+51,"wbu_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+52,"wbu_data_reg_wen", false,-1);
    tracep->declBus(c+53,"wbu_data_src1", false,-1, 31,0);
    tracep->declBus(c+54,"wbu_data_csr", false,-1, 31,0);
    tracep->declBus(c+55,"wbu_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+56,"wbu_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+57,"wbu_data_imm", false,-1, 31,0);
    tracep->declBus(c+58,"wbu_data_inst_type", false,-1, 3,0);
    tracep->declBus(c+59,"wbu_data_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+60,"wbu_data_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+61,"wbu_data_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+62,"wbu_data_alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("delay_ar ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
    tracep->declBus(c+93,"io_inData", false,-1, 31,0);
    tracep->declBit(c+94,"io_inValid", false,-1);
    tracep->declBus(c+95,"io_outData", false,-1, 31,0);
    tracep->declBit(c+96,"io_delayDone", false,-1);
    tracep->declBus(c+97,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+98,"counter", false,-1, 4,0);
    tracep->declBus(c+99,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_aw ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
    tracep->declBus(c+100,"io_inData", false,-1, 31,0);
    tracep->declBit(c+101,"io_inValid", false,-1);
    tracep->declBus(c+102,"io_outData", false,-1, 31,0);
    tracep->declBit(c+103,"io_delayDone", false,-1);
    tracep->declBus(c+104,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+105,"counter", false,-1, 4,0);
    tracep->declBus(c+106,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_b ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
    tracep->declBus(c+107,"io_inData", false,-1, 31,0);
    tracep->declBit(c+108,"io_inValid", false,-1);
    tracep->declBus(c+109,"io_outData", false,-1, 31,0);
    tracep->declBit(c+110,"io_delayDone", false,-1);
    tracep->declBus(c+111,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+112,"counter", false,-1, 4,0);
    tracep->declBus(c+113,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_r ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
    tracep->declBus(c+114,"io_inData", false,-1, 31,0);
    tracep->declBit(c+115,"io_inValid", false,-1);
    tracep->declBus(c+116,"io_outData", false,-1, 31,0);
    tracep->declBit(c+117,"io_delayDone", false,-1);
    tracep->declBus(c+118,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+119,"counter", false,-1, 4,0);
    tracep->declBus(c+120,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_w ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
    tracep->declBus(c+100,"io_inData", false,-1, 31,0);
    tracep->declBit(c+101,"io_inValid", false,-1);
    tracep->declBus(c+121,"io_outData", false,-1, 31,0);
    tracep->declBit(c+122,"io_delayDone", false,-1);
    tracep->declBus(c+123,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+124,"counter", false,-1, 4,0);
    tracep->declBus(c+125,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Mem ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
    tracep->declBus(c+63,"io_ar_exu_mem_raddr", false,-1, 31,0);
    tracep->declBus(c+64,"io_ar_exu_mem_rmask", false,-1, 2,0);
    tracep->declBit(c+65,"io_ar_exu_mem_arvalid", false,-1);
    tracep->declBus(c+66,"io_r_mem_exu_rdata", false,-1, 31,0);
    tracep->declBus(c+67,"io_r_mem_exu_rresp", false,-1, 1,0);
    tracep->declBit(c+68,"io_r_mem_exu_rvalid", false,-1);
    tracep->declBit(c+69,"io_r_mem_exu_rready", false,-1);
    tracep->declBus(c+70,"io_w_exu_mem_wdata", false,-1, 31,0);
    tracep->declBus(c+71,"io_w_exu_mem_wmask", false,-1, 2,0);
    tracep->declBit(c+72,"io_w_exu_mem_wvalid", false,-1);
    tracep->declBus(c+73,"io_aw_exu_mem_awaddr", false,-1, 31,0);
    tracep->declBit(c+74,"io_aw_exu_mem_awvalid", false,-1);
    tracep->declBus(c+75,"io_b_mem_exu_bresp", false,-1, 1,0);
    tracep->declBit(c+76,"io_b_mem_exu_bvalid", false,-1);
    tracep->declBit(c+77,"io_b_mem_exu_bready", false,-1);
    tracep->declBus(c+126,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+68,"rvalid_reg", false,-1);
    tracep->declBus(c+127,"rresp_reg", false,-1, 1,0);
    tracep->declBit(c+128,"arvalid_reg", false,-1);
    tracep->declBit(c+76,"bvalid_reg", false,-1);
    tracep->declBus(c+129,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+130,"waddr_reg", false,-1, 31,0);
    tracep->declBus(c+131,"wmask_reg", false,-1, 2,0);
    tracep->declBit(c+132,"awvalid_reg", false,-1);
    tracep->declBit(c+133,"wvalid_reg", false,-1);
    tracep->declBit(c+134,"rvalid_en", false,-1);
    tracep->declBit(c+135,"bvalid_en", false,-1);
    tracep->pushNamePrefix("delay ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
    tracep->declBus(c+136,"io_inData", false,-1, 31,0);
    tracep->declBit(c+137,"io_inValid", false,-1);
    tracep->declBus(c+138,"io_outData", false,-1, 31,0);
    tracep->declBit(c+139,"io_delayDone", false,-1);
    tracep->declBus(c+140,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+141,"counter", false,-1, 4,0);
    tracep->declBus(c+142,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_w ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
    tracep->declBus(c+143,"io_inData", false,-1, 31,0);
    tracep->declBit(c+144,"io_inValid", false,-1);
    tracep->declBus(c+145,"io_outData", false,-1, 31,0);
    tracep->declBit(c+146,"io_delayDone", false,-1);
    tracep->declBus(c+147,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+148,"counter", false,-1, 4,0);
    tracep->declBus(c+149,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBus(c+150,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+151,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+152,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+153,"m_wen", false,-1);
    tracep->declBus(c+154,"m_raddr", false,-1, 31,0);
    tracep->declBus(c+155,"m_rmask", false,-1, 31,0);
    tracep->declBit(c+65,"m_ren", false,-1);
    tracep->declBus(c+156,"m_rdata", false,-1, 31,0);
    tracep->declBit(c+157,"m_wready", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Reg ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
    tracep->declBit(c+158,"io_csr_wen_2", false,-1);
    tracep->declBus(c+159,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBus(c+204,"io_reg_read_raddr_1", false,-1, 4,0);
    tracep->declBus(c+205,"io_reg_read_rdata_1", false,-1, 31,0);
    tracep->declBus(c+206,"io_reg_read_raddr_2", false,-1, 4,0);
    tracep->declBus(c+207,"io_reg_read_rdata_2", false,-1, 31,0);
    tracep->declBus(c+208,"io_reg_read_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+235,"io_reg_read_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+42,"io_reg_read_csr_a5", false,-1, 31,0);
    tracep->declBus(c+43,"io_reg_read_mstatus", false,-1, 31,0);
    tracep->declBit(c+160,"io_wen", false,-1);
    tracep->declBus(c+161,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+162,"io_wdata", false,-1, 31,0);
    tracep->declBit(c+163,"io_csr_wen_1", false,-1);
    tracep->declBus(c+164,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+165,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBus(c+166,"csr_0", false,-1, 31,0);
    tracep->declBus(c+167,"csr_1", false,-1, 31,0);
    tracep->declBus(c+43,"csr_2", false,-1, 31,0);
    tracep->declBus(c+168,"csr_3", false,-1, 31,0);
    tracep->declBus(c+169,"reg_0", false,-1, 31,0);
    tracep->declBus(c+170,"reg_1", false,-1, 31,0);
    tracep->declBus(c+171,"reg_2", false,-1, 31,0);
    tracep->declBus(c+172,"reg_3", false,-1, 31,0);
    tracep->declBus(c+173,"reg_4", false,-1, 31,0);
    tracep->declBus(c+174,"reg_5", false,-1, 31,0);
    tracep->declBus(c+175,"reg_6", false,-1, 31,0);
    tracep->declBus(c+176,"reg_7", false,-1, 31,0);
    tracep->declBus(c+177,"reg_8", false,-1, 31,0);
    tracep->declBus(c+178,"reg_9", false,-1, 31,0);
    tracep->declBus(c+179,"reg_10", false,-1, 31,0);
    tracep->declBus(c+180,"reg_11", false,-1, 31,0);
    tracep->declBus(c+181,"reg_12", false,-1, 31,0);
    tracep->declBus(c+182,"reg_13", false,-1, 31,0);
    tracep->declBus(c+183,"reg_14", false,-1, 31,0);
    tracep->declBus(c+42,"reg_15", false,-1, 31,0);
    tracep->declBus(c+184,"reg_16", false,-1, 31,0);
    tracep->declBus(c+185,"reg_17", false,-1, 31,0);
    tracep->declBus(c+186,"reg_18", false,-1, 31,0);
    tracep->declBus(c+187,"reg_19", false,-1, 31,0);
    tracep->declBus(c+188,"reg_20", false,-1, 31,0);
    tracep->declBus(c+189,"reg_21", false,-1, 31,0);
    tracep->declBus(c+190,"reg_22", false,-1, 31,0);
    tracep->declBus(c+191,"reg_23", false,-1, 31,0);
    tracep->declBus(c+192,"reg_24", false,-1, 31,0);
    tracep->declBus(c+193,"reg_25", false,-1, 31,0);
    tracep->declBus(c+194,"reg_26", false,-1, 31,0);
    tracep->declBus(c+195,"reg_27", false,-1, 31,0);
    tracep->declBus(c+196,"reg_28", false,-1, 31,0);
    tracep->declBus(c+197,"reg_29", false,-1, 31,0);
    tracep->declBus(c+198,"reg_30", false,-1, 31,0);
    tracep->declBus(c+199,"reg_31", false,-1, 31,0);
    tracep->declBus(c+205,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+207,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+235,"casez_tmp_1", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+230,"clock", false,-1);
    tracep->declBit(c+231,"reset", false,-1);
    tracep->declBit(c+48,"io_lsu2in_valid", false,-1);
    tracep->declBus(c+49,"io_lsu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+50,"io_lsu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+51,"io_lsu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+52,"io_lsu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+53,"io_lsu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+54,"io_lsu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+55,"io_lsu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+56,"io_lsu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+57,"io_lsu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+58,"io_lsu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBus(c+59,"io_lsu2in_bits_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+60,"io_lsu2in_bits_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+61,"io_lsu2in_bits_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+62,"io_lsu2in_bits_alu_result", false,-1, 31,0);
    tracep->declBit(c+212,"io_out2ifu_valid", false,-1);
    tracep->declBus(c+213,"io_out2ifu_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+162,"io_reg_wdata", false,-1, 31,0);
    tracep->declBit(c+160,"io_reg_wen", false,-1);
    tracep->declBus(c+161,"io_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+164,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+165,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBit(c+163,"io_csr_wen_1", false,-1);
    tracep->declBus(c+159,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBit(c+158,"io_csr_wen_2", false,-1);
    tracep->declBus(c+213,"ifu_outdata_dnpc", false,-1, 31,0);
    tracep->declBit(c+200,"m2LSUstate", false,-1);
    tracep->declBus(c+201,"lastdnpc", false,-1, 31,0);
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
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__EXU__DOT___alu_io_result),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__Reg__DOT__reg_15),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__Reg__DOT__csr_2),32);
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__Inst_fetch__DOT__arvalid_reg));
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__shiftReg),5);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__Inst_fetch__DOT___vlg_pc_read_inst),32);
    bufp->fullBit(oldp+48,(((3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type))
                             ? (IData)(vlSelf->top__DOT__LSU__DOT__io_r_mem_exu_rready_0)
                             : ((4U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type))
                                 ? (IData)(vlSelf->top__DOT__LSU__DOT__io_b_mem_exu_bready_0)
                                 : (vlSelf->top__DOT__LSU__DOT__pc_reg 
                                    != vlSelf->top__DOT__LSU__DOT__wbu_data_pc)))));
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__LSU__DOT__wbu_data_snpc),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__LSU__DOT__wbu_data_pc),32);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_waddr),5);
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen));
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__LSU__DOT__wbu_data_src1),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__LSU__DOT__wbu_data_csr),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__LSU__DOT__wbu_data_csr_a5),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__LSU__DOT__wbu_data_mstatus),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__LSU__DOT__wbu_data_imm),32);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type),4);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rdata),32);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_bresp),2);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rresp),2);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__LSU__DOT__wbu_data_alu_result),32);
    bufp->fullIData(oldp+63,(((IData)(vlSelf->top__DOT__LSU__DOT___GEN_4)
                               ? vlSelf->top__DOT__LSU__DOT__mem_raddr_reg
                               : 0U)),32);
    bufp->fullCData(oldp+64,(((IData)(vlSelf->top__DOT__LSU__DOT___GEN_4)
                               ? (7U & vlSelf->top__DOT__LSU__DOT__mem_rmask_reg)
                               : 0U)),3);
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__LSU__DOT__io_ar_exu_mem_arvalid_0));
    bufp->fullIData(oldp+66,(vlSelf->top__DOT___Mem_io_r_mem_exu_rdata),32);
    bufp->fullCData(oldp+67,(((IData)(vlSelf->top__DOT__LSU__DOT__io_ar_exu_mem_arvalid_0)
                               ? ((IData)(vlSelf->top__DOT__Mem__DOT___GEN_1)
                                   ? (IData)(vlSelf->top__DOT__Mem__DOT__rresp_reg)
                                   : 0U) : 3U)),2);
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__Mem__DOT__rvalid_reg));
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__LSU__DOT__io_r_mem_exu_rready_0));
    bufp->fullIData(oldp+70,(((IData)(vlSelf->top__DOT__LSU__DOT___GEN_5)
                               ? 0U : vlSelf->top__DOT__LSU__DOT__mem_wdata_reg)),32);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT___LSU_io_w_exu_mem_wmask),3);
    bufp->fullBit(oldp+72,(vlSelf->top__DOT__LSU__DOT__io_w_exu_mem_wvalid_0));
    bufp->fullIData(oldp+73,(vlSelf->top__DOT___LSU_io_aw_exu_mem_awaddr),32);
    bufp->fullBit(oldp+74,(vlSelf->top__DOT__LSU__DOT__io_aw_exu_mem_awvalid_0));
    bufp->fullCData(oldp+75,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T)
                               ? (((IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg) 
                                   & (IData)(vlSelf->top__DOT__LSU__DOT__io_b_mem_exu_bready_0))
                                   ? (IData)(vlSelf->top__DOT__Mem__DOT__bresp_reg)
                                   : 0U) : 3U)),2);
    bufp->fullBit(oldp+76,(vlSelf->top__DOT__Mem__DOT__bvalid_reg));
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__LSU__DOT__io_b_mem_exu_bready_0));
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__LSU__DOT__m2EXUstate));
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__LSU__DOT__pc_reg),32);
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__LSU__DOT__rready_reg));
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__LSU__DOT__mem_raddr_reg),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__LSU__DOT__mem_rmask_reg),32);
    bufp->fullBit(oldp+83,(vlSelf->top__DOT__LSU__DOT__mem_ren_reg));
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__LSU__DOT__exu2in_valid));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__LSU__DOT__rvalid_reg));
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__LSU__DOT__bready_reg));
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__LSU__DOT__mem_awaddr_reg),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__LSU__DOT__mem_wmask_reg),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__LSU__DOT__mem_wdata_reg),32);
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__LSU__DOT__mem_wen_reg));
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__LSU__DOT__m_wen_reg_delay));
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__LSU__DOT__bvalid_reg));
    bufp->fullIData(oldp+93,(((3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type))
                               ? (IData)(vlSelf->top__DOT__LSU__DOT__mem_ren_reg)
                               : 0U)),32);
    bufp->fullBit(oldp+94,(((3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
                            & (IData)(vlSelf->top__DOT__LSU__DOT__exu2in_valid))));
    bufp->fullIData(oldp+95,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter))
                               ? vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__dataReg
                               : 0U)),32);
    bufp->fullBit(oldp+96,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT___GEN_0)) 
                            & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter)) 
                               & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter))))));
    bufp->fullCData(oldp+97,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__shiftReg),5);
    bufp->fullCData(oldp+98,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter),5);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__dataReg),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__LSU__DOT___GEN_1),32);
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__LSU__DOT___GEN_2));
    bufp->fullIData(oldp+102,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+103,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter))))));
    bufp->fullCData(oldp+104,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__shiftReg),5);
    bufp->fullCData(oldp+105,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter),5);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__dataReg),32);
    bufp->fullIData(oldp+107,(((IData)(vlSelf->top__DOT__LSU__DOT____VdfgTmp_hd83711f5__0)
                                ? 0U : (IData)(vlSelf->top__DOT__LSU__DOT___GEN_7))),32);
    bufp->fullBit(oldp+108,(((IData)(vlSelf->top__DOT__LSU__DOT__m2EXUstate) 
                             & ((3U != (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
                                & ((~ (((IData)(vlSelf->top__DOT__LSU__DOT__bvalid_reg) 
                                        != (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg)) 
                                       & (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg))) 
                                   & (IData)(vlSelf->top__DOT__LSU__DOT___GEN_7))))));
    bufp->fullIData(oldp+109,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_b__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+110,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter))))));
    bufp->fullCData(oldp+111,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__shiftReg),5);
    bufp->fullCData(oldp+112,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter),5);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__dataReg),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__LSU__DOT___GEN_4),32);
    bufp->fullBit(oldp+115,(((~ (((IData)(vlSelf->top__DOT__LSU__DOT__rvalid_reg) 
                                  != (IData)(vlSelf->top__DOT__Mem__DOT__rvalid_reg)) 
                                 & (IData)(vlSelf->top__DOT__Mem__DOT__rvalid_reg))) 
                             & (IData)(vlSelf->top__DOT__LSU__DOT___GEN_4))));
    bufp->fullIData(oldp+116,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_r__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+117,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter))))));
    bufp->fullCData(oldp+118,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__shiftReg),5);
    bufp->fullCData(oldp+119,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter),5);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__dataReg),32);
    bufp->fullIData(oldp+121,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_w__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+122,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter))))));
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__shiftReg),5);
    bufp->fullCData(oldp+124,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter),5);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__dataReg),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__Mem__DOT__rdata_reg),32);
    bufp->fullCData(oldp+127,(vlSelf->top__DOT__Mem__DOT__rresp_reg),2);
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__Mem__DOT__arvalid_reg));
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__Mem__DOT__bresp_reg),2);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__Mem__DOT__waddr_reg),32);
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__Mem__DOT__wmask_reg),3);
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__Mem__DOT__awvalid_reg));
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__Mem__DOT__wvalid_reg));
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__Mem__DOT__rvalid_en));
    bufp->fullBit(oldp+135,(vlSelf->top__DOT__Mem__DOT__bvalid_en));
    bufp->fullIData(oldp+136,(((IData)(vlSelf->top__DOT__LSU__DOT__io_ar_exu_mem_arvalid_0)
                                ? vlSelf->top__DOT__Mem__DOT___m_m_rdata
                                : 0U)),32);
    bufp->fullBit(oldp+137,(((IData)(vlSelf->top__DOT__LSU__DOT__io_ar_exu_mem_arvalid_0) 
                             & ((IData)(vlSelf->top__DOT__Mem__DOT__arvalid_reg) 
                                != (IData)(vlSelf->top__DOT__LSU__DOT__io_ar_exu_mem_arvalid_0)))));
    bufp->fullIData(oldp+138,(((0U == (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter))
                                ? vlSelf->top__DOT__Mem__DOT__delay__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+139,(((~ (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter))))));
    bufp->fullCData(oldp+140,(vlSelf->top__DOT__Mem__DOT__delay__DOT__shiftReg),5);
    bufp->fullCData(oldp+141,(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter),5);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__Mem__DOT__delay__DOT__dataReg),32);
    bufp->fullIData(oldp+143,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T)
                                ? (IData)(vlSelf->top__DOT__Mem__DOT___m_m_wready)
                                : 0U)),32);
    bufp->fullBit(oldp+144,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T) 
                             & (((IData)(vlSelf->top__DOT__LSU__DOT__io_w_exu_mem_wvalid_0) 
                                 != (IData)(vlSelf->top__DOT__Mem__DOT__wvalid_reg)) 
                                & ((IData)(vlSelf->top__DOT__LSU__DOT__io_w_exu_mem_wvalid_0) 
                                   & (((IData)(vlSelf->top__DOT__LSU__DOT__io_aw_exu_mem_awvalid_0) 
                                       != (IData)(vlSelf->top__DOT__Mem__DOT__awvalid_reg)) 
                                      & (IData)(vlSelf->top__DOT__LSU__DOT__io_aw_exu_mem_awvalid_0)))))));
    bufp->fullIData(oldp+145,(((0U == (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter))
                                ? vlSelf->top__DOT__Mem__DOT__delay_w__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+146,(((~ (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter))))));
    bufp->fullCData(oldp+147,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__shiftReg),5);
    bufp->fullCData(oldp+148,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter),5);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__dataReg),32);
    bufp->fullIData(oldp+150,(((IData)(vlSelf->top__DOT__LSU__DOT__io_aw_exu_mem_awvalid_0)
                                ? vlSelf->top__DOT___LSU_io_aw_exu_mem_awaddr
                                : 0U)),32);
    bufp->fullIData(oldp+151,(((IData)(vlSelf->top__DOT__LSU__DOT__io_w_exu_mem_wvalid_0)
                                ? ((IData)(vlSelf->top__DOT__LSU__DOT___GEN_5)
                                    ? 0U : vlSelf->top__DOT__LSU__DOT__mem_wdata_reg)
                                : 0U)),32);
    bufp->fullIData(oldp+152,(((IData)(vlSelf->top__DOT__LSU__DOT__io_w_exu_mem_wvalid_0)
                                ? (IData)(vlSelf->top__DOT___LSU_io_w_exu_mem_wmask)
                                : 0U)),32);
    bufp->fullBit(oldp+153,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T) 
                             & (((IData)(vlSelf->top__DOT___LSU_io_w_exu_mem_wmask) 
                                 != (IData)(vlSelf->top__DOT__Mem__DOT__wmask_reg)) 
                                & (vlSelf->top__DOT___LSU_io_aw_exu_mem_awaddr 
                                   != vlSelf->top__DOT__Mem__DOT__waddr_reg)))));
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__Mem__DOT___GEN),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__Mem__DOT___GEN_0),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__Mem__DOT___m_m_rdata),32);
    bufp->fullBit(oldp+157,(vlSelf->top__DOT__Mem__DOT___m_m_wready));
    bufp->fullBit(oldp+158,(((IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate) 
                             & ((~ (IData)(vlSelf->top__DOT__WBU__DOT___GEN_17)) 
                                & (0xcU == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))))));
    bufp->fullIData(oldp+159,(((1U & ((~ (IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate)) 
                                      | ((0xcU != (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)) 
                                         | (IData)(vlSelf->top__DOT__WBU__DOT___GEN_17))))
                                ? 0U : vlSelf->top__DOT__LSU__DOT__wbu_data_pc)),32);
    bufp->fullBit(oldp+160,(((IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate) 
                             & ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_14)
                                 ? (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen)
                                 : ((3U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))
                                     ? ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rresp)) 
                                        & (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen))
                                     : ((~ (IData)(vlSelf->top__DOT__WBU__DOT___GEN_13)) 
                                        & ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_15) 
                                           & (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen))))))));
    bufp->fullCData(oldp+161,(vlSelf->top__DOT___WBU_io_reg_waddr),5);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT___WBU_io_reg_wdata),32);
    bufp->fullBit(oldp+163,(vlSelf->top__DOT___WBU_io_csr_wen_1));
    bufp->fullCData(oldp+164,(vlSelf->top__DOT___WBU_io_csr_waddr_1),2);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT___WBU_io_csr_wdata_1),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__Reg__DOT__csr_0),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__Reg__DOT__csr_1),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__Reg__DOT__csr_3),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__Reg__DOT__reg_0),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__Reg__DOT__reg_1),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__Reg__DOT__reg_2),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__Reg__DOT__reg_3),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__Reg__DOT__reg_4),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__Reg__DOT__reg_5),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__Reg__DOT__reg_6),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__Reg__DOT__reg_7),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__Reg__DOT__reg_8),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__Reg__DOT__reg_9),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__Reg__DOT__reg_10),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__Reg__DOT__reg_11),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__Reg__DOT__reg_12),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__Reg__DOT__reg_13),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__Reg__DOT__reg_14),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__Reg__DOT__reg_16),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__Reg__DOT__reg_17),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__Reg__DOT__reg_18),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__Reg__DOT__reg_19),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__Reg__DOT__reg_20),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__Reg__DOT__reg_21),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__Reg__DOT__reg_22),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__Reg__DOT__reg_23),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__Reg__DOT__reg_24),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__Reg__DOT__reg_25),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__Reg__DOT__reg_26),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__Reg__DOT__reg_27),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__Reg__DOT__reg_28),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__Reg__DOT__reg_29),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__Reg__DOT__reg_30),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__Reg__DOT__reg_31),32);
    bufp->fullBit(oldp+200,(vlSelf->top__DOT__WBU__DOT__m2LSUstate));
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__WBU__DOT__lastdnpc),32);
    bufp->fullBit(oldp+202,(vlSelf->top__DOT__IFU__DOT__rready_reg));
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__IFU__DOT__inst_reg),32);
    bufp->fullCData(oldp+204,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                        >> 0xfU))),5);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__Reg__DOT__casez_tmp),32);
    bufp->fullCData(oldp+206,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__Reg__DOT__casez_tmp_0),32);
    bufp->fullCData(oldp+208,(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr),2);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__IDU__DOT__csr_imm),32);
    bufp->fullCData(oldp+210,(vlSelf->top__DOT__IDU__DOT__casez_tmp),5);
    bufp->fullCData(oldp+211,(vlSelf->top__DOT__IDU__DOT__casez_tmp_0),5);
    bufp->fullBit(oldp+212,(vlSelf->top__DOT___WBU_io_out2ifu_valid));
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__WBU__DOT__ifu_outdata_dnpc),32);
    bufp->fullIData(oldp+214,((((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                                ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                : 0U)),32);
    bufp->fullBit(oldp+215,(vlSelf->top__DOT__IFU__DOT__arvalid_reg));
    bufp->fullIData(oldp+216,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                ? vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg
                                : 0U)),32);
    bufp->fullBit(oldp+217,(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_reg));
    bufp->fullBit(oldp+218,(vlSelf->top__DOT__IFU__DOT__m2EXUstate));
    bufp->fullBit(oldp+219,(vlSelf->top__DOT__IFU__DOT__exu2in_reg));
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__IFU__DOT__indata_dnpc),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__IFU__DOT__ardata_reg),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_REG),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg),32);
    bufp->fullBit(oldp+224,(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_en));
    bufp->fullIData(oldp+225,(((0U == (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter))
                                ? vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+226,(((~ (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter))))));
    bufp->fullCData(oldp+227,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter),5);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__dataReg),32);
    bufp->fullIData(oldp+229,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                ? (((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                    & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                                    ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                    : 0U) : 0U)),32);
    bufp->fullBit(oldp+230,(vlSelf->clock));
    bufp->fullBit(oldp+231,(vlSelf->reset));
    bufp->fullIData(oldp+232,(vlSelf->io_pc),32);
    bufp->fullBit(oldp+233,(vlSelf->io_inv_flag));
    bufp->fullIData(oldp+234,(((IData)(4U) + vlSelf->io_pc)),32);
    bufp->fullIData(oldp+235,(((0U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                ? vlSelf->top__DOT__Reg__DOT__csr_0
                                : ((1U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                    ? vlSelf->top__DOT__Reg__DOT__csr_1
                                    : ((2U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                        ? vlSelf->top__DOT__Reg__DOT__csr_2
                                        : vlSelf->top__DOT__Reg__DOT__csr_3)))),32);
    bufp->fullIData(oldp+236,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                ? vlSelf->top__DOT__Inst_fetch__DOT___vlg_pc_read_inst
                                : 0U)),32);
    bufp->fullBit(oldp+237,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                             & ((IData)(vlSelf->top__DOT__Inst_fetch__DOT__arvalid_reg) 
                                != (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)))));
}

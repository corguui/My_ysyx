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
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
    tracep->declBus(c+245,"io_pc", false,-1, 31,0);
    tracep->declBit(c+246,"io_inv_flag", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
    tracep->declBus(c+245,"io_pc", false,-1, 31,0);
    tracep->declBit(c+246,"io_inv_flag", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
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
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
    tracep->declBit(c+215,"io_ifu2in_valid", false,-1);
    tracep->declBus(c+247,"io_ifu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+245,"io_ifu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+216,"io_ifu2in_bits_inst", false,-1, 31,0);
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
    tracep->declBus(c+217,"io_reg_data_raddr_1", false,-1, 4,0);
    tracep->declBus(c+218,"io_reg_data_rdata_1", false,-1, 31,0);
    tracep->declBus(c+219,"io_reg_data_raddr_2", false,-1, 4,0);
    tracep->declBus(c+220,"io_reg_data_rdata_2", false,-1, 31,0);
    tracep->declBus(c+221,"io_reg_data_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+248,"io_reg_data_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+42,"io_reg_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+43,"io_reg_data_mstatus", false,-1, 31,0);
    tracep->declBit(c+246,"io_inv_flag", false,-1);
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
    tracep->declBus(c+222,"csr_imm", false,-1, 31,0);
    tracep->declBus(c+223,"casez_tmp", false,-1, 4,0);
    tracep->declBus(c+224,"casez_tmp_0", false,-1, 4,0);
    tracep->pushNamePrefix("npc_break ");
    tracep->declBus(c+216,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
    tracep->declBit(c+215,"io_out_valid", false,-1);
    tracep->declBus(c+247,"io_out_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+245,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+216,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBit(c+225,"io_exu2in_valid", false,-1);
    tracep->declBus(c+226,"io_exu2in_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+227,"io_axi_ar_pc", false,-1, 31,0);
    tracep->declBit(c+228,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+229,"io_axi_r_inst", false,-1, 31,0);
    tracep->declBit(c+230,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+215,"io_axi_r_rready", false,-1);
    tracep->declBus(c+245,"io_out_bits_pc_0", false,-1, 31,0);
    tracep->declBit(c+231,"m2EXUstate", false,-1);
    tracep->declBit(c+232,"exu2in_reg", false,-1);
    tracep->declBus(c+233,"indata_dnpc", false,-1, 31,0);
    tracep->declBit(c+215,"rready_reg", false,-1);
    tracep->declBus(c+234,"ardata_reg", false,-1, 31,0);
    tracep->declBus(c+216,"inst_reg", false,-1, 31,0);
    tracep->declBit(c+228,"arvalid_reg", false,-1);
    tracep->declBus(c+235,"io_out_bits_pc_REG", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Inst_fetch ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
    tracep->declBus(c+229,"io_axi_r_inst", false,-1, 31,0);
    tracep->declBit(c+230,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+215,"io_axi_r_rready", false,-1);
    tracep->declBus(c+227,"io_axi_ar_pc", false,-1, 31,0);
    tracep->declBit(c+228,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+236,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+230,"rvalid_reg", false,-1);
    tracep->declBit(c+45,"arvalid_reg", false,-1);
    tracep->declBit(c+237,"rvalid_en", false,-1);
    tracep->pushNamePrefix("delay ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
    tracep->declBus(c+249,"io_inData", false,-1, 31,0);
    tracep->declBit(c+250,"io_inValid", false,-1);
    tracep->declBus(c+238,"io_outData", false,-1, 31,0);
    tracep->declBit(c+239,"io_delayDone", false,-1);
    tracep->declBus(c+46,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+240,"counter", false,-1, 4,0);
    tracep->declBus(c+241,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vlg_pc_read ");
    tracep->declBit(c+243,"clk", false,-1);
    tracep->declBus(c+242,"pc", false,-1, 31,0);
    tracep->declBit(c+228,"pc_en", false,-1);
    tracep->declBus(c+47,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
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
    tracep->declBit(c+77,"io_b_mem_exu_bready_0", false,-1);
    tracep->declBit(c+69,"io_r_mem_exu_rready_0", false,-1);
    tracep->declBit(c+78,"m2EXUstate", false,-1);
    tracep->declBit(c+48,"io_out2wbu_valid_0", false,-1);
    tracep->declBit(c+79,"rready_reg", false,-1);
    tracep->declBus(c+80,"mem_raddr_reg", false,-1, 31,0);
    tracep->declBus(c+81,"mem_rmask_reg", false,-1, 31,0);
    tracep->declBit(c+82,"mem_ren_reg", false,-1);
    tracep->declBit(c+83,"exu2in_valid", false,-1);
    tracep->declBit(c+65,"io_ar_exu_mem_arvalid_0", false,-1);
    tracep->declBit(c+84,"rvalid_reg", false,-1);
    tracep->declBit(c+85,"bready_reg", false,-1);
    tracep->declBus(c+86,"mem_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+87,"mem_wmask_reg", false,-1, 31,0);
    tracep->declBus(c+88,"mem_wdata_reg", false,-1, 31,0);
    tracep->declBit(c+89,"mem_wen_reg", false,-1);
    tracep->declBit(c+90,"m_wen_reg_delay", false,-1);
    tracep->declBit(c+74,"io_aw_exu_mem_awvalid_0", false,-1);
    tracep->declBit(c+72,"io_w_exu_mem_wvalid_0", false,-1);
    tracep->declBit(c+91,"bvalid_reg", false,-1);
    tracep->declBus(c+92,"wbu_data_snpc", false,-1, 31,0);
    tracep->declBus(c+93,"wbu_data_pc", false,-1, 31,0);
    tracep->declBus(c+94,"wbu_data_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+95,"wbu_data_reg_wen", false,-1);
    tracep->declBus(c+96,"wbu_data_src1", false,-1, 31,0);
    tracep->declBus(c+97,"wbu_data_csr", false,-1, 31,0);
    tracep->declBus(c+98,"wbu_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+99,"wbu_data_mstatus", false,-1, 31,0);
    tracep->declBus(c+100,"wbu_data_imm", false,-1, 31,0);
    tracep->declBus(c+101,"wbu_data_inst_type", false,-1, 3,0);
    tracep->declBus(c+102,"wbu_data_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+103,"wbu_data_mem_bresp", false,-1, 1,0);
    tracep->declBus(c+104,"wbu_data_mem_rresp", false,-1, 1,0);
    tracep->declBus(c+105,"wbu_data_alu_result", false,-1, 31,0);
    tracep->pushNamePrefix("delay_ar ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
    tracep->declBus(c+106,"io_inData", false,-1, 31,0);
    tracep->declBit(c+107,"io_inValid", false,-1);
    tracep->declBus(c+108,"io_outData", false,-1, 31,0);
    tracep->declBit(c+109,"io_delayDone", false,-1);
    tracep->declBus(c+110,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+111,"counter", false,-1, 4,0);
    tracep->declBus(c+112,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_aw ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
    tracep->declBus(c+113,"io_inData", false,-1, 31,0);
    tracep->declBit(c+114,"io_inValid", false,-1);
    tracep->declBus(c+115,"io_outData", false,-1, 31,0);
    tracep->declBit(c+116,"io_delayDone", false,-1);
    tracep->declBus(c+117,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+118,"counter", false,-1, 4,0);
    tracep->declBus(c+119,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_b ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
    tracep->declBus(c+120,"io_inData", false,-1, 31,0);
    tracep->declBit(c+121,"io_inValid", false,-1);
    tracep->declBus(c+122,"io_outData", false,-1, 31,0);
    tracep->declBit(c+123,"io_delayDone", false,-1);
    tracep->declBus(c+124,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+125,"counter", false,-1, 4,0);
    tracep->declBus(c+126,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_r ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
    tracep->declBus(c+127,"io_inData", false,-1, 31,0);
    tracep->declBit(c+128,"io_inValid", false,-1);
    tracep->declBus(c+129,"io_outData", false,-1, 31,0);
    tracep->declBit(c+130,"io_delayDone", false,-1);
    tracep->declBus(c+131,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+132,"counter", false,-1, 4,0);
    tracep->declBus(c+133,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_w ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
    tracep->declBus(c+113,"io_inData", false,-1, 31,0);
    tracep->declBit(c+114,"io_inValid", false,-1);
    tracep->declBus(c+134,"io_outData", false,-1, 31,0);
    tracep->declBit(c+135,"io_delayDone", false,-1);
    tracep->declBus(c+136,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+137,"counter", false,-1, 4,0);
    tracep->declBus(c+138,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Mem ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
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
    tracep->declBus(c+139,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+68,"rvalid_reg", false,-1);
    tracep->declBus(c+140,"rresp_reg", false,-1, 1,0);
    tracep->declBit(c+141,"arvalid_reg", false,-1);
    tracep->declBit(c+76,"bvalid_reg", false,-1);
    tracep->declBus(c+142,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+143,"waddr_reg", false,-1, 31,0);
    tracep->declBus(c+144,"wmask_reg", false,-1, 2,0);
    tracep->declBit(c+145,"awvalid_reg", false,-1);
    tracep->declBit(c+146,"wvalid_reg", false,-1);
    tracep->declBit(c+147,"rvalid_en", false,-1);
    tracep->declBit(c+148,"bvalid_en", false,-1);
    tracep->pushNamePrefix("delay ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
    tracep->declBus(c+149,"io_inData", false,-1, 31,0);
    tracep->declBit(c+150,"io_inValid", false,-1);
    tracep->declBus(c+151,"io_outData", false,-1, 31,0);
    tracep->declBit(c+152,"io_delayDone", false,-1);
    tracep->declBus(c+153,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+154,"counter", false,-1, 4,0);
    tracep->declBus(c+155,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_w ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
    tracep->declBus(c+156,"io_inData", false,-1, 31,0);
    tracep->declBit(c+157,"io_inValid", false,-1);
    tracep->declBus(c+158,"io_outData", false,-1, 31,0);
    tracep->declBit(c+159,"io_delayDone", false,-1);
    tracep->declBus(c+160,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+161,"counter", false,-1, 4,0);
    tracep->declBus(c+162,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBus(c+163,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+164,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+165,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+166,"m_wen", false,-1);
    tracep->declBus(c+167,"m_raddr", false,-1, 31,0);
    tracep->declBus(c+168,"m_rmask", false,-1, 31,0);
    tracep->declBit(c+65,"m_ren", false,-1);
    tracep->declBus(c+169,"m_rdata", false,-1, 31,0);
    tracep->declBit(c+170,"m_wready", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Reg ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
    tracep->declBit(c+171,"io_csr_wen_2", false,-1);
    tracep->declBus(c+172,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBus(c+217,"io_reg_read_raddr_1", false,-1, 4,0);
    tracep->declBus(c+218,"io_reg_read_rdata_1", false,-1, 31,0);
    tracep->declBus(c+219,"io_reg_read_raddr_2", false,-1, 4,0);
    tracep->declBus(c+220,"io_reg_read_rdata_2", false,-1, 31,0);
    tracep->declBus(c+221,"io_reg_read_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+248,"io_reg_read_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+42,"io_reg_read_csr_a5", false,-1, 31,0);
    tracep->declBus(c+43,"io_reg_read_mstatus", false,-1, 31,0);
    tracep->declBit(c+173,"io_wen", false,-1);
    tracep->declBus(c+174,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+175,"io_wdata", false,-1, 31,0);
    tracep->declBit(c+176,"io_csr_wen_1", false,-1);
    tracep->declBus(c+177,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+178,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBus(c+179,"csr_0", false,-1, 31,0);
    tracep->declBus(c+180,"csr_1", false,-1, 31,0);
    tracep->declBus(c+43,"csr_2", false,-1, 31,0);
    tracep->declBus(c+181,"csr_3", false,-1, 31,0);
    tracep->declBus(c+182,"reg_0", false,-1, 31,0);
    tracep->declBus(c+183,"reg_1", false,-1, 31,0);
    tracep->declBus(c+184,"reg_2", false,-1, 31,0);
    tracep->declBus(c+185,"reg_3", false,-1, 31,0);
    tracep->declBus(c+186,"reg_4", false,-1, 31,0);
    tracep->declBus(c+187,"reg_5", false,-1, 31,0);
    tracep->declBus(c+188,"reg_6", false,-1, 31,0);
    tracep->declBus(c+189,"reg_7", false,-1, 31,0);
    tracep->declBus(c+190,"reg_8", false,-1, 31,0);
    tracep->declBus(c+191,"reg_9", false,-1, 31,0);
    tracep->declBus(c+192,"reg_10", false,-1, 31,0);
    tracep->declBus(c+193,"reg_11", false,-1, 31,0);
    tracep->declBus(c+194,"reg_12", false,-1, 31,0);
    tracep->declBus(c+195,"reg_13", false,-1, 31,0);
    tracep->declBus(c+196,"reg_14", false,-1, 31,0);
    tracep->declBus(c+42,"reg_15", false,-1, 31,0);
    tracep->declBus(c+197,"reg_16", false,-1, 31,0);
    tracep->declBus(c+198,"reg_17", false,-1, 31,0);
    tracep->declBus(c+199,"reg_18", false,-1, 31,0);
    tracep->declBus(c+200,"reg_19", false,-1, 31,0);
    tracep->declBus(c+201,"reg_20", false,-1, 31,0);
    tracep->declBus(c+202,"reg_21", false,-1, 31,0);
    tracep->declBus(c+203,"reg_22", false,-1, 31,0);
    tracep->declBus(c+204,"reg_23", false,-1, 31,0);
    tracep->declBus(c+205,"reg_24", false,-1, 31,0);
    tracep->declBus(c+206,"reg_25", false,-1, 31,0);
    tracep->declBus(c+207,"reg_26", false,-1, 31,0);
    tracep->declBus(c+208,"reg_27", false,-1, 31,0);
    tracep->declBus(c+209,"reg_28", false,-1, 31,0);
    tracep->declBus(c+210,"reg_29", false,-1, 31,0);
    tracep->declBus(c+211,"reg_30", false,-1, 31,0);
    tracep->declBus(c+212,"reg_31", false,-1, 31,0);
    tracep->declBus(c+218,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+220,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+248,"casez_tmp_1", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBU ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
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
    tracep->declBit(c+225,"io_out2ifu_valid", false,-1);
    tracep->declBus(c+226,"io_out2ifu_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+175,"io_reg_wdata", false,-1, 31,0);
    tracep->declBit(c+173,"io_reg_wen", false,-1);
    tracep->declBus(c+174,"io_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+177,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+178,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBit(c+176,"io_csr_wen_1", false,-1);
    tracep->declBus(c+172,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBit(c+171,"io_csr_wen_2", false,-1);
    tracep->declBus(c+226,"ifu_outdata_dnpc", false,-1, 31,0);
    tracep->declBit(c+213,"m2LSUstate", false,-1);
    tracep->declBus(c+214,"lastdnpc", false,-1, 31,0);
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
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0));
    bufp->fullIData(oldp+49,(vlSelf->top__DOT___LSU_io_out2wbu_bits_snpc),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT___LSU_io_out2wbu_bits_pc),32);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT___LSU_io_out2wbu_bits_reg_waddr),5);
    bufp->fullBit(oldp+52,(vlSelf->top__DOT___LSU_io_out2wbu_bits_reg_wen));
    bufp->fullIData(oldp+53,(((IData)(vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0)
                               ? vlSelf->top__DOT__LSU__DOT__wbu_data_src1
                               : 0U)),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT___LSU_io_out2wbu_bits_csr),32);
    bufp->fullIData(oldp+55,(((IData)(vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0)
                               ? vlSelf->top__DOT__LSU__DOT__wbu_data_csr_a5
                               : 0U)),32);
    bufp->fullIData(oldp+56,(((IData)(vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0)
                               ? vlSelf->top__DOT__LSU__DOT__wbu_data_mstatus
                               : 0U)),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT___LSU_io_out2wbu_bits_imm),32);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT___LSU_io_out2wbu_bits_inst_type),4);
    bufp->fullIData(oldp+59,(((IData)(vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0)
                               ? vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rdata
                               : 0U)),32);
    bufp->fullCData(oldp+60,(((IData)(vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0)
                               ? (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_bresp)
                               : 0U)),2);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT___LSU_io_out2wbu_bits_mem_rresp),2);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT___LSU_io_out2wbu_bits_alu_result),32);
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
    bufp->fullBit(oldp+79,(vlSelf->top__DOT__LSU__DOT__rready_reg));
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__LSU__DOT__mem_raddr_reg),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__LSU__DOT__mem_rmask_reg),32);
    bufp->fullBit(oldp+82,(vlSelf->top__DOT__LSU__DOT__mem_ren_reg));
    bufp->fullBit(oldp+83,(vlSelf->top__DOT__LSU__DOT__exu2in_valid));
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__LSU__DOT__rvalid_reg));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__LSU__DOT__bready_reg));
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__LSU__DOT__mem_awaddr_reg),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__LSU__DOT__mem_wmask_reg),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__LSU__DOT__mem_wdata_reg),32);
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__LSU__DOT__mem_wen_reg));
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__LSU__DOT__m_wen_reg_delay));
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__LSU__DOT__bvalid_reg));
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__LSU__DOT__wbu_data_snpc),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__LSU__DOT__wbu_data_pc),32);
    bufp->fullCData(oldp+94,(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_waddr),5);
    bufp->fullBit(oldp+95,(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen));
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__LSU__DOT__wbu_data_src1),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__LSU__DOT__wbu_data_csr),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__LSU__DOT__wbu_data_csr_a5),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__LSU__DOT__wbu_data_mstatus),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__LSU__DOT__wbu_data_imm),32);
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type),4);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rdata),32);
    bufp->fullCData(oldp+103,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_bresp),2);
    bufp->fullCData(oldp+104,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rresp),2);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__LSU__DOT__wbu_data_alu_result),32);
    bufp->fullIData(oldp+106,(((3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type))
                                ? (IData)(vlSelf->top__DOT__LSU__DOT__mem_ren_reg)
                                : 0U)),32);
    bufp->fullBit(oldp+107,(((3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
                             & (IData)(vlSelf->top__DOT__LSU__DOT__exu2in_valid))));
    bufp->fullIData(oldp+108,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+109,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter))))));
    bufp->fullCData(oldp+110,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__shiftReg),5);
    bufp->fullCData(oldp+111,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter),5);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__dataReg),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__LSU__DOT___GEN_1),32);
    bufp->fullBit(oldp+114,(vlSelf->top__DOT__LSU__DOT___GEN_2));
    bufp->fullIData(oldp+115,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+116,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter))))));
    bufp->fullCData(oldp+117,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__shiftReg),5);
    bufp->fullCData(oldp+118,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter),5);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__dataReg),32);
    bufp->fullIData(oldp+120,(((IData)(vlSelf->top__DOT__LSU__DOT____VdfgTmp_hd83711f5__0)
                                ? 0U : (IData)(vlSelf->top__DOT__LSU__DOT___GEN_7))),32);
    bufp->fullBit(oldp+121,(((IData)(vlSelf->top__DOT__LSU__DOT__m2EXUstate) 
                             & ((3U != (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
                                & ((~ (((IData)(vlSelf->top__DOT__LSU__DOT__bvalid_reg) 
                                        != (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg)) 
                                       & (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg))) 
                                   & (IData)(vlSelf->top__DOT__LSU__DOT___GEN_7))))));
    bufp->fullIData(oldp+122,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_b__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+123,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter))))));
    bufp->fullCData(oldp+124,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__shiftReg),5);
    bufp->fullCData(oldp+125,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter),5);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__dataReg),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__LSU__DOT___GEN_4),32);
    bufp->fullBit(oldp+128,(((~ (((IData)(vlSelf->top__DOT__LSU__DOT__rvalid_reg) 
                                  != (IData)(vlSelf->top__DOT__Mem__DOT__rvalid_reg)) 
                                 & (IData)(vlSelf->top__DOT__Mem__DOT__rvalid_reg))) 
                             & (IData)(vlSelf->top__DOT__LSU__DOT___GEN_4))));
    bufp->fullIData(oldp+129,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_r__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+130,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter))))));
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__shiftReg),5);
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter),5);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__dataReg),32);
    bufp->fullIData(oldp+134,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter))
                                ? vlSelf->top__DOT__LSU__DOT__delay_w__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+135,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter))))));
    bufp->fullCData(oldp+136,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__shiftReg),5);
    bufp->fullCData(oldp+137,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter),5);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__dataReg),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__Mem__DOT__rdata_reg),32);
    bufp->fullCData(oldp+140,(vlSelf->top__DOT__Mem__DOT__rresp_reg),2);
    bufp->fullBit(oldp+141,(vlSelf->top__DOT__Mem__DOT__arvalid_reg));
    bufp->fullCData(oldp+142,(vlSelf->top__DOT__Mem__DOT__bresp_reg),2);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__Mem__DOT__waddr_reg),32);
    bufp->fullCData(oldp+144,(vlSelf->top__DOT__Mem__DOT__wmask_reg),3);
    bufp->fullBit(oldp+145,(vlSelf->top__DOT__Mem__DOT__awvalid_reg));
    bufp->fullBit(oldp+146,(vlSelf->top__DOT__Mem__DOT__wvalid_reg));
    bufp->fullBit(oldp+147,(vlSelf->top__DOT__Mem__DOT__rvalid_en));
    bufp->fullBit(oldp+148,(vlSelf->top__DOT__Mem__DOT__bvalid_en));
    bufp->fullIData(oldp+149,(((IData)(vlSelf->top__DOT__LSU__DOT__io_ar_exu_mem_arvalid_0)
                                ? vlSelf->top__DOT__Mem__DOT___m_m_rdata
                                : 0U)),32);
    bufp->fullBit(oldp+150,(((IData)(vlSelf->top__DOT__LSU__DOT__io_ar_exu_mem_arvalid_0) 
                             & ((IData)(vlSelf->top__DOT__Mem__DOT__arvalid_reg) 
                                != (IData)(vlSelf->top__DOT__LSU__DOT__io_ar_exu_mem_arvalid_0)))));
    bufp->fullIData(oldp+151,(((0U == (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter))
                                ? vlSelf->top__DOT__Mem__DOT__delay__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+152,(((~ (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter))))));
    bufp->fullCData(oldp+153,(vlSelf->top__DOT__Mem__DOT__delay__DOT__shiftReg),5);
    bufp->fullCData(oldp+154,(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter),5);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__Mem__DOT__delay__DOT__dataReg),32);
    bufp->fullIData(oldp+156,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T)
                                ? (IData)(vlSelf->top__DOT__Mem__DOT___m_m_wready)
                                : 0U)),32);
    bufp->fullBit(oldp+157,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T) 
                             & (((IData)(vlSelf->top__DOT__LSU__DOT__io_w_exu_mem_wvalid_0) 
                                 != (IData)(vlSelf->top__DOT__Mem__DOT__wvalid_reg)) 
                                & ((IData)(vlSelf->top__DOT__LSU__DOT__io_w_exu_mem_wvalid_0) 
                                   & (((IData)(vlSelf->top__DOT__LSU__DOT__io_aw_exu_mem_awvalid_0) 
                                       != (IData)(vlSelf->top__DOT__Mem__DOT__awvalid_reg)) 
                                      & (IData)(vlSelf->top__DOT__LSU__DOT__io_aw_exu_mem_awvalid_0)))))));
    bufp->fullIData(oldp+158,(((0U == (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter))
                                ? vlSelf->top__DOT__Mem__DOT__delay_w__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+159,(((~ (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter))))));
    bufp->fullCData(oldp+160,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__shiftReg),5);
    bufp->fullCData(oldp+161,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter),5);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__dataReg),32);
    bufp->fullIData(oldp+163,(((IData)(vlSelf->top__DOT__LSU__DOT__io_aw_exu_mem_awvalid_0)
                                ? vlSelf->top__DOT___LSU_io_aw_exu_mem_awaddr
                                : 0U)),32);
    bufp->fullIData(oldp+164,(((IData)(vlSelf->top__DOT__LSU__DOT__io_w_exu_mem_wvalid_0)
                                ? ((IData)(vlSelf->top__DOT__LSU__DOT___GEN_5)
                                    ? 0U : vlSelf->top__DOT__LSU__DOT__mem_wdata_reg)
                                : 0U)),32);
    bufp->fullIData(oldp+165,(((IData)(vlSelf->top__DOT__LSU__DOT__io_w_exu_mem_wvalid_0)
                                ? (IData)(vlSelf->top__DOT___LSU_io_w_exu_mem_wmask)
                                : 0U)),32);
    bufp->fullBit(oldp+166,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T) 
                             & (((IData)(vlSelf->top__DOT___LSU_io_w_exu_mem_wmask) 
                                 != (IData)(vlSelf->top__DOT__Mem__DOT__wmask_reg)) 
                                & (vlSelf->top__DOT___LSU_io_aw_exu_mem_awaddr 
                                   != vlSelf->top__DOT__Mem__DOT__waddr_reg)))));
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__Mem__DOT___GEN),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__Mem__DOT___GEN_0),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__Mem__DOT___m_m_rdata),32);
    bufp->fullBit(oldp+170,(vlSelf->top__DOT__Mem__DOT___m_m_wready));
    bufp->fullBit(oldp+171,(((IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate) 
                             & ((~ (IData)(vlSelf->top__DOT__WBU__DOT___GEN_17)) 
                                & (0xcU == (IData)(vlSelf->top__DOT___LSU_io_out2wbu_bits_inst_type))))));
    bufp->fullIData(oldp+172,(((1U & ((~ (IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate)) 
                                      | ((0xcU != (IData)(vlSelf->top__DOT___LSU_io_out2wbu_bits_inst_type)) 
                                         | (IData)(vlSelf->top__DOT__WBU__DOT___GEN_17))))
                                ? 0U : vlSelf->top__DOT___LSU_io_out2wbu_bits_pc)),32);
    bufp->fullBit(oldp+173,(((IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate) 
                             & ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_14)
                                 ? (IData)(vlSelf->top__DOT___LSU_io_out2wbu_bits_reg_wen)
                                 : ((3U == (IData)(vlSelf->top__DOT___LSU_io_out2wbu_bits_inst_type))
                                     ? ((1U == (IData)(vlSelf->top__DOT___LSU_io_out2wbu_bits_mem_rresp)) 
                                        & (IData)(vlSelf->top__DOT___LSU_io_out2wbu_bits_reg_wen))
                                     : ((~ (IData)(vlSelf->top__DOT__WBU__DOT___GEN_13)) 
                                        & ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_15) 
                                           & (IData)(vlSelf->top__DOT___LSU_io_out2wbu_bits_reg_wen))))))));
    bufp->fullCData(oldp+174,(vlSelf->top__DOT___WBU_io_reg_waddr),5);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT___WBU_io_reg_wdata),32);
    bufp->fullBit(oldp+176,(vlSelf->top__DOT___WBU_io_csr_wen_1));
    bufp->fullCData(oldp+177,(vlSelf->top__DOT___WBU_io_csr_waddr_1),2);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT___WBU_io_csr_wdata_1),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__Reg__DOT__csr_0),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__Reg__DOT__csr_1),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__Reg__DOT__csr_3),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__Reg__DOT__reg_0),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__Reg__DOT__reg_1),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__Reg__DOT__reg_2),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__Reg__DOT__reg_3),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__Reg__DOT__reg_4),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__Reg__DOT__reg_5),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__Reg__DOT__reg_6),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__Reg__DOT__reg_7),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__Reg__DOT__reg_8),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__Reg__DOT__reg_9),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__Reg__DOT__reg_10),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__Reg__DOT__reg_11),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__Reg__DOT__reg_12),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__Reg__DOT__reg_13),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__Reg__DOT__reg_14),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__Reg__DOT__reg_16),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__Reg__DOT__reg_17),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__Reg__DOT__reg_18),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__Reg__DOT__reg_19),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__Reg__DOT__reg_20),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__Reg__DOT__reg_21),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__Reg__DOT__reg_22),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__Reg__DOT__reg_23),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__Reg__DOT__reg_24),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__Reg__DOT__reg_25),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__Reg__DOT__reg_26),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__Reg__DOT__reg_27),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__Reg__DOT__reg_28),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__Reg__DOT__reg_29),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__Reg__DOT__reg_30),32);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__Reg__DOT__reg_31),32);
    bufp->fullBit(oldp+213,(vlSelf->top__DOT__WBU__DOT__m2LSUstate));
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__WBU__DOT__lastdnpc),32);
    bufp->fullBit(oldp+215,(vlSelf->top__DOT__IFU__DOT__rready_reg));
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__IFU__DOT__inst_reg),32);
    bufp->fullCData(oldp+217,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                        >> 0xfU))),5);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__Reg__DOT__casez_tmp),32);
    bufp->fullCData(oldp+219,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__Reg__DOT__casez_tmp_0),32);
    bufp->fullCData(oldp+221,(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr),2);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__IDU__DOT__csr_imm),32);
    bufp->fullCData(oldp+223,(vlSelf->top__DOT__IDU__DOT__casez_tmp),5);
    bufp->fullCData(oldp+224,(vlSelf->top__DOT__IDU__DOT__casez_tmp_0),5);
    bufp->fullBit(oldp+225,(vlSelf->top__DOT___WBU_io_out2ifu_valid));
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__WBU__DOT__ifu_outdata_dnpc),32);
    bufp->fullIData(oldp+227,((((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                                ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                : 0U)),32);
    bufp->fullBit(oldp+228,(vlSelf->top__DOT__IFU__DOT__arvalid_reg));
    bufp->fullIData(oldp+229,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                ? vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg
                                : 0U)),32);
    bufp->fullBit(oldp+230,(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_reg));
    bufp->fullBit(oldp+231,(vlSelf->top__DOT__IFU__DOT__m2EXUstate));
    bufp->fullBit(oldp+232,(vlSelf->top__DOT__IFU__DOT__exu2in_reg));
    bufp->fullIData(oldp+233,(vlSelf->top__DOT__IFU__DOT__indata_dnpc),32);
    bufp->fullIData(oldp+234,(vlSelf->top__DOT__IFU__DOT__ardata_reg),32);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_REG),32);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg),32);
    bufp->fullBit(oldp+237,(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_en));
    bufp->fullIData(oldp+238,(((0U == (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter))
                                ? vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+239,(((~ (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter))))));
    bufp->fullCData(oldp+240,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter),5);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__dataReg),32);
    bufp->fullIData(oldp+242,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                ? (((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                    & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                                    ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                    : 0U) : 0U)),32);
    bufp->fullBit(oldp+243,(vlSelf->clock));
    bufp->fullBit(oldp+244,(vlSelf->reset));
    bufp->fullIData(oldp+245,(vlSelf->io_pc),32);
    bufp->fullBit(oldp+246,(vlSelf->io_inv_flag));
    bufp->fullIData(oldp+247,(((IData)(4U) + vlSelf->io_pc)),32);
    bufp->fullIData(oldp+248,(((0U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                ? vlSelf->top__DOT__Reg__DOT__csr_0
                                : ((1U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                    ? vlSelf->top__DOT__Reg__DOT__csr_1
                                    : ((2U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                        ? vlSelf->top__DOT__Reg__DOT__csr_2
                                        : vlSelf->top__DOT__Reg__DOT__csr_3)))),32);
    bufp->fullIData(oldp+249,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                ? vlSelf->top__DOT__Inst_fetch__DOT___vlg_pc_read_inst
                                : 0U)),32);
    bufp->fullBit(oldp+250,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                             & ((IData)(vlSelf->top__DOT__Inst_fetch__DOT__arvalid_reg) 
                                != (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)))));
}

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
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declBus(c+197,"io_pc", false,-1, 31,0);
    tracep->declBit(c+198,"io_inv_flag", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declBus(c+197,"io_pc", false,-1, 31,0);
    tracep->declBit(c+198,"io_inv_flag", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
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
    tracep->declBit(c+167,"io_out2ifu_valid", false,-1);
    tracep->declBus(c+168,"io_out2ifu_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+19,"io_ar_exu_mem_raddr", false,-1, 31,0);
    tracep->declBus(c+20,"io_ar_exu_mem_rmask", false,-1, 2,0);
    tracep->declBit(c+21,"io_ar_exu_mem_arvalid", false,-1);
    tracep->declBus(c+22,"io_r_mem_exu_rdata", false,-1, 31,0);
    tracep->declBus(c+23,"io_r_mem_exu_rresp", false,-1, 1,0);
    tracep->declBit(c+24,"io_r_mem_exu_rvalid", false,-1);
    tracep->declBit(c+25,"io_r_mem_exu_rready", false,-1);
    tracep->declBus(c+26,"io_w_exu_mem_wdata", false,-1, 31,0);
    tracep->declBus(c+27,"io_w_exu_mem_wmask", false,-1, 2,0);
    tracep->declBit(c+28,"io_w_exu_mem_wvalid", false,-1);
    tracep->declBus(c+29,"io_aw_exu_mem_awaddr", false,-1, 31,0);
    tracep->declBit(c+30,"io_aw_exu_mem_awvalid", false,-1);
    tracep->declBus(c+31,"io_b_mem_exu_bresp", false,-1, 1,0);
    tracep->declBit(c+32,"io_b_mem_exu_bvalid", false,-1);
    tracep->declBit(c+33,"io_b_mem_exu_bready", false,-1);
    tracep->declBus(c+34,"io_reg_wdata", false,-1, 31,0);
    tracep->declBit(c+35,"io_reg_wen", false,-1);
    tracep->declBus(c+36,"io_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+37,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+38,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBit(c+39,"io_csr_wen_1", false,-1);
    tracep->declBus(c+40,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBit(c+41,"io_csr_wen_2", false,-1);
    tracep->declBus(c+168,"ifu_outdata_dnpc", false,-1, 31,0);
    tracep->declBit(c+33,"io_b_mem_exu_bready_0", false,-1);
    tracep->declBit(c+25,"io_r_mem_exu_rready_0", false,-1);
    tracep->declBit(c+42,"m2IDUstate", false,-1);
    tracep->declBus(c+43,"lastdnpc", false,-1, 31,0);
    tracep->declBit(c+44,"reg_wen_reg", false,-1);
    tracep->declBus(c+45,"reg_waddr_reg", false,-1, 4,0);
    tracep->declBit(c+46,"rready_reg", false,-1);
    tracep->declBus(c+47,"mem_raddr_reg", false,-1, 31,0);
    tracep->declBus(c+48,"mem_rmask_reg", false,-1, 31,0);
    tracep->declBit(c+49,"mem_ren_reg", false,-1);
    tracep->declBit(c+50,"idu2in_valid", false,-1);
    tracep->declBit(c+21,"io_ar_exu_mem_arvalid_0", false,-1);
    tracep->declBit(c+51,"rvalid_reg", false,-1);
    tracep->declBit(c+52,"bready_reg", false,-1);
    tracep->declBus(c+53,"mem_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+54,"mem_wmask_reg", false,-1, 31,0);
    tracep->declBus(c+55,"mem_wdata_reg", false,-1, 31,0);
    tracep->declBit(c+56,"mem_wen_reg", false,-1);
    tracep->declBit(c+30,"io_aw_exu_mem_awvalid_0", false,-1);
    tracep->declBit(c+28,"io_w_exu_mem_wvalid_0", false,-1);
    tracep->declBit(c+57,"bvalid_reg", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+58,"io_src1", false,-1, 31,0);
    tracep->declBus(c+59,"io_src2", false,-1, 31,0);
    tracep->declBus(c+60,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+61,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_ar ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declBus(c+62,"io_inData", false,-1, 31,0);
    tracep->declBit(c+63,"io_inValid", false,-1);
    tracep->declBus(c+64,"io_outData", false,-1, 31,0);
    tracep->declBit(c+65,"io_delayDone", false,-1);
    tracep->declBus(c+66,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+67,"counter", false,-1, 4,0);
    tracep->declBus(c+68,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_aw ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declBus(c+69,"io_inData", false,-1, 31,0);
    tracep->declBit(c+70,"io_inValid", false,-1);
    tracep->declBus(c+71,"io_outData", false,-1, 31,0);
    tracep->declBit(c+72,"io_delayDone", false,-1);
    tracep->declBus(c+73,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+74,"counter", false,-1, 4,0);
    tracep->declBus(c+75,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_b ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declBus(c+76,"io_inData", false,-1, 31,0);
    tracep->declBit(c+77,"io_inValid", false,-1);
    tracep->declBus(c+78,"io_outData", false,-1, 31,0);
    tracep->declBit(c+79,"io_delayDone", false,-1);
    tracep->declBus(c+80,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+81,"counter", false,-1, 4,0);
    tracep->declBus(c+82,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_r ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declBus(c+83,"io_inData", false,-1, 31,0);
    tracep->declBit(c+84,"io_inValid", false,-1);
    tracep->declBus(c+85,"io_outData", false,-1, 31,0);
    tracep->declBit(c+86,"io_delayDone", false,-1);
    tracep->declBus(c+87,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+88,"counter", false,-1, 4,0);
    tracep->declBus(c+89,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_w ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declBus(c+69,"io_inData", false,-1, 31,0);
    tracep->declBit(c+70,"io_inValid", false,-1);
    tracep->declBus(c+90,"io_outData", false,-1, 31,0);
    tracep->declBit(c+91,"io_delayDone", false,-1);
    tracep->declBus(c+92,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+93,"counter", false,-1, 4,0);
    tracep->declBus(c+94,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declBit(c+169,"io_ifu2in_valid", false,-1);
    tracep->declBus(c+199,"io_ifu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+197,"io_ifu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+170,"io_ifu2in_bits_inst", false,-1, 31,0);
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
    tracep->declBus(c+171,"io_reg_data_raddr_1", false,-1, 4,0);
    tracep->declBus(c+172,"io_reg_data_rdata_1", false,-1, 31,0);
    tracep->declBus(c+173,"io_reg_data_raddr_2", false,-1, 4,0);
    tracep->declBus(c+174,"io_reg_data_rdata_2", false,-1, 31,0);
    tracep->declBus(c+175,"io_reg_data_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+200,"io_reg_data_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+95,"io_reg_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+96,"io_reg_data_mstatus", false,-1, 31,0);
    tracep->declBit(c+198,"io_inv_flag", false,-1);
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
    tracep->declBit(c+97,"state", false,-1);
    tracep->declBit(c+1,"state_reg", false,-1);
    tracep->declBus(c+176,"csr_imm", false,-1, 31,0);
    tracep->declBus(c+177,"casez_tmp", false,-1, 4,0);
    tracep->declBus(c+178,"casez_tmp_0", false,-1, 4,0);
    tracep->pushNamePrefix("npc_break ");
    tracep->declBus(c+170,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declBit(c+169,"io_out_valid", false,-1);
    tracep->declBus(c+199,"io_out_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+197,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+170,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBit(c+167,"io_exu2in_valid", false,-1);
    tracep->declBus(c+168,"io_exu2in_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+179,"io_axi_ar_pc", false,-1, 31,0);
    tracep->declBit(c+180,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+181,"io_axi_r_inst", false,-1, 31,0);
    tracep->declBit(c+182,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+169,"io_axi_r_rready", false,-1);
    tracep->declBus(c+197,"io_out_bits_pc_0", false,-1, 31,0);
    tracep->declBit(c+183,"m2EXUstate", false,-1);
    tracep->declBit(c+184,"exu2in_reg", false,-1);
    tracep->declBus(c+185,"indata_dnpc", false,-1, 31,0);
    tracep->declBit(c+169,"rready_reg", false,-1);
    tracep->declBus(c+186,"ardata_reg", false,-1, 31,0);
    tracep->declBus(c+170,"inst_reg", false,-1, 31,0);
    tracep->declBit(c+180,"arvalid_reg", false,-1);
    tracep->declBus(c+187,"io_out_bits_pc_REG", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Inst_fetch ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declBus(c+181,"io_axi_r_inst", false,-1, 31,0);
    tracep->declBit(c+182,"io_axi_r_rvalid", false,-1);
    tracep->declBit(c+169,"io_axi_r_rready", false,-1);
    tracep->declBus(c+179,"io_axi_ar_pc", false,-1, 31,0);
    tracep->declBit(c+180,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+188,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+182,"rvalid_reg", false,-1);
    tracep->declBit(c+98,"arvalid_reg", false,-1);
    tracep->declBit(c+189,"rvalid_en", false,-1);
    tracep->pushNamePrefix("delay ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declBus(c+201,"io_inData", false,-1, 31,0);
    tracep->declBit(c+202,"io_inValid", false,-1);
    tracep->declBus(c+190,"io_outData", false,-1, 31,0);
    tracep->declBit(c+191,"io_delayDone", false,-1);
    tracep->declBus(c+99,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+192,"counter", false,-1, 4,0);
    tracep->declBus(c+193,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vlg_pc_read ");
    tracep->declBit(c+195,"clk", false,-1);
    tracep->declBus(c+194,"pc", false,-1, 31,0);
    tracep->declBit(c+180,"pc_en", false,-1);
    tracep->declBus(c+100,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Mem ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declBus(c+19,"io_ar_exu_mem_raddr", false,-1, 31,0);
    tracep->declBus(c+20,"io_ar_exu_mem_rmask", false,-1, 2,0);
    tracep->declBit(c+21,"io_ar_exu_mem_arvalid", false,-1);
    tracep->declBus(c+22,"io_r_mem_exu_rdata", false,-1, 31,0);
    tracep->declBus(c+23,"io_r_mem_exu_rresp", false,-1, 1,0);
    tracep->declBit(c+24,"io_r_mem_exu_rvalid", false,-1);
    tracep->declBit(c+25,"io_r_mem_exu_rready", false,-1);
    tracep->declBus(c+26,"io_w_exu_mem_wdata", false,-1, 31,0);
    tracep->declBus(c+27,"io_w_exu_mem_wmask", false,-1, 2,0);
    tracep->declBit(c+28,"io_w_exu_mem_wvalid", false,-1);
    tracep->declBus(c+29,"io_aw_exu_mem_awaddr", false,-1, 31,0);
    tracep->declBit(c+30,"io_aw_exu_mem_awvalid", false,-1);
    tracep->declBus(c+31,"io_b_mem_exu_bresp", false,-1, 1,0);
    tracep->declBit(c+32,"io_b_mem_exu_bvalid", false,-1);
    tracep->declBit(c+33,"io_b_mem_exu_bready", false,-1);
    tracep->declBus(c+101,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+24,"rvalid_reg", false,-1);
    tracep->declBus(c+102,"rresp_reg", false,-1, 1,0);
    tracep->declBit(c+103,"arvalid_reg", false,-1);
    tracep->declBit(c+32,"bvalid_reg", false,-1);
    tracep->declBus(c+104,"bresp_reg", false,-1, 1,0);
    tracep->declBus(c+105,"waddr_reg", false,-1, 31,0);
    tracep->declBus(c+106,"wmask_reg", false,-1, 2,0);
    tracep->declBit(c+107,"awvalid_reg", false,-1);
    tracep->declBit(c+108,"wvalid_reg", false,-1);
    tracep->declBit(c+109,"rvalid_en", false,-1);
    tracep->declBit(c+110,"bvalid_en", false,-1);
    tracep->pushNamePrefix("delay ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declBus(c+111,"io_inData", false,-1, 31,0);
    tracep->declBit(c+112,"io_inValid", false,-1);
    tracep->declBus(c+113,"io_outData", false,-1, 31,0);
    tracep->declBit(c+114,"io_delayDone", false,-1);
    tracep->declBus(c+115,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+116,"counter", false,-1, 4,0);
    tracep->declBus(c+117,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_w ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declBus(c+118,"io_inData", false,-1, 31,0);
    tracep->declBit(c+119,"io_inValid", false,-1);
    tracep->declBus(c+120,"io_outData", false,-1, 31,0);
    tracep->declBit(c+121,"io_delayDone", false,-1);
    tracep->declBus(c+122,"shiftReg", false,-1, 4,0);
    tracep->declBus(c+123,"counter", false,-1, 4,0);
    tracep->declBus(c+124,"dataReg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBus(c+125,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+126,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+127,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+128,"m_wen", false,-1);
    tracep->declBus(c+129,"m_raddr", false,-1, 31,0);
    tracep->declBus(c+130,"m_rmask", false,-1, 31,0);
    tracep->declBit(c+21,"m_ren", false,-1);
    tracep->declBus(c+131,"m_rdata", false,-1, 31,0);
    tracep->declBit(c+132,"m_wready", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Reg ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declBit(c+41,"io_csr_wen_2", false,-1);
    tracep->declBus(c+40,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBus(c+171,"io_reg_read_raddr_1", false,-1, 4,0);
    tracep->declBus(c+172,"io_reg_read_rdata_1", false,-1, 31,0);
    tracep->declBus(c+173,"io_reg_read_raddr_2", false,-1, 4,0);
    tracep->declBus(c+174,"io_reg_read_rdata_2", false,-1, 31,0);
    tracep->declBus(c+175,"io_reg_read_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+200,"io_reg_read_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+95,"io_reg_read_csr_a5", false,-1, 31,0);
    tracep->declBus(c+96,"io_reg_read_mstatus", false,-1, 31,0);
    tracep->declBit(c+35,"io_wen", false,-1);
    tracep->declBus(c+36,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+34,"io_wdata", false,-1, 31,0);
    tracep->declBit(c+39,"io_csr_wen_1", false,-1);
    tracep->declBus(c+37,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+38,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBus(c+133,"csr_0", false,-1, 31,0);
    tracep->declBus(c+134,"csr_1", false,-1, 31,0);
    tracep->declBus(c+96,"csr_2", false,-1, 31,0);
    tracep->declBus(c+135,"csr_3", false,-1, 31,0);
    tracep->declBus(c+136,"reg_0", false,-1, 31,0);
    tracep->declBus(c+137,"reg_1", false,-1, 31,0);
    tracep->declBus(c+138,"reg_2", false,-1, 31,0);
    tracep->declBus(c+139,"reg_3", false,-1, 31,0);
    tracep->declBus(c+140,"reg_4", false,-1, 31,0);
    tracep->declBus(c+141,"reg_5", false,-1, 31,0);
    tracep->declBus(c+142,"reg_6", false,-1, 31,0);
    tracep->declBus(c+143,"reg_7", false,-1, 31,0);
    tracep->declBus(c+144,"reg_8", false,-1, 31,0);
    tracep->declBus(c+145,"reg_9", false,-1, 31,0);
    tracep->declBus(c+146,"reg_10", false,-1, 31,0);
    tracep->declBus(c+147,"reg_11", false,-1, 31,0);
    tracep->declBus(c+148,"reg_12", false,-1, 31,0);
    tracep->declBus(c+149,"reg_13", false,-1, 31,0);
    tracep->declBus(c+150,"reg_14", false,-1, 31,0);
    tracep->declBus(c+95,"reg_15", false,-1, 31,0);
    tracep->declBus(c+151,"reg_16", false,-1, 31,0);
    tracep->declBus(c+152,"reg_17", false,-1, 31,0);
    tracep->declBus(c+153,"reg_18", false,-1, 31,0);
    tracep->declBus(c+154,"reg_19", false,-1, 31,0);
    tracep->declBus(c+155,"reg_20", false,-1, 31,0);
    tracep->declBus(c+156,"reg_21", false,-1, 31,0);
    tracep->declBus(c+157,"reg_22", false,-1, 31,0);
    tracep->declBus(c+158,"reg_23", false,-1, 31,0);
    tracep->declBus(c+159,"reg_24", false,-1, 31,0);
    tracep->declBus(c+160,"reg_25", false,-1, 31,0);
    tracep->declBus(c+161,"reg_26", false,-1, 31,0);
    tracep->declBus(c+162,"reg_27", false,-1, 31,0);
    tracep->declBus(c+163,"reg_28", false,-1, 31,0);
    tracep->declBus(c+164,"reg_29", false,-1, 31,0);
    tracep->declBus(c+165,"reg_30", false,-1, 31,0);
    tracep->declBus(c+166,"reg_31", false,-1, 31,0);
    tracep->declBus(c+172,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+174,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+200,"casez_tmp_1", false,-1, 31,0);
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
    bufp->fullIData(oldp+19,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_8)
                               ? 0U : vlSelf->top__DOT__EXU__DOT__mem_raddr_reg)),32);
    bufp->fullCData(oldp+20,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_8)
                               ? 0U : (7U & vlSelf->top__DOT__EXU__DOT__mem_rmask_reg))),3);
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__EXU__DOT__io_ar_exu_mem_arvalid_0));
    bufp->fullIData(oldp+22,(vlSelf->top__DOT___Mem_io_r_mem_exu_rdata),32);
    bufp->fullCData(oldp+23,(((IData)(vlSelf->top__DOT__EXU__DOT__io_ar_exu_mem_arvalid_0)
                               ? ((IData)(vlSelf->top__DOT__Mem__DOT___GEN_1)
                                   ? (IData)(vlSelf->top__DOT__Mem__DOT__rresp_reg)
                                   : 0U) : 3U)),2);
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__Mem__DOT__rvalid_reg));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__EXU__DOT__io_r_mem_exu_rready_0));
    bufp->fullIData(oldp+26,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_10)
                               ? 0U : vlSelf->top__DOT__EXU__DOT__mem_wdata_reg)),32);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT___EXU_io_w_exu_mem_wmask),3);
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__EXU__DOT__io_w_exu_mem_wvalid_0));
    bufp->fullIData(oldp+29,(vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr),32);
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__EXU__DOT__io_aw_exu_mem_awvalid_0));
    bufp->fullCData(oldp+31,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T)
                               ? (((IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg) 
                                   & (IData)(vlSelf->top__DOT__EXU__DOT__io_b_mem_exu_bready_0))
                                   ? (IData)(vlSelf->top__DOT__Mem__DOT__bresp_reg)
                                   : 0U) : 3U)),2);
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__Mem__DOT__bvalid_reg));
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__EXU__DOT__io_b_mem_exu_bready_0));
    bufp->fullIData(oldp+34,(vlSelf->top__DOT___EXU_io_reg_wdata),32);
    bufp->fullBit(oldp+35,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                            & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_6)
                                ? (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen)
                                : ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                    ? ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7) 
                                       & (IData)(vlSelf->top__DOT__EXU__DOT__reg_wen_reg))
                                    : ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_22)) 
                                       & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_23) 
                                          & (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen))))))));
    bufp->fullCData(oldp+36,(vlSelf->top__DOT___EXU_io_reg_waddr),5);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT___EXU_io_csr_waddr_1),2);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT___EXU_io_csr_wdata_1),32);
    bufp->fullBit(oldp+39,(vlSelf->top__DOT___EXU_io_csr_wen_1));
    bufp->fullIData(oldp+40,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                     | ((0xcU != (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                        | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_28))))
                               ? 0U : vlSelf->top__DOT__IDU__DOT__exu_data_pc)),32);
    bufp->fullBit(oldp+41,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                            & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_28)) 
                               & (0xcU == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))))));
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__EXU__DOT__m2IDUstate));
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__EXU__DOT__lastdnpc),32);
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__EXU__DOT__reg_wen_reg));
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__EXU__DOT__reg_waddr_reg),5);
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__EXU__DOT__rready_reg));
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__EXU__DOT__mem_raddr_reg),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__EXU__DOT__mem_rmask_reg),32);
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__EXU__DOT__mem_ren_reg));
    bufp->fullBit(oldp+50,(vlSelf->top__DOT__EXU__DOT__idu2in_valid));
    bufp->fullBit(oldp+51,(vlSelf->top__DOT__EXU__DOT__rvalid_reg));
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__EXU__DOT__bready_reg));
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__EXU__DOT__mem_awaddr_reg),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__EXU__DOT__mem_wmask_reg),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__EXU__DOT__mem_wdata_reg),32);
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__EXU__DOT__mem_wen_reg));
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__EXU__DOT__bvalid_reg));
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__EXU__DOT___alu_io_result),32);
    bufp->fullIData(oldp+62,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                               ? (IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg)
                               : 0U)),32);
    bufp->fullBit(oldp+63,(((3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                            & (IData)(vlSelf->top__DOT__EXU__DOT__idu2in_valid))));
    bufp->fullIData(oldp+64,(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__delay_ar__DOT__counter))
                               ? vlSelf->top__DOT__EXU__DOT__delay_ar__DOT__dataReg
                               : 0U)),32);
    bufp->fullBit(oldp+65,(((~ (IData)(vlSelf->top__DOT__EXU__DOT__delay_ar__DOT___GEN_0)) 
                            & ((0U != (IData)(vlSelf->top__DOT__EXU__DOT__delay_ar__DOT__counter)) 
                               & (1U == (IData)(vlSelf->top__DOT__EXU__DOT__delay_ar__DOT__counter))))));
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__EXU__DOT__delay_ar__DOT__shiftReg),5);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__EXU__DOT__delay_ar__DOT__counter),5);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__EXU__DOT__delay_ar__DOT__dataReg),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__EXU__DOT___GEN_1),32);
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__EXU__DOT___GEN_2));
    bufp->fullIData(oldp+71,(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__delay_aw__DOT__counter))
                               ? vlSelf->top__DOT__EXU__DOT__delay_aw__DOT__dataReg
                               : 0U)),32);
    bufp->fullBit(oldp+72,(((~ (IData)(vlSelf->top__DOT__EXU__DOT__delay_aw__DOT___GEN_0)) 
                            & ((0U != (IData)(vlSelf->top__DOT__EXU__DOT__delay_aw__DOT__counter)) 
                               & (1U == (IData)(vlSelf->top__DOT__EXU__DOT__delay_aw__DOT__counter))))));
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__EXU__DOT__delay_aw__DOT__shiftReg),5);
    bufp->fullCData(oldp+74,(vlSelf->top__DOT__EXU__DOT__delay_aw__DOT__counter),5);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__EXU__DOT__delay_aw__DOT__dataReg),32);
    bufp->fullIData(oldp+76,(((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_hc80ef2ab__0)
                               ? 0U : (IData)(vlSelf->top__DOT__EXU__DOT___GEN_12))),32);
    bufp->fullBit(oldp+77,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                            & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_9)) 
                               & ((~ (((IData)(vlSelf->top__DOT__EXU__DOT__bvalid_reg) 
                                       != (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg)) 
                                      & (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg))) 
                                  & (IData)(vlSelf->top__DOT__EXU__DOT___GEN_12))))));
    bufp->fullIData(oldp+78,(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__delay_b__DOT__counter))
                               ? vlSelf->top__DOT__EXU__DOT__delay_b__DOT__dataReg
                               : 0U)),32);
    bufp->fullBit(oldp+79,(((~ (IData)(vlSelf->top__DOT__EXU__DOT__delay_b__DOT___GEN_0)) 
                            & ((0U != (IData)(vlSelf->top__DOT__EXU__DOT__delay_b__DOT__counter)) 
                               & (1U == (IData)(vlSelf->top__DOT__EXU__DOT__delay_b__DOT__counter))))));
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__EXU__DOT__delay_b__DOT__shiftReg),5);
    bufp->fullCData(oldp+81,(vlSelf->top__DOT__EXU__DOT__delay_b__DOT__counter),5);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__EXU__DOT__delay_b__DOT__dataReg),32);
    bufp->fullIData(oldp+83,(((IData)(vlSelf->top__DOT__EXU__DOT____VdfgTmp_h7b06e693__0)
                               ? 0U : (IData)(vlSelf->top__DOT__EXU__DOT___GEN_5))),32);
    bufp->fullBit(oldp+84,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                            & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_6)) 
                               & ((~ (((IData)(vlSelf->top__DOT__EXU__DOT__rvalid_reg) 
                                       != (IData)(vlSelf->top__DOT__Mem__DOT__rvalid_reg)) 
                                      & (IData)(vlSelf->top__DOT__Mem__DOT__rvalid_reg))) 
                                  & (IData)(vlSelf->top__DOT__EXU__DOT___GEN_5))))));
    bufp->fullIData(oldp+85,(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__delay_r__DOT__counter))
                               ? vlSelf->top__DOT__EXU__DOT__delay_r__DOT__dataReg
                               : 0U)),32);
    bufp->fullBit(oldp+86,(((~ (IData)(vlSelf->top__DOT__EXU__DOT__delay_r__DOT___GEN_0)) 
                            & ((0U != (IData)(vlSelf->top__DOT__EXU__DOT__delay_r__DOT__counter)) 
                               & (1U == (IData)(vlSelf->top__DOT__EXU__DOT__delay_r__DOT__counter))))));
    bufp->fullCData(oldp+87,(vlSelf->top__DOT__EXU__DOT__delay_r__DOT__shiftReg),5);
    bufp->fullCData(oldp+88,(vlSelf->top__DOT__EXU__DOT__delay_r__DOT__counter),5);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__EXU__DOT__delay_r__DOT__dataReg),32);
    bufp->fullIData(oldp+90,(((0U == (IData)(vlSelf->top__DOT__EXU__DOT__delay_w__DOT__counter))
                               ? vlSelf->top__DOT__EXU__DOT__delay_w__DOT__dataReg
                               : 0U)),32);
    bufp->fullBit(oldp+91,(((~ (IData)(vlSelf->top__DOT__EXU__DOT__delay_w__DOT___GEN_0)) 
                            & ((0U != (IData)(vlSelf->top__DOT__EXU__DOT__delay_w__DOT__counter)) 
                               & (1U == (IData)(vlSelf->top__DOT__EXU__DOT__delay_w__DOT__counter))))));
    bufp->fullCData(oldp+92,(vlSelf->top__DOT__EXU__DOT__delay_w__DOT__shiftReg),5);
    bufp->fullCData(oldp+93,(vlSelf->top__DOT__EXU__DOT__delay_w__DOT__counter),5);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__EXU__DOT__delay_w__DOT__dataReg),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__Reg__DOT__reg_15),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__Reg__DOT__csr_2),32);
    bufp->fullBit(oldp+97,(vlSelf->top__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+98,(vlSelf->top__DOT__Inst_fetch__DOT__arvalid_reg));
    bufp->fullCData(oldp+99,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__shiftReg),5);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__Inst_fetch__DOT___vlg_pc_read_inst),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__Mem__DOT__rdata_reg),32);
    bufp->fullCData(oldp+102,(vlSelf->top__DOT__Mem__DOT__rresp_reg),2);
    bufp->fullBit(oldp+103,(vlSelf->top__DOT__Mem__DOT__arvalid_reg));
    bufp->fullCData(oldp+104,(vlSelf->top__DOT__Mem__DOT__bresp_reg),2);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__Mem__DOT__waddr_reg),32);
    bufp->fullCData(oldp+106,(vlSelf->top__DOT__Mem__DOT__wmask_reg),3);
    bufp->fullBit(oldp+107,(vlSelf->top__DOT__Mem__DOT__awvalid_reg));
    bufp->fullBit(oldp+108,(vlSelf->top__DOT__Mem__DOT__wvalid_reg));
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__Mem__DOT__rvalid_en));
    bufp->fullBit(oldp+110,(vlSelf->top__DOT__Mem__DOT__bvalid_en));
    bufp->fullIData(oldp+111,(((IData)(vlSelf->top__DOT__EXU__DOT__io_ar_exu_mem_arvalid_0)
                                ? vlSelf->top__DOT__Mem__DOT___m_m_rdata
                                : 0U)),32);
    bufp->fullBit(oldp+112,(((IData)(vlSelf->top__DOT__EXU__DOT__io_ar_exu_mem_arvalid_0) 
                             & ((IData)(vlSelf->top__DOT__Mem__DOT__arvalid_reg) 
                                != (IData)(vlSelf->top__DOT__EXU__DOT__io_ar_exu_mem_arvalid_0)))));
    bufp->fullIData(oldp+113,(((0U == (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter))
                                ? vlSelf->top__DOT__Mem__DOT__delay__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+114,(((~ (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter))))));
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__Mem__DOT__delay__DOT__shiftReg),5);
    bufp->fullCData(oldp+116,(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter),5);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__Mem__DOT__delay__DOT__dataReg),32);
    bufp->fullIData(oldp+118,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T)
                                ? (IData)(vlSelf->top__DOT__Mem__DOT___m_m_wready)
                                : 0U)),32);
    bufp->fullBit(oldp+119,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T) 
                             & (((IData)(vlSelf->top__DOT__EXU__DOT__io_w_exu_mem_wvalid_0) 
                                 != (IData)(vlSelf->top__DOT__Mem__DOT__wvalid_reg)) 
                                & ((IData)(vlSelf->top__DOT__EXU__DOT__io_w_exu_mem_wvalid_0) 
                                   & (((IData)(vlSelf->top__DOT__EXU__DOT__io_aw_exu_mem_awvalid_0) 
                                       != (IData)(vlSelf->top__DOT__Mem__DOT__awvalid_reg)) 
                                      & (IData)(vlSelf->top__DOT__EXU__DOT__io_aw_exu_mem_awvalid_0)))))));
    bufp->fullIData(oldp+120,(((0U == (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter))
                                ? vlSelf->top__DOT__Mem__DOT__delay_w__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+121,(((~ (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter))))));
    bufp->fullCData(oldp+122,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__shiftReg),5);
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter),5);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__dataReg),32);
    bufp->fullIData(oldp+125,(((IData)(vlSelf->top__DOT__EXU__DOT__io_aw_exu_mem_awvalid_0)
                                ? vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr
                                : 0U)),32);
    bufp->fullIData(oldp+126,(((IData)(vlSelf->top__DOT__EXU__DOT__io_w_exu_mem_wvalid_0)
                                ? ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_10)
                                    ? 0U : vlSelf->top__DOT__EXU__DOT__mem_wdata_reg)
                                : 0U)),32);
    bufp->fullIData(oldp+127,(((IData)(vlSelf->top__DOT__EXU__DOT__io_w_exu_mem_wvalid_0)
                                ? (IData)(vlSelf->top__DOT___EXU_io_w_exu_mem_wmask)
                                : 0U)),32);
    bufp->fullBit(oldp+128,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T) 
                             & (((IData)(vlSelf->top__DOT___EXU_io_w_exu_mem_wmask) 
                                 != (IData)(vlSelf->top__DOT__Mem__DOT__wmask_reg)) 
                                & (vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr 
                                   != vlSelf->top__DOT__Mem__DOT__waddr_reg)))));
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__Mem__DOT___GEN),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__Mem__DOT___GEN_0),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__Mem__DOT___m_m_rdata),32);
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__Mem__DOT___m_m_wready));
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__Reg__DOT__csr_0),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__Reg__DOT__csr_1),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__Reg__DOT__csr_3),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__Reg__DOT__reg_0),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__Reg__DOT__reg_1),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__Reg__DOT__reg_2),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__Reg__DOT__reg_3),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__Reg__DOT__reg_4),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__Reg__DOT__reg_5),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__Reg__DOT__reg_6),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__Reg__DOT__reg_7),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__Reg__DOT__reg_8),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__Reg__DOT__reg_9),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__Reg__DOT__reg_10),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__Reg__DOT__reg_11),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__Reg__DOT__reg_12),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__Reg__DOT__reg_13),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__Reg__DOT__reg_14),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__Reg__DOT__reg_16),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__Reg__DOT__reg_17),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__Reg__DOT__reg_18),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__Reg__DOT__reg_19),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__Reg__DOT__reg_20),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__Reg__DOT__reg_21),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__Reg__DOT__reg_22),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__Reg__DOT__reg_23),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__Reg__DOT__reg_24),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__Reg__DOT__reg_25),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__Reg__DOT__reg_26),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__Reg__DOT__reg_27),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__Reg__DOT__reg_28),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__Reg__DOT__reg_29),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__Reg__DOT__reg_30),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__Reg__DOT__reg_31),32);
    bufp->fullBit(oldp+167,(vlSelf->top__DOT___EXU_io_out2ifu_valid));
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc),32);
    bufp->fullBit(oldp+169,(vlSelf->top__DOT__IFU__DOT__rready_reg));
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__IFU__DOT__inst_reg),32);
    bufp->fullCData(oldp+171,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                        >> 0xfU))),5);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__Reg__DOT__casez_tmp),32);
    bufp->fullCData(oldp+173,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__Reg__DOT__casez_tmp_0),32);
    bufp->fullCData(oldp+175,(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr),2);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__IDU__DOT__csr_imm),32);
    bufp->fullCData(oldp+177,(vlSelf->top__DOT__IDU__DOT__casez_tmp),5);
    bufp->fullCData(oldp+178,(vlSelf->top__DOT__IDU__DOT__casez_tmp_0),5);
    bufp->fullIData(oldp+179,((((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                                ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                : 0U)),32);
    bufp->fullBit(oldp+180,(vlSelf->top__DOT__IFU__DOT__arvalid_reg));
    bufp->fullIData(oldp+181,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                ? vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg
                                : 0U)),32);
    bufp->fullBit(oldp+182,(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_reg));
    bufp->fullBit(oldp+183,(vlSelf->top__DOT__IFU__DOT__m2EXUstate));
    bufp->fullBit(oldp+184,(vlSelf->top__DOT__IFU__DOT__exu2in_reg));
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__IFU__DOT__indata_dnpc),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__IFU__DOT__ardata_reg),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_REG),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg),32);
    bufp->fullBit(oldp+189,(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_en));
    bufp->fullIData(oldp+190,(((0U == (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter))
                                ? vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__dataReg
                                : 0U)),32);
    bufp->fullBit(oldp+191,(((~ (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT___GEN_0)) 
                             & ((0U != (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter)) 
                                & (1U == (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter))))));
    bufp->fullCData(oldp+192,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter),5);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__dataReg),32);
    bufp->fullIData(oldp+194,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                ? (((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                    & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                                    ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                    : 0U) : 0U)),32);
    bufp->fullBit(oldp+195,(vlSelf->clock));
    bufp->fullBit(oldp+196,(vlSelf->reset));
    bufp->fullIData(oldp+197,(vlSelf->io_pc),32);
    bufp->fullBit(oldp+198,(vlSelf->io_inv_flag));
    bufp->fullIData(oldp+199,(((IData)(4U) + vlSelf->io_pc)),32);
    bufp->fullIData(oldp+200,(((0U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                ? vlSelf->top__DOT__Reg__DOT__csr_0
                                : ((1U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                    ? vlSelf->top__DOT__Reg__DOT__csr_1
                                    : ((2U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                        ? vlSelf->top__DOT__Reg__DOT__csr_2
                                        : vlSelf->top__DOT__Reg__DOT__csr_3)))),32);
    bufp->fullIData(oldp+201,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                ? vlSelf->top__DOT__Inst_fetch__DOT___vlg_pc_read_inst
                                : 0U)),32);
    bufp->fullBit(oldp+202,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                             & ((IData)(vlSelf->top__DOT__Inst_fetch__DOT__arvalid_reg) 
                                != (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)))));
}

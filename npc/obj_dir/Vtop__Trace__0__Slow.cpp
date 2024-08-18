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
    tracep->declBit(c+129,"clock", false,-1);
    tracep->declBit(c+130,"reset", false,-1);
    tracep->declBus(c+131,"io_pc", false,-1, 31,0);
    tracep->declBit(c+132,"io_inv_flag", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+129,"clock", false,-1);
    tracep->declBit(c+130,"reset", false,-1);
    tracep->declBus(c+131,"io_pc", false,-1, 31,0);
    tracep->declBit(c+132,"io_inv_flag", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+129,"clock", false,-1);
    tracep->declBit(c+130,"reset", false,-1);
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
    tracep->declBit(c+113,"io_out2ifu_valid", false,-1);
    tracep->declBus(c+18,"io_out2ifu_bits_dnpc", false,-1, 31,0);
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
    tracep->declBit(c+28,"io_aw_exu_mem_awvalid", false,-1);
    tracep->declBus(c+30,"io_b_mem_exu_bresp", false,-1, 1,0);
    tracep->declBit(c+31,"io_b_mem_exu_bvalid", false,-1);
    tracep->declBit(c+32,"io_b_mem_exu_bready", false,-1);
    tracep->declBus(c+33,"io_reg_wdata", false,-1, 31,0);
    tracep->declBit(c+34,"io_reg_wen", false,-1);
    tracep->declBus(c+35,"io_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+36,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+37,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBit(c+38,"io_csr_wen_1", false,-1);
    tracep->declBus(c+39,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBit(c+40,"io_csr_wen_2", false,-1);
    tracep->declBus(c+18,"ifu_outdata_dnpc", false,-1, 31,0);
    tracep->declBit(c+32,"bready_reg", false,-1);
    tracep->declBit(c+25,"rready_reg", false,-1);
    tracep->declBit(c+41,"m2IDUstate", false,-1);
    tracep->declBus(c+42,"indata_snpc", false,-1, 31,0);
    tracep->declBus(c+43,"indata_pc", false,-1, 31,0);
    tracep->declBit(c+44,"indata_reg_wen", false,-1);
    tracep->declBus(c+45,"indata_src1", false,-1, 31,0);
    tracep->declBus(c+46,"indata_imm", false,-1, 31,0);
    tracep->declBus(c+47,"indata_inst_type", false,-1, 3,0);
    tracep->declBus(c+48,"lastdnpc", false,-1, 31,0);
    tracep->declBit(c+49,"reg_wen_reg", false,-1);
    tracep->declBus(c+50,"reg_waddr_reg", false,-1, 4,0);
    tracep->declBus(c+51,"mem_raddr_reg", false,-1, 31,0);
    tracep->declBus(c+52,"mem_rmask_reg", false,-1, 31,0);
    tracep->declBit(c+21,"mem_ren_reg", false,-1);
    tracep->declBus(c+53,"mem_awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+54,"mem_wmask_reg", false,-1, 31,0);
    tracep->declBus(c+55,"mem_wdata_reg", false,-1, 31,0);
    tracep->declBit(c+28,"mem_wen_reg", false,-1);
    tracep->declBus(c+56,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+57,"indata_src2", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+58,"io_src1", false,-1, 31,0);
    tracep->declBus(c+59,"io_src2", false,-1, 31,0);
    tracep->declBus(c+60,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+61,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+129,"clock", false,-1);
    tracep->declBit(c+130,"reset", false,-1);
    tracep->declBit(c+114,"io_ifu2in_valid", false,-1);
    tracep->declBus(c+133,"io_ifu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+131,"io_ifu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+115,"io_ifu2in_bits_inst", false,-1, 31,0);
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
    tracep->declBus(c+116,"io_reg_data_raddr_1", false,-1, 4,0);
    tracep->declBus(c+117,"io_reg_data_rdata_1", false,-1, 31,0);
    tracep->declBus(c+118,"io_reg_data_raddr_2", false,-1, 4,0);
    tracep->declBus(c+119,"io_reg_data_rdata_2", false,-1, 31,0);
    tracep->declBus(c+120,"io_reg_data_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+134,"io_reg_data_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"io_reg_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+63,"io_reg_data_mstatus", false,-1, 31,0);
    tracep->declBit(c+132,"io_inv_flag", false,-1);
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
    tracep->declBit(c+64,"state", false,-1);
    tracep->declBit(c+1,"state_reg", false,-1);
    tracep->declBus(c+121,"csr_imm", false,-1, 31,0);
    tracep->declBus(c+122,"casez_tmp", false,-1, 4,0);
    tracep->declBus(c+123,"casez_tmp_0", false,-1, 4,0);
    tracep->pushNamePrefix("npc_break ");
    tracep->declBus(c+115,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+129,"clock", false,-1);
    tracep->declBit(c+130,"reset", false,-1);
    tracep->declBit(c+114,"io_out_valid", false,-1);
    tracep->declBus(c+133,"io_out_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+131,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+115,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBit(c+113,"io_exu2in_valid", false,-1);
    tracep->declBus(c+18,"io_exu2in_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+135,"io_axi_ar_pc", false,-1, 31,0);
    tracep->declBit(c+124,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+125,"io_axi_r_inst", false,-1, 31,0);
    tracep->declBit(c+126,"io_axi_r_rvalid", false,-1);
    tracep->declBus(c+131,"io_out_bits_pc_0", false,-1, 31,0);
    tracep->declBit(c+127,"m2EXUstate", false,-1);
    tracep->declBit(c+65,"exu2in_reg", false,-1);
    tracep->declBit(c+114,"rready_reg", false,-1);
    tracep->declBus(c+66,"ardata_reg", false,-1, 31,0);
    tracep->declBus(c+115,"inst_reg", false,-1, 31,0);
    tracep->declBit(c+124,"arvalid_reg", false,-1);
    tracep->declBus(c+67,"io_out_bits_pc_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Inst_fetch ");
    tracep->declBit(c+129,"clock", false,-1);
    tracep->declBit(c+130,"reset", false,-1);
    tracep->declBus(c+125,"io_axi_r_inst", false,-1, 31,0);
    tracep->declBit(c+126,"io_axi_r_rvalid", false,-1);
    tracep->declBus(c+135,"io_axi_ar_pc", false,-1, 31,0);
    tracep->declBit(c+124,"io_axi_ar_arvalid", false,-1);
    tracep->declBus(c+128,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+126,"rvalid_reg", false,-1);
    tracep->pushNamePrefix("vlg_pc_read ");
    tracep->declBit(c+129,"clk", false,-1);
    tracep->declBus(c+136,"pc", false,-1, 31,0);
    tracep->declBit(c+124,"pc_en", false,-1);
    tracep->declBus(c+68,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Mem ");
    tracep->declBit(c+129,"clock", false,-1);
    tracep->declBit(c+130,"reset", false,-1);
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
    tracep->declBit(c+28,"io_aw_exu_mem_awvalid", false,-1);
    tracep->declBus(c+30,"io_b_mem_exu_bresp", false,-1, 1,0);
    tracep->declBit(c+31,"io_b_mem_exu_bvalid", false,-1);
    tracep->declBit(c+32,"io_b_mem_exu_bready", false,-1);
    tracep->declBus(c+69,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+24,"rvalid_reg", false,-1);
    tracep->declBus(c+70,"rresp_reg", false,-1, 1,0);
    tracep->declBit(c+31,"bvalid_reg", false,-1);
    tracep->declBus(c+71,"bresp_reg", false,-1, 1,0);
    tracep->declBit(c+28,"bvalid_en", false,-1);
    tracep->pushNamePrefix("m ");
    tracep->declBit(c+129,"clock", false,-1);
    tracep->declBus(c+72,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+73,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+74,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+28,"m_wen", false,-1);
    tracep->declBus(c+75,"m_raddr", false,-1, 31,0);
    tracep->declBus(c+76,"m_rmask", false,-1, 31,0);
    tracep->declBit(c+21,"m_ren", false,-1);
    tracep->declBus(c+77,"m_rdata", false,-1, 31,0);
    tracep->declBit(c+78,"m_wready", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Reg ");
    tracep->declBit(c+129,"clock", false,-1);
    tracep->declBit(c+130,"reset", false,-1);
    tracep->declBit(c+40,"io_csr_wen_2", false,-1);
    tracep->declBus(c+39,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBus(c+116,"io_reg_read_raddr_1", false,-1, 4,0);
    tracep->declBus(c+117,"io_reg_read_rdata_1", false,-1, 31,0);
    tracep->declBus(c+118,"io_reg_read_raddr_2", false,-1, 4,0);
    tracep->declBus(c+119,"io_reg_read_rdata_2", false,-1, 31,0);
    tracep->declBus(c+120,"io_reg_read_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+134,"io_reg_read_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"io_reg_read_csr_a5", false,-1, 31,0);
    tracep->declBus(c+63,"io_reg_read_mstatus", false,-1, 31,0);
    tracep->declBit(c+34,"io_wen", false,-1);
    tracep->declBus(c+35,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+33,"io_wdata", false,-1, 31,0);
    tracep->declBit(c+38,"io_csr_wen_1", false,-1);
    tracep->declBus(c+36,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+37,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBus(c+79,"csr_0", false,-1, 31,0);
    tracep->declBus(c+80,"csr_1", false,-1, 31,0);
    tracep->declBus(c+63,"csr_2", false,-1, 31,0);
    tracep->declBus(c+81,"csr_3", false,-1, 31,0);
    tracep->declBus(c+82,"reg_0", false,-1, 31,0);
    tracep->declBus(c+83,"reg_1", false,-1, 31,0);
    tracep->declBus(c+84,"reg_2", false,-1, 31,0);
    tracep->declBus(c+85,"reg_3", false,-1, 31,0);
    tracep->declBus(c+86,"reg_4", false,-1, 31,0);
    tracep->declBus(c+87,"reg_5", false,-1, 31,0);
    tracep->declBus(c+88,"reg_6", false,-1, 31,0);
    tracep->declBus(c+89,"reg_7", false,-1, 31,0);
    tracep->declBus(c+90,"reg_8", false,-1, 31,0);
    tracep->declBus(c+91,"reg_9", false,-1, 31,0);
    tracep->declBus(c+92,"reg_10", false,-1, 31,0);
    tracep->declBus(c+93,"reg_11", false,-1, 31,0);
    tracep->declBus(c+94,"reg_12", false,-1, 31,0);
    tracep->declBus(c+95,"reg_13", false,-1, 31,0);
    tracep->declBus(c+96,"reg_14", false,-1, 31,0);
    tracep->declBus(c+62,"reg_15", false,-1, 31,0);
    tracep->declBus(c+97,"reg_16", false,-1, 31,0);
    tracep->declBus(c+98,"reg_17", false,-1, 31,0);
    tracep->declBus(c+99,"reg_18", false,-1, 31,0);
    tracep->declBus(c+100,"reg_19", false,-1, 31,0);
    tracep->declBus(c+101,"reg_20", false,-1, 31,0);
    tracep->declBus(c+102,"reg_21", false,-1, 31,0);
    tracep->declBus(c+103,"reg_22", false,-1, 31,0);
    tracep->declBus(c+104,"reg_23", false,-1, 31,0);
    tracep->declBus(c+105,"reg_24", false,-1, 31,0);
    tracep->declBus(c+106,"reg_25", false,-1, 31,0);
    tracep->declBus(c+107,"reg_26", false,-1, 31,0);
    tracep->declBus(c+108,"reg_27", false,-1, 31,0);
    tracep->declBus(c+109,"reg_28", false,-1, 31,0);
    tracep->declBus(c+110,"reg_29", false,-1, 31,0);
    tracep->declBus(c+111,"reg_30", false,-1, 31,0);
    tracep->declBus(c+112,"reg_31", false,-1, 31,0);
    tracep->declBus(c+117,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+119,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+134,"casez_tmp_1", false,-1, 31,0);
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
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc),32);
    bufp->fullIData(oldp+19,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_5)
                               ? 0U : vlSelf->top__DOT__EXU__DOT__mem_raddr_reg)),32);
    bufp->fullCData(oldp+20,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_5)
                               ? 0U : (7U & vlSelf->top__DOT__EXU__DOT__mem_rmask_reg))),3);
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__EXU__DOT__mem_ren_reg));
    bufp->fullIData(oldp+22,(((IData)(vlSelf->top__DOT__Mem__DOT___GEN_1)
                               ? vlSelf->top__DOT__Mem__DOT__rdata_reg
                               : 0U)),32);
    bufp->fullCData(oldp+23,(((IData)(vlSelf->top__DOT__Mem__DOT___GEN_1)
                               ? (IData)(vlSelf->top__DOT__Mem__DOT__rresp_reg)
                               : 0U)),2);
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__Mem__DOT__rvalid_reg));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__EXU__DOT__rready_reg));
    bufp->fullIData(oldp+26,(vlSelf->top__DOT___EXU_io_w_exu_mem_wdata),32);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT___EXU_io_w_exu_mem_wmask),3);
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__EXU__DOT__mem_wen_reg));
    bufp->fullIData(oldp+29,(vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr),32);
    bufp->fullCData(oldp+30,((((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg) 
                               & ((IData)(vlSelf->top__DOT__EXU__DOT__bready_reg) 
                                  & (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg)))
                               ? (IData)(vlSelf->top__DOT__Mem__DOT__bresp_reg)
                               : 0U)),2);
    bufp->fullBit(oldp+31,(vlSelf->top__DOT__Mem__DOT__bvalid_reg));
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__EXU__DOT__bready_reg));
    bufp->fullIData(oldp+33,(vlSelf->top__DOT___EXU_io_reg_wdata),32);
    bufp->fullBit(oldp+34,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                            & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_4)
                                ? (IData)(vlSelf->top__DOT__EXU__DOT__indata_reg_wen)
                                : ((3U == (IData)(vlSelf->top__DOT__EXU__DOT__indata_inst_type))
                                    ? ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3) 
                                       & (IData)(vlSelf->top__DOT__EXU__DOT__reg_wen_reg))
                                    : ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)) 
                                       & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_19) 
                                          & (IData)(vlSelf->top__DOT__EXU__DOT__indata_reg_wen))))))));
    bufp->fullCData(oldp+35,(vlSelf->top__DOT___EXU_io_reg_waddr),5);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT___EXU_io_csr_waddr_1),2);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT___EXU_io_csr_wdata_1),32);
    bufp->fullBit(oldp+38,(vlSelf->top__DOT___EXU_io_csr_wen_1));
    bufp->fullIData(oldp+39,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                     | ((~ ((0xcU == (IData)(vlSelf->top__DOT__EXU__DOT__indata_inst_type)) 
                                            & (IData)(vlSelf->top__DOT__IDU__DOT__state_reg))) 
                                        | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_25))))
                               ? 0U : vlSelf->top__DOT__IDU__DOT__exu_data_pc)),32);
    bufp->fullBit(oldp+40,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                            & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_25)) 
                               & (0xcU == (IData)(vlSelf->top__DOT__EXU__DOT__indata_inst_type))))));
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__EXU__DOT__m2IDUstate));
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__EXU__DOT__indata_snpc),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__EXU__DOT__indata_pc),32);
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__EXU__DOT__indata_reg_wen));
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__EXU__DOT__indata_src1),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__EXU__DOT__indata_imm),32);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__EXU__DOT__indata_inst_type),4);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__EXU__DOT__lastdnpc),32);
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__EXU__DOT__reg_wen_reg));
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__EXU__DOT__reg_waddr_reg),5);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__EXU__DOT__mem_raddr_reg),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__EXU__DOT__mem_rmask_reg),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__EXU__DOT__mem_awaddr_reg),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__EXU__DOT__mem_wmask_reg),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__EXU__DOT__mem_wdata_reg),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__EXU__DOT__casez_tmp),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__EXU__DOT__indata_src2),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__EXU__DOT___alu_io_result),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__Reg__DOT__reg_15),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__Reg__DOT__csr_2),32);
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__IFU__DOT__exu2in_reg));
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__IFU__DOT__ardata_reg),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_r),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__Inst_fetch__DOT___vlg_pc_read_inst),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__Mem__DOT__rdata_reg),32);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__Mem__DOT__rresp_reg),2);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__Mem__DOT__bresp_reg),2);
    bufp->fullIData(oldp+72,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg)
                               ? vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr
                               : 0U)),32);
    bufp->fullIData(oldp+73,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg)
                               ? vlSelf->top__DOT___EXU_io_w_exu_mem_wdata
                               : 0U)),32);
    bufp->fullIData(oldp+74,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg)
                               ? (IData)(vlSelf->top__DOT___EXU_io_w_exu_mem_wmask)
                               : 0U)),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__Mem__DOT___GEN),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__Mem__DOT___GEN_0),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__Mem__DOT___m_m_rdata),32);
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__Mem__DOT__m__DOT__m_wready));
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__Reg__DOT__csr_0),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__Reg__DOT__csr_1),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__Reg__DOT__csr_3),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__Reg__DOT__reg_0),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__Reg__DOT__reg_1),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__Reg__DOT__reg_2),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__Reg__DOT__reg_3),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__Reg__DOT__reg_4),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__Reg__DOT__reg_5),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__Reg__DOT__reg_6),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__Reg__DOT__reg_7),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__Reg__DOT__reg_8),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__Reg__DOT__reg_9),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__Reg__DOT__reg_10),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__Reg__DOT__reg_11),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__Reg__DOT__reg_12),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__Reg__DOT__reg_13),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__Reg__DOT__reg_14),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__Reg__DOT__reg_16),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__Reg__DOT__reg_17),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__Reg__DOT__reg_18),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__Reg__DOT__reg_19),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__Reg__DOT__reg_20),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__Reg__DOT__reg_21),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__Reg__DOT__reg_22),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__Reg__DOT__reg_23),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__Reg__DOT__reg_24),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__Reg__DOT__reg_25),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__Reg__DOT__reg_26),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__Reg__DOT__reg_27),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__Reg__DOT__reg_28),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__Reg__DOT__reg_29),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__Reg__DOT__reg_30),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__Reg__DOT__reg_31),32);
    bufp->fullBit(oldp+113,(vlSelf->top__DOT___EXU_io_out2ifu_valid));
    bufp->fullBit(oldp+114,(vlSelf->top__DOT__IFU__DOT__rready_reg));
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__IFU__DOT__inst_reg),32);
    bufp->fullCData(oldp+116,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                        >> 0xfU))),5);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__Reg__DOT__casez_tmp),32);
    bufp->fullCData(oldp+118,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__Reg__DOT__casez_tmp_0),32);
    bufp->fullCData(oldp+120,(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr),2);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__IDU__DOT__csr_imm),32);
    bufp->fullCData(oldp+122,(vlSelf->top__DOT__IDU__DOT__casez_tmp),5);
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__IDU__DOT__casez_tmp_0),5);
    bufp->fullBit(oldp+124,(vlSelf->top__DOT__IFU__DOT__arvalid_reg));
    bufp->fullIData(oldp+125,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                ? vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg
                                : 0U)),32);
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_reg));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__IFU__DOT__m2EXUstate));
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg),32);
    bufp->fullBit(oldp+129,(vlSelf->clock));
    bufp->fullBit(oldp+130,(vlSelf->reset));
    bufp->fullIData(oldp+131,(vlSelf->io_pc),32);
    bufp->fullBit(oldp+132,(vlSelf->io_inv_flag));
    bufp->fullIData(oldp+133,(((IData)(4U) + vlSelf->io_pc)),32);
    bufp->fullIData(oldp+134,(((0U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                ? vlSelf->top__DOT__Reg__DOT__csr_0
                                : ((1U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                    ? vlSelf->top__DOT__Reg__DOT__csr_1
                                    : ((2U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                        ? vlSelf->top__DOT__Reg__DOT__csr_2
                                        : vlSelf->top__DOT__Reg__DOT__csr_3)))),32);
    bufp->fullIData(oldp+135,((((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                                ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                : 0U)),32);
    bufp->fullIData(oldp+136,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                ? (((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                    & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                                    ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                    : 0U) : 0U)),32);
}

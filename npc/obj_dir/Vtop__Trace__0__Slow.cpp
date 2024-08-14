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
    tracep->declBit(c+91,"clock", false,-1);
    tracep->declBit(c+92,"reset", false,-1);
    tracep->declBus(c+93,"io_pc", false,-1, 31,0);
    tracep->declBit(c+94,"io_inv_flag", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+91,"clock", false,-1);
    tracep->declBit(c+92,"reset", false,-1);
    tracep->declBus(c+93,"io_pc", false,-1, 31,0);
    tracep->declBit(c+94,"io_inv_flag", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+91,"clock", false,-1);
    tracep->declBit(c+92,"reset", false,-1);
    tracep->declBit(c+50,"io_idu2in_valid", false,-1);
    tracep->declBus(c+1,"io_idu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+93,"io_idu2in_bits_pc", false,-1, 31,0);
    tracep->declBit(c+59,"io_idu2in_bits_mem_wen", false,-1);
    tracep->declBit(c+60,"io_idu2in_bits_mem_ren", false,-1);
    tracep->declBus(c+61,"io_idu2in_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+62,"io_idu2in_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+63,"io_idu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+64,"io_idu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+65,"io_idu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+66,"io_idu2in_bits_src2", false,-1, 31,0);
    tracep->declBus(c+67,"io_idu2in_bits_csr", false,-1, 31,0);
    tracep->declBus(c+2,"io_idu2in_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+3,"io_idu2in_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+68,"io_idu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+69,"io_idu2in_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+70,"io_idu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+71,"io_idu2in_bits_il_us", false,-1);
    tracep->declBit(c+51,"io_out2ifu_valid", false,-1);
    tracep->declBus(c+72,"io_out2ifu_bits_dnpc", false,-1, 31,0);
    tracep->declBus(c+73,"io_reg_wdata", false,-1, 31,0);
    tracep->declBit(c+52,"io_reg_wen", false,-1);
    tracep->declBus(c+74,"io_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+75,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+76,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBit(c+77,"io_csr_wen_1", false,-1);
    tracep->declBus(c+95,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBit(c+53,"io_csr_wen_2", false,-1);
    tracep->declBus(c+72,"ifu_outdata_dnpc", false,-1, 31,0);
    tracep->declBus(c+4,"lastdnpc", false,-1, 31,0);
    tracep->declBit(c+5,"m2IDUstate", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+78,"io_src1", false,-1, 31,0);
    tracep->declBus(c+79,"io_src2", false,-1, 31,0);
    tracep->declBus(c+80,"io_alu_op", false,-1, 4,0);
    tracep->declBus(c+81,"io_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+91,"clock", false,-1);
    tracep->declBus(c+54,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+55,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+56,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+57,"m_wen", false,-1);
    tracep->declBus(c+82,"m_raddr", false,-1, 31,0);
    tracep->declBus(c+83,"m_rmask", false,-1, 31,0);
    tracep->declBit(c+58,"m_ren", false,-1);
    tracep->declBus(c+84,"m_rdata", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+91,"clock", false,-1);
    tracep->declBit(c+92,"reset", false,-1);
    tracep->declBit(c+6,"io_ifu2in_valid", false,-1);
    tracep->declBus(c+1,"io_ifu2in_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+93,"io_ifu2in_bits_pc", false,-1, 31,0);
    tracep->declBus(c+85,"io_ifu2in_bits_inst", false,-1, 31,0);
    tracep->declBit(c+50,"io_out2exu_valid", false,-1);
    tracep->declBus(c+1,"io_out2exu_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+93,"io_out2exu_bits_pc", false,-1, 31,0);
    tracep->declBit(c+59,"io_out2exu_bits_mem_wen", false,-1);
    tracep->declBit(c+60,"io_out2exu_bits_mem_ren", false,-1);
    tracep->declBus(c+61,"io_out2exu_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+62,"io_out2exu_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+63,"io_out2exu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+64,"io_out2exu_bits_reg_wen", false,-1);
    tracep->declBus(c+65,"io_out2exu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+66,"io_out2exu_bits_src2", false,-1, 31,0);
    tracep->declBus(c+67,"io_out2exu_bits_csr", false,-1, 31,0);
    tracep->declBus(c+2,"io_out2exu_bits_csr_a5", false,-1, 31,0);
    tracep->declBus(c+3,"io_out2exu_bits_mstatus", false,-1, 31,0);
    tracep->declBus(c+68,"io_out2exu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+69,"io_out2exu_bits_alu_op", false,-1, 4,0);
    tracep->declBus(c+70,"io_out2exu_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+71,"io_out2exu_bits_il_us", false,-1);
    tracep->declBus(c+86,"io_reg_data_raddr_1", false,-1, 4,0);
    tracep->declBus(c+65,"io_reg_data_rdata_1", false,-1, 31,0);
    tracep->declBus(c+87,"io_reg_data_raddr_2", false,-1, 4,0);
    tracep->declBus(c+66,"io_reg_data_rdata_2", false,-1, 31,0);
    tracep->declBus(c+88,"io_reg_data_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+67,"io_reg_data_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+7,"io_reg_data_csr_a5", false,-1, 31,0);
    tracep->declBus(c+8,"io_reg_data_mstatus", false,-1, 31,0);
    tracep->declBit(c+94,"io_inv_flag", false,-1);
    tracep->declBus(c+68,"exu_data_imm", false,-1, 31,0);
    tracep->declBus(c+9,"lastimm", false,-1, 31,0);
    tracep->declBit(c+10,"state", false,-1);
    tracep->declBus(c+89,"casez_tmp", false,-1, 4,0);
    tracep->declBus(c+90,"casez_tmp_0", false,-1, 4,0);
    tracep->pushNamePrefix("npc_break ");
    tracep->declBus(c+85,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+91,"clock", false,-1);
    tracep->declBit(c+92,"reset", false,-1);
    tracep->declBit(c+6,"io_out_valid", false,-1);
    tracep->declBus(c+1,"io_out_bits_snpc", false,-1, 31,0);
    tracep->declBus(c+93,"io_out_bits_pc", false,-1, 31,0);
    tracep->declBus(c+85,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBit(c+51,"io_exu2in_valid", false,-1);
    tracep->declBus(c+72,"io_exu2in_bits_dnpc", false,-1, 31,0);
    tracep->declBit(c+11,"m2EXUstate", false,-1);
    tracep->declBus(c+85,"lastinst", false,-1, 31,0);
    tracep->declBus(c+12,"lastpc", false,-1, 31,0);
    tracep->declBus(c+13,"lastsnpc", false,-1, 31,0);
    tracep->declBit(c+6,"lasten", false,-1);
    tracep->declBus(c+14,"out_data_pc_REG", false,-1, 31,0);
    tracep->declBus(c+93,"out_data_pc", false,-1, 31,0);
    tracep->pushNamePrefix("vlg_pc_read ");
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBus(c+93,"pc", false,-1, 31,0);
    tracep->declBit(c+11,"pc_en", false,-1);
    tracep->declBus(c+15,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Reg ");
    tracep->declBit(c+91,"clock", false,-1);
    tracep->declBit(c+92,"reset", false,-1);
    tracep->declBit(c+53,"io_csr_wen_2", false,-1);
    tracep->declBus(c+95,"io_csr_wdata_2", false,-1, 31,0);
    tracep->declBus(c+86,"io_reg_read_raddr_1", false,-1, 4,0);
    tracep->declBus(c+65,"io_reg_read_rdata_1", false,-1, 31,0);
    tracep->declBus(c+87,"io_reg_read_raddr_2", false,-1, 4,0);
    tracep->declBus(c+66,"io_reg_read_rdata_2", false,-1, 31,0);
    tracep->declBus(c+88,"io_reg_read_csr_raddr", false,-1, 1,0);
    tracep->declBus(c+67,"io_reg_read_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+7,"io_reg_read_csr_a5", false,-1, 31,0);
    tracep->declBus(c+8,"io_reg_read_mstatus", false,-1, 31,0);
    tracep->declBit(c+52,"io_wen", false,-1);
    tracep->declBus(c+74,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+73,"io_wdata", false,-1, 31,0);
    tracep->declBit(c+77,"io_csr_wen_1", false,-1);
    tracep->declBus(c+75,"io_csr_waddr_1", false,-1, 1,0);
    tracep->declBus(c+76,"io_csr_wdata_1", false,-1, 31,0);
    tracep->declBus(c+16,"csr_0", false,-1, 31,0);
    tracep->declBus(c+17,"csr_1", false,-1, 31,0);
    tracep->declBus(c+8,"csr_2", false,-1, 31,0);
    tracep->declBus(c+18,"csr_3", false,-1, 31,0);
    tracep->declBus(c+19,"reg_0", false,-1, 31,0);
    tracep->declBus(c+20,"reg_1", false,-1, 31,0);
    tracep->declBus(c+21,"reg_2", false,-1, 31,0);
    tracep->declBus(c+22,"reg_3", false,-1, 31,0);
    tracep->declBus(c+23,"reg_4", false,-1, 31,0);
    tracep->declBus(c+24,"reg_5", false,-1, 31,0);
    tracep->declBus(c+25,"reg_6", false,-1, 31,0);
    tracep->declBus(c+26,"reg_7", false,-1, 31,0);
    tracep->declBus(c+27,"reg_8", false,-1, 31,0);
    tracep->declBus(c+28,"reg_9", false,-1, 31,0);
    tracep->declBus(c+29,"reg_10", false,-1, 31,0);
    tracep->declBus(c+30,"reg_11", false,-1, 31,0);
    tracep->declBus(c+31,"reg_12", false,-1, 31,0);
    tracep->declBus(c+32,"reg_13", false,-1, 31,0);
    tracep->declBus(c+33,"reg_14", false,-1, 31,0);
    tracep->declBus(c+7,"reg_15", false,-1, 31,0);
    tracep->declBus(c+34,"reg_16", false,-1, 31,0);
    tracep->declBus(c+35,"reg_17", false,-1, 31,0);
    tracep->declBus(c+36,"reg_18", false,-1, 31,0);
    tracep->declBus(c+37,"reg_19", false,-1, 31,0);
    tracep->declBus(c+38,"reg_20", false,-1, 31,0);
    tracep->declBus(c+39,"reg_21", false,-1, 31,0);
    tracep->declBus(c+40,"reg_22", false,-1, 31,0);
    tracep->declBus(c+41,"reg_23", false,-1, 31,0);
    tracep->declBus(c+42,"reg_24", false,-1, 31,0);
    tracep->declBus(c+43,"reg_25", false,-1, 31,0);
    tracep->declBus(c+44,"reg_26", false,-1, 31,0);
    tracep->declBus(c+45,"reg_27", false,-1, 31,0);
    tracep->declBus(c+46,"reg_28", false,-1, 31,0);
    tracep->declBus(c+47,"reg_29", false,-1, 31,0);
    tracep->declBus(c+48,"reg_30", false,-1, 31,0);
    tracep->declBus(c+49,"reg_31", false,-1, 31,0);
    tracep->declBus(c+65,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+66,"casez_tmp_0", false,-1, 31,0);
    tracep->declBus(c+67,"casez_tmp_1", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT___IDU_io_out2exu_bits_snpc),32);
    bufp->fullIData(oldp+2,(((0xffffffffU == vlSelf->top__DOT__Reg__DOT__reg_15)
                              ? 0U : vlSelf->top__DOT__Reg__DOT__reg_15)),32);
    bufp->fullIData(oldp+3,(((0xf0000000U & vlSelf->top__DOT__Reg__DOT__csr_2) 
                             | (0xfffffffU & (0x80U 
                                              | (vlSelf->top__DOT__Reg__DOT__csr_2 
                                                 | (8U 
                                                    & (vlSelf->top__DOT__Reg__DOT__csr_2 
                                                       >> 4U))))))),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__EXU__DOT__lastdnpc),32);
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__EXU__DOT__m2IDUstate));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__IFU__DOT__lasten));
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__Reg__DOT__reg_15),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__Reg__DOT__csr_2),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__IDU__DOT__lastimm),32);
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__IDU__DOT__state));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__IFU__DOT__m2EXUstate));
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__IFU__DOT__lastpc),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__IFU__DOT__lastsnpc),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__IFU__DOT__out_data_pc_REG),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__Reg__DOT__csr_0),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__Reg__DOT__csr_1),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__Reg__DOT__csr_3),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__Reg__DOT__reg_0),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__Reg__DOT__reg_1),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__Reg__DOT__reg_2),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__Reg__DOT__reg_3),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__Reg__DOT__reg_4),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__Reg__DOT__reg_5),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__Reg__DOT__reg_6),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__Reg__DOT__reg_7),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__Reg__DOT__reg_8),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__Reg__DOT__reg_9),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__Reg__DOT__reg_10),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__Reg__DOT__reg_11),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__Reg__DOT__reg_12),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__Reg__DOT__reg_13),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__Reg__DOT__reg_14),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__Reg__DOT__reg_16),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__Reg__DOT__reg_17),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__Reg__DOT__reg_18),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__Reg__DOT__reg_19),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__Reg__DOT__reg_20),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__Reg__DOT__reg_21),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__Reg__DOT__reg_22),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__Reg__DOT__reg_23),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__Reg__DOT__reg_24),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__Reg__DOT__reg_25),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__Reg__DOT__reg_26),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__Reg__DOT__reg_27),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__Reg__DOT__reg_28),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__Reg__DOT__reg_29),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__Reg__DOT__reg_30),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__Reg__DOT__reg_31),32);
    bufp->fullBit(oldp+50,((vlSelf->top__DOT__IDU__DOT__exu_data_imm 
                            != vlSelf->top__DOT__IDU__DOT__lastimm)));
    bufp->fullBit(oldp+51,((vlSelf->top__DOT__EXU__DOT__lastdnpc 
                            != vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc)));
    bufp->fullBit(oldp+52,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                            & (((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7) 
                                | ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)) 
                                   & (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19))) 
                               & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_reg_wen)))));
    bufp->fullBit(oldp+53,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                            & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_25)) 
                               & (0xcU == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))))));
    bufp->fullIData(oldp+54,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                     | ((4U != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                        | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                               ? 0U : vlSelf->top__DOT__EXU__DOT___alu_io_result)),32);
    bufp->fullIData(oldp+55,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                     | ((4U != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                        | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                               ? 0U : vlSelf->top__DOT__Reg__DOT__casez_tmp_0)),32);
    bufp->fullIData(oldp+56,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                     | ((4U != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                        | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                               ? 0U : vlSelf->top__DOT___IDU_io_out2exu_bits_m_wmask)),32);
    bufp->fullBit(oldp+57,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                            & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7)) 
                               & ((4U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                  & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_wen))))));
    bufp->fullBit(oldp+58,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                            & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_2)) 
                               & ((3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                  & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren))))));
    bufp->fullBit(oldp+59,(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_wen));
    bufp->fullBit(oldp+60,(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren));
    bufp->fullIData(oldp+61,(vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT___IDU_io_out2exu_bits_m_wmask),32);
    bufp->fullCData(oldp+63,((0x1fU & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                       >> 7U))),5);
    bufp->fullBit(oldp+64,(vlSelf->top__DOT___IDU_io_out2exu_bits_reg_wen));
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__Reg__DOT__casez_tmp),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__Reg__DOT__casez_tmp_0),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__Reg__DOT__casez_tmp_1),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__IDU__DOT__exu_data_imm),32);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT___IDU_io_out2exu_bits_alu_op),5);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type),4);
    bufp->fullBit(oldp+71,(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us));
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT___EXU_io_reg_wdata),32);
    bufp->fullCData(oldp+74,(vlSelf->top__DOT___EXU_io_reg_waddr),5);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT___EXU_io_csr_waddr_1),2);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT___EXU_io_csr_wdata_1),32);
    bufp->fullBit(oldp+77,(vlSelf->top__DOT___EXU_io_csr_wen_1));
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__EXU__DOT___alu_io_result),32);
    bufp->fullIData(oldp+82,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                               ? 0U : vlSelf->top__DOT__EXU__DOT___alu_io_result)),32);
    bufp->fullIData(oldp+83,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                               ? 0U : vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask)),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__EXU__DOT___mem_m_rdata),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__IFU__DOT__lastinst),32);
    bufp->fullCData(oldp+86,((0x1fU & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+87,((0x1fU & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+88,(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr),2);
    bufp->fullCData(oldp+89,(vlSelf->top__DOT__IDU__DOT__casez_tmp),5);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__IDU__DOT__casez_tmp_0),5);
    bufp->fullBit(oldp+91,(vlSelf->clock));
    bufp->fullBit(oldp+92,(vlSelf->reset));
    bufp->fullIData(oldp+93,(vlSelf->io_pc),32);
    bufp->fullBit(oldp+94,(vlSelf->io_inv_flag));
    bufp->fullIData(oldp+95,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                     | ((0xcU != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                        | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_25))))
                               ? 0U : vlSelf->io_pc)),32);
}

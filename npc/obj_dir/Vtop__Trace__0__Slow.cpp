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
    tracep->declBit(c+74,"clock", false,-1);
    tracep->declBit(c+75,"reset", false,-1);
    tracep->declBus(c+76,"io_pc", false,-1, 31,0);
    tracep->declBit(c+77,"io_inv_flag", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+74,"clock", false,-1);
    tracep->declBit(c+75,"reset", false,-1);
    tracep->declBus(c+76,"io_pc", false,-1, 31,0);
    tracep->declBit(c+77,"io_inv_flag", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+74,"clock", false,-1);
    tracep->declBit(c+75,"reset", false,-1);
    tracep->declBit(c+39,"io_idu2in_valid", false,-1);
    tracep->declBit(c+48,"io_idu2in_bits_mem_wen", false,-1);
    tracep->declBit(c+49,"io_idu2in_bits_mem_ren", false,-1);
    tracep->declBus(c+50,"io_idu2in_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+51,"io_idu2in_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+52,"io_idu2in_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+53,"io_idu2in_bits_reg_wen", false,-1);
    tracep->declBus(c+54,"io_idu2in_bits_src1", false,-1, 31,0);
    tracep->declBus(c+55,"io_idu2in_bits_src2", false,-1, 31,0);
    tracep->declBus(c+56,"io_idu2in_bits_imm", false,-1, 31,0);
    tracep->declBus(c+57,"io_idu2in_bits_alu_op", false,-1, 3,0);
    tracep->declBus(c+58,"io_idu2in_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+59,"io_idu2in_bits_il_us", false,-1);
    tracep->declBus(c+60,"io_reg_wdata", false,-1, 31,0);
    tracep->declBit(c+40,"io_reg_wen", false,-1);
    tracep->declBus(c+61,"io_reg_waddr", false,-1, 4,0);
    tracep->declBus(c+41,"io_dnpc", false,-1, 31,0);
    tracep->declBus(c+1,"io_snpc", false,-1, 31,0);
    tracep->declBus(c+76,"io_pc", false,-1, 31,0);
    tracep->declBit(c+2,"m2IDUstate", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+62,"io_src1", false,-1, 31,0);
    tracep->declBus(c+63,"io_src2", false,-1, 31,0);
    tracep->declBus(c+64,"io_alu_op", false,-1, 3,0);
    tracep->declBus(c+65,"io_result", false,-1, 31,0);
    tracep->declBus(c+65,"casez_tmp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+74,"clock", false,-1);
    tracep->declBus(c+42,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+43,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+44,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+45,"m_wen", false,-1);
    tracep->declBus(c+66,"m_raddr", false,-1, 31,0);
    tracep->declBus(c+67,"m_rmask", false,-1, 31,0);
    tracep->declBit(c+46,"m_ren", false,-1);
    tracep->declBus(c+68,"m_rdata", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+74,"clock", false,-1);
    tracep->declBit(c+75,"reset", false,-1);
    tracep->declBit(c+47,"io_ifu2in_valid", false,-1);
    tracep->declBus(c+69,"io_ifu2in_bits_inst", false,-1, 31,0);
    tracep->declBit(c+39,"io_out2exu_valid", false,-1);
    tracep->declBit(c+48,"io_out2exu_bits_mem_wen", false,-1);
    tracep->declBit(c+49,"io_out2exu_bits_mem_ren", false,-1);
    tracep->declBus(c+50,"io_out2exu_bits_m_rmask", false,-1, 31,0);
    tracep->declBus(c+51,"io_out2exu_bits_m_wmask", false,-1, 31,0);
    tracep->declBus(c+52,"io_out2exu_bits_reg_waddr", false,-1, 4,0);
    tracep->declBit(c+53,"io_out2exu_bits_reg_wen", false,-1);
    tracep->declBus(c+54,"io_out2exu_bits_src1", false,-1, 31,0);
    tracep->declBus(c+55,"io_out2exu_bits_src2", false,-1, 31,0);
    tracep->declBus(c+56,"io_out2exu_bits_imm", false,-1, 31,0);
    tracep->declBus(c+57,"io_out2exu_bits_alu_op", false,-1, 3,0);
    tracep->declBus(c+58,"io_out2exu_bits_inst_type", false,-1, 3,0);
    tracep->declBit(c+59,"io_out2exu_bits_il_us", false,-1);
    tracep->declBus(c+70,"io_reg_data_raddr_1", false,-1, 4,0);
    tracep->declBus(c+54,"io_reg_data_rdata_1", false,-1, 31,0);
    tracep->declBus(c+71,"io_reg_data_raddr_2", false,-1, 4,0);
    tracep->declBus(c+55,"io_reg_data_rdata_2", false,-1, 31,0);
    tracep->declBit(c+77,"io_inv_flag", false,-1);
    tracep->declBus(c+57,"exu_data_alu_op", false,-1, 3,0);
    tracep->declBus(c+3,"lastalu_op", false,-1, 3,0);
    tracep->declBit(c+4,"state", false,-1);
    tracep->declBus(c+72,"casez_tmp", false,-1, 3,0);
    tracep->declBus(c+73,"casez_tmp_0", false,-1, 3,0);
    tracep->pushNamePrefix("npc_break ");
    tracep->declBus(c+69,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+74,"clock", false,-1);
    tracep->declBit(c+75,"reset", false,-1);
    tracep->declBus(c+76,"io_pc", false,-1, 31,0);
    tracep->declBit(c+47,"io_out_valid", false,-1);
    tracep->declBus(c+69,"io_out_bits_inst", false,-1, 31,0);
    tracep->declBus(c+5,"lastinst", false,-1, 31,0);
    tracep->pushNamePrefix("vlg_pc_read ");
    tracep->declBit(c+78,"clk", false,-1);
    tracep->declBus(c+76,"pc", false,-1, 31,0);
    tracep->declBus(c+69,"inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+74,"clock", false,-1);
    tracep->declBit(c+75,"reset", false,-1);
    tracep->declBus(c+76,"io_pc", false,-1, 31,0);
    tracep->declBus(c+41,"io_dnpc", false,-1, 31,0);
    tracep->declBus(c+1,"io_snpc", false,-1, 31,0);
    tracep->declBus(c+6,"io_pc_REG", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Reg ");
    tracep->declBit(c+74,"clock", false,-1);
    tracep->declBit(c+75,"reset", false,-1);
    tracep->declBus(c+70,"io_reg_read_raddr_1", false,-1, 4,0);
    tracep->declBus(c+54,"io_reg_read_rdata_1", false,-1, 31,0);
    tracep->declBus(c+71,"io_reg_read_raddr_2", false,-1, 4,0);
    tracep->declBus(c+55,"io_reg_read_rdata_2", false,-1, 31,0);
    tracep->declBit(c+40,"io_wen", false,-1);
    tracep->declBus(c+61,"io_waddr", false,-1, 4,0);
    tracep->declBus(c+60,"io_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"reg_0", false,-1, 31,0);
    tracep->declBus(c+8,"reg_1", false,-1, 31,0);
    tracep->declBus(c+9,"reg_2", false,-1, 31,0);
    tracep->declBus(c+10,"reg_3", false,-1, 31,0);
    tracep->declBus(c+11,"reg_4", false,-1, 31,0);
    tracep->declBus(c+12,"reg_5", false,-1, 31,0);
    tracep->declBus(c+13,"reg_6", false,-1, 31,0);
    tracep->declBus(c+14,"reg_7", false,-1, 31,0);
    tracep->declBus(c+15,"reg_8", false,-1, 31,0);
    tracep->declBus(c+16,"reg_9", false,-1, 31,0);
    tracep->declBus(c+17,"reg_10", false,-1, 31,0);
    tracep->declBus(c+18,"reg_11", false,-1, 31,0);
    tracep->declBus(c+19,"reg_12", false,-1, 31,0);
    tracep->declBus(c+20,"reg_13", false,-1, 31,0);
    tracep->declBus(c+21,"reg_14", false,-1, 31,0);
    tracep->declBus(c+22,"reg_15", false,-1, 31,0);
    tracep->declBus(c+23,"reg_16", false,-1, 31,0);
    tracep->declBus(c+24,"reg_17", false,-1, 31,0);
    tracep->declBus(c+25,"reg_18", false,-1, 31,0);
    tracep->declBus(c+26,"reg_19", false,-1, 31,0);
    tracep->declBus(c+27,"reg_20", false,-1, 31,0);
    tracep->declBus(c+28,"reg_21", false,-1, 31,0);
    tracep->declBus(c+29,"reg_22", false,-1, 31,0);
    tracep->declBus(c+30,"reg_23", false,-1, 31,0);
    tracep->declBus(c+31,"reg_24", false,-1, 31,0);
    tracep->declBus(c+32,"reg_25", false,-1, 31,0);
    tracep->declBus(c+33,"reg_26", false,-1, 31,0);
    tracep->declBus(c+34,"reg_27", false,-1, 31,0);
    tracep->declBus(c+35,"reg_28", false,-1, 31,0);
    tracep->declBus(c+36,"reg_29", false,-1, 31,0);
    tracep->declBus(c+37,"reg_30", false,-1, 31,0);
    tracep->declBus(c+38,"reg_31", false,-1, 31,0);
    tracep->declBus(c+54,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+55,"casez_tmp_0", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(((IData)(4U) + vlSelf->top__DOT__PC__DOT__io_pc_REG)),32);
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__EXU__DOT__m2IDUstate));
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__IDU__DOT__lastalu_op),4);
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__IDU__DOT__state));
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__IFU__DOT__lastinst),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__PC__DOT__io_pc_REG),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__Reg__DOT__reg_0),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__Reg__DOT__reg_1),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__Reg__DOT__reg_2),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__Reg__DOT__reg_3),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__Reg__DOT__reg_4),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__Reg__DOT__reg_5),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__Reg__DOT__reg_6),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__Reg__DOT__reg_7),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__Reg__DOT__reg_8),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__Reg__DOT__reg_9),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__Reg__DOT__reg_10),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__Reg__DOT__reg_11),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__Reg__DOT__reg_12),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__Reg__DOT__reg_13),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__Reg__DOT__reg_14),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__Reg__DOT__reg_15),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__Reg__DOT__reg_16),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__Reg__DOT__reg_17),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__Reg__DOT__reg_18),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__Reg__DOT__reg_19),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__Reg__DOT__reg_20),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__Reg__DOT__reg_21),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__Reg__DOT__reg_22),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__Reg__DOT__reg_23),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__Reg__DOT__reg_24),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__Reg__DOT__reg_25),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__Reg__DOT__reg_26),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__Reg__DOT__reg_27),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__Reg__DOT__reg_28),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__Reg__DOT__reg_29),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__Reg__DOT__reg_30),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__Reg__DOT__reg_31),32);
    bufp->fullBit(oldp+39,(((IData)(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op) 
                            != (IData)(vlSelf->top__DOT__IDU__DOT__lastalu_op))));
    bufp->fullBit(oldp+40,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                            & (((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7) 
                                | ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_15)) 
                                   & (IData)(vlSelf->top__DOT__EXU__DOT___GEN_20))) 
                               & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_reg_wen)))));
    bufp->fullIData(oldp+41,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                     | ((1U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                        | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19))))
                               ? ((IData)(4U) + vlSelf->top__DOT__PC__DOT__io_pc_REG)
                               : ((5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                   ? ((1U == vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp)
                                       ? (vlSelf->top__DOT___IDU_io_out2exu_bits_imm 
                                          + vlSelf->top__DOT__PC__DOT__io_pc_REG)
                                       : ((IData)(4U) 
                                          + vlSelf->top__DOT__PC__DOT__io_pc_REG))
                                   : ((1U & ((6U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                             | ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_14)) 
                                                | (7U 
                                                   == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)))))
                                       ? ((IData)(4U) 
                                          + vlSelf->top__DOT__PC__DOT__io_pc_REG)
                                       : vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp)))),32);
    bufp->fullIData(oldp+42,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                     | ((4U != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                        | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                               ? 0U : vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp)),32);
    bufp->fullIData(oldp+43,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                     | ((4U != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                        | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                               ? 0U : vlSelf->top__DOT__Reg__DOT__casez_tmp_0)),32);
    bufp->fullIData(oldp+44,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                     | ((4U != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                        | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                               ? 0U : vlSelf->top__DOT___IDU_io_out2exu_bits_m_wmask)),32);
    bufp->fullBit(oldp+45,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                            & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7)) 
                               & ((4U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                  & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_wen))))));
    bufp->fullBit(oldp+46,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                            & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_2)) 
                               & ((3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                  & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren))))));
    bufp->fullBit(oldp+47,((vlSelf->top__DOT__IFU__DOT__lastinst 
                            != vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_wen));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren));
    bufp->fullIData(oldp+50,(vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT___IDU_io_out2exu_bits_m_wmask),32);
    bufp->fullCData(oldp+52,((0x1fU & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                       >> 7U))),5);
    bufp->fullBit(oldp+53,(vlSelf->top__DOT___IDU_io_out2exu_bits_reg_wen));
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__Reg__DOT__casez_tmp),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__Reg__DOT__casez_tmp_0),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT___IDU_io_out2exu_bits_imm),32);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op),4);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type),4);
    bufp->fullBit(oldp+59,(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us));
    bufp->fullIData(oldp+60,(vlSelf->top__DOT___EXU_io_reg_wdata),32);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT___EXU_io_reg_waddr),5);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),4);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp),32);
    bufp->fullIData(oldp+66,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                               ? 0U : vlSelf->top__DOT__EXU__DOT__alu__DOT__casez_tmp)),32);
    bufp->fullIData(oldp+67,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                               ? 0U : vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask)),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__EXU__DOT___mem_m_rdata),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst),32);
    bufp->fullCData(oldp+70,((0x1fU & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+71,((0x1fU & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__IDU__DOT__casez_tmp),4);
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__IDU__DOT__casez_tmp_0),4);
    bufp->fullBit(oldp+74,(vlSelf->clock));
    bufp->fullBit(oldp+75,(vlSelf->reset));
    bufp->fullIData(oldp+76,(vlSelf->io_pc),32);
    bufp->fullBit(oldp+77,(vlSelf->io_inv_flag));
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__IFU__DOT__vlg_pc_read__DOT__clk));
}

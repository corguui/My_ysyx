// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__SRAM__DOT__rvalid_reg));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__SRAM__DOT__bvalid_reg));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__UART__DOT__bvalid_reg));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__RTC__DOT__rvalid_reg));
        bufp->chgIData(oldp+4,(vlSelf->top__DOT___LSU_io_lsu_axi_ar_araddr),32);
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_ar_arvalid_0));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_r_rready_0));
        bufp->chgIData(oldp+7,(vlSelf->top__DOT___LSU_io_lsu_axi_aw_awaddr),32);
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_aw_awvalid_0));
        bufp->chgIData(oldp+9,(vlSelf->top__DOT___LSU_io_lsu_axi_w_wdata),32);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT___LSU_io_lsu_axi_w_wstrb),4);
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_w_wvalid_0));
        bufp->chgBit(oldp+12,(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_b_bready_0));
        bufp->chgBit(oldp+13,(((IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_ar_arvalid_0) 
                               | ((IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_aw_awvalid_0) 
                                  & (IData)(vlSelf->top__DOT__LSU__DOT__io_lsu_axi_w_wvalid_0)))));
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__IDU__DOT__state_reg));
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__IDU__DOT__exu_data_snpc),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__IDU__DOT__exu_data_pc),32);
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__IDU__DOT__exu_data_mem_ren));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__IDU__DOT__exu_data_mem_wen));
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__IDU__DOT__exu_data_m_rmask),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__IDU__DOT__exu_data_m_wmask),32);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__IDU__DOT__exu_data_reg_waddr),5);
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen));
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__IDU__DOT__exu_data_src1),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__IDU__DOT__exu_data_src2),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__IDU__DOT__exu_data_csr),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__IDU__DOT__exu_data_csr_a5),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__IDU__DOT__exu_data_mstatus),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__IDU__DOT__exu_data_imm),32);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op),5);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type),4);
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__IDU__DOT__exu_data_il_us));
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__EXU__DOT__state_reg));
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__EXU__DOT__lsu_data_snpc),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__EXU__DOT__lsu_data_pc),32);
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__EXU__DOT__lsu_data_mem_ren));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__EXU__DOT__lsu_data_mem_wen));
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__EXU__DOT__lsu_data_m_rmask),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__EXU__DOT__lsu_data_m_wmask),32);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__EXU__DOT__lsu_data_reg_waddr),5);
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__EXU__DOT__lsu_data_reg_wen));
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__EXU__DOT__lsu_data_src1),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__EXU__DOT__lsu_data_src2),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__EXU__DOT__lsu_data_csr),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__EXU__DOT__lsu_data_csr_a5),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__EXU__DOT__lsu_data_mstatus),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__EXU__DOT__lsu_data_imm),32);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type),4);
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__EXU__DOT__lsu_data_il_us));
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__EXU__DOT__lsu_data_alu_result),32);
        bufp->chgBit(oldp+50,(vlSelf->top__DOT__EXU__DOT__m2IDUstate));
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__EXU__DOT__alu_result_reg),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__EXU__DOT___alu_io_result),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__Reg__DOT__reg_15),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__Reg__DOT__csr_2),32);
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__IDU__DOT__state));
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__WBU__DOT__ifu_outdata_dnpc),32);
        bufp->chgBit(oldp+60,(vlSelf->top__DOT__IFU__DOT__exu2in_reg));
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__IFU__DOT__indata_dnpc),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__IFU__DOT__ardata_reg),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_REG),32);
        bufp->chgBit(oldp+64,(vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0));
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__LSU__DOT__wbu_data_snpc),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__LSU__DOT__wbu_data_pc),32);
        bufp->chgCData(oldp+67,(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_waddr),5);
        bufp->chgBit(oldp+68,(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen));
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__LSU__DOT__wbu_data_src1),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__LSU__DOT__wbu_data_csr),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__LSU__DOT__wbu_data_csr_a5),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__LSU__DOT__wbu_data_mstatus),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__LSU__DOT__wbu_data_imm),32);
        bufp->chgCData(oldp+74,(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type),4);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rdata),32);
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_bresp),2);
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rresp),2);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__LSU__DOT__wbu_data_alu_result),32);
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__LSU__DOT__m2EXUstate));
        bufp->chgBit(oldp+80,(vlSelf->top__DOT__LSU__DOT__state_reg));
        bufp->chgBit(oldp+81,(vlSelf->top__DOT__LSU__DOT__exu2in_valid));
        bufp->chgBit(oldp+82,(vlSelf->top__DOT__LSU__DOT__exu2in_valid_reg));
        bufp->chgBit(oldp+83,(vlSelf->top__DOT__LSU__DOT__rready_reg));
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__LSU__DOT__mem_raddr_reg),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__LSU__DOT__mem_rmask_reg),32);
        bufp->chgBit(oldp+86,(vlSelf->top__DOT__LSU__DOT__mem_ren_reg));
        bufp->chgBit(oldp+87,(vlSelf->top__DOT__LSU__DOT__rvalid_reg));
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__LSU__DOT__bready_reg));
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__LSU__DOT__mem_awaddr_reg),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__LSU__DOT__mem_wstrb_reg),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__LSU__DOT__mem_wdata_reg),32);
        bufp->chgBit(oldp+92,(vlSelf->top__DOT__LSU__DOT__mem_wen_reg));
        bufp->chgBit(oldp+93,(vlSelf->top__DOT__LSU__DOT__m_wen_reg_delay));
        bufp->chgBit(oldp+94,(vlSelf->top__DOT__LSU__DOT__bvalid_reg));
        bufp->chgIData(oldp+95,(((3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type))
                                  ? (IData)(vlSelf->top__DOT__LSU__DOT__mem_ren_reg)
                                  : 0U)),32);
        bufp->chgBit(oldp+96,(((3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
                               & (IData)(vlSelf->top__DOT__LSU__DOT__exu2in_valid_reg))));
        bufp->chgIData(oldp+97,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter))
                                  ? vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__dataReg
                                  : 0U)),32);
        bufp->chgBit(oldp+98,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT___GEN_0)) 
                               & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter)) 
                                  & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter))))));
        bufp->chgCData(oldp+99,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__shiftReg),5);
        bufp->chgCData(oldp+100,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter),5);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__dataReg),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__LSU__DOT___GEN_1),32);
        bufp->chgBit(oldp+103,(vlSelf->top__DOT__LSU__DOT___GEN_2));
        bufp->chgIData(oldp+104,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter))
                                   ? vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__dataReg
                                   : 0U)),32);
        bufp->chgBit(oldp+105,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT___GEN_0)) 
                                & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter)) 
                                   & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter))))));
        bufp->chgCData(oldp+106,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__shiftReg),5);
        bufp->chgCData(oldp+107,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter),5);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__dataReg),32);
        bufp->chgIData(oldp+109,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter))
                                   ? vlSelf->top__DOT__LSU__DOT__delay_b__DOT__dataReg
                                   : 0U)),32);
        bufp->chgCData(oldp+110,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__shiftReg),5);
        bufp->chgCData(oldp+111,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter),5);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__dataReg),32);
        bufp->chgIData(oldp+113,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter))
                                   ? vlSelf->top__DOT__LSU__DOT__delay_r__DOT__dataReg
                                   : 0U)),32);
        bufp->chgCData(oldp+114,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__shiftReg),5);
        bufp->chgCData(oldp+115,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter),5);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__dataReg),32);
        bufp->chgIData(oldp+117,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter))
                                   ? vlSelf->top__DOT__LSU__DOT__delay_w__DOT__dataReg
                                   : 0U)),32);
        bufp->chgBit(oldp+118,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT___GEN_0)) 
                                & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter)) 
                                   & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter))))));
        bufp->chgCData(oldp+119,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__shiftReg),5);
        bufp->chgCData(oldp+120,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter),5);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__dataReg),32);
        bufp->chgQData(oldp+122,(vlSelf->top__DOT__RTC__DOT__mtime),64);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__RTC__DOT__rdata_reg),32);
        bufp->chgCData(oldp+125,(vlSelf->top__DOT__RTC__DOT__rresp_reg),2);
        bufp->chgBit(oldp+126,(vlSelf->top__DOT__RTC__DOT__arvalid_reg));
        bufp->chgIData(oldp+127,(((0U == (IData)(vlSelf->top__DOT__RTC__DOT__delay__DOT__counter))
                                   ? vlSelf->top__DOT__RTC__DOT__delay__DOT__dataReg
                                   : 0U)),32);
        bufp->chgCData(oldp+128,(vlSelf->top__DOT__RTC__DOT__delay__DOT__shiftReg),5);
        bufp->chgCData(oldp+129,(vlSelf->top__DOT__RTC__DOT__delay__DOT__counter),5);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__RTC__DOT__delay__DOT__dataReg),32);
        bufp->chgBit(oldp+131,(((IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate) 
                                & ((~ (IData)(vlSelf->top__DOT__WBU__DOT___GEN_17)) 
                                   & (0xcU == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))))));
        bufp->chgIData(oldp+132,(((1U & ((~ (IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate)) 
                                         | ((0xcU != (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type)) 
                                            | (IData)(vlSelf->top__DOT__WBU__DOT___GEN_17))))
                                   ? 0U : vlSelf->top__DOT__LSU__DOT__wbu_data_pc)),32);
        bufp->chgBit(oldp+133,(((IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate) 
                                & ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_14)
                                    ? (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen)
                                    : ((3U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type))
                                        ? ((1U == (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rresp)) 
                                           & (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen))
                                        : ((~ (IData)(vlSelf->top__DOT__WBU__DOT___GEN_13)) 
                                           & ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_15) 
                                              & (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen))))))));
        bufp->chgCData(oldp+134,(vlSelf->top__DOT___WBU_io_reg_waddr),5);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT___WBU_io_reg_wdata),32);
        bufp->chgBit(oldp+136,(vlSelf->top__DOT___WBU_io_csr_wen_1));
        bufp->chgCData(oldp+137,(vlSelf->top__DOT___WBU_io_csr_waddr_1),2);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT___WBU_io_csr_wdata_1),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__Reg__DOT__csr_0),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__Reg__DOT__csr_1),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__Reg__DOT__csr_3),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__Reg__DOT__reg_0),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__Reg__DOT__reg_1),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__Reg__DOT__reg_2),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__Reg__DOT__reg_3),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__Reg__DOT__reg_4),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__Reg__DOT__reg_5),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__Reg__DOT__reg_6),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__Reg__DOT__reg_7),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__Reg__DOT__reg_8),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__Reg__DOT__reg_9),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__Reg__DOT__reg_10),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__Reg__DOT__reg_11),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__Reg__DOT__reg_12),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__Reg__DOT__reg_13),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__Reg__DOT__reg_14),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__Reg__DOT__reg_16),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__Reg__DOT__reg_17),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__Reg__DOT__reg_18),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__Reg__DOT__reg_19),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__Reg__DOT__reg_20),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__Reg__DOT__reg_21),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__Reg__DOT__reg_22),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__Reg__DOT__reg_23),32);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__Reg__DOT__reg_24),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__Reg__DOT__reg_25),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__Reg__DOT__reg_26),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__Reg__DOT__reg_27),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__Reg__DOT__reg_28),32);
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__Reg__DOT__reg_29),32);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__Reg__DOT__reg_30),32);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__Reg__DOT__reg_31),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__SRAM__DOT__rdata_reg),32);
        bufp->chgCData(oldp+174,(vlSelf->top__DOT__SRAM__DOT__rresp_reg),2);
        bufp->chgBit(oldp+175,(vlSelf->top__DOT__SRAM__DOT__arvalid_reg));
        bufp->chgCData(oldp+176,(vlSelf->top__DOT__SRAM__DOT__bresp_reg),2);
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__SRAM__DOT__waddr_reg),32);
        bufp->chgCData(oldp+178,(vlSelf->top__DOT__SRAM__DOT__wstrb_reg),4);
        bufp->chgBit(oldp+179,(vlSelf->top__DOT__SRAM__DOT__awvalid_reg));
        bufp->chgBit(oldp+180,(vlSelf->top__DOT__SRAM__DOT__wvalid_reg));
        bufp->chgIData(oldp+181,(((0U == (IData)(vlSelf->top__DOT__SRAM__DOT__delay__DOT__counter))
                                   ? vlSelf->top__DOT__SRAM__DOT__delay__DOT__dataReg
                                   : 0U)),32);
        bufp->chgCData(oldp+182,(vlSelf->top__DOT__SRAM__DOT__delay__DOT__shiftReg),5);
        bufp->chgCData(oldp+183,(vlSelf->top__DOT__SRAM__DOT__delay__DOT__counter),5);
        bufp->chgIData(oldp+184,(vlSelf->top__DOT__SRAM__DOT__delay__DOT__dataReg),32);
        bufp->chgIData(oldp+185,(((0U == (IData)(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__counter))
                                   ? vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__dataReg
                                   : 0U)),32);
        bufp->chgCData(oldp+186,(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__shiftReg),5);
        bufp->chgCData(oldp+187,(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__counter),5);
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__dataReg),32);
        bufp->chgCData(oldp+189,(vlSelf->top__DOT__UART__DOT__bresp_reg),2);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__UART__DOT__waddr_reg),32);
        bufp->chgCData(oldp+191,(vlSelf->top__DOT__UART__DOT__wstrb_reg),4);
        bufp->chgBit(oldp+192,(vlSelf->top__DOT__UART__DOT__awvalid_reg));
        bufp->chgBit(oldp+193,(vlSelf->top__DOT__UART__DOT__wvalid_reg));
        bufp->chgIData(oldp+194,(((0U == (IData)(vlSelf->top__DOT__UART__DOT__delay_w__DOT__counter))
                                   ? vlSelf->top__DOT__UART__DOT__delay_w__DOT__dataReg
                                   : 0U)),32);
        bufp->chgCData(oldp+195,(vlSelf->top__DOT__UART__DOT__delay_w__DOT__shiftReg),5);
        bufp->chgCData(oldp+196,(vlSelf->top__DOT__UART__DOT__delay_w__DOT__counter),5);
        bufp->chgIData(oldp+197,(vlSelf->top__DOT__UART__DOT__delay_w__DOT__dataReg),32);
        bufp->chgBit(oldp+198,(vlSelf->top__DOT__WBU__DOT__m2LSUstate));
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__WBU__DOT__lastdnpc),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+200,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                   ? (((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
                                       & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg))
                                       ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                       : 0U) : ((1U 
                                                 & ((~ (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN)) 
                                                    | ((~ (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_3)) 
                                                       | (IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_0))))
                                                 ? 0U
                                                 : vlSelf->top__DOT___LSU_io_lsu_axi_ar_araddr))),32);
        bufp->chgCData(oldp+201,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid)
                                   ? ((IData)(vlSelf->top__DOT__SRAM__DOT___GEN_0)
                                       ? (IData)(vlSelf->top__DOT__SRAM__DOT__rresp_reg)
                                       : 0U) : 3U)),2);
        bufp->chgIData(oldp+202,(((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_4)
                                   ? 0U : vlSelf->top__DOT___LSU_io_lsu_axi_w_wdata)),32);
        bufp->chgCData(oldp+203,(((IData)(vlSelf->top__DOT__SRAM__DOT___GEN_1)
                                   ? (((IData)(vlSelf->top__DOT__SRAM__DOT__bvalid_reg) 
                                       & (IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_b_bready))
                                       ? (IData)(vlSelf->top__DOT__SRAM__DOT__bresp_reg)
                                       : 0U) : 3U)),2);
        bufp->chgIData(oldp+204,(((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_2)
                                   ? 0U : vlSelf->top__DOT___LSU_io_lsu_axi_w_wdata)),32);
        bufp->chgCData(oldp+205,(((IData)(vlSelf->top__DOT__UART__DOT___GEN)
                                   ? (((IData)(vlSelf->top__DOT__UART__DOT__bvalid_reg) 
                                       & (IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_b_bready))
                                       ? (IData)(vlSelf->top__DOT__UART__DOT__bresp_reg)
                                       : 0U) : 3U)),2);
        bufp->chgIData(oldp+206,((((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hb0ea07fc__0) 
                                   | (IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hff3363a0__0))
                                   ? 0U : vlSelf->top__DOT___LSU_io_lsu_axi_ar_araddr)),32);
        bufp->chgIData(oldp+207,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                   ? ((IData)(vlSelf->top__DOT__RTC__DOT___GEN)
                                       ? vlSelf->top__DOT__RTC__DOT__rdata_reg
                                       : 0U) : 2U)),32);
        bufp->chgCData(oldp+208,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                   ? ((IData)(vlSelf->top__DOT__RTC__DOT___GEN)
                                       ? (IData)(vlSelf->top__DOT__RTC__DOT__rresp_reg)
                                       : 0U) : 3U)),2);
        bufp->chgCData(oldp+209,(((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_7)
                                   ? 0U : ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_3)
                                            ? ((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid)
                                                ? ((IData)(vlSelf->top__DOT__SRAM__DOT___GEN_0)
                                                    ? (IData)(vlSelf->top__DOT__SRAM__DOT__rresp_reg)
                                                    : 0U)
                                                : 3U)
                                            : ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_5)
                                                ? ((IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__RTC__DOT___GEN)
                                                     ? (IData)(vlSelf->top__DOT__RTC__DOT__rresp_reg)
                                                     : 0U)
                                                    : 3U)
                                                : 0U)))),2);
        bufp->chgBit(oldp+210,(((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_h0eb34983__0) 
                                & (IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hff3363a0__0))));
        bufp->chgCData(oldp+211,(((IData)(vlSelf->top__DOT__AXI_arbiter__DOT____VdfgTmp_hb0ea07fc__0)
                                   ? 0U : ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_0)
                                            ? ((IData)(vlSelf->top__DOT__UART__DOT___GEN)
                                                ? (
                                                   ((IData)(vlSelf->top__DOT__UART__DOT__bvalid_reg) 
                                                    & (IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_b_bready))
                                                    ? (IData)(vlSelf->top__DOT__UART__DOT__bresp_reg)
                                                    : 0U)
                                                : 3U)
                                            : ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_3)
                                                ? ((IData)(vlSelf->top__DOT__SRAM__DOT___GEN_1)
                                                    ? 
                                                   (((IData)(vlSelf->top__DOT__SRAM__DOT__bvalid_reg) 
                                                     & (IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_b_bready))
                                                     ? (IData)(vlSelf->top__DOT__SRAM__DOT__bresp_reg)
                                                     : 0U)
                                                    : 3U)
                                                : 0U)))),2);
        bufp->chgIData(oldp+212,((((IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate) 
                                   & (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg))
                                   ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                   : 0U)),32);
        bufp->chgBit(oldp+213,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                & (IData)(vlSelf->top__DOT__SRAM__DOT__bvalid_reg))));
        bufp->chgIData(oldp+214,(((0U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                   ? vlSelf->top__DOT__Reg__DOT__csr_0
                                   : ((1U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                       ? vlSelf->top__DOT__Reg__DOT__csr_1
                                       : ((2U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                           ? vlSelf->top__DOT__Reg__DOT__csr_2
                                           : vlSelf->top__DOT__Reg__DOT__csr_3)))),32);
        bufp->chgIData(oldp+215,(((IData)(vlSelf->top__DOT__LSU__DOT____VdfgTmp_hd83711f5__0)
                                   ? 0U : (IData)(vlSelf->top__DOT__LSU__DOT___GEN_6))),32);
        bufp->chgBit(oldp+216,(((IData)(vlSelf->top__DOT__LSU__DOT__m2EXUstate) 
                                & ((3U != (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
                                   & ((~ (((IData)(vlSelf->top__DOT__LSU__DOT__bvalid_reg) 
                                           != (IData)(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_b_bvalid)) 
                                          & (IData)(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_b_bvalid))) 
                                      & (IData)(vlSelf->top__DOT__LSU__DOT___GEN_6))))));
        bufp->chgBit(oldp+217,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT___GEN_0)) 
                                & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter)) 
                                   & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter))))));
        bufp->chgBit(oldp+218,(((~ (((IData)(vlSelf->top__DOT__LSU__DOT__rvalid_reg) 
                                     != (IData)(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_r_rvalid)) 
                                    & (IData)(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_r_rvalid))) 
                                & (IData)(vlSelf->top__DOT__LSU__DOT___GEN_3))));
        bufp->chgBit(oldp+219,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT___GEN_0)) 
                                & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter)) 
                                   & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter))))));
        bufp->chgIData(oldp+220,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)
                                   ? (((0xa0000048U 
                                        == vlSelf->top__DOT__RTC__DOT__rtc_raddr) 
                                       & (IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid))
                                       ? (IData)(vlSelf->top__DOT__RTC__DOT__mtime)
                                       : (((0xa000004cU 
                                            == vlSelf->top__DOT__RTC__DOT__rtc_raddr) 
                                           & (IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid))
                                           ? (IData)(
                                                     (vlSelf->top__DOT__RTC__DOT__mtime 
                                                      >> 0x20U))
                                           : 0U)) : 0U)),32);
        bufp->chgBit(oldp+221,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid) 
                                & ((IData)(vlSelf->top__DOT__RTC__DOT__arvalid_reg) 
                                   != (IData)(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid)))));
        bufp->chgBit(oldp+222,(((~ (IData)(vlSelf->top__DOT__RTC__DOT__delay__DOT___GEN_0)) 
                                & ((0U != (IData)(vlSelf->top__DOT__RTC__DOT__delay__DOT__counter)) 
                                   & (1U == (IData)(vlSelf->top__DOT__RTC__DOT__delay__DOT__counter))))));
        bufp->chgBit(oldp+223,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid) 
                                & ((IData)(vlSelf->top__DOT__SRAM__DOT__arvalid_reg) 
                                   != (IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid)))));
        bufp->chgBit(oldp+224,(((~ (IData)(vlSelf->top__DOT__SRAM__DOT__delay__DOT___GEN_0)) 
                                & ((0U != (IData)(vlSelf->top__DOT__SRAM__DOT__delay__DOT__counter)) 
                                   & (1U == (IData)(vlSelf->top__DOT__SRAM__DOT__delay__DOT__counter))))));
        bufp->chgBit(oldp+225,(((IData)(vlSelf->top__DOT__SRAM__DOT___GEN_1) 
                                & (((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wvalid) 
                                    != (IData)(vlSelf->top__DOT__SRAM__DOT__wvalid_reg)) 
                                   & ((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wvalid) 
                                      & (((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awvalid) 
                                          != (IData)(vlSelf->top__DOT__SRAM__DOT__awvalid_reg)) 
                                         & (IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awvalid)))))));
        bufp->chgBit(oldp+226,(((~ (IData)(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT___GEN_0)) 
                                & ((0U != (IData)(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__counter)) 
                                   & (1U == (IData)(vlSelf->top__DOT__SRAM__DOT__delay_w__DOT__counter))))));
        bufp->chgIData(oldp+227,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wvalid)
                                   ? ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_4)
                                       ? 0U : vlSelf->top__DOT___LSU_io_lsu_axi_w_wdata)
                                   : 0U)),32);
        bufp->chgBit(oldp+228,(((IData)(vlSelf->top__DOT__SRAM__DOT___GEN_1) 
                                & (((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wstrb) 
                                    != (IData)(vlSelf->top__DOT__SRAM__DOT__wstrb_reg)) 
                                   & (vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awaddr 
                                      != vlSelf->top__DOT__SRAM__DOT__waddr_reg)))));
        bufp->chgBit(oldp+229,(((IData)(vlSelf->top__DOT__UART__DOT___GEN) 
                                & (((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wvalid) 
                                    != (IData)(vlSelf->top__DOT__UART__DOT__wvalid_reg)) 
                                   & ((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wvalid) 
                                      & (((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awvalid) 
                                          != (IData)(vlSelf->top__DOT__UART__DOT__awvalid_reg)) 
                                         & (IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awvalid)))))));
        bufp->chgBit(oldp+230,(((~ (IData)(vlSelf->top__DOT__UART__DOT__delay_w__DOT___GEN_0)) 
                                & ((0U != (IData)(vlSelf->top__DOT__UART__DOT__delay_w__DOT__counter)) 
                                   & (1U == (IData)(vlSelf->top__DOT__UART__DOT__delay_w__DOT__counter))))));
        bufp->chgBit(oldp+231,(((IData)(vlSelf->top__DOT__UART__DOT___GEN) 
                                & (((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wstrb) 
                                    != (IData)(vlSelf->top__DOT__UART__DOT__wstrb_reg)) 
                                   & (vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awaddr 
                                      != vlSelf->top__DOT__UART__DOT__waddr_reg)))));
        bufp->chgIData(oldp+232,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wvalid)
                                   ? ((IData)(vlSelf->top__DOT__AXI_arbiter__DOT___GEN_2)
                                       ? 0U : vlSelf->top__DOT___LSU_io_lsu_axi_w_wdata)
                                   : 0U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+233,(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid));
        bufp->chgIData(oldp+234,(vlSelf->top__DOT___SRAM_io_axi_r_rdata),32);
        bufp->chgBit(oldp+235,(vlSelf->top__DOT___AXI_arbiter_io_axi_r_rready));
        bufp->chgIData(oldp+236,(vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awaddr),32);
        bufp->chgBit(oldp+237,(vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awvalid));
        bufp->chgCData(oldp+238,(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wstrb),4);
        bufp->chgBit(oldp+239,(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wvalid));
        bufp->chgBit(oldp+240,(vlSelf->top__DOT___AXI_arbiter_io_axi_b_bready));
        bufp->chgIData(oldp+241,(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awaddr),32);
        bufp->chgBit(oldp+242,(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awvalid));
        bufp->chgCData(oldp+243,(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wstrb),4);
        bufp->chgBit(oldp+244,(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wvalid));
        bufp->chgBit(oldp+245,(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_b_bready));
        bufp->chgBit(oldp+246,(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_ar_arvalid));
        bufp->chgBit(oldp+247,(vlSelf->top__DOT___AXI_arbiter_io_rtc_axi_r_rready));
        bufp->chgIData(oldp+248,(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_r_rdata),32);
        bufp->chgBit(oldp+249,(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_r_rvalid));
        bufp->chgBit(oldp+250,(vlSelf->top__DOT___AXI_arbiter_io_lsu_axi_b_bvalid));
        bufp->chgBit(oldp+251,(vlSelf->top__DOT__IFU__DOT__arvalid_reg));
        bufp->chgIData(oldp+252,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                   ? vlSelf->top__DOT___SRAM_io_axi_r_rdata
                                   : 0U)),32);
        bufp->chgBit(oldp+253,(vlSelf->top__DOT___AXI_arbiter_io_ifu_axi_r_rvalid));
        bufp->chgBit(oldp+254,(vlSelf->top__DOT__IFU__DOT__rready_reg));
        bufp->chgIData(oldp+255,(((IData)(4U) + vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_0)),32);
        bufp->chgIData(oldp+256,(vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_0),32);
        bufp->chgIData(oldp+257,(vlSelf->top__DOT__IFU__DOT__inst_reg),32);
        bufp->chgCData(oldp+258,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                           >> 0xfU))),5);
        bufp->chgIData(oldp+259,(vlSelf->top__DOT__Reg__DOT__casez_tmp),32);
        bufp->chgCData(oldp+260,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+261,(vlSelf->top__DOT__Reg__DOT__casez_tmp_0),32);
        bufp->chgCData(oldp+262,(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr),2);
        bufp->chgIData(oldp+263,(vlSelf->top__DOT__IDU__DOT__csr_imm),32);
        bufp->chgCData(oldp+264,(vlSelf->top__DOT__IDU__DOT__casez_tmp),5);
        bufp->chgCData(oldp+265,(vlSelf->top__DOT__IDU__DOT__casez_tmp_0),5);
        bufp->chgBit(oldp+266,(vlSelf->top__DOT___WBU_io_out2ifu_valid));
        bufp->chgBit(oldp+267,(vlSelf->top__DOT__IFU__DOT__m2EXUstate));
        bufp->chgIData(oldp+268,(vlSelf->top__DOT__LSU__DOT___GEN_3),32);
        bufp->chgIData(oldp+269,(vlSelf->top__DOT__RTC__DOT__rtc_raddr),32);
        bufp->chgBit(oldp+270,(vlSelf->top__DOT__RTC__DOT__rvalid_en));
        bufp->chgBit(oldp+271,(vlSelf->top__DOT__SRAM__DOT__rvalid_en));
        bufp->chgBit(oldp+272,(vlSelf->top__DOT__SRAM__DOT__bvalid_en));
        bufp->chgIData(oldp+273,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid)
                                   ? vlSelf->top__DOT__SRAM__DOT___m_m_rdata
                                   : 0U)),32);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__SRAM__DOT___GEN_1),32);
        bufp->chgIData(oldp+275,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awvalid)
                                   ? vlSelf->top__DOT___AXI_arbiter_io_axi_aw_awaddr
                                   : 0U)),32);
        bufp->chgIData(oldp+276,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wvalid)
                                   ? (IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_w_wstrb)
                                   : 0U)),32);
        bufp->chgIData(oldp+277,(vlSelf->top__DOT__SRAM__DOT___GEN),32);
        bufp->chgIData(oldp+278,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_axi_ar_arvalid) 
                                  << 2U)),32);
        bufp->chgIData(oldp+279,(vlSelf->top__DOT__SRAM__DOT___m_m_rdata),32);
        bufp->chgBit(oldp+280,(vlSelf->top__DOT__UART__DOT__bvalid_en));
        bufp->chgIData(oldp+281,(vlSelf->top__DOT__UART__DOT___GEN),32);
        bufp->chgIData(oldp+282,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awvalid)
                                   ? vlSelf->top__DOT___AXI_arbiter_io_uart_axi_aw_awaddr
                                   : 0U)),32);
        bufp->chgIData(oldp+283,(((IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wvalid)
                                   ? (IData)(vlSelf->top__DOT___AXI_arbiter_io_uart_axi_w_wstrb)
                                   : 0U)),32);
    }
    bufp->chgBit(oldp+284,(vlSelf->clock));
    bufp->chgBit(oldp+285,(vlSelf->reset));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

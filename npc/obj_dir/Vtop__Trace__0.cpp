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
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__IDU__DOT__state_reg));
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__IDU__DOT__exu_data_snpc),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__IDU__DOT__exu_data_pc),32);
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__IDU__DOT__exu_data_mem_ren));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__IDU__DOT__exu_data_mem_wen));
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__IDU__DOT__exu_data_m_rmask),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__IDU__DOT__exu_data_m_wmask),32);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__IDU__DOT__exu_data_reg_waddr),5);
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen));
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__IDU__DOT__exu_data_src1),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__IDU__DOT__exu_data_src2),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__IDU__DOT__exu_data_csr),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__IDU__DOT__exu_data_csr_a5),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__IDU__DOT__exu_data_mstatus),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__IDU__DOT__exu_data_imm),32);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op),5);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type),4);
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__IDU__DOT__exu_data_il_us));
        bufp->chgIData(oldp+18,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_5)
                                  ? 0U : vlSelf->top__DOT__EXU__DOT__mem_raddr_reg)),32);
        bufp->chgCData(oldp+19,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_5)
                                  ? 0U : (7U & vlSelf->top__DOT__EXU__DOT__mem_rmask_reg))),3);
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__EXU__DOT__mem_ren_reg));
        bufp->chgIData(oldp+21,(vlSelf->top__DOT___Mem_io_r_mem_exu_rdata),32);
        bufp->chgCData(oldp+22,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg)
                                  ? ((IData)(vlSelf->top__DOT__Mem__DOT___GEN_1)
                                      ? (IData)(vlSelf->top__DOT__Mem__DOT__rresp_reg)
                                      : 0U) : 3U)),2);
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__Mem__DOT__rvalid_reg));
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__EXU__DOT__rready_reg));
        bufp->chgIData(oldp+25,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7)
                                  ? 0U : vlSelf->top__DOT__EXU__DOT__mem_wdata_reg)),32);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT___EXU_io_w_exu_mem_wmask),3);
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__EXU__DOT__mem_wen_reg));
        bufp->chgIData(oldp+28,(vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr),32);
        bufp->chgCData(oldp+29,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg)
                                  ? (((IData)(vlSelf->top__DOT__EXU__DOT__bready_reg) 
                                      & (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg))
                                      ? (IData)(vlSelf->top__DOT__Mem__DOT__bresp_reg)
                                      : 0U) : 3U)),2);
        bufp->chgBit(oldp+30,(vlSelf->top__DOT__Mem__DOT__bvalid_reg));
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__EXU__DOT__bready_reg));
        bufp->chgIData(oldp+32,(vlSelf->top__DOT___EXU_io_reg_wdata),32);
        bufp->chgBit(oldp+33,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                               & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_4)
                                   ? (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen)
                                   : ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                       ? ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3) 
                                          & (IData)(vlSelf->top__DOT__EXU__DOT__reg_wen_reg))
                                       : ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)) 
                                          & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_19) 
                                             & (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen))))))));
        bufp->chgCData(oldp+34,(vlSelf->top__DOT___EXU_io_reg_waddr),5);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT___EXU_io_csr_waddr_1),2);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT___EXU_io_csr_wdata_1),32);
        bufp->chgBit(oldp+37,(vlSelf->top__DOT___EXU_io_csr_wen_1));
        bufp->chgIData(oldp+38,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                        | ((0xcU != (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_24))))
                                  ? 0U : vlSelf->top__DOT__IDU__DOT__exu_data_pc)),32);
        bufp->chgBit(oldp+39,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                               & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_24)) 
                                  & (0xcU == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))))));
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__EXU__DOT__m2IDUstate));
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__EXU__DOT__lastdnpc),32);
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__EXU__DOT__reg_wen_reg));
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__EXU__DOT__reg_waddr_reg),5);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__EXU__DOT__mem_raddr_reg),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__EXU__DOT__mem_rmask_reg),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__EXU__DOT__mem_awaddr_reg),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__EXU__DOT__mem_wmask_reg),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__EXU__DOT__mem_wdata_reg),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__EXU__DOT___alu_io_result),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__Reg__DOT__reg_15),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__Reg__DOT__csr_2),32);
        bufp->chgBit(oldp+55,(vlSelf->top__DOT__IDU__DOT__state));
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__Inst_fetch__DOT__arvalid_reg));
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__lfsrReg),2);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter),5);
        bufp->chgCData(oldp+59,(((0U == (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__lfsrReg))
                                  ? 5U : ((1U == (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__lfsrReg))
                                           ? 0xaU : 
                                          ((2U == (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__lfsrReg))
                                            ? 0xfU : 0x14U)))),5);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__Inst_fetch__DOT___vlg_pc_read_inst),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__Mem__DOT__rdata_reg),32);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__Mem__DOT__rresp_reg),2);
        bufp->chgBit(oldp+63,(vlSelf->top__DOT__Mem__DOT__arvalid_reg));
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__Mem__DOT__bresp_reg),2);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__Mem__DOT__waddr_reg),32);
        bufp->chgCData(oldp+66,(vlSelf->top__DOT__Mem__DOT__wmask_reg),3);
        bufp->chgBit(oldp+67,(vlSelf->top__DOT__Mem__DOT__awvalid_reg));
        bufp->chgBit(oldp+68,(vlSelf->top__DOT__Mem__DOT__wvalid_reg));
        bufp->chgBit(oldp+69,(vlSelf->top__DOT__Mem__DOT__rvalid_en));
        bufp->chgBit(oldp+70,(vlSelf->top__DOT__Mem__DOT__bvalid_en));
        bufp->chgIData(oldp+71,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg)
                                  ? vlSelf->top__DOT__Mem__DOT___m_m_rdata
                                  : 0U)),32);
        bufp->chgBit(oldp+72,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg) 
                               & ((IData)(vlSelf->top__DOT__Mem__DOT__arvalid_reg) 
                                  != (IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg)))));
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__Mem__DOT__delay__DOT__dataReg),32);
        bufp->chgBit(oldp+74,(((~ (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT___GEN)) 
                               & ((0U != (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter)) 
                                  & (1U == (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter))))));
        bufp->chgCData(oldp+75,(vlSelf->top__DOT__Mem__DOT__delay__DOT__lfsrReg),2);
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter),5);
        bufp->chgCData(oldp+77,(((0U == (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__lfsrReg))
                                  ? 5U : ((1U == (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__lfsrReg))
                                           ? 0xaU : 
                                          ((2U == (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__lfsrReg))
                                            ? 0xfU : 0x14U)))),5);
        bufp->chgIData(oldp+78,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg)
                                  ? (IData)(vlSelf->top__DOT__Mem__DOT___m_m_wready)
                                  : 0U)),32);
        bufp->chgBit(oldp+79,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg) 
                               & (((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg) 
                                   != (IData)(vlSelf->top__DOT__Mem__DOT__wvalid_reg)) 
                                  & ((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg) 
                                     != (IData)(vlSelf->top__DOT__Mem__DOT__awvalid_reg))))));
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__dataReg),32);
        bufp->chgBit(oldp+81,(((~ (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT___GEN)) 
                               & ((0U != (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter)) 
                                  & (1U == (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter))))));
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__lfsrReg),2);
        bufp->chgCData(oldp+83,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter),5);
        bufp->chgCData(oldp+84,(((0U == (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__lfsrReg))
                                  ? 5U : ((1U == (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__lfsrReg))
                                           ? 0xaU : 
                                          ((2U == (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__lfsrReg))
                                            ? 0xfU : 0x14U)))),5);
        bufp->chgIData(oldp+85,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg)
                                  ? vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr
                                  : 0U)),32);
        bufp->chgIData(oldp+86,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg)
                                  ? ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7)
                                      ? 0U : vlSelf->top__DOT__EXU__DOT__mem_wdata_reg)
                                  : 0U)),32);
        bufp->chgIData(oldp+87,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg)
                                  ? (IData)(vlSelf->top__DOT___EXU_io_w_exu_mem_wmask)
                                  : 0U)),32);
        bufp->chgBit(oldp+88,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg) 
                               & (((IData)(vlSelf->top__DOT___EXU_io_w_exu_mem_wmask) 
                                   != (IData)(vlSelf->top__DOT__Mem__DOT__wmask_reg)) 
                                  & (vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr 
                                     != vlSelf->top__DOT__Mem__DOT__waddr_reg)))));
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__Mem__DOT___GEN),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__Mem__DOT___GEN_0),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__Mem__DOT___m_m_rdata),32);
        bufp->chgBit(oldp+92,(vlSelf->top__DOT__Mem__DOT___m_m_wready));
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__Reg__DOT__csr_0),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__Reg__DOT__csr_1),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__Reg__DOT__csr_3),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__Reg__DOT__reg_0),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__Reg__DOT__reg_1),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__Reg__DOT__reg_2),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__Reg__DOT__reg_3),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__Reg__DOT__reg_4),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__Reg__DOT__reg_5),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__Reg__DOT__reg_6),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__Reg__DOT__reg_7),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__Reg__DOT__reg_8),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__Reg__DOT__reg_9),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__Reg__DOT__reg_10),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__Reg__DOT__reg_11),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__Reg__DOT__reg_12),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__Reg__DOT__reg_13),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__Reg__DOT__reg_14),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__Reg__DOT__reg_16),32);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__Reg__DOT__reg_17),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__Reg__DOT__reg_18),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__Reg__DOT__reg_19),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__Reg__DOT__reg_20),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__Reg__DOT__reg_21),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__Reg__DOT__reg_22),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__Reg__DOT__reg_23),32);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__Reg__DOT__reg_24),32);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__Reg__DOT__reg_25),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__Reg__DOT__reg_26),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__Reg__DOT__reg_27),32);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__Reg__DOT__reg_28),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__Reg__DOT__reg_29),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__Reg__DOT__reg_30),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__Reg__DOT__reg_31),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+127,(vlSelf->top__DOT___EXU_io_out2ifu_valid));
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc),32);
        bufp->chgBit(oldp+129,(vlSelf->top__DOT__IFU__DOT__rready_reg));
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__IFU__DOT__inst_reg),32);
        bufp->chgCData(oldp+131,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                           >> 0xfU))),5);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__Reg__DOT__casez_tmp),32);
        bufp->chgCData(oldp+133,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__Reg__DOT__casez_tmp_0),32);
        bufp->chgCData(oldp+135,(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr),2);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__IDU__DOT__csr_imm),32);
        bufp->chgCData(oldp+137,(vlSelf->top__DOT__IDU__DOT__casez_tmp),5);
        bufp->chgCData(oldp+138,(vlSelf->top__DOT__IDU__DOT__casez_tmp_0),5);
        bufp->chgIData(oldp+139,((((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                   & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                                   ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                   : 0U)),32);
        bufp->chgBit(oldp+140,(vlSelf->top__DOT__IFU__DOT__arvalid_reg));
        bufp->chgIData(oldp+141,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                   ? vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg
                                   : 0U)),32);
        bufp->chgBit(oldp+142,(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_reg));
        bufp->chgBit(oldp+143,(vlSelf->top__DOT__IFU__DOT__m2EXUstate));
        bufp->chgBit(oldp+144,(vlSelf->top__DOT__IFU__DOT__exu2in_reg));
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__IFU__DOT__indata_dnpc),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__IFU__DOT__ardata_reg),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_REG),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg),32);
        bufp->chgBit(oldp+149,(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_en));
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__dataReg),32);
        bufp->chgIData(oldp+151,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                   ? (((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                       & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                                       ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                       : 0U) : 0U)),32);
    }
    bufp->chgBit(oldp+152,(vlSelf->clock));
    bufp->chgBit(oldp+153,(vlSelf->reset));
    bufp->chgIData(oldp+154,(vlSelf->io_pc),32);
    bufp->chgBit(oldp+155,(vlSelf->io_inv_flag));
    bufp->chgIData(oldp+156,(((IData)(4U) + vlSelf->io_pc)),32);
    bufp->chgIData(oldp+157,(((0U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                               ? vlSelf->top__DOT__Reg__DOT__csr_0
                               : ((1U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                   ? vlSelf->top__DOT__Reg__DOT__csr_1
                                   : ((2U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                       ? vlSelf->top__DOT__Reg__DOT__csr_2
                                       : vlSelf->top__DOT__Reg__DOT__csr_3)))),32);
    bufp->chgIData(oldp+158,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                               ? vlSelf->top__DOT__Inst_fetch__DOT___vlg_pc_read_inst
                               : 0U)),32);
    bufp->chgBit(oldp+159,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                            & ((IData)(vlSelf->top__DOT__Inst_fetch__DOT__arvalid_reg) 
                               != (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)))));
    bufp->chgBit(oldp+160,(((~ (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT___GEN)) 
                            & ((0U != (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter)) 
                               & (1U == (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter))))));
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

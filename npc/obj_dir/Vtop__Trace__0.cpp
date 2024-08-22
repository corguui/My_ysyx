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
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__EXU__DOT__state_reg));
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__EXU__DOT__lsu_data_snpc),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__EXU__DOT__lsu_data_pc),32);
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__EXU__DOT__lsu_data_mem_ren));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__EXU__DOT__lsu_data_mem_wen));
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__EXU__DOT__lsu_data_m_rmask),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__EXU__DOT__lsu_data_m_wmask),32);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__EXU__DOT__lsu_data_reg_waddr),5);
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__EXU__DOT__lsu_data_reg_wen));
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__EXU__DOT__lsu_data_src1),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__EXU__DOT__lsu_data_src2),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__EXU__DOT__lsu_data_csr),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__EXU__DOT__lsu_data_csr_a5),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__EXU__DOT__lsu_data_mstatus),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__EXU__DOT__lsu_data_imm),32);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type),4);
        bufp->chgBit(oldp+34,(vlSelf->top__DOT__EXU__DOT__lsu_data_il_us));
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__EXU__DOT__lsu_data_alu_result),32);
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__EXU__DOT__m2IDUstate));
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__EXU__DOT___alu_io_result),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__Reg__DOT__reg_15),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__Reg__DOT__csr_2),32);
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__IDU__DOT__state));
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__Inst_fetch__DOT__arvalid_reg));
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__shiftReg),5);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__Inst_fetch__DOT___vlg_pc_read_inst),32);
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0));
        bufp->chgIData(oldp+48,(vlSelf->top__DOT___LSU_io_out2wbu_bits_snpc),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT___LSU_io_out2wbu_bits_pc),32);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT___LSU_io_out2wbu_bits_reg_waddr),5);
        bufp->chgBit(oldp+51,(vlSelf->top__DOT___LSU_io_out2wbu_bits_reg_wen));
        bufp->chgIData(oldp+52,(((IData)(vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0)
                                  ? vlSelf->top__DOT__LSU__DOT__wbu_data_src1
                                  : 0U)),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT___LSU_io_out2wbu_bits_csr),32);
        bufp->chgIData(oldp+54,(((IData)(vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0)
                                  ? vlSelf->top__DOT__LSU__DOT__wbu_data_csr_a5
                                  : 0U)),32);
        bufp->chgIData(oldp+55,(((IData)(vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0)
                                  ? vlSelf->top__DOT__LSU__DOT__wbu_data_mstatus
                                  : 0U)),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT___LSU_io_out2wbu_bits_imm),32);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT___LSU_io_out2wbu_bits_inst_type),4);
        bufp->chgIData(oldp+58,(((IData)(vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0)
                                  ? vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rdata
                                  : 0U)),32);
        bufp->chgCData(oldp+59,(((IData)(vlSelf->top__DOT__LSU__DOT__io_out2wbu_valid_0)
                                  ? (IData)(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_bresp)
                                  : 0U)),2);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT___LSU_io_out2wbu_bits_mem_rresp),2);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT___LSU_io_out2wbu_bits_alu_result),32);
        bufp->chgIData(oldp+62,(((IData)(vlSelf->top__DOT__LSU__DOT___GEN_4)
                                  ? vlSelf->top__DOT__LSU__DOT__mem_raddr_reg
                                  : 0U)),32);
        bufp->chgCData(oldp+63,(((IData)(vlSelf->top__DOT__LSU__DOT___GEN_4)
                                  ? (7U & vlSelf->top__DOT__LSU__DOT__mem_rmask_reg)
                                  : 0U)),3);
        bufp->chgBit(oldp+64,(vlSelf->top__DOT__LSU__DOT__io_ar_exu_mem_arvalid_0));
        bufp->chgIData(oldp+65,(vlSelf->top__DOT___Mem_io_r_mem_exu_rdata),32);
        bufp->chgCData(oldp+66,(((IData)(vlSelf->top__DOT__LSU__DOT__io_ar_exu_mem_arvalid_0)
                                  ? ((IData)(vlSelf->top__DOT__Mem__DOT___GEN_1)
                                      ? (IData)(vlSelf->top__DOT__Mem__DOT__rresp_reg)
                                      : 0U) : 3U)),2);
        bufp->chgBit(oldp+67,(vlSelf->top__DOT__Mem__DOT__rvalid_reg));
        bufp->chgBit(oldp+68,(vlSelf->top__DOT__LSU__DOT__io_r_mem_exu_rready_0));
        bufp->chgIData(oldp+69,(((IData)(vlSelf->top__DOT__LSU__DOT___GEN_5)
                                  ? 0U : vlSelf->top__DOT__LSU__DOT__mem_wdata_reg)),32);
        bufp->chgCData(oldp+70,(vlSelf->top__DOT___LSU_io_w_exu_mem_wmask),3);
        bufp->chgBit(oldp+71,(vlSelf->top__DOT__LSU__DOT__io_w_exu_mem_wvalid_0));
        bufp->chgIData(oldp+72,(vlSelf->top__DOT___LSU_io_aw_exu_mem_awaddr),32);
        bufp->chgBit(oldp+73,(vlSelf->top__DOT__LSU__DOT__io_aw_exu_mem_awvalid_0));
        bufp->chgCData(oldp+74,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T)
                                  ? (((IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg) 
                                      & (IData)(vlSelf->top__DOT__LSU__DOT__io_b_mem_exu_bready_0))
                                      ? (IData)(vlSelf->top__DOT__Mem__DOT__bresp_reg)
                                      : 0U) : 3U)),2);
        bufp->chgBit(oldp+75,(vlSelf->top__DOT__Mem__DOT__bvalid_reg));
        bufp->chgBit(oldp+76,(vlSelf->top__DOT__LSU__DOT__io_b_mem_exu_bready_0));
        bufp->chgBit(oldp+77,(vlSelf->top__DOT__LSU__DOT__m2EXUstate));
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__LSU__DOT__state_reg));
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__LSU__DOT__rready_reg));
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__LSU__DOT__mem_raddr_reg),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__LSU__DOT__mem_rmask_reg),32);
        bufp->chgBit(oldp+82,(vlSelf->top__DOT__LSU__DOT__mem_ren_reg));
        bufp->chgBit(oldp+83,(vlSelf->top__DOT__LSU__DOT__exu2in_valid));
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__LSU__DOT__rvalid_reg));
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__LSU__DOT__bready_reg));
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__LSU__DOT__mem_awaddr_reg),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__LSU__DOT__mem_wmask_reg),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__LSU__DOT__mem_wdata_reg),32);
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__LSU__DOT__mem_wen_reg));
        bufp->chgBit(oldp+90,(vlSelf->top__DOT__LSU__DOT__m_wen_reg_delay));
        bufp->chgBit(oldp+91,(vlSelf->top__DOT__LSU__DOT__bvalid_reg));
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__LSU__DOT__wbu_data_snpc),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__LSU__DOT__wbu_data_pc),32);
        bufp->chgCData(oldp+94,(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_waddr),5);
        bufp->chgBit(oldp+95,(vlSelf->top__DOT__LSU__DOT__wbu_data_reg_wen));
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__LSU__DOT__wbu_data_src1),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__LSU__DOT__wbu_data_csr),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__LSU__DOT__wbu_data_csr_a5),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__LSU__DOT__wbu_data_mstatus),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__LSU__DOT__wbu_data_imm),32);
        bufp->chgCData(oldp+101,(vlSelf->top__DOT__LSU__DOT__wbu_data_inst_type),4);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rdata),32);
        bufp->chgCData(oldp+103,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_bresp),2);
        bufp->chgCData(oldp+104,(vlSelf->top__DOT__LSU__DOT__wbu_data_mem_rresp),2);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__LSU__DOT__wbu_data_alu_result),32);
        bufp->chgIData(oldp+106,(((3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type))
                                   ? (IData)(vlSelf->top__DOT__LSU__DOT__mem_ren_reg)
                                   : 0U)),32);
        bufp->chgBit(oldp+107,(((3U == (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
                                & (IData)(vlSelf->top__DOT__LSU__DOT__exu2in_valid))));
        bufp->chgIData(oldp+108,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter))
                                   ? vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__dataReg
                                   : 0U)),32);
        bufp->chgBit(oldp+109,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT___GEN_0)) 
                                & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter)) 
                                   & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter))))));
        bufp->chgCData(oldp+110,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__shiftReg),5);
        bufp->chgCData(oldp+111,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__counter),5);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__LSU__DOT__delay_ar__DOT__dataReg),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__LSU__DOT___GEN_1),32);
        bufp->chgBit(oldp+114,(vlSelf->top__DOT__LSU__DOT___GEN_2));
        bufp->chgIData(oldp+115,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter))
                                   ? vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__dataReg
                                   : 0U)),32);
        bufp->chgBit(oldp+116,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT___GEN_0)) 
                                & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter)) 
                                   & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter))))));
        bufp->chgCData(oldp+117,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__shiftReg),5);
        bufp->chgCData(oldp+118,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__counter),5);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__LSU__DOT__delay_aw__DOT__dataReg),32);
        bufp->chgIData(oldp+120,(((IData)(vlSelf->top__DOT__LSU__DOT____VdfgTmp_hd83711f5__0)
                                   ? 0U : (IData)(vlSelf->top__DOT__LSU__DOT___GEN_7))),32);
        bufp->chgBit(oldp+121,(((IData)(vlSelf->top__DOT__LSU__DOT__m2EXUstate) 
                                & ((3U != (IData)(vlSelf->top__DOT__EXU__DOT__lsu_data_inst_type)) 
                                   & ((~ (((IData)(vlSelf->top__DOT__LSU__DOT__bvalid_reg) 
                                           != (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg)) 
                                          & (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg))) 
                                      & (IData)(vlSelf->top__DOT__LSU__DOT___GEN_7))))));
        bufp->chgIData(oldp+122,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter))
                                   ? vlSelf->top__DOT__LSU__DOT__delay_b__DOT__dataReg
                                   : 0U)),32);
        bufp->chgBit(oldp+123,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT___GEN_0)) 
                                & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter)) 
                                   & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter))))));
        bufp->chgCData(oldp+124,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__shiftReg),5);
        bufp->chgCData(oldp+125,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__counter),5);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__LSU__DOT__delay_b__DOT__dataReg),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__LSU__DOT___GEN_4),32);
        bufp->chgBit(oldp+128,(((~ (((IData)(vlSelf->top__DOT__LSU__DOT__rvalid_reg) 
                                     != (IData)(vlSelf->top__DOT__Mem__DOT__rvalid_reg)) 
                                    & (IData)(vlSelf->top__DOT__Mem__DOT__rvalid_reg))) 
                                & (IData)(vlSelf->top__DOT__LSU__DOT___GEN_4))));
        bufp->chgIData(oldp+129,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter))
                                   ? vlSelf->top__DOT__LSU__DOT__delay_r__DOT__dataReg
                                   : 0U)),32);
        bufp->chgBit(oldp+130,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT___GEN_0)) 
                                & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter)) 
                                   & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter))))));
        bufp->chgCData(oldp+131,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__shiftReg),5);
        bufp->chgCData(oldp+132,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__counter),5);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__LSU__DOT__delay_r__DOT__dataReg),32);
        bufp->chgIData(oldp+134,(((0U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter))
                                   ? vlSelf->top__DOT__LSU__DOT__delay_w__DOT__dataReg
                                   : 0U)),32);
        bufp->chgBit(oldp+135,(((~ (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT___GEN_0)) 
                                & ((0U != (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter)) 
                                   & (1U == (IData)(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter))))));
        bufp->chgCData(oldp+136,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__shiftReg),5);
        bufp->chgCData(oldp+137,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__counter),5);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__LSU__DOT__delay_w__DOT__dataReg),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__Mem__DOT__rdata_reg),32);
        bufp->chgCData(oldp+140,(vlSelf->top__DOT__Mem__DOT__rresp_reg),2);
        bufp->chgBit(oldp+141,(vlSelf->top__DOT__Mem__DOT__arvalid_reg));
        bufp->chgCData(oldp+142,(vlSelf->top__DOT__Mem__DOT__bresp_reg),2);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__Mem__DOT__waddr_reg),32);
        bufp->chgCData(oldp+144,(vlSelf->top__DOT__Mem__DOT__wmask_reg),3);
        bufp->chgBit(oldp+145,(vlSelf->top__DOT__Mem__DOT__awvalid_reg));
        bufp->chgBit(oldp+146,(vlSelf->top__DOT__Mem__DOT__wvalid_reg));
        bufp->chgBit(oldp+147,(vlSelf->top__DOT__Mem__DOT__rvalid_en));
        bufp->chgBit(oldp+148,(vlSelf->top__DOT__Mem__DOT__bvalid_en));
        bufp->chgIData(oldp+149,(((IData)(vlSelf->top__DOT__LSU__DOT__io_ar_exu_mem_arvalid_0)
                                   ? vlSelf->top__DOT__Mem__DOT___m_m_rdata
                                   : 0U)),32);
        bufp->chgBit(oldp+150,(((IData)(vlSelf->top__DOT__LSU__DOT__io_ar_exu_mem_arvalid_0) 
                                & ((IData)(vlSelf->top__DOT__Mem__DOT__arvalid_reg) 
                                   != (IData)(vlSelf->top__DOT__LSU__DOT__io_ar_exu_mem_arvalid_0)))));
        bufp->chgIData(oldp+151,(((0U == (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter))
                                   ? vlSelf->top__DOT__Mem__DOT__delay__DOT__dataReg
                                   : 0U)),32);
        bufp->chgBit(oldp+152,(((~ (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT___GEN_0)) 
                                & ((0U != (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter)) 
                                   & (1U == (IData)(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter))))));
        bufp->chgCData(oldp+153,(vlSelf->top__DOT__Mem__DOT__delay__DOT__shiftReg),5);
        bufp->chgCData(oldp+154,(vlSelf->top__DOT__Mem__DOT__delay__DOT__counter),5);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__Mem__DOT__delay__DOT__dataReg),32);
        bufp->chgIData(oldp+156,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T)
                                   ? (IData)(vlSelf->top__DOT__Mem__DOT___m_m_wready)
                                   : 0U)),32);
        bufp->chgBit(oldp+157,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T) 
                                & (((IData)(vlSelf->top__DOT__LSU__DOT__io_w_exu_mem_wvalid_0) 
                                    != (IData)(vlSelf->top__DOT__Mem__DOT__wvalid_reg)) 
                                   & ((IData)(vlSelf->top__DOT__LSU__DOT__io_w_exu_mem_wvalid_0) 
                                      & (((IData)(vlSelf->top__DOT__LSU__DOT__io_aw_exu_mem_awvalid_0) 
                                          != (IData)(vlSelf->top__DOT__Mem__DOT__awvalid_reg)) 
                                         & (IData)(vlSelf->top__DOT__LSU__DOT__io_aw_exu_mem_awvalid_0)))))));
        bufp->chgIData(oldp+158,(((0U == (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter))
                                   ? vlSelf->top__DOT__Mem__DOT__delay_w__DOT__dataReg
                                   : 0U)),32);
        bufp->chgBit(oldp+159,(((~ (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT___GEN_0)) 
                                & ((0U != (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter)) 
                                   & (1U == (IData)(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter))))));
        bufp->chgCData(oldp+160,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__shiftReg),5);
        bufp->chgCData(oldp+161,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__counter),5);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__Mem__DOT__delay_w__DOT__dataReg),32);
        bufp->chgIData(oldp+163,(((IData)(vlSelf->top__DOT__LSU__DOT__io_aw_exu_mem_awvalid_0)
                                   ? vlSelf->top__DOT___LSU_io_aw_exu_mem_awaddr
                                   : 0U)),32);
        bufp->chgIData(oldp+164,(((IData)(vlSelf->top__DOT__LSU__DOT__io_w_exu_mem_wvalid_0)
                                   ? ((IData)(vlSelf->top__DOT__LSU__DOT___GEN_5)
                                       ? 0U : vlSelf->top__DOT__LSU__DOT__mem_wdata_reg)
                                   : 0U)),32);
        bufp->chgIData(oldp+165,(((IData)(vlSelf->top__DOT__LSU__DOT__io_w_exu_mem_wvalid_0)
                                   ? (IData)(vlSelf->top__DOT___LSU_io_w_exu_mem_wmask)
                                   : 0U)),32);
        bufp->chgBit(oldp+166,(((IData)(vlSelf->top__DOT__Mem__DOT___wready_reg_T) 
                                & (((IData)(vlSelf->top__DOT___LSU_io_w_exu_mem_wmask) 
                                    != (IData)(vlSelf->top__DOT__Mem__DOT__wmask_reg)) 
                                   & (vlSelf->top__DOT___LSU_io_aw_exu_mem_awaddr 
                                      != vlSelf->top__DOT__Mem__DOT__waddr_reg)))));
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__Mem__DOT___GEN),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__Mem__DOT___GEN_0),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__Mem__DOT___m_m_rdata),32);
        bufp->chgBit(oldp+170,(vlSelf->top__DOT__Mem__DOT___m_m_wready));
        bufp->chgBit(oldp+171,(((IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate) 
                                & ((~ (IData)(vlSelf->top__DOT__WBU__DOT___GEN_17)) 
                                   & (0xcU == (IData)(vlSelf->top__DOT___LSU_io_out2wbu_bits_inst_type))))));
        bufp->chgIData(oldp+172,(((1U & ((~ (IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate)) 
                                         | ((0xcU != (IData)(vlSelf->top__DOT___LSU_io_out2wbu_bits_inst_type)) 
                                            | (IData)(vlSelf->top__DOT__WBU__DOT___GEN_17))))
                                   ? 0U : vlSelf->top__DOT___LSU_io_out2wbu_bits_pc)),32);
        bufp->chgBit(oldp+173,(((IData)(vlSelf->top__DOT__WBU__DOT__m2LSUstate) 
                                & ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_14)
                                    ? (IData)(vlSelf->top__DOT___LSU_io_out2wbu_bits_reg_wen)
                                    : ((3U == (IData)(vlSelf->top__DOT___LSU_io_out2wbu_bits_inst_type))
                                        ? ((1U == (IData)(vlSelf->top__DOT___LSU_io_out2wbu_bits_mem_rresp)) 
                                           & (IData)(vlSelf->top__DOT___LSU_io_out2wbu_bits_reg_wen))
                                        : ((~ (IData)(vlSelf->top__DOT__WBU__DOT___GEN_13)) 
                                           & ((IData)(vlSelf->top__DOT__WBU__DOT___GEN_15) 
                                              & (IData)(vlSelf->top__DOT___LSU_io_out2wbu_bits_reg_wen))))))));
        bufp->chgCData(oldp+174,(vlSelf->top__DOT___WBU_io_reg_waddr),5);
        bufp->chgIData(oldp+175,(vlSelf->top__DOT___WBU_io_reg_wdata),32);
        bufp->chgBit(oldp+176,(vlSelf->top__DOT___WBU_io_csr_wen_1));
        bufp->chgCData(oldp+177,(vlSelf->top__DOT___WBU_io_csr_waddr_1),2);
        bufp->chgIData(oldp+178,(vlSelf->top__DOT___WBU_io_csr_wdata_1),32);
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__Reg__DOT__csr_0),32);
        bufp->chgIData(oldp+180,(vlSelf->top__DOT__Reg__DOT__csr_1),32);
        bufp->chgIData(oldp+181,(vlSelf->top__DOT__Reg__DOT__csr_3),32);
        bufp->chgIData(oldp+182,(vlSelf->top__DOT__Reg__DOT__reg_0),32);
        bufp->chgIData(oldp+183,(vlSelf->top__DOT__Reg__DOT__reg_1),32);
        bufp->chgIData(oldp+184,(vlSelf->top__DOT__Reg__DOT__reg_2),32);
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__Reg__DOT__reg_3),32);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__Reg__DOT__reg_4),32);
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__Reg__DOT__reg_5),32);
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__Reg__DOT__reg_6),32);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__Reg__DOT__reg_7),32);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__Reg__DOT__reg_8),32);
        bufp->chgIData(oldp+191,(vlSelf->top__DOT__Reg__DOT__reg_9),32);
        bufp->chgIData(oldp+192,(vlSelf->top__DOT__Reg__DOT__reg_10),32);
        bufp->chgIData(oldp+193,(vlSelf->top__DOT__Reg__DOT__reg_11),32);
        bufp->chgIData(oldp+194,(vlSelf->top__DOT__Reg__DOT__reg_12),32);
        bufp->chgIData(oldp+195,(vlSelf->top__DOT__Reg__DOT__reg_13),32);
        bufp->chgIData(oldp+196,(vlSelf->top__DOT__Reg__DOT__reg_14),32);
        bufp->chgIData(oldp+197,(vlSelf->top__DOT__Reg__DOT__reg_16),32);
        bufp->chgIData(oldp+198,(vlSelf->top__DOT__Reg__DOT__reg_17),32);
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__Reg__DOT__reg_18),32);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT__Reg__DOT__reg_19),32);
        bufp->chgIData(oldp+201,(vlSelf->top__DOT__Reg__DOT__reg_20),32);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__Reg__DOT__reg_21),32);
        bufp->chgIData(oldp+203,(vlSelf->top__DOT__Reg__DOT__reg_22),32);
        bufp->chgIData(oldp+204,(vlSelf->top__DOT__Reg__DOT__reg_23),32);
        bufp->chgIData(oldp+205,(vlSelf->top__DOT__Reg__DOT__reg_24),32);
        bufp->chgIData(oldp+206,(vlSelf->top__DOT__Reg__DOT__reg_25),32);
        bufp->chgIData(oldp+207,(vlSelf->top__DOT__Reg__DOT__reg_26),32);
        bufp->chgIData(oldp+208,(vlSelf->top__DOT__Reg__DOT__reg_27),32);
        bufp->chgIData(oldp+209,(vlSelf->top__DOT__Reg__DOT__reg_28),32);
        bufp->chgIData(oldp+210,(vlSelf->top__DOT__Reg__DOT__reg_29),32);
        bufp->chgIData(oldp+211,(vlSelf->top__DOT__Reg__DOT__reg_30),32);
        bufp->chgIData(oldp+212,(vlSelf->top__DOT__Reg__DOT__reg_31),32);
        bufp->chgBit(oldp+213,(vlSelf->top__DOT__WBU__DOT__m2LSUstate));
        bufp->chgIData(oldp+214,(vlSelf->top__DOT__WBU__DOT__lastdnpc),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+215,(vlSelf->top__DOT__IFU__DOT__rready_reg));
        bufp->chgIData(oldp+216,(vlSelf->top__DOT__IFU__DOT__inst_reg),32);
        bufp->chgCData(oldp+217,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                           >> 0xfU))),5);
        bufp->chgIData(oldp+218,(vlSelf->top__DOT__Reg__DOT__casez_tmp),32);
        bufp->chgCData(oldp+219,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+220,(vlSelf->top__DOT__Reg__DOT__casez_tmp_0),32);
        bufp->chgCData(oldp+221,(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr),2);
        bufp->chgIData(oldp+222,(vlSelf->top__DOT__IDU__DOT__csr_imm),32);
        bufp->chgCData(oldp+223,(vlSelf->top__DOT__IDU__DOT__casez_tmp),5);
        bufp->chgCData(oldp+224,(vlSelf->top__DOT__IDU__DOT__casez_tmp_0),5);
        bufp->chgBit(oldp+225,(vlSelf->top__DOT___WBU_io_out2ifu_valid));
        bufp->chgIData(oldp+226,(vlSelf->top__DOT__WBU__DOT__ifu_outdata_dnpc),32);
        bufp->chgIData(oldp+227,((((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                   & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                                   ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                   : 0U)),32);
        bufp->chgBit(oldp+228,(vlSelf->top__DOT__IFU__DOT__arvalid_reg));
        bufp->chgIData(oldp+229,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                   ? vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg
                                   : 0U)),32);
        bufp->chgBit(oldp+230,(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_reg));
        bufp->chgBit(oldp+231,(vlSelf->top__DOT__IFU__DOT__m2EXUstate));
        bufp->chgBit(oldp+232,(vlSelf->top__DOT__IFU__DOT__exu2in_reg));
        bufp->chgIData(oldp+233,(vlSelf->top__DOT__IFU__DOT__indata_dnpc),32);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__IFU__DOT__ardata_reg),32);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_REG),32);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg),32);
        bufp->chgBit(oldp+237,(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_en));
        bufp->chgIData(oldp+238,(((0U == (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter))
                                   ? vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__dataReg
                                   : 0U)),32);
        bufp->chgBit(oldp+239,(((~ (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT___GEN_0)) 
                                & ((0U != (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter)) 
                                   & (1U == (IData)(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter))))));
        bufp->chgCData(oldp+240,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__counter),5);
        bufp->chgIData(oldp+241,(vlSelf->top__DOT__Inst_fetch__DOT__delay__DOT__dataReg),32);
        bufp->chgIData(oldp+242,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                   ? (((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                       & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                                       ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                       : 0U) : 0U)),32);
    }
    bufp->chgBit(oldp+243,(vlSelf->clock));
    bufp->chgBit(oldp+244,(vlSelf->reset));
    bufp->chgIData(oldp+245,(vlSelf->io_pc),32);
    bufp->chgBit(oldp+246,(vlSelf->io_inv_flag));
    bufp->chgIData(oldp+247,(((IData)(4U) + vlSelf->io_pc)),32);
    bufp->chgIData(oldp+248,(((0U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                               ? vlSelf->top__DOT__Reg__DOT__csr_0
                               : ((1U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                   ? vlSelf->top__DOT__Reg__DOT__csr_1
                                   : ((2U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                       ? vlSelf->top__DOT__Reg__DOT__csr_2
                                       : vlSelf->top__DOT__Reg__DOT__csr_3)))),32);
    bufp->chgIData(oldp+249,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                               ? vlSelf->top__DOT__Inst_fetch__DOT___vlg_pc_read_inst
                               : 0U)),32);
    bufp->chgBit(oldp+250,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                            & ((IData)(vlSelf->top__DOT__Inst_fetch__DOT__arvalid_reg) 
                               != (IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)))));
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

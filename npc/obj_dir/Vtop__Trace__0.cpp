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
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc),32);
        bufp->chgIData(oldp+19,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_5)
                                  ? 0U : vlSelf->top__DOT__EXU__DOT__mem_raddr_reg)),32);
        bufp->chgCData(oldp+20,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_5)
                                  ? 0U : (7U & vlSelf->top__DOT__EXU__DOT__mem_rmask_reg))),3);
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__EXU__DOT__mem_ren_reg));
        bufp->chgIData(oldp+22,(vlSelf->top__DOT___Mem_io_r_mem_exu_rdata),32);
        bufp->chgCData(oldp+23,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_ren_reg)
                                  ? ((IData)(vlSelf->top__DOT__Mem__DOT___GEN_1)
                                      ? (IData)(vlSelf->top__DOT__Mem__DOT__rresp_reg)
                                      : 0U) : 3U)),2);
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__Mem__DOT__rvalid_reg));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__EXU__DOT__rready_reg));
        bufp->chgIData(oldp+26,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7)
                                  ? 0U : vlSelf->top__DOT__EXU__DOT__mem_wdata_reg)),32);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT___EXU_io_w_exu_mem_wmask),3);
        bufp->chgBit(oldp+28,(vlSelf->top__DOT__EXU__DOT__mem_wen_reg));
        bufp->chgIData(oldp+29,(vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr),32);
        bufp->chgCData(oldp+30,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg)
                                  ? (((IData)(vlSelf->top__DOT__EXU__DOT__bready_reg) 
                                      & (IData)(vlSelf->top__DOT__Mem__DOT__bvalid_reg))
                                      ? (IData)(vlSelf->top__DOT__Mem__DOT__bresp_reg)
                                      : 0U) : 3U)),2);
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__Mem__DOT__bvalid_reg));
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__EXU__DOT__bready_reg));
        bufp->chgIData(oldp+33,(vlSelf->top__DOT___EXU_io_reg_wdata),32);
        bufp->chgBit(oldp+34,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                               & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_4)
                                   ? (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen)
                                   : ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))
                                       ? ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3) 
                                          & (IData)(vlSelf->top__DOT__EXU__DOT__reg_wen_reg))
                                       : ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)) 
                                          & ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_19) 
                                             & (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_reg_wen))))))));
        bufp->chgCData(oldp+35,(vlSelf->top__DOT___EXU_io_reg_waddr),5);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT___EXU_io_csr_waddr_1),2);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT___EXU_io_csr_wdata_1),32);
        bufp->chgBit(oldp+38,(vlSelf->top__DOT___EXU_io_csr_wen_1));
        bufp->chgIData(oldp+39,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                        | ((0xcU != (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type)) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_24))))
                                  ? 0U : vlSelf->top__DOT__IDU__DOT__exu_data_pc)),32);
        bufp->chgBit(oldp+40,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                               & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_24)) 
                                  & (0xcU == (IData)(vlSelf->top__DOT__IDU__DOT__exu_data_inst_type))))));
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__EXU__DOT__m2IDUstate));
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__EXU__DOT__lastdnpc),32);
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__EXU__DOT__reg_wen_reg));
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__EXU__DOT__reg_waddr_reg),5);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__EXU__DOT__mem_raddr_reg),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__EXU__DOT__mem_rmask_reg),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__EXU__DOT__mem_awaddr_reg),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__EXU__DOT__mem_wmask_reg),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__EXU__DOT__mem_wdata_reg),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__EXU__DOT___alu_io_result),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__Reg__DOT__reg_15),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__Reg__DOT__csr_2),32);
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__IDU__DOT__state));
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__IFU__DOT__exu2in_reg));
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__IFU__DOT__indata_dnpc),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__IFU__DOT__ardata_reg),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__IFU__DOT__io_out_bits_pc_REG),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__Inst_fetch__DOT___vlg_pc_read_inst),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__Mem__DOT__rdata_reg),32);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__Mem__DOT__rresp_reg),2);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__Mem__DOT__bresp_reg),2);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__Mem__DOT__waddr_reg),32);
        bufp->chgCData(oldp+66,(vlSelf->top__DOT__Mem__DOT__wmask_reg),3);
        bufp->chgIData(oldp+67,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg)
                                  ? vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr
                                  : 0U)),32);
        bufp->chgIData(oldp+68,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg)
                                  ? ((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7)
                                      ? 0U : vlSelf->top__DOT__EXU__DOT__mem_wdata_reg)
                                  : 0U)),32);
        bufp->chgIData(oldp+69,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg)
                                  ? (IData)(vlSelf->top__DOT___EXU_io_w_exu_mem_wmask)
                                  : 0U)),32);
        bufp->chgBit(oldp+70,(((IData)(vlSelf->top__DOT__EXU__DOT__mem_wen_reg) 
                               & (((IData)(vlSelf->top__DOT___EXU_io_w_exu_mem_wmask) 
                                   != (IData)(vlSelf->top__DOT__Mem__DOT__wmask_reg)) 
                                  & (vlSelf->top__DOT___EXU_io_aw_exu_mem_awaddr 
                                     != vlSelf->top__DOT__Mem__DOT__waddr_reg)))));
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__Mem__DOT___GEN),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__Mem__DOT___GEN_0),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__Mem__DOT___m_m_rdata),32);
        bufp->chgBit(oldp+74,(vlSelf->top__DOT__Mem__DOT__m__DOT__m_wready));
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__Reg__DOT__csr_0),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__Reg__DOT__csr_1),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__Reg__DOT__csr_3),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__Reg__DOT__reg_0),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__Reg__DOT__reg_1),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__Reg__DOT__reg_2),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__Reg__DOT__reg_3),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__Reg__DOT__reg_4),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__Reg__DOT__reg_5),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__Reg__DOT__reg_6),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__Reg__DOT__reg_7),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__Reg__DOT__reg_8),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__Reg__DOT__reg_9),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__Reg__DOT__reg_10),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__Reg__DOT__reg_11),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__Reg__DOT__reg_12),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__Reg__DOT__reg_13),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__Reg__DOT__reg_14),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__Reg__DOT__reg_16),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__Reg__DOT__reg_17),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__Reg__DOT__reg_18),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__Reg__DOT__reg_19),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__Reg__DOT__reg_20),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__Reg__DOT__reg_21),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__Reg__DOT__reg_22),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__Reg__DOT__reg_23),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__Reg__DOT__reg_24),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__Reg__DOT__reg_25),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__Reg__DOT__reg_26),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__Reg__DOT__reg_27),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__Reg__DOT__reg_28),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__Reg__DOT__reg_29),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__Reg__DOT__reg_30),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__Reg__DOT__reg_31),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+109,(vlSelf->top__DOT___EXU_io_out2ifu_valid));
        bufp->chgBit(oldp+110,(vlSelf->top__DOT__IFU__DOT__rready_reg));
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__IFU__DOT__inst_reg),32);
        bufp->chgCData(oldp+112,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                           >> 0xfU))),5);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__Reg__DOT__casez_tmp),32);
        bufp->chgCData(oldp+114,((0x1fU & (vlSelf->top__DOT__IFU__DOT__inst_reg 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__Reg__DOT__casez_tmp_0),32);
        bufp->chgCData(oldp+116,(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr),2);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__IDU__DOT__csr_imm),32);
        bufp->chgCData(oldp+118,(vlSelf->top__DOT__IDU__DOT__casez_tmp),5);
        bufp->chgCData(oldp+119,(vlSelf->top__DOT__IDU__DOT__casez_tmp_0),5);
        bufp->chgBit(oldp+120,(vlSelf->top__DOT__IFU__DOT__arvalid_reg));
        bufp->chgIData(oldp+121,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                                   ? vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg
                                   : 0U)),32);
        bufp->chgBit(oldp+122,(vlSelf->top__DOT__Inst_fetch__DOT__rvalid_reg));
        bufp->chgBit(oldp+123,(vlSelf->top__DOT__IFU__DOT__m2EXUstate));
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__Inst_fetch__DOT__rdata_reg),32);
    }
    bufp->chgBit(oldp+125,(vlSelf->clock));
    bufp->chgBit(oldp+126,(vlSelf->reset));
    bufp->chgIData(oldp+127,(vlSelf->io_pc),32);
    bufp->chgBit(oldp+128,(vlSelf->io_inv_flag));
    bufp->chgIData(oldp+129,(((IData)(4U) + vlSelf->io_pc)),32);
    bufp->chgIData(oldp+130,(((0U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                               ? vlSelf->top__DOT__Reg__DOT__csr_0
                               : ((1U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                   ? vlSelf->top__DOT__Reg__DOT__csr_1
                                   : ((2U == (IData)(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr))
                                       ? vlSelf->top__DOT__Reg__DOT__csr_2
                                       : vlSelf->top__DOT__Reg__DOT__csr_3)))),32);
    bufp->chgIData(oldp+131,((((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                               & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                               ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                               : 0U)),32);
    bufp->chgIData(oldp+132,(((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg)
                               ? (((IData)(vlSelf->top__DOT__IFU__DOT__arvalid_reg) 
                                   & (IData)(vlSelf->top__DOT__IFU__DOT__m2EXUstate))
                                   ? vlSelf->top__DOT__IFU__DOT__ardata_reg
                                   : 0U) : 0U)),32);
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

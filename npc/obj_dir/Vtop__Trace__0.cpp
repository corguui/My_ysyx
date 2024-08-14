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
        bufp->chgIData(oldp+0,(((0xffffffffU == vlSelf->top__DOT__Reg__DOT__reg_15)
                                 ? 0U : vlSelf->top__DOT__Reg__DOT__reg_15)),32);
        bufp->chgIData(oldp+1,(((0xf0000000U & vlSelf->top__DOT__Reg__DOT__csr_2) 
                                | (0xfffffffU & (0x80U 
                                                 | (vlSelf->top__DOT__Reg__DOT__csr_2 
                                                    | (8U 
                                                       & (vlSelf->top__DOT__Reg__DOT__csr_2 
                                                          >> 4U))))))),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT___Mem_io_mem_m_rdata),32);
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__EXU__DOT__m2IDUstate));
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__Reg__DOT__reg_15),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__Reg__DOT__csr_2),32);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__IDU__DOT__lastaluop),5);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__IDU__DOT__lastimm),32);
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__IDU__DOT__state));
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__Reg__DOT__csr_0),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__Reg__DOT__csr_1),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__Reg__DOT__csr_3),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__Reg__DOT__reg_0),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__Reg__DOT__reg_1),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__Reg__DOT__reg_2),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__Reg__DOT__reg_3),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__Reg__DOT__reg_4),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__Reg__DOT__reg_5),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__Reg__DOT__reg_6),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__Reg__DOT__reg_7),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__Reg__DOT__reg_8),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__Reg__DOT__reg_9),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__Reg__DOT__reg_10),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__Reg__DOT__reg_11),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__Reg__DOT__reg_12),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__Reg__DOT__reg_13),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__Reg__DOT__reg_14),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__Reg__DOT__reg_16),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__Reg__DOT__reg_17),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__Reg__DOT__reg_18),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__Reg__DOT__reg_19),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__Reg__DOT__reg_20),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__Reg__DOT__reg_21),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__Reg__DOT__reg_22),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__Reg__DOT__reg_23),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__Reg__DOT__reg_24),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__Reg__DOT__reg_25),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__Reg__DOT__reg_26),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__Reg__DOT__reg_27),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__Reg__DOT__reg_28),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__Reg__DOT__reg_29),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__Reg__DOT__reg_30),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__Reg__DOT__reg_31),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+44,(((vlSelf->top__DOT__IDU__DOT__exu_data_imm 
                                != vlSelf->top__DOT__IDU__DOT__lastimm) 
                               | ((IData)(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op) 
                                  != (IData)(vlSelf->top__DOT__IDU__DOT__lastaluop)))));
        bufp->chgIData(oldp+45,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                        | ((4U != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                                  ? 0U : vlSelf->top__DOT__EXU__DOT___alu_io_result)),32);
        bufp->chgIData(oldp+46,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                        | ((4U != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                                  ? 0U : vlSelf->top__DOT__Reg__DOT__casez_tmp_0)),32);
        bufp->chgIData(oldp+47,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                        | ((4U != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                                  ? 0U : vlSelf->top__DOT___IDU_io_out2exu_bits_m_wmask)),32);
        bufp->chgBit(oldp+48,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                               & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7)) 
                                  & ((4U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                     & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_wen))))));
        bufp->chgBit(oldp+49,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                               & (((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7) 
                                   | ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_18)) 
                                      & (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19))) 
                                  & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_reg_wen)))));
        bufp->chgBit(oldp+50,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                               & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_25)) 
                                  & (0xcU == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+51,(vlSelf->top__DOT___IDU_io_out2exu_bits_snpc),32);
        bufp->chgBit(oldp+52,(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_wen));
        bufp->chgIData(oldp+53,(vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT___IDU_io_out2exu_bits_m_wmask),32);
        bufp->chgCData(oldp+55,((0x1fU & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                          >> 7U))),5);
        bufp->chgBit(oldp+56,(vlSelf->top__DOT___IDU_io_out2exu_bits_reg_wen));
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__Reg__DOT__casez_tmp),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__Reg__DOT__casez_tmp_0),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__Reg__DOT__casez_tmp_1),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__IDU__DOT__exu_data_imm),32);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op),5);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type),4);
        bufp->chgBit(oldp+63,(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us));
        bufp->chgBit(oldp+64,((vlSelf->top__DOT__EXU__DOT__lastdnpc 
                               != vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc)));
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__EXU__DOT__ifu_outdata_dnpc),32);
        bufp->chgIData(oldp+66,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                                  ? 0U : vlSelf->top__DOT__EXU__DOT___alu_io_result)),32);
        bufp->chgIData(oldp+67,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                                  ? 0U : vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask)),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT___EXU_io_reg_wdata),32);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT___EXU_io_reg_waddr),5);
        bufp->chgCData(oldp+70,(vlSelf->top__DOT___EXU_io_csr_waddr_1),2);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT___EXU_io_csr_wdata_1),32);
        bufp->chgBit(oldp+72,(vlSelf->top__DOT___EXU_io_csr_wen_1));
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__EXU__DOT__lastdnpc),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__EXU__DOT___alu_io_result),32);
        bufp->chgBit(oldp+78,(vlSelf->top__DOT__IFU__DOT__lasten));
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__IFU__DOT__lastinst),32);
        bufp->chgCData(oldp+80,((0x1fU & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+81,((0x1fU & (vlSelf->top__DOT__IFU__DOT__lastinst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+82,(vlSelf->top__DOT___IDU_io_reg_data_csr_raddr),2);
        bufp->chgBit(oldp+83,(vlSelf->top__DOT___IDU_io_mem_ren));
        bufp->chgCData(oldp+84,(vlSelf->top__DOT__IDU__DOT__casez_tmp),5);
        bufp->chgCData(oldp+85,(vlSelf->top__DOT__IDU__DOT__casez_tmp_0),5);
        bufp->chgBit(oldp+86,(vlSelf->top__DOT__IFU__DOT__m2EXUstate));
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__IFU__DOT__lastpc),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__IFU__DOT__lastsnpc),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__IFU__DOT__out_data_pc_REG),32);
    }
    bufp->chgBit(oldp+90,(vlSelf->clock));
    bufp->chgBit(oldp+91,(vlSelf->reset));
    bufp->chgIData(oldp+92,(vlSelf->io_pc),32);
    bufp->chgBit(oldp+93,(vlSelf->io_inv_flag));
    bufp->chgIData(oldp+94,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                    | ((0xcU != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                       | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_25))))
                              ? 0U : vlSelf->io_pc)),32);
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

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
        bufp->chgIData(oldp+0,(((IData)(4U) + vlSelf->top__DOT__PC__DOT__io_pc_REG)),32);
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__EXU__DOT__m2IDUstate));
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__IDU__DOT__lastalu_op),5);
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__IDU__DOT__state));
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__IFU__DOT__lastinst),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__PC__DOT__io_pc_REG),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__Reg__DOT__reg_0),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__Reg__DOT__reg_1),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__Reg__DOT__reg_2),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__Reg__DOT__reg_3),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__Reg__DOT__reg_4),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__Reg__DOT__reg_5),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__Reg__DOT__reg_6),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__Reg__DOT__reg_7),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__Reg__DOT__reg_8),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__Reg__DOT__reg_9),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__Reg__DOT__reg_10),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__Reg__DOT__reg_11),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__Reg__DOT__reg_12),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__Reg__DOT__reg_13),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__Reg__DOT__reg_14),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__Reg__DOT__reg_15),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__Reg__DOT__reg_16),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__Reg__DOT__reg_17),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__Reg__DOT__reg_18),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__Reg__DOT__reg_19),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__Reg__DOT__reg_20),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__Reg__DOT__reg_21),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__Reg__DOT__reg_22),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__Reg__DOT__reg_23),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__Reg__DOT__reg_24),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__Reg__DOT__reg_25),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__Reg__DOT__reg_26),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__Reg__DOT__reg_27),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__Reg__DOT__reg_28),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__Reg__DOT__reg_29),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__Reg__DOT__reg_30),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__Reg__DOT__reg_31),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+38,(((IData)(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op) 
                               != (IData)(vlSelf->top__DOT__IDU__DOT__lastalu_op))));
        bufp->chgBit(oldp+39,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                               & (((IData)(vlSelf->top__DOT__EXU__DOT___GEN_7) 
                                   | ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_15)) 
                                      & (IData)(vlSelf->top__DOT__EXU__DOT___GEN_20))) 
                                  & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_reg_wen)))));
        bufp->chgIData(oldp+40,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                        | ((1U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_19))))
                                  ? ((IData)(4U) + vlSelf->top__DOT__PC__DOT__io_pc_REG)
                                  : ((5U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type))
                                      ? ((1U == vlSelf->top__DOT__EXU__DOT___alu_io_result)
                                          ? (vlSelf->top__DOT___IDU_io_out2exu_bits_imm 
                                             + vlSelf->top__DOT__PC__DOT__io_pc_REG)
                                          : ((IData)(4U) 
                                             + vlSelf->top__DOT__PC__DOT__io_pc_REG))
                                      : ((1U & ((6U 
                                                 == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                                | ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_14)) 
                                                   | (7U 
                                                      == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)))))
                                          ? ((IData)(4U) 
                                             + vlSelf->top__DOT__PC__DOT__io_pc_REG)
                                          : vlSelf->top__DOT__EXU__DOT___alu_io_result)))),32);
        bufp->chgIData(oldp+41,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                        | ((4U != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                                  ? 0U : vlSelf->top__DOT__EXU__DOT___alu_io_result)),32);
        bufp->chgIData(oldp+42,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                        | ((4U != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                                  ? 0U : vlSelf->top__DOT__Reg__DOT__casez_tmp_0)),32);
        bufp->chgIData(oldp+43,(((1U & ((~ (IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate)) 
                                        | ((4U != (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                           | (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7))))
                                  ? 0U : vlSelf->top__DOT___IDU_io_out2exu_bits_m_wmask)),32);
        bufp->chgBit(oldp+44,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                               & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_7)) 
                                  & ((4U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                     & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_wen))))));
        bufp->chgBit(oldp+45,(((IData)(vlSelf->top__DOT__EXU__DOT__m2IDUstate) 
                               & ((~ (IData)(vlSelf->top__DOT__EXU__DOT___GEN_2)) 
                                  & ((3U == (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type)) 
                                     & (IData)(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren))))));
        bufp->chgBit(oldp+46,((vlSelf->top__DOT__IFU__DOT__lastinst 
                               != vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst)));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+47,(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_wen));
        bufp->chgBit(oldp+48,(vlSelf->top__DOT___IDU_io_out2exu_bits_mem_ren));
        bufp->chgIData(oldp+49,(vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT___IDU_io_out2exu_bits_m_wmask),32);
        bufp->chgCData(oldp+51,((0x1fU & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                          >> 7U))),5);
        bufp->chgBit(oldp+52,(vlSelf->top__DOT___IDU_io_out2exu_bits_reg_wen));
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__Reg__DOT__casez_tmp),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__Reg__DOT__casez_tmp_0),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT___IDU_io_out2exu_bits_imm),32);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__IDU__DOT__exu_data_alu_op),5);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT___IDU_io_out2exu_bits_inst_type),4);
        bufp->chgBit(oldp+58,(vlSelf->top__DOT___IDU_io_out2exu_bits_il_us));
        bufp->chgIData(oldp+59,(vlSelf->top__DOT___EXU_io_reg_wdata),32);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT___EXU_io_reg_waddr),5);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src1),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_src2),32);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op),5);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__EXU__DOT___alu_io_result),32);
        bufp->chgIData(oldp+65,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                                  ? 0U : vlSelf->top__DOT__EXU__DOT___alu_io_result)),32);
        bufp->chgIData(oldp+66,(((IData)(vlSelf->top__DOT__EXU__DOT___GEN_3)
                                  ? 0U : vlSelf->top__DOT___IDU_io_out2exu_bits_m_rmask)),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__EXU__DOT___mem_m_rdata),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst),32);
        bufp->chgCData(oldp+69,((0x1fU & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+70,((0x1fU & (vlSelf->top__DOT__IFU__DOT___vlg_pc_read_inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+71,(vlSelf->top__DOT__IDU__DOT__casez_tmp),5);
        bufp->chgCData(oldp+72,(vlSelf->top__DOT__IDU__DOT__casez_tmp_0),5);
    }
    bufp->chgBit(oldp+73,(vlSelf->clock));
    bufp->chgBit(oldp+74,(vlSelf->reset));
    bufp->chgIData(oldp+75,(vlSelf->io_pc),32);
    bufp->chgBit(oldp+76,(vlSelf->io_inv_flag));
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

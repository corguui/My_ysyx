// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060111_EXU__Syms.h"


void Vysyx_23060111_EXU___024root__trace_chg_sub_0(Vysyx_23060111_EXU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_23060111_EXU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_23060111_EXU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060111_EXU___024root*>(voidSelf);
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_23060111_EXU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_23060111_EXU___024root__trace_chg_sub_0(Vysyx_23060111_EXU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__pair_list[0]),2);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__pair_list[1]),2);
        bufp->chgBit(oldp+2,(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__key_list[0]));
        bufp->chgBit(oldp+3,(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__key_list[1]));
        bufp->chgBit(oldp+4,(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__data_list[0]));
        bufp->chgBit(oldp+5,(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__data_list[1]));
        bufp->chgBit(oldp+6,(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__lut_out));
        bufp->chgBit(oldp+7,(vlSelf->ysyx_23060111_MuxKeyInternal__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+8,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[0]),31);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[1]),31);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[2]),31);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[3]),31);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT____Vcellout__renew_pc____pinNumber4),31);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0]),31);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[1]),31);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[2]),31);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[3]),31);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_23060111_top__DOT__reg_t0__DOT__rf[0]),31);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_23060111_top__DOT__reg_t0__DOT__rf[1]),31);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_23060111_top__DOT__reg_t0__DOT__rf[2]),31);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_23060111_top__DOT__reg_t0__DOT__rf[3]),31);
    }
    bufp->chgBit(oldp+21,(vlSelf->rst));
    bufp->chgBit(oldp+22,(vlSelf->clk));
    bufp->chgBit(oldp+23,(vlSelf->en_reg));
    bufp->chgBit(oldp+24,(vlSelf->en_trigger));
    bufp->chgIData(oldp+25,(vlSelf->inst),32);
    bufp->chgIData(oldp+26,(vlSelf->snpc),32);
    bufp->chgIData(oldp+27,(vlSelf->dnpc),32);
    bufp->chgIData(oldp+28,(vlSelf->pc),32);
    bufp->chgSData(oldp+29,(vlSelf->imm),12);
    bufp->chgCData(oldp+30,(vlSelf->rs1),5);
    bufp->chgCData(oldp+31,(vlSelf->rd),5);
    bufp->chgIData(oldp+32,(vlSelf->ysyx_23060111_top__02Eout),32);
    bufp->chgIData(oldp+33,(vlSelf->out_reg),32);
    bufp->chgIData(oldp+34,(vlSelf->reg_out),32);
    bufp->chgIData(oldp+35,(vlSelf->reg_out1),32);
    bufp->chgBit(oldp+36,(vlSelf->ysyx_23060111_MuxKeyInternal__02Eout));
    bufp->chgBit(oldp+37,(vlSelf->key));
    bufp->chgBit(oldp+38,(vlSelf->default_out));
    bufp->chgCData(oldp+39,(vlSelf->lut),4);
    bufp->chgIData(oldp+40,(vlSelf->imm),31);
    bufp->chgCData(oldp+41,((0xfU & (vlSelf->inst >> 7U))),4);
    bufp->chgCData(oldp+42,((0xfU & (vlSelf->inst >> 0xfU))),4);
    bufp->chgIData(oldp+43,((0x7fffffffU & vlSelf->snpc)),31);
}

void Vysyx_23060111_EXU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_EXU___024root__trace_cleanup\n"); );
    // Init
    Vysyx_23060111_EXU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060111_EXU___024root*>(voidSelf);
    Vysyx_23060111_EXU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

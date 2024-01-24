// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060111_top__Syms.h"


void Vysyx_23060111_top___024root__trace_chg_sub_0(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_23060111_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_23060111_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060111_top___024root*>(voidSelf);
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_23060111_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_23060111_top___024root__trace_chg_sub_0(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__key_list[4]),7);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+5,(vlSelf->ysyx_23060111_top__DOT__type_i),4);
        bufp->chgIData(oldp+6,((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__i0____pinNumber1)),32);
        bufp->chgQData(oldp+7,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__i0____pinNumber1),36);
        bufp->chgWData(oldp+9,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__i0____pinNumber4),215);
        bufp->chgQData(oldp+16,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__pair_list[0]),43);
        bufp->chgQData(oldp+18,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__pair_list[1]),43);
        bufp->chgQData(oldp+20,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__pair_list[2]),43);
        bufp->chgQData(oldp+22,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__pair_list[3]),43);
        bufp->chgQData(oldp+24,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__pair_list[4]),43);
        bufp->chgQData(oldp+26,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__data_list[0]),36);
        bufp->chgQData(oldp+28,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__data_list[1]),36);
        bufp->chgQData(oldp+30,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__data_list[2]),36);
        bufp->chgQData(oldp+32,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__data_list[3]),36);
        bufp->chgQData(oldp+34,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__data_list[4]),36);
        bufp->chgQData(oldp+36,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__lut_out),36);
        bufp->chgBit(oldp+38,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__i0__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+39,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[1]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[2]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[3]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[4]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[5]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[6]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[7]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[8]),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[9]),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[10]),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[11]),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[12]),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[13]),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[14]),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[15]),32);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[16]),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[17]),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[18]),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[19]),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[20]),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[21]),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[22]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[23]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[24]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[25]),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[26]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[27]),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[28]),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[29]),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[30]),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+71,(vlSelf->rst));
    bufp->chgBit(oldp+72,(vlSelf->clk));
    bufp->chgIData(oldp+73,(vlSelf->inst),32);
    bufp->chgIData(oldp+74,(vlSelf->pc),32);
    bufp->chgIData(oldp+75,(vlSelf->ysyx_23060111_top__DOT__dnpc),32);
    bufp->chgIData(oldp+76,(((IData)(4U) + vlSelf->pc)),32);
    bufp->chgCData(oldp+77,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+78,((0x1fU & (vlSelf->inst 
                                      >> 7U))),5);
    bufp->chgCData(oldp+79,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+80,((0x1fU & (vlSelf->inst 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+81,((0x1fU & (vlSelf->inst 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+82,((vlSelf->inst >> 0x19U)),7);
    bufp->chgIData(oldp+83,(vlSelf->ysyx_23060111_top__DOT__wdata),32);
    bufp->chgIData(oldp+84,(vlSelf->ysyx_23060111_top__DOT__rout),32);
}

void Vysyx_23060111_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_23060111_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060111_top___024root*>(voidSelf);
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

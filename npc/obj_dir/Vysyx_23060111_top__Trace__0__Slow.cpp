// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060111_top__Syms.h"


VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_init_sub__TOP__0(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+34,"rst", false,-1);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBus(c+36,"inst", false,-1, 31,0);
    tracep->declBus(c+37,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060111_top ");
    tracep->declBit(c+34,"rst", false,-1);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBus(c+36,"inst", false,-1, 31,0);
    tracep->declBus(c+37,"pc", false,-1, 31,0);
    tracep->declBus(c+38,"dnpc", false,-1, 31,0);
    tracep->declBus(c+39,"snpc", false,-1, 31,0);
    tracep->declBus(c+40,"opcode", false,-1, 6,0);
    tracep->declBus(c+41,"rd", false,-1, 11,7);
    tracep->declBus(c+42,"funct3", false,-1, 14,12);
    tracep->declBus(c+43,"rs1", false,-1, 19,15);
    tracep->declBus(c+44,"rs2", false,-1, 24,20);
    tracep->declBus(c+45,"funct7", false,-1, 31,25);
    tracep->declBus(c+1,"type_i", false,-1, 3,0);
    tracep->declBus(c+48,"imm", false,-1, 31,0);
    tracep->declBus(c+46,"wdata", false,-1, 31,0);
    tracep->declBus(c+41,"waddr", false,-1, 4,0);
    tracep->declBus(c+43,"raddr", false,-1, 4,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->declBus(c+47,"rout", false,-1, 31,0);
    tracep->pushNamePrefix("init_EXU ");
    tracep->declBus(c+38,"dnpc", false,-1, 31,0);
    tracep->declBus(c+37,"pc", false,-1, 31,0);
    tracep->declBus(c+39,"snpc", false,-1, 31,0);
    tracep->declBus(c+40,"opcode", false,-1, 6,0);
    tracep->declBus(c+41,"rd", false,-1, 11,7);
    tracep->declBus(c+42,"funct3", false,-1, 14,12);
    tracep->declBus(c+43,"rs1", false,-1, 19,15);
    tracep->declBus(c+44,"rs2", false,-1, 24,20);
    tracep->declBus(c+45,"funct7", false,-1, 31,25);
    tracep->declBus(c+1,"type_i", false,-1, 3,0);
    tracep->declBus(c+48,"imm", false,-1, 31,0);
    tracep->declBus(c+46,"wdata", false,-1, 31,0);
    tracep->declBus(c+41,"waddr", false,-1, 4,0);
    tracep->declBus(c+43,"raddr", false,-1, 4,0);
    tracep->declBus(c+47,"rout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("init_IDU ");
    tracep->declBus(c+36,"inst", false,-1, 31,0);
    tracep->declBus(c+40,"opcode", false,-1, 6,0);
    tracep->declBus(c+41,"rd", false,-1, 11,7);
    tracep->declBus(c+42,"funct3", false,-1, 14,12);
    tracep->declBus(c+43,"rs1", false,-1, 19,15);
    tracep->declBus(c+44,"rs2", false,-1, 24,20);
    tracep->declBus(c+45,"funct7", false,-1, 31,25);
    tracep->declBus(c+1,"type_i", false,-1, 3,0);
    tracep->declBus(c+48,"imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_renew ");
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+34,"rst", false,-1);
    tracep->declBus(c+39,"snpc", false,-1, 31,0);
    tracep->declBus(c+38,"dnpc", false,-1, 31,0);
    tracep->declBus(c+37,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("renew_pc ");
    tracep->declBus(c+50,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+34,"rst", false,-1);
    tracep->declBus(c+38,"din", false,-1, 31,0);
    tracep->declBus(c+37,"dout", false,-1, 31,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_$0 ");
    tracep->declBus(c+52,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+50,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBus(c+46,"wdata", false,-1, 31,0);
    tracep->declBus(c+41,"waddr", false,-1, 4,0);
    tracep->declBus(c+43,"raddr", false,-1, 4,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->declBus(c+47,"rout", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_init_top(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_23060111_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060111_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060111_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_register(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_23060111_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_23060111_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_23060111_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_full_sub_0(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_23060111_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060111_top___024root*>(voidSelf);
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_23060111_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_full_sub_0(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_23060111_top__DOT__type_i),4);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0]),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[1]),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[2]),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[3]),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[4]),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[5]),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[6]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[7]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[8]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[9]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[10]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[11]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[12]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[13]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[14]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[15]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[16]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[17]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[18]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[19]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[20]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[21]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[22]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[23]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[24]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[25]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[26]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[27]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[28]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[29]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[30]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[31]),32);
    bufp->fullBit(oldp+34,(vlSelf->rst));
    bufp->fullBit(oldp+35,(vlSelf->clk));
    bufp->fullIData(oldp+36,(vlSelf->inst),32);
    bufp->fullIData(oldp+37,(vlSelf->pc),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_23060111_top__DOT__dnpc),32);
    bufp->fullIData(oldp+39,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullCData(oldp+40,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+41,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+42,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+43,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+44,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+45,((vlSelf->inst >> 0x19U)),7);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_23060111_top__DOT__wdata),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_23060111_top__DOT__rout),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_23060111_top__DOT__imm),32);
    bufp->fullBit(oldp+49,(1U));
    bufp->fullIData(oldp+50,(0x20U),32);
    bufp->fullIData(oldp+51,(0x80000000U),32);
    bufp->fullIData(oldp+52,(5U),32);
}

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
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBus(c+67,"inst", false,-1, 31,0);
    tracep->declBus(c+68,"val", false,-1, 31,0);
    tracep->declBus(c+69,"snpc", false,-1, 31,0);
    tracep->declBus(c+70,"dnpc", false,-1, 31,0);
    tracep->declBus(c+71,"pc", false,-1, 31,0);
    tracep->declBus(c+72,"imm", false,-1, 31,20);
    tracep->declBus(c+73,"rs1", false,-1, 19,15);
    tracep->declBus(c+74,"funct3", false,-1, 14,12);
    tracep->declBus(c+75,"rd", false,-1, 11,7);
    tracep->declBus(c+76,"opcode", false,-1, 6,0);
    tracep->declBus(c+77,"out", false,-1, 31,0);
    tracep->declBus(c+78,"reg_out", false,-1, 31,0);
    tracep->declBus(c+79,"reg_out1", false,-1, 31,0);
    tracep->declBus(c+80,"rbb", false,-1, 20,1);
    tracep->pushNamePrefix("ysyx_23060111_top ");
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBus(c+67,"inst", false,-1, 31,0);
    tracep->declBus(c+68,"val", false,-1, 31,0);
    tracep->declBus(c+69,"snpc", false,-1, 31,0);
    tracep->declBus(c+70,"dnpc", false,-1, 31,0);
    tracep->declBus(c+71,"pc", false,-1, 31,0);
    tracep->declBus(c+72,"imm", false,-1, 31,20);
    tracep->declBus(c+73,"rs1", false,-1, 19,15);
    tracep->declBus(c+74,"funct3", false,-1, 14,12);
    tracep->declBus(c+75,"rd", false,-1, 11,7);
    tracep->declBus(c+76,"opcode", false,-1, 6,0);
    tracep->declBus(c+77,"out", false,-1, 31,0);
    tracep->declBus(c+78,"reg_out", false,-1, 31,0);
    tracep->declBus(c+79,"reg_out1", false,-1, 31,0);
    tracep->declBus(c+80,"rbb", false,-1, 20,1);
    tracep->pushNamePrefix("init_EXU ");
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+70,"dnpc", false,-1, 31,0);
    tracep->declBus(c+72,"imm", false,-1, 31,20);
    tracep->declBus(c+73,"rs1", false,-1, 19,15);
    tracep->declBus(c+74,"funct3", false,-1, 14,12);
    tracep->declBus(c+75,"rd", false,-1, 11,7);
    tracep->declBus(c+76,"opcode", false,-1, 6,0);
    tracep->declBus(c+71,"pc", false,-1, 31,0);
    tracep->declBus(c+78,"reg_out", false,-1, 31,0);
    tracep->declBus(c+79,"reg_out1", false,-1, 31,0);
    tracep->declBus(c+80,"out", false,-1, 20,1);
    tracep->declBus(c+81,"imm_32", false,-1, 31,0);
    tracep->pushNamePrefix("reg_rd ");
    tracep->declBus(c+83,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+84,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBus(c+82,"wdata", false,-1, 31,0);
    tracep->declBus(c+75,"waddr", false,-1, 4,0);
    tracep->declBit(c+85,"wen", false,-1);
    tracep->declBus(c+79,"out", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_src1 ");
    tracep->declBus(c+83,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+84,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBus(c+86,"wdata", false,-1, 31,0);
    tracep->declBus(c+73,"waddr", false,-1, 4,0);
    tracep->declBit(c+87,"wen", false,-1);
    tracep->declBus(c+78,"out", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+88+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("renew_pc ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+120,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+121,"din", false,-1, 31,0);
    tracep->declBus(c+71,"dout", false,-1, 31,0);
    tracep->declBit(c+85,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("init_IDU ");
    tracep->declBus(c+69,"snpc", false,-1, 31,0);
    tracep->declBus(c+67,"inst", false,-1, 31,0);
    tracep->declBus(c+70,"dnpc", false,-1, 31,0);
    tracep->declBus(c+72,"imm", false,-1, 31,20);
    tracep->declBus(c+74,"funct3", false,-1, 14,12);
    tracep->declBus(c+73,"rs1", false,-1, 19,15);
    tracep->declBus(c+75,"rd", false,-1, 11,7);
    tracep->declBus(c+76,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_$0 ");
    tracep->declBus(c+83,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+84,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBus(c+86,"wdata", false,-1, 31,0);
    tracep->declBus(c+122,"waddr", false,-1, 4,0);
    tracep->declBit(c+85,"wen", false,-1);
    tracep->declBus(c+77,"out", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+33+i*1,"rf", true,(i+0), 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[1]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[2]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[3]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[4]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[5]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[6]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[7]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[8]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[9]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[10]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[11]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[12]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[13]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[14]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[15]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[16]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[17]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[18]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[19]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[20]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[21]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[22]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[23]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[24]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[25]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[26]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[27]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[28]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[29]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[30]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[31]),32);
    bufp->fullBit(oldp+65,(vlSelf->rst));
    bufp->fullBit(oldp+66,(vlSelf->clk));
    bufp->fullIData(oldp+67,(vlSelf->inst),32);
    bufp->fullIData(oldp+68,(vlSelf->val),32);
    bufp->fullIData(oldp+69,(vlSelf->snpc),32);
    bufp->fullIData(oldp+70,(vlSelf->dnpc),32);
    bufp->fullIData(oldp+71,(vlSelf->pc),32);
    bufp->fullSData(oldp+72,(vlSelf->imm),12);
    bufp->fullCData(oldp+73,(vlSelf->rs1),5);
    bufp->fullCData(oldp+74,(vlSelf->funct3),3);
    bufp->fullCData(oldp+75,(vlSelf->rd),5);
    bufp->fullCData(oldp+76,(vlSelf->opcode),7);
    bufp->fullIData(oldp+77,(vlSelf->out),32);
    bufp->fullIData(oldp+78,(vlSelf->reg_out),32);
    bufp->fullIData(oldp+79,(vlSelf->reg_out1),32);
    bufp->fullIData(oldp+80,(vlSelf->rbb),20);
    bufp->fullIData(oldp+81,((vlSelf->inst >> 0x14U)),32);
    bufp->fullIData(oldp+82,((vlSelf->reg_out + (vlSelf->inst 
                                                 >> 0x14U))),32);
    bufp->fullIData(oldp+83,(5U),32);
    bufp->fullIData(oldp+84,(0x20U),32);
    bufp->fullBit(oldp+85,(1U));
    bufp->fullIData(oldp+86,(0U),32);
    bufp->fullBit(oldp+87,(0U));
    bufp->fullIData(oldp+88,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[0]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[1]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[2]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[3]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[4]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[5]),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[6]),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[7]),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[8]),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[9]),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[10]),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[11]),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[12]),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[13]),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[14]),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[15]),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[16]),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[17]),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[18]),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[19]),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[20]),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[21]),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[22]),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[23]),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[24]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[25]),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[26]),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[27]),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[28]),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[29]),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[30]),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf[31]),32);
    bufp->fullIData(oldp+120,(0x80000000U),32);
    bufp->fullIData(oldp+121,(0x80000008U),32);
    bufp->fullCData(oldp+122,(0U),5);
}

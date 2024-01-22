// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060111_top.h for the primary calling header

#ifndef VERILATED_VYSYX_23060111_TOP___024ROOT_H_
#define VERILATED_VYSYX_23060111_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_23060111_top__Syms;
class Vysyx_23060111_top___024unit;


class Vysyx_23060111_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_23060111_top___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(rs1,19,15);
    VL_OUT8(funct3,14,12);
    VL_OUT8(rd,11,7);
    VL_OUT8(opcode,6,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(imm,31,20);
    VL_IN(inst,31,0);
    VL_OUT(val,31,0);
    VL_OUT(snpc,31,0);
    VL_OUT(dnpc,31,0);
    VL_OUT(pc,31,0);
    VL_OUT(out,31,0);
    VL_OUT(reg_out,31,0);
    VL_OUT(reg_out1,31,0);
    VL_OUT(rbb,20,1);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __Vtrigrprev__TOP__inst;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___0240__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___0241__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___0242__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___0243__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___0244__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___0245__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___0246__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___0247__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___0248__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___0249__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02410__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02411__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02412__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02413__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02414__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02415__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02416__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02417__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02418__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02419__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02420__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02421__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02422__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02423__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02424__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02425__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02426__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02427__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02428__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02429__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02430__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___02431__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_23060111_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_23060111_top___024root(Vysyx_23060111_top__Syms* symsp, const char* v__name);
    ~Vysyx_23060111_top___024root();
    VL_UNCOPYABLE(Vysyx_23060111_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

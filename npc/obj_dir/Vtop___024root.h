// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop___024unit;


class Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_inv_flag,0,0);
        CData/*4:0*/ top__DOT___EXU_io_reg_waddr;
        CData/*1:0*/ top__DOT___EXU_io_csr_waddr_1;
        CData/*0:0*/ top__DOT___EXU_io_csr_wen_1;
        CData/*0:0*/ top__DOT___IDU_io_out2exu_bits_mem_ren;
        CData/*4:0*/ top__DOT___IDU_io_out2exu_bits_reg_waddr;
        CData/*3:0*/ top__DOT___IDU_io_out2exu_bits_inst_type;
        CData/*0:0*/ top__DOT___IDU_io_out2exu_bits_il_us;
        CData/*4:0*/ top__DOT___IDU_io_reg_data_raddr_1;
        CData/*4:0*/ top__DOT___IDU_io_reg_data_raddr_2;
        CData/*1:0*/ top__DOT___IDU_io_reg_data_csr_raddr;
        CData/*0:0*/ top__DOT__IFU__DOT__m2EXUstate;
        CData/*4:0*/ top__DOT__IDU__DOT__exu_data_alu_op;
        CData/*4:0*/ top__DOT__IDU__DOT__lastalu_op;
        CData/*0:0*/ top__DOT__IDU__DOT__state;
        CData/*4:0*/ top__DOT__IDU__DOT__casez_tmp;
        CData/*0:0*/ top__DOT__IDU__DOT___GEN_7;
        CData/*0:0*/ top__DOT__IDU__DOT___GEN_9;
        CData/*4:0*/ top__DOT__IDU__DOT__casez_tmp_0;
        CData/*0:0*/ top__DOT__IDU__DOT___GEN_16;
        CData/*0:0*/ top__DOT__IDU__DOT___GEN_17;
        CData/*0:0*/ top__DOT__IDU__DOT___GEN_18;
        CData/*0:0*/ top__DOT__IDU__DOT___GEN_19;
        CData/*0:0*/ top__DOT__IDU__DOT____VdfgTmp_hf12b015b__0;
        CData/*6:0*/ top__DOT__IDU__DOT____VdfgTmp_hf0d3b6fe__0;
        CData/*2:0*/ top__DOT__IDU__DOT____VdfgTmp_hf084048e__0;
        CData/*0:0*/ top__DOT__EXU__DOT__m2IDUstate;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_2;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_3;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_7;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_16;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_17;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_18;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_19;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_20;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_21;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_22;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_23;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_25;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_27;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_28;
        CData/*4:0*/ top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op;
        CData/*0:0*/ top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0;
        CData/*0:0*/ top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0;
        CData/*4:0*/ top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0;
        CData/*0:0*/ top__DOT__Reg__DOT___GEN;
        CData/*1:0*/ __VdfgTmp_hf4fc35c0__0;
        CData/*0:0*/ __VdfgTmp_he4da6003__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_OUT(io_pc,31,0);
        IData/*31:0*/ top__DOT___EXU_io_reg_wdata;
        IData/*31:0*/ top__DOT___EXU_io_csr_wdata_1;
        IData/*31:0*/ top__DOT___IDU_io_out2exu_bits_snpc;
        IData/*31:0*/ top__DOT___IDU_io_out2exu_bits_m_rmask;
        IData/*31:0*/ top__DOT__IFU__DOT__out_data_inst;
        IData/*31:0*/ top__DOT__IFU__DOT___vlg_pc_read_inst;
        IData/*31:0*/ top__DOT__IFU__DOT__lastinst;
        IData/*31:0*/ top__DOT__IFU__DOT__out_data_pc_REG;
        IData/*31:0*/ top__DOT__IDU__DOT__exu_data_imm;
        IData/*31:0*/ top__DOT__IDU__DOT____VdfgTmp_hfd042d21__0;
    };
    struct {
        IData/*31:0*/ top__DOT__IDU__DOT____VdfgTmp_h60c96407__0;
        IData/*31:0*/ top__DOT__EXU__DOT__ifu_outdata_dnpc;
        IData/*31:0*/ top__DOT__EXU__DOT___alu_io_result;
        IData/*31:0*/ top__DOT__EXU__DOT___mem_m_rdata;
        IData/*31:0*/ top__DOT__EXU__DOT__lastdnpc;
        IData/*31:0*/ top__DOT__EXU__DOT____Vcellinp__alu__io_src2;
        IData/*31:0*/ top__DOT__EXU__DOT____Vcellinp__alu__io_src1;
        IData/*31:0*/ top__DOT__Reg__DOT__csr_0;
        IData/*31:0*/ top__DOT__Reg__DOT__csr_1;
        IData/*31:0*/ top__DOT__Reg__DOT__csr_2;
        IData/*31:0*/ top__DOT__Reg__DOT__csr_3;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_0;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_1;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_2;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_3;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_4;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_5;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_6;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_7;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_8;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_9;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_10;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_11;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_12;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_13;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_14;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_15;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_16;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_17;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_18;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_19;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_20;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_21;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_22;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_23;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_24;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_25;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_26;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_27;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_28;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_29;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_30;
        IData/*31:0*/ top__DOT__Reg__DOT__reg_31;
        IData/*31:0*/ top__DOT__Reg__DOT__casez_tmp;
        IData/*31:0*/ top__DOT__Reg__DOT__casez_tmp_0;
        IData/*31:0*/ top__DOT__Reg__DOT__casez_tmp_1;
        IData/*31:0*/ __VdfgTmp_h2d0c1b22__0;
        IData/*31:0*/ __Vfunc_vlg_pmem_read__2__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__top__DOT__IFU__DOT__out_data_inst;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

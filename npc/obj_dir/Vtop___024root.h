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
        CData/*0:0*/ top__DOT___EXU_io_out2ifu_valid;
        CData/*2:0*/ top__DOT___EXU_io_w_exu_mem_wmask;
        CData/*4:0*/ top__DOT___EXU_io_reg_waddr;
        CData/*1:0*/ top__DOT___EXU_io_csr_waddr_1;
        CData/*0:0*/ top__DOT___EXU_io_csr_wen_1;
        CData/*1:0*/ top__DOT___IDU_io_reg_data_csr_raddr;
        CData/*0:0*/ top__DOT__IFU__DOT__m2EXUstate;
        CData/*0:0*/ top__DOT__IFU__DOT__exu2in_reg;
        CData/*0:0*/ top__DOT__IFU__DOT__rready_reg;
        CData/*0:0*/ top__DOT__IFU__DOT__arvalid_reg;
        CData/*0:0*/ top__DOT__IDU__DOT__exu_data_mem_ren;
        CData/*0:0*/ top__DOT__IDU__DOT__exu_data_mem_wen;
        CData/*4:0*/ top__DOT__IDU__DOT__exu_data_reg_waddr;
        CData/*0:0*/ top__DOT__IDU__DOT__exu_data_reg_wen;
        CData/*4:0*/ top__DOT__IDU__DOT__exu_data_alu_op;
        CData/*3:0*/ top__DOT__IDU__DOT__exu_data_inst_type;
        CData/*0:0*/ top__DOT__IDU__DOT__exu_data_il_us;
        CData/*0:0*/ top__DOT__IDU__DOT__state;
        CData/*0:0*/ top__DOT__IDU__DOT__state_reg;
        CData/*4:0*/ top__DOT__IDU__DOT__casez_tmp;
        CData/*4:0*/ top__DOT__IDU__DOT__casez_tmp_0;
        CData/*0:0*/ top__DOT__IDU__DOT___GEN_12;
        CData/*0:0*/ top__DOT__IDU__DOT___GEN_13;
        CData/*0:0*/ top__DOT__IDU__DOT___GEN_14;
        CData/*0:0*/ top__DOT__IDU__DOT___GEN_15;
        CData/*0:0*/ top__DOT__IDU__DOT___GEN_19;
        CData/*0:0*/ top__DOT__IDU__DOT___GEN_20;
        CData/*0:0*/ top__DOT__EXU__DOT__bready_reg;
        CData/*0:0*/ top__DOT__EXU__DOT__rready_reg;
        CData/*0:0*/ top__DOT__EXU__DOT__m2IDUstate;
        CData/*0:0*/ top__DOT__EXU__DOT__reg_wen_reg;
        CData/*4:0*/ top__DOT__EXU__DOT__reg_waddr_reg;
        CData/*0:0*/ top__DOT__EXU__DOT__mem_ren_reg;
        CData/*0:0*/ top__DOT__EXU__DOT__mem_wen_reg;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_3;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_4;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_5;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_6;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_7;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_8;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_16;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_17;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_18;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_19;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_20;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_21;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_22;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_24;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_26;
        CData/*0:0*/ top__DOT__EXU__DOT___GEN_27;
        CData/*4:0*/ top__DOT__EXU__DOT____Vcellinp__alu__io_alu_op;
        CData/*0:0*/ top__DOT__EXU__DOT____VdfgTmp_h6f9fceee__0;
        CData/*0:0*/ top__DOT__EXU__DOT____VdfgTmp_h61894a5a__0;
        CData/*4:0*/ top__DOT__EXU__DOT__alu__DOT____VdfgTmp_hdb870149__0;
        CData/*0:0*/ top__DOT__Reg__DOT___GEN;
        CData/*0:0*/ top__DOT__Mem__DOT___m_m_wready;
        CData/*0:0*/ top__DOT__Mem__DOT__rvalid_reg;
        CData/*1:0*/ top__DOT__Mem__DOT__rresp_reg;
        CData/*0:0*/ top__DOT__Mem__DOT__arvalid_reg;
        CData/*0:0*/ top__DOT__Mem__DOT__bvalid_reg;
        CData/*1:0*/ top__DOT__Mem__DOT__bresp_reg;
    };
    struct {
        CData/*2:0*/ top__DOT__Mem__DOT__wmask_reg;
        CData/*0:0*/ top__DOT__Mem__DOT__awvalid_reg;
        CData/*0:0*/ top__DOT__Mem__DOT__wvalid_reg;
        CData/*0:0*/ top__DOT__Mem__DOT___GEN_1;
        CData/*0:0*/ top__DOT__Mem__DOT__rvalid_en;
        CData/*0:0*/ top__DOT__Mem__DOT__bvalid_en;
        CData/*4:0*/ top__DOT__Mem__DOT__delay__DOT__lfsrReg;
        CData/*4:0*/ top__DOT__Mem__DOT__delay__DOT__counter;
        CData/*0:0*/ top__DOT__Mem__DOT__delay__DOT___GEN;
        CData/*4:0*/ top__DOT__Mem__DOT__delay_w__DOT__lfsrReg;
        CData/*4:0*/ top__DOT__Mem__DOT__delay_w__DOT__counter;
        CData/*0:0*/ top__DOT__Mem__DOT__delay_w__DOT___GEN;
        CData/*0:0*/ top__DOT__Inst_fetch__DOT__rvalid_reg;
        CData/*0:0*/ top__DOT__Inst_fetch__DOT__arvalid_reg;
        CData/*0:0*/ top__DOT__Inst_fetch__DOT__rvalid_en;
        CData/*4:0*/ top__DOT__Inst_fetch__DOT__delay__DOT__lfsrReg;
        CData/*4:0*/ top__DOT__Inst_fetch__DOT__delay__DOT__counter;
        CData/*0:0*/ top__DOT__Inst_fetch__DOT__delay__DOT___GEN;
        CData/*4:0*/ __VdfgTmp_he9709539__0;
        CData/*0:0*/ __Vdly__top__DOT__IFU__DOT__m2EXUstate;
        CData/*0:0*/ __Vdly__top__DOT__IFU__DOT__rready_reg;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_OUT(io_pc,31,0);
        IData/*31:0*/ top__DOT___Mem_io_r_mem_exu_rdata;
        IData/*31:0*/ top__DOT___EXU_io_aw_exu_mem_awaddr;
        IData/*31:0*/ top__DOT___EXU_io_reg_wdata;
        IData/*31:0*/ top__DOT___EXU_io_csr_wdata_1;
        IData/*31:0*/ top__DOT__IFU__DOT__indata_dnpc;
        IData/*31:0*/ top__DOT__IFU__DOT__ardata_reg;
        IData/*31:0*/ top__DOT__IFU__DOT__inst_reg;
        IData/*31:0*/ top__DOT__IFU__DOT__io_out_bits_pc_REG;
        IData/*31:0*/ top__DOT__IDU__DOT__exu_data_snpc;
        IData/*31:0*/ top__DOT__IDU__DOT__exu_data_pc;
        IData/*31:0*/ top__DOT__IDU__DOT__exu_data_m_rmask;
        IData/*31:0*/ top__DOT__IDU__DOT__exu_data_m_wmask;
        IData/*31:0*/ top__DOT__IDU__DOT__exu_data_src1;
        IData/*31:0*/ top__DOT__IDU__DOT__exu_data_src2;
        IData/*31:0*/ top__DOT__IDU__DOT__exu_data_csr;
        IData/*31:0*/ top__DOT__IDU__DOT__exu_data_csr_a5;
        IData/*31:0*/ top__DOT__IDU__DOT__exu_data_mstatus;
        IData/*31:0*/ top__DOT__IDU__DOT__exu_data_imm;
        IData/*31:0*/ top__DOT__IDU__DOT__csr_imm;
        IData/*31:0*/ top__DOT__EXU__DOT__ifu_outdata_dnpc;
        IData/*31:0*/ top__DOT__EXU__DOT___alu_io_result;
        IData/*31:0*/ top__DOT__EXU__DOT__lastdnpc;
        IData/*31:0*/ top__DOT__EXU__DOT__mem_raddr_reg;
        IData/*31:0*/ top__DOT__EXU__DOT__mem_rmask_reg;
        IData/*31:0*/ top__DOT__EXU__DOT__mem_awaddr_reg;
        IData/*31:0*/ top__DOT__EXU__DOT__mem_wmask_reg;
        IData/*31:0*/ top__DOT__EXU__DOT__mem_wdata_reg;
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
    };
    struct {
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
        IData/*31:0*/ top__DOT__Mem__DOT___m_m_rdata;
        IData/*31:0*/ top__DOT__Mem__DOT__rdata_reg;
        IData/*31:0*/ top__DOT__Mem__DOT__waddr_reg;
        IData/*31:0*/ top__DOT__Mem__DOT___GEN;
        IData/*31:0*/ top__DOT__Mem__DOT___GEN_0;
        IData/*31:0*/ top__DOT__Mem__DOT__delay__DOT__dataReg;
        IData/*31:0*/ top__DOT__Mem__DOT__delay_w__DOT__dataReg;
        IData/*31:0*/ top__DOT__Inst_fetch__DOT___vlg_pc_read_inst;
        IData/*31:0*/ top__DOT__Inst_fetch__DOT__rdata_reg;
        IData/*31:0*/ top__DOT__Inst_fetch__DOT__delay__DOT__dataReg;
        IData/*31:0*/ __VdfgTmp_h570e6332__0;
        IData/*31:0*/ __Vfunc_vlg_pmem_read__1__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__top__DOT__IFU__DOT__inst_reg;
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

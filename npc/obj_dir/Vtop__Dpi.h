// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at build/top.sv:2516:30
    extern void ebreak(int inst);
    // DPI import at build/top.sv:2530:29
    extern int vlg_pmem_read(int m_raddr, int rmask);
    // DPI import at build/top.sv:2529:30
    extern void vlg_pmem_write(int waddr, int wdata, int wmask);
    // DPI import at build/top.sv:2571:30
    extern void vlg_uart(int ad, int data, int mask);

#ifdef __cplusplus
}
#endif

#endif  // guard

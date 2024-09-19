// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at build/ysyx_23060111.sv:2554:30
    extern void ebreak(int inst);
    // DPI import at ../ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at ../ysyxSoC/build/ysyxSoCFull.v:5057:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at ../ysyxSoC/build/ysyxSoCFull.v:5076:29
    extern int psram_read(int addr);
    // DPI import at ../ysyxSoC/build/ysyxSoCFull.v:5075:30
    extern void psram_write(int addr, int data);

#ifdef __cplusplus
}
#endif

#endif  // guard

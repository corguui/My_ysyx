#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<cstdint>
#include "mem.h"


static uint8_t pmem[0x80000000] __attribute((aligned(4096)))={};
uint32_t pmem_read(uint32_t &pc)
{
	uint32_t inst =pc;
	pc=pc+4; 
	return inst;
}



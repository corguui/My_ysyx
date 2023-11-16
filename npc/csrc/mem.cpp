#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<cstdint>
#include"../hsrc/mem.h"


static uint8_t pmem[0x80000000] __attribute((aligned(4096)))={};
uint8_t pmem[0]=97;
uint8_t pmem[1]=2;
uint8_t pmem[2]=0;
uint8_t pmem[3]=0;
uint32_t pmem_read(uint32_t &pc)
{
	uint32_t inst =pmem+0x80000000-pc;
	pc=pc+4; 
	return inst;
}



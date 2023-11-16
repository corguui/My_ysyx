#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<cstdint>
#include"../hsrc/mem.h"


static uint8_t pmem[0x80000000] __attribute((aligned(4096)))={};
void init_mem(){
int i;
for(i=0;i < (int)(0x80000000/sizeof(pmem[0]));i++)
{
	pmem[i]=rand();
}
static uint32_t img[]
{
	0x00000297,
};

memcpy(pmem,img,sizeof(img));
}

uint32_t pmem_read(uint32_t &pc)
{
	uint32_t inst =*(pmem+pc-0x80000000);
	pc=pc+4; 
	return inst;
}



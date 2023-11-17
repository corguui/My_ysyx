#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<cstdint>
#include"../hsrc/mem.h"


static uint8_t pmem[0x8000000] __attribute((aligned(4096)))={};
static uint32_t img[]
{
	0x00000297,
	0x00100010,
};

void init_mem()
{

	memcpy(pmem,img,sizeof(img));
}


uint32_t pmem_read(uint32_t &ad,int len)
{
  	switch (len) {
   		case 1: uint8_t  *addr =pmem+pc-0x80000000;
		case 2: uint16_t *addr =pmem+pc-0x80000000;
    		case 4: uint32_t *addr =pmem+pc-0x80000000;
		}
	uint32_t inst =*(uint32_t *)addr;
	pc+=4; 
	return inst;
}
/*
void pmem_write(uint32_t ad, int len, uint32_t data)
{


  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    }
   

}


*/

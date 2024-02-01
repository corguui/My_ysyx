#ifndef __MEM_H__
#define __MEM_H__

#include <common.h>
int pmem_read(int ad,int len);
uint32_t pc_read(uint32_t &pc);
void pmem_write(int &ad,int len ,int data);
void init_mem();
uint8_t* NPC_guest_to_host(uint32_t paddr);

#endif

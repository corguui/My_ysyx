/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "macro.h"
#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#ifdef CONFIG_MTRACE
//memory tarce
unsigned int write_buf[100000000];
unsigned int read_buf[100000000];
unsigned int write_data_buf[100000000];
unsigned int read_data_buf[100000000];
int write_num=0;
int read_num=0;
#endif

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
static uint8_t *sram = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
static uint8_t sram[CONFIG_SRAMSIZE] PG_ALIGN = {};
#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

uint8_t *sram_guest_to_host(paddr_t paddr) { return sram + paddr - CONFIG_SRAMSIZE; }
paddr_t sram_host_to_guest(uint8_t *haddr) { return haddr - sram + CONFIG_SRAMSIZE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}
static word_t sram_read(paddr_t addr, int len) {
  word_t ret = host_read(sram_guest_to_host(addr), len);
  return ret;

}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}
static void sram_write(paddr_t addr, int len, word_t data) {
  host_write(sram_guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] or sram [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, SRAM_LEFT, SRAM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  sram = malloc(CONFIG_SRAMSIZE);
  assert(sram);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
#ifdef CONFIG_MEM_RANDOM
  uint32_t *s = (uint32_t *)pmem;
  int j;
  for (j = 0; j < (int) (CONFIG_MSIZE / sizeof(s[0])); j ++) {
    s[j] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", SRAM_LEFT, SRAM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {

  if (likely(in_pmem(addr))){
    uint32_t data=pmem_read(addr, len);
#ifdef CONFIG_MTRACE
  read_buf[read_num]=addr;
  read_data_buf[read_num]=data;
  read_num++;
#endif
  return data;
  }
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  printf("paddr read\n");
  out_of_bound(addr);
  return 0;
}
word_t saddr_read(paddr_t addr, int len) {
  uint32_t data=0;
  if (likely(in_sram(addr))){
    data=sram_read(addr, len);
    return data;
  }
  else if (likely(in_pmem(addr))){
    data=pmem_read(addr, len);
    return data;
  }
  printf("saddr read\n");
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data);
#ifdef CONFIG_MTRACE
	write_buf[write_num]=addr;
  write_data_buf[write_num]=data;
	write_num++;
#endif
  return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  printf("paddr write\n");
  out_of_bound(addr);
}
void saddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_sram(addr))) { sram_write(addr, len, data);
  return; }
  printf("saddr write\n");
  out_of_bound(addr);
}

void pmem_out()
{
		#ifdef CONFIG_MTRACE
		log_write("----------write----------\n");
		for(int i=0;i<write_num;i++)
  		{
  			log_write("----addr  0x%x   ----data  0x%x\n",write_buf[i],write_data_buf[i]);
  		}
  		log_write("--------  read  ---------\n");
  		for(int i=0;i<read_num;i++)
  		{
  			log_write("----addr  0x%x   ----data  0x%x\n",read_buf[i],read_data_buf[i]);
  		}
		#endif
}
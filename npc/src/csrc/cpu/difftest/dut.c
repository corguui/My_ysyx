#include <cstdio>
#include <dlfcn.h>
#include <cpu/cpu.h>
#include <mem.h>
#include <utils.h>

#ifdef CONFIG_DIFFTEST
void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut,uint32_t*pc, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
void (*ref_difftest_init)(int port) = NULL;

void isa_reg_display();
static void checkregs(NPC_CPU_state *ref, uint32_t pc);
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;
int ref_skip_wait=0;

void difftest_skip_ref() {
  is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

 *(void**)(&ref_difftest_memcpy) = dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  *(void**)(&ref_difftest_regcpy) = dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  *(void**)(&ref_difftest_exec) = dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  *(void**)(&ref_difftest_raise_intr) = dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  *(void**)(&ref_difftest_init) = dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);
      
  ref_difftest_init(port);
  ref_difftest_memcpy(CONFIG_MBASEADDR, NPC_guest_to_host(CONFIG_MBASEADDR), img_size, DIFFTEST_TO_REF);
  cpu_read_reg();
  cpu.pc=CONFIG_MBASEADDR;
  ref_difftest_regcpy(cpu.gpr,&cpu.pc, DIFFTEST_TO_REF);
}

void difftest_step(uint32_t pc, uint32_t npc) {
  NPC_CPU_state ref_r;

  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(ref_r.gpr,&ref_r.pc, DIFFTEST_TO_DUT);
    if (ref_r.pc == npc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      printf("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
      assert(0);
    return;
  }
  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    cpu_read_reg();
    //传入的pc 会加4 在nemu diff ref.c
    ref_difftest_regcpy(cpu.gpr,&cpu.pc, DIFFTEST_TO_REF);
    is_skip_ref = false;
    ref_skip_wait=1;
    return;
  }
  //等待npc多执行一次
  if(ref_skip_wait==1)
  {
    return;
  }
  ref_difftest_exec(1);
  ref_difftest_regcpy(ref_r.gpr,&ref_r.pc, DIFFTEST_TO_DUT);

  //checkregs(&ref_r, pc);
  checkregs(&ref_r, npc);
}

bool isa_difftest_checkregs(NPC_CPU_state *ref_r, uint32_t pc) {
  int num=32;
  cpu_read_reg();
  for(int i=0;i<num;i++)
  {
  if(ref_r->gpr[i]!=cpu.gpr[i])
	{
    printf("the No:%d npc-gpr:%x\n        nmeu-gpr:%x\n",i,cpu.gpr[i],ref_r->gpr[i]);
		return false;
	}
  }
  if(ref_r->pc!=pc)
  {
    printf(" npc-pc:%x\nnemu-pc:%x\n",pc,ref_r->pc);
    return false;
  }
  return true;
}

static void checkregs(NPC_CPU_state *ref, uint32_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    npc_state.state = NPC_ABORT;
    tfp->close();
    isa_reg_display();
  }
}

#endif
#include "VysyxSoCFull__Dpi.h"
#include "config.h"
#include <cpu/cpu.h>
#include <cpu/decode.h>
#include<common.h>
#include <sched.h>
#include <sdb.h>
#include <stdio.h>

#if defined(CONFIG_FTRACE) or defined(CONFIG_ITRACE)
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code,int nbyte);
#endif

#ifdef CONFIG_FTRACE
#include <monitor.h>
extern FUN *symbol;
extern int func_num;
int space_num=0;
int space_flat=0;
int print_flat=0;
#endif

void device_update();

//ringbuf val
#ifdef CONFIG_ITRACE
#define BUF_LEN 18
#define NEXT_POS(x) ((x+1)%BUF_LEN)
char ringbuf[BUF_LEN][128];
int w=0;//ringbuf's write flag
void iringbuf_put_char(char *p);
void print_ringbuf();
#endif
uint32_t pc;
NPC_CPU_state cpu{};
static bool g_print_step = false;  
int valid_flag=0;
uint32_t cmp_dnpc;

void cpu_read_reg()
{
	cpu.pc=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out_bits_pc_0;
	cpu.gpr[0]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_0;
	cpu.gpr[1]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_1;
	cpu.gpr[2]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_2;
	cpu.gpr[3]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_3;
	cpu.gpr[4]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_4;
	cpu.gpr[5]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_5;
	cpu.gpr[6]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_6;
	cpu.gpr[7]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_7;
	cpu.gpr[8]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_8;
	cpu.gpr[9]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_9;
	cpu.gpr[10]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_10;
	cpu.gpr[11]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_11;
	cpu.gpr[12]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_12;
	cpu.gpr[13]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_13;
	cpu.gpr[14]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_14;
	cpu.gpr[15]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_15;
	cpu.gpr[16]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_16;
	cpu.gpr[17]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_17;
	cpu.gpr[18]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_18;
	cpu.gpr[19]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_19;
	cpu.gpr[20]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_20;
	cpu.gpr[21]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_21;
	cpu.gpr[22]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_22;
	cpu.gpr[23]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_23;
	cpu.gpr[24]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_24;
	cpu.gpr[25]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_25;
	cpu.gpr[26]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_26;
	cpu.gpr[27]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_27;
	cpu.gpr[28]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_28;
	cpu.gpr[29]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_29;
	cpu.gpr[30]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_30;
	cpu.gpr[31]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_31;
	

	cpu.csr[0]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_0;
	cpu.csr[1]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_1;
	cpu.csr[2]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_2;
	cpu.csr[3]=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_3;
	

}
void cpu_write_reg()
{
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out_bits_pc_0=cpu.pc;
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_0=cpu.gpr[0];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_1=cpu.gpr[1];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_2=cpu.gpr[2];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_3=cpu.gpr[3];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_4=cpu.gpr[4];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_5=cpu.gpr[5];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_6=cpu.gpr[6];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_7=cpu.gpr[7];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_8=cpu.gpr[8];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_9=cpu.gpr[9];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_10=cpu.gpr[10];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_11=cpu.gpr[11];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_12=cpu.gpr[12];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_13=cpu.gpr[13];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_14=cpu.gpr[14];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_15=cpu.gpr[15];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_16=cpu.gpr[16];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_17=cpu.gpr[17];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_18=cpu.gpr[18];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_19=cpu.gpr[19];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_20=cpu.gpr[20];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_21=cpu.gpr[21];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_22=cpu.gpr[22];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_23=cpu.gpr[23];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_24=cpu.gpr[24];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_25=cpu.gpr[25];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_26=cpu.gpr[26];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_27=cpu.gpr[27];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_28=cpu.gpr[28];	
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_29=cpu.gpr[29];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_30=cpu.gpr[30];
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__reg_31=cpu.gpr[31];


}

#ifdef CONFIG_DIFFTEST
void difftest_step(uint32_t pc, uint32_t npc);
#endif
int fl=0;
static void trace_and_difftest(Decode *_this) {
#ifdef CONFIG_ITRACE
//print the command in log_file
  if (CONFIG_ITRACE&&valid_flag) { log_write("%s\n", _this->logbuf); }
#endif
#ifdef CONFIG_FTRACE
  if (CONFIG_FTRACE&&print_flat==1&&valid_flag) { print_flat=0; log_write("%s\n", _this->fun_printf_buf); }
#endif
  if (g_print_step&&valid_flag) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  #ifdef CONFIG_DIFFTEST 
  if(valid_flag)
  {
  difftest_step(_this->pc, top->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out_bits_pc_0);
  //printf("pc %x npc %x \n",_this->pc,top->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out_bits_pc_0);
  }
  #endif

#ifdef CONFIG_CC_WATCHPOINT
//watchpoint
  if(check_wp()!=true)
  {
  npc_state.state=NPC_STOP;
  printf("error the npc stop\n");
  return ;
  }
#endif
}



void cpu_init()
{
	/*
	top->clock =0; top->eval();
	top->reset=1;
	top->clock =1; top->eval();
	#ifdef CONFIG_VCD
	tfp->dump(main_time);
	#endif
	main_time++;
	top->clock =0; top->eval();
	#ifdef CONFIG_VCD
	tfp->dump(main_time);
	#endif
	main_time++;
	top->eval();
	top->clock =1; top->eval();
	#ifdef CONFIG_VCD
	tfp->dump(main_time);
	#endif
	main_time++;
	top->eval();
	*/
	top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Reg__DOT__csr_2=0x1800;

	
}
void cpu_exec_once(VerilatedVcdC* tfp,Decode *s)
{

		top->clock =0; top->eval();
		valid_flag=0;
		#ifdef MROM
		if(top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out_bits_pc_0!=0&&top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__ifu_outdata_dnpc!=0x20000000&&cmp_dnpc!=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__ifu_outdata_dnpc)
		#else
		if(top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out_bits_pc_0!=0&&top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__ifu_outdata_dnpc!=0x80000000&&cmp_dnpc!=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__ifu_outdata_dnpc)
		#endif
		{
		valid_flag =1;
		pc=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out_bits_pc_0;
		s->pc=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out_bits_pc_0;
		s->inst=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__inst_reg;
;
    	s->dnpc=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__ifu_outdata_dnpc;
		//printf("main_time %d pc %x lastdnpc %x dnpc %x\n",main_time,s->pc,cmp_dnpc,s->dnpc);
		#ifdef CONFIG_VCD
		tfp->dump(main_time);
		#endif
		main_time++;
		top->eval();

		top->clock =1; top->eval();
		#ifdef CONFIG_VCD
		tfp->dump(main_time);
		#endif
		main_time++;
		top->eval();

		top->clock =0; top->eval();
		//cpu_read_reg(); 
		}
		cmp_dnpc=top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__ifu_outdata_dnpc;
		#ifdef CONFIG_VCD
		tfp->dump(main_time);
		#endif
		main_time++;
		top->eval();
		top->clock =1; top->eval();
		#ifdef CONFIG_VCD
		tfp->dump(main_time);
		#endif
		main_time++;
		top->eval();

if(valid_flag==1)
{

#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf),  "0x%x:", s->pc);
 int ilen = 0x4;
  int i;
  uint8_t *inst = (uint8_t *)&s->inst;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }

  int ilen_max = 4;
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  //p[0] = '\0'; // the upstream llvm does not support loongarch32r
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,s->pc, (uint8_t *)&s->inst, ilen);
  //itrace the wrong instruct
  iringbuf_put_char(s->logbuf);
#endif

#ifdef CONFIG_FTRACE
  char ar[]="jal";//read the jal and jalr
  char ar1[]="jalr";
  char ar2[]="00 00 80 67";//funbuf 0x8--------: 00 00 80 67 jalr  ..... the ret is 80 67
  //00 07 80 67 jr mean call to but no printf the ret//in f1 have jr call to f0 the f1 no ret
  char *q = s->funbuf;
  char *pr= s->fun_printf_buf;
  q += snprintf(q, sizeof(s->funbuf), "0x%x:", s->pc);
  int funlen = 0x4;
  int j;
  uint8_t *funinst = (uint8_t *)&s->inst;
  for (j = funlen - 1; j >= 0; j --) {
    q += snprintf(q, 4, " %02x", funinst[j]);
  }

  int funlen_max = 4;
  int fspace_len = funlen_max - funlen;
  if (fspace_len < 0) fspace_len = 0;
  fspace_len = fspace_len * 3 + 1;
  memset(q, ' ', fspace_len);
  q += fspace_len;
  disassemble(q, s->funbuf + sizeof(s->funbuf) - q,s->pc, (uint8_t *)&s->inst, funlen);

if(strncmp(s->funbuf+24,ar,3)==0)
 {
 	int flat_ret=0;
	int f,g;
 	for(g=0;g<func_num;g++)
	{
		if(s->dnpc>=symbol[g].value&&s->dnpc<symbol[g].value+symbol[g].size) //read the next pc
		{
		   if(strncmp(s->funbuf+24,ar1,4)==0&&strncmp(s->funbuf+12,ar2,5)==0) //ret or not ret 
		   {
		   for(f=0;f<func_num;f++)
		   {
		       if(s->pc>=symbol[f].value&&s->pc<symbol[f].size+symbol[f].value)	
		       {
		          flat_ret=1;
			      break;
		       }
		   }
		   }
		   if(flat_ret==1)//ret
		   {
		     if(space_flat==1)
		     {
		     	space_num--;
		     }
		     pr+=sprintf(pr,"0x%x:",s->pc);
		     pr+=sprintf(pr,"---num: %d   ret [fun:%s  @%x]\n",space_num,symbol[f].name,symbol[f].value); 
		     space_flat=1;
			 print_flat=1;
		     break;
		   }
		   else if(flat_ret==0)//call
		   {
		     if(space_flat==0)
		     {
		     	space_num++;
		     }
		     pr+=sprintf(pr,"0x%x:",s->pc);
		     pr+=sprintf(pr,"---num: %d  call [fun:%s  @%x]\n",space_num,symbol[g].name,symbol[g].value);
			space_flat=0;
			print_flat=1;
			break;
		   }
		}
		else if(g==func_num-1)
		{
			Log("error no funcion error\n");
      
			
		}
	}
 }
#endif
}

}

static void execute(uint64_t n)
{
	Decode s;
	for(;n>0;n--)
	{
		cpu_exec_once(tfp,&s);
		if(valid_flag)
		{
		trace_and_difftest(&s); 
		}
		if(npc_state.state !=NPC_RUNNING) break;
		#ifdef CONFIG_DEVICE
		device_update();
		#endif
	}
}

void cpu_exec(uint64_t n)
{
   switch (npc_state.state) {
     case NPC_END: case NPC_ABORT:
       printf("Program execution has ended. To restart the program, exit npc and run again.\n");
       return;
     default: npc_state.state = NPC_RUNNING;
}                                                                           
	execute(n);
   switch(npc_state.state){
     case NPC_RUNNING: npc_state.state =NPC_STOP;break;

     case NPC_END: case NPC_ABORT:

      Log("npc: %s at pc = 0x%x",
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :  ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))), top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__io_out_bits_pc_0);

      #ifdef CONFIG_ITRACE
	    //print the ringbuf
	    if(npc_state.halt_ret !=0)
		{
		printf("npc ringbuf\n");
	    print_ringbuf();
		}
	    else if(npc_state.state==NPC_ABORT)
		{
		printf("npc ringbuf\n");
	    print_ringbuf();
		}
	    #endif
    }


}

#ifdef CONFIG_ITRACE
void iringbuf_put_char(char *p)
{
		int n=sizeof(ringbuf[w]);
		memset(ringbuf[w],'\0',n);
		strcpy(ringbuf[w],p);
		w=NEXT_POS(w);

}

void print_ringbuf(){
	for(int num=0;num<BUF_LEN;num++)
		{
			if((num!=w-1)&&(ringbuf[num]!=NULL))
			printf("    %s\n",ringbuf[num]);
			else
			printf("--> %s\n",ringbuf[num]);
		}

}
#endif

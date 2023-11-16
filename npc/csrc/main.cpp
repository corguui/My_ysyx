#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include "Vtop.h"
#include"verilated.h"
#include"verilated_vcd_c.h"
#include"mem.h"

int main(int argc ,char** argv, char** env)
{
	int count=0;
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc,argv);
	Vtop *top = new Vtop{contextp};

	VerilatedVcdC* tfp=new VerilatedVcdC;
	contextp->traceEverOn(true);
	top->trace(tfp,0);
	tfp->open("wave.vcd");

        uint32_t a=0x80000000;
	top->pc=a;
	while(count<=0&&!contextp->gotFinish())
	{
		top->b =pmem_read(top->pc);
		printf("------%x\n",top->pc);
		printf("------top->b %x\n",top->b);
		top->eval();

		tfp->dump(contextp->time());
		contextp->timeInc(1);
		count++;
	}
	delete top;
	tfp->close();
	delete contextp;
	return 0;
}

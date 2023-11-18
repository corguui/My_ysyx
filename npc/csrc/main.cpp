#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include "Vysyx_23060111_top.h"
#include"verilated.h"
#include"verilated_vcd_c.h"
#include"../hsrc/mem.h"



int main(int argc ,char** argv, char** env)
{
	//init
	int count=0;
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc,argv);
	Vysyx_23060111_top *top = new Vysyx_23060111_top{contextp};

	VerilatedVcdC* tfp=new VerilatedVcdC;
	contextp->traceEverOn(true);
	top->trace(tfp,0);
	tfp->open("wave.vcd");

	//init mem
	init_mem();
        uint32_t a=0x80000000;
	top->pc=a;

	while(count<=0&&!contextp->gotFinish())
	{
		top->clk =0; top->eval();
		top->clk =1; top->eval();
		top->inst =pc_read(top->pc);
		printf("------%x\n",top->pc);
		printf("------top->reg_out1 %x\n",top->reg_out1);
		printf("------top->imm %x\n",top->reg_out1);

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


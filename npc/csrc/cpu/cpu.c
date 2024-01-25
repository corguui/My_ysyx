#include <cstdint>


void cpu_init()
{
	top->rst=1;
	top->clk =0; top->eval();
	tfp->dump(main_time);
	main_time++;
	top->eval();
	top->clk =1; top->eval();
	top->rst=0;
	tfp->dump(main_time);
	main_time++;
	top->eval();

	
}
void cpu_exce_once(VerilatedVcdC* tfp)
{

		top->clk =0; top->eval();
		top->inst =pc_read(top->pc);
		tfp->dump(main_time);
		main_time++;
		top->eval();
		top->clk =1; top->eval();
		tfp->dump(main_time);
		main_time++;
		top->eval();


}
void cpu_exce(uint64_t n)
{
	execute(n);
}
void execute(uint64_t n)
{
	for(;n>0;n--)
	{
		cpu_exce_once(tfp);
	}
}

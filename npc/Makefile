BUILD_DIR = ./build
Vfile=$(shell find -L ../ysyxSoC/perip -name "*.v")
Cfile=$(wildcard ./src/csrc/*.cpp)
Cfile +=$(shell find -L ./src/csrc -name "*.c")
Wavefile=$(wildcard ./*.vcd)
#TOPfile=./build/top.sv
#TOPname=top
Vfile += ./build/ysyx_23060111.sv
TOPfile= ../ysyxSoC/build/ysyxSoCFull.v
TOPname= ysyxSoCFull

#init
IMG ?= 
#--timescale "1ns/1ns" --no-timing -top $(TOPname) $(TOPfile) 
VLTFLAGS =-Wall --cc -trace-strcuts --exe --build -Wno-lint --timescale "1ns/1ns" --no-timing -top $(TOPname) $(TOPfile)  $^ 
RUN_FLAGS = $(IMG)

INC_PATH = -I$(HOME)/ysyx-workbench/npc/src/include -I$(HOME)/ysyx-workbench/ysyxSoC/perip/uart16550/rtl -I$(HOME)/ysyx-workbench/ysyxSoC/perip/spi/rtl
VLTFLAGS += -CFLAGS $(INC_PATH) 

NPC_SIM_RUN = ./obj_dir/VysyxSoCFull 
NPC_GDB_RUN = obj_dir/VysyxSoCFull

#logfile
NPC_LOG = ./npc-log.txt
RUN_FLAGS +=  $(NPC_LOG)

-include config.mk

#ftrace
ifdef CONFIG_FTRACE
ELF =$(IMG:.bin=.elf)
RUN_FLAGS += $(ELF)
endif

#itrace llvm--反汇编
ifdef CONFIG_ITRACE
Cfile += src/csrc/utils/disasm.cc
VLTFLAGS += -CFLAGS -I/usr/lib/llvm-14/include -CFLAGS -std=c++17\
  -CFLAGS -fno-exceptions  -CFLAGS -fPIE -LDFLAGS -lLLVM-14
VLTFLAGS += -LDFLAGS -lreadline
endif

#difftest  链接nemu-so动态库
ifdef CONFIG_DIFFTEST
LIB_PATH = $(HOME)/ysyx-workbench/nemu/build/
LIB = $(HOME)/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so
VLTFLAGS +=  -CFLAGS -L$(LIB_PATH) -CFLAGS -lriscv32-nemu-interpreter-so
RUN_FLAGS += $(LIB)
NPC_SIM_RUN := LD_PRELOAD=/usr/lib/gcc/x86_64-linux-gnu/11/libasan.so $(NPC_SIM_RUN)
NPC_GDB_DIFF = -ex 'set env LD_PRELOAD /usr/lib/gcc/x86_64-linux-gnu/11/libasan.so' 
endif
#gdb
NPC_GDB = -CFLAGS -g 


PRJ = playground

CONFIG: ./src/include/config.h 
	@sed -e 's/^#define \(.*\) \(.*\)/\1=\2/' -e '/^#\(.*\)/d' -e '/^\/\(.*\)/d' -e '/^_\(.*\)/d' ./src/include/config.h > ./config.mk

test:
	mill -i $(PRJ).test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill -i $(PRJ).runMain Elaborate --target-dir $(BUILD_DIR)
	sed -i '/^[^/].*\.v/d' ./build/ysyx_23060111.sv

help:
	mill -i $(PRJ).runMain Elaborate --help

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

bsp:
	mill -i mill.bsp.BSP/install

idea:
	mill -i mill.idea.GenIdea/idea

clean:
	-rm -rf $(BUILD_DIR)

.PHONY: test verilog help reformat checkformat clean

sim: $(Cfile) $(Vfile)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VLTFLAGS) 
	$(NPC_SIM_RUN) $(RUN_FLAGS)
	@ctags -R -u

gdb: $(Cfile) $(Vfile)
	verilator $(VLTFLAGS) $(NPC_GDB) 
	gdb $(NPC_GDB_DIFF) --args $(NPC_GDB_RUN) $(RUN_FLAGS)
	@ctags -R -u

wave:$(Wavefile)
	gtkwave $(Wavefile)

-include ../Makefile

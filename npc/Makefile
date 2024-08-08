BUILD_DIR = ./build
Vfile=$(wildcard ./build/*.v)
Cfile=$(wildcard ./src/csrc/*.cpp)
Cfile +=$(shell find -L ./src/csrc -name "*.c")
Wavefile=$(wildcard ./*.vcd)
TOPfile=./build/top.sv
TOPname=top

VLTFLAGS =-Wall --cc --trace --exe --build -Wno-lint -top\
 $(TOPname) $(TOPfile) $(subst $(TOPfile),,$^) 

NPC_SIM_RUN = ./obj_dir/V$(basename $(subst build/,,$(TOPfile))) 

PRJ = playground

test:
	mill -i $(PRJ).test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill -i $(PRJ).runMain Elaborate --target-dir $(BUILD_DIR)

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

sim:$(Vfile) $(Cfile) $(TOPfile) 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VLTFLAGS) 
	$(NPC_SIM_RUN) 

wave:$(Wavefile)
	gtkwave $(Wavefile)

-include ../Makefile

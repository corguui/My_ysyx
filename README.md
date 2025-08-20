# "一生一芯"工程项目
项目讲义具体请参考[实验讲义][lecture note].

# 文件目录介绍
## 程序运行平台
- nemu：使用c语言实现基于riscv32的cpu行为模拟器，搭载串口、时钟、键盘和VGA外设，能够运行c语言程序、rtt。
    - 模拟器调试工具：gdb、difftest、memory-trace、function-trace、device-trace以及instruction trace
- npc：使用Chisel实现基于riscv32的多周期cpu，通过axi总线接入ysyxSoC。能够运行c语言程序、rtt。
    - 调试工具：gdb、difftest、memory-trace、function-trace、device-trace以及instruction trace
## 程序编译，运行环境
- abstract-machine
    - am/src/riscv：程序编译运行所需要的启动文件、运行时环境
    - scripts：将程序编译成适用于对应运行平台的ld链接脚本与Makefile文件

[lecture note]: https://ysyx.oscc.cc/docs/

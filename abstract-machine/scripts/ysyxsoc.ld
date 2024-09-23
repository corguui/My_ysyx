ENTRY(_start)
PHDRS { text PT_LOAD; rodata PT_LOAD; boot_rodata PT_LOAD; boot_text PT_LOAD;  data PT_LOAD; bss PT_LOAD;  }

MEMORY {
  flash : ORIGIN = 0x30000000, LENGTH = 0xfffffff 
  psram : ORIGIN = 0x80000000, LENGTH = 0x400000 
  sram  : ORIGIN = 0x0f000000, LENGTH = 0x2000 
}

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  . = _pmem_start + _entry_offset;
  .text : {
    *(entry)
    *(.text._trm_init)
    *(.text.bootloader)
    *(.text.UART_init)
    *(.text.halt)
  } >flash AT >flash : text

  .rodata :{
    *(.srodata.mainargs)
  } >flash AT >flash : rodata 

  _data_start = LOADADDR(.boot_text);
  .boot_text :{
  _data = .;
    *(.text*)
  } >psram AT >flash : boot_text
  
  .boot_rodata : {
  _rodata_start = .;
    *(.rodata*)
    *(.srodata*)   /* 添加 .srodata* */
  } >psram AT >flash :boot_rodata

  .data : {
    *(.data*)
    *(.sdata*) /*子段*/
  _edata = .; /*子段得定义好 end_data才能正确显示*/
  } >psram AT >flash :data

  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  _bss_end = .;
  } >psram AT>flash :bss
  _heap_start = .;
  _data_end = LOADADDR(.bss)+SIZEOF(.bss);
    /* 设置堆栈的起始地址 */
  _stack_top = 0x0f000000; /* 栈的起始地址 */
  _heap_end = (_heap_start + 0x300000); 
  . = (_stack_top + 0x2000);
  _stack_pointer = .;
  
  /* 记录数据段结束地址 */
  end = .;
  _end = .;
}

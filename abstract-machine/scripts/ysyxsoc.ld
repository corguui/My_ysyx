ENTRY(_start)
PHDRS {  text PT_LOAD; ssbl PT_LOAD;  boot_text PT_LOAD; rodata PT_LOAD;  data PT_LOAD; data.extra PT_LOAD; bss.extra PT_LOAD; bss.extra PT_LOAD; bss PT_LOAD;  }

MEMORY {
  flash : ORIGIN = 0x30000000, LENGTH = 0xfffffff 
  psram : ORIGIN = 0x80000000, LENGTH = 0x400000 
  sram  : ORIGIN = 0x0f000000, LENGTH = 0x2000 
}

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  . = _pmem_start + _entry_offset;
  .text ALIGN(4):{
    *(entry)
    *(.text._trm_init)
    *(.text.FSBL)
  } >flash AT>flash : text

  _SSBL_addr = LOADADDR(.ssbl);
  . = ORIGIN(sram);
  .ssbl ALIGN(4):{
  _SSBL_start = .;
    *(.text.SSBL)
  _SSBL_end = .;
  } >sram AT>flash : ssbl

  _boot_start = LOADADDR(.boot_text);
  . = ORIGIN(psram);

  .boot_text ALIGN(4):{
  _boot = .;
    *(.text*)
  _boot_text_end = .;
  } >psram AT>flash : boot_text


  .rodata ALIGN(4): {
  _rodata = .;
    *(.rodata*)
    *(.srodata*)  
  _erodata = .;
  . = ALIGN(4);
  } >psram AT>flash :rodata

  _ad3 = ADDR(.data);

  .data ALIGN(4):{
  _data = . ;
    *(.data*)
    *(.sdata*) 
  _edata = .; 
  } >psram AT>flash :data

  _ad4 = LOADADDR(.bss);

  .bss ALIGN(4): {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  _bss_end = .;
  } >psram AT>flash :bss

  _heap_start = .;
    /* 设置堆栈的起始地址 */
  _stack_top = (0xf000080); /* 栈的起始地址 */
  _heap_end = (_heap_start + 0x280000); 
  . = (_stack_top + 0x1e00);
  _stack_pointer = .;
  
    /* 记录数据段结束地址 */
  end = .;
  _end = .;
}

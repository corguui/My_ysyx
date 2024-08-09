package npc 

import chisel3._


class top extends Module {
  val IFU = Module(new IFU)
  val IDU = Module(new IDU)

  IDU.io.in <> IFU.io.out

}



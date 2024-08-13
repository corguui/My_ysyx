object Elaborate extends App {
  val firtoolOptions = Array("--lowering-options=" + List(
    // make yosys happy
    // see https://github.com/llvm/circt/blob/main/docs/VerilogGeneration.md
    //"emittedLineLength=900",
    "disallowLocalVariables",
    "disallowPackedArrays",
    "locationInfoStyle=wrapInAtSquareBracket"
  ).reduce(_ + "," + _))
  circt.stage.ChiselStage.emitSystemVerilogFile(new npc.top(), args, firtoolOptions)
}
// object Elaborate extends App{
//     val firtoolOptions = Array("--lowering-options=" + List(
//     // make yosys happy
//     // see https://github.com/llvm/circt/blob/main/docs/VerilogGeneration.md
//     "disallowLocalVariables",
//     "disallowPackedArrays",
//     "locationInfoStyle=wrapInAtSquareBracket"
//   ).reduce(_ + "," + _))
//   circt.stage.ChiselStage.emitSystemVerilogFile(new nanhu.MEFreeList(32), args, firtoolOptions)
// }
// See README.md for license details.

package npc 

import chisel3._
import chisel3.experimental.BundleLiterals._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.freespec.AnyFreeSpec
import org.scalatest.matchers.must.Matchers

/**
  * This is a trivial example of how to run this Specification
  * From within sbt use:
  * {{{
  * testOnly gcd.GCDSpec
  * }}}
  * From a terminal shell use:
  * {{{
  * sbt 'testOnly gcd.GCDSpec'
  * }}}
  * Testing from mill:
  * {{{
  * mill %NAME%.test.testOnly gcd.GCDSpec
  * }}}
  */

class Toptest extends AnyFreeSpec with Matchers {
  "Top module testing should produce the correct result" in {
    simulate(new top) { dut =>
      dut.clock.step()
      dut.io.out.expect(0x3579.U)
    }
    print("Top module testing passed")
  }
  "a moduele testing should produce the correct result" in { 
    simulate(new a) { dut =>
      dut.io.src0.poke(0x1234.U)
      dut.io.src1.poke(0x1234.U)
      dut.clock.step()
      dut.io.result.expect(0x2468.U)
    }
    print("a module testing passed")
  }
}




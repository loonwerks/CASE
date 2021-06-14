// #Sireum

package HAMR_Simple_V4

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object AttestationTester_Impl_SW_AttestationTester_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.MissionComputer_Impl_Instance_SW_AttestationTester.entryPoints
  val appPortId: Art.PortId = IPCPorts.AttestationTester_Impl_SW_AttestationTester_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val AttestationRequestPortId: Art.PortId = Arch.MissionComputer_Impl_Instance_SW_AttestationTester.AttestationRequest.id
  val AttestationRequestPortIdOpt: Option[Art.PortId] = Some(AttestationRequestPortId)

  def initialiseArchitecture(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, AttestationRequestPortIdOpt)

    Art.run(Arch.ad)
  }

  def initialise(): Unit = {
    entryPoints.initialise()
  }

  def compute(): Unit = {
    var dispatch = F

    {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(AttestationRequestPortIdOpt, out)
      out.value2 match {
        case Some(v: Base_Types.Bits_Payload) => ArtNix.updateData(AttestationRequestPortId, v); dispatch = T
        case Some(v) => halt(s"Unexpected payload on port AttestationRequest.  Expecting something of type Base_Types.Bits_Payload but received ${v}")
        case None() => // do nothing
      }
    }
    if (dispatch) {
      entryPoints.compute()
      Process.sleep(500)
    } else {
      Process.sleep(10)
    }
  }

  def finalise(): Unit = {
    entryPoints.finalise()
  }

  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    initialiseArchitecture(seed)

    Platform.receive(appPortIdOpt, IPCPorts.emptyReceiveOut) // pause after setting up component

    initialise()

    Platform.receive(appPortIdOpt, IPCPorts.emptyReceiveOut) // pause after component init

    println("AttestationTester_Impl_SW_AttestationTester_App starting ...")

    ArtNix.eventDispatch()

    var terminated = F
    while (!terminated) {
      val out = IPCPorts.emptyReceiveAsyncOut
      Platform.receiveAsync(appPortIdOpt, out)
      if (out.value2.isEmpty) {
        compute()
      } else {
        terminated = T
      }
    }
    exit()

    touch()

    return 0
  }

  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      HAMR_Simple_V4.SW.AttestationTester_Impl_SW_AttestationTester_Bridge.c_initialization_api.get.logInfo("")
      HAMR_Simple_V4.SW.AttestationTester_Impl_SW_AttestationTester_Bridge.c_initialization_api.get.logDebug("")
      HAMR_Simple_V4.SW.AttestationTester_Impl_SW_AttestationTester_Bridge.c_initialization_api.get.logError("")
      HAMR_Simple_V4.SW.AttestationTester_Impl_SW_AttestationTester_Bridge.c_operational_api.get.logInfo("")
      HAMR_Simple_V4.SW.AttestationTester_Impl_SW_AttestationTester_Bridge.c_operational_api.get.logDebug("")
      HAMR_Simple_V4.SW.AttestationTester_Impl_SW_AttestationTester_Bridge.c_operational_api.get.logError("")
      val apiUsage_AttestationRequest: Option[Base_Types.Bits] = HAMR_Simple_V4.SW.AttestationTester_Impl_SW_AttestationTester_Bridge.c_operational_api.get.get_AttestationRequest()
      HAMR_Simple_V4.SW.AttestationTester_Impl_SW_AttestationTester_Bridge.c_initialization_api.get.put_AttestationResponse(Base_Types.Bits_example())
      HAMR_Simple_V4.SW.AttestationTester_Impl_SW_AttestationTester_Bridge.c_operational_api.get.put_AttestationResponse(Base_Types.Bits_example())
    }
  }

  def exit(): Unit = {
    finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}
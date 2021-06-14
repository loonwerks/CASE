// #Sireum

// This file was auto-generated.  Do not edit

package CASE_MONITOR2_TEST.Input_impl_Input_Input

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import CASE_MONITOR2_TEST._
import CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_seL4Nix

object Input extends App {

  val InputBridge : CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge = {
    val Observed = Port[Base_Types.Bits] (id = 0, name = "CASE_MONITOR2_TEST_impl_Instance_Input_Input_Observed", mode = EventOut)

    CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge(
      id = 0,
      name = "CASE_MONITOR2_TEST_impl_Instance_Input_Input",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      Observed = Observed
    )
  }

  val entryPoints: Bridge.EntryPoints = InputBridge.entryPoints
  val noData: Option[DataContent] = None()

  // Observed: Out EventDataPort Base_Types.Bits
  val Observed_id: Art.PortId = InputBridge.Observed.id
  var Observed_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    halt(s"Unexpected: Input.getValue called with: ${portId}")
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == Observed_id) {
      Observed_port = Some(data)
    } else {
      halt(s"Unexpected: Input.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(Observed_port.nonEmpty) {
      Input_impl_Input_Input_seL4Nix.Observed_Send(Observed_port.get)
      Observed_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (InputBridge),
      connections = ISZ ()
    )
    Art.run(ad)
  }

  def initialiseEntryPoint(): Unit = { entryPoints.initialise() }

  def computeEntryPoint(): Unit = { entryPoints.compute() }

  def finaliseEntryPoint(): Unit = { entryPoints.finalise() }

  def main(args: ISZ[String]): Z = {

    // need to touch the following for transpiler
    initialiseArchitecture()
    initialiseEntryPoint()
    computeEntryPoint()
    finaliseEntryPoint()

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

      CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge.c_initialization_api.get.logInfo("")
      CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge.c_initialization_api.get.logDebug("")
      CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge.c_initialization_api.get.logError("")
      CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge.c_operational_api.get.logInfo("")
      CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge.c_operational_api.get.logDebug("")
      CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge.c_operational_api.get.logError("")
      CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge.c_initialization_api.get.put_Observed(Base_Types.Bits_example())
      CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge.c_operational_api.get.put_Observed(Base_Types.Bits_example())
    }
  }

  def logInfo(title: String, msg: String): Unit = {
    print(title)
    print(": ")
    println(msg)
  }

  def logError(title: String, msg: String): Unit = {
    eprint(title)
    eprint(": ")
    eprintln(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    print(title)
    print(": ")
    println(msg)
  }

  def run(): Unit = {}

}

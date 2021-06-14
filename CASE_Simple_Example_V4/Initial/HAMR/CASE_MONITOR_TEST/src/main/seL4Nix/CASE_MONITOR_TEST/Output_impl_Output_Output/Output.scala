// #Sireum

// This file was auto-generated.  Do not edit

package CASE_MONITOR_TEST.Output_impl_Output_Output

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import CASE_MONITOR_TEST._
import CASE_MONITOR_TEST.VPM_TEST.Output_impl_Output_Output_seL4Nix

object Output extends App {

  val OutputBridge : CASE_MONITOR_TEST.VPM_TEST.Output_impl_Output_Output_Bridge = {
    val Suspect_Traffic_Out = Port[Base_Types.Bits] (id = 0, name = "CASE_MONITOR_TEST_impl_Instance_Output_Output_Suspect_Traffic_Out", mode = EventIn)

    CASE_MONITOR_TEST.VPM_TEST.Output_impl_Output_Output_Bridge(
      id = 0,
      name = "CASE_MONITOR_TEST_impl_Instance_Output_Output",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      Suspect_Traffic_Out = Suspect_Traffic_Out
    )
  }

  val entryPoints: Bridge.EntryPoints = OutputBridge.entryPoints
  val noData: Option[DataContent] = None()

  // Suspect_Traffic_Out: In EventDataPort Base_Types.Bits
  val Suspect_Traffic_Out_id: Art.PortId = OutputBridge.Suspect_Traffic_Out.id
  var Suspect_Traffic_Out_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == Suspect_Traffic_Out_id) {
      return Suspect_Traffic_Out_port
    } else {
      halt(s"Unexpected: Output.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    Suspect_Traffic_Out_port = Output_impl_Output_Output_seL4Nix.Suspect_Traffic_Out_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    halt(s"Unexpected: Output.putValue called with: ${portId}")
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (OutputBridge),
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

      CASE_MONITOR_TEST.VPM_TEST.Output_impl_Output_Output_Bridge.c_initialization_api.get.logInfo("")
      CASE_MONITOR_TEST.VPM_TEST.Output_impl_Output_Output_Bridge.c_initialization_api.get.logDebug("")
      CASE_MONITOR_TEST.VPM_TEST.Output_impl_Output_Output_Bridge.c_initialization_api.get.logError("")
      CASE_MONITOR_TEST.VPM_TEST.Output_impl_Output_Output_Bridge.c_operational_api.get.logInfo("")
      CASE_MONITOR_TEST.VPM_TEST.Output_impl_Output_Output_Bridge.c_operational_api.get.logDebug("")
      CASE_MONITOR_TEST.VPM_TEST.Output_impl_Output_Output_Bridge.c_operational_api.get.logError("")
      val apiUsage_Suspect_Traffic_Out: Option[Base_Types.Bits] = CASE_MONITOR_TEST.VPM_TEST.Output_impl_Output_Output_Bridge.c_operational_api.get.get_Suspect_Traffic_Out()
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

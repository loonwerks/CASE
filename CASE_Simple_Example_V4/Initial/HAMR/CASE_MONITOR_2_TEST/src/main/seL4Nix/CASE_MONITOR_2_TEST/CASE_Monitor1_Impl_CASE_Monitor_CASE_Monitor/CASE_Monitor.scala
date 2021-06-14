// #Sireum

// This file was auto-generated.  Do not edit

package CASE_MONITOR_2_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import CASE_MONITOR_2_TEST._
import CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_seL4Nix

object CASE_Monitor extends App {

  val CASE_MonitorBridge : CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge = {
    val Observed = Port[Base_Types.Bits] (id = 0, name = "CASE_MONITOR_TEST_impl_1_Instance_CASE_Monitor_CASE_Monitor_Observed", mode = EventIn)
    val Suspect_Traffic_Out = Port[Base_Types.Bits] (id = 1, name = "CASE_MONITOR_TEST_impl_1_Instance_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out", mode = EventOut)

    CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge(
      id = 0,
      name = "CASE_MONITOR_TEST_impl_1_Instance_CASE_Monitor_CASE_Monitor",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      Observed = Observed,
      Suspect_Traffic_Out = Suspect_Traffic_Out
    )
  }

  val entryPoints: Bridge.EntryPoints = CASE_MonitorBridge.entryPoints
  val noData: Option[DataContent] = None()

  // Observed: In EventDataPort Base_Types.Bits
  val Observed_id: Art.PortId = CASE_MonitorBridge.Observed.id
  var Observed_port: Option[DataContent] = noData

  // Suspect_Traffic_Out: Out EventDataPort Base_Types.Bits
  val Suspect_Traffic_Out_id: Art.PortId = CASE_MonitorBridge.Suspect_Traffic_Out.id
  var Suspect_Traffic_Out_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == Observed_id) {
      return Observed_port
    } else {
      halt(s"Unexpected: CASE_Monitor.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    Observed_port = CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_seL4Nix.Observed_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == Suspect_Traffic_Out_id) {
      Suspect_Traffic_Out_port = Some(data)
    } else {
      halt(s"Unexpected: CASE_Monitor.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(Suspect_Traffic_Out_port.nonEmpty) {
      CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_seL4Nix.Suspect_Traffic_Out_Send(Suspect_Traffic_Out_port.get)
      Suspect_Traffic_Out_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (CASE_MonitorBridge),
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

      CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.c_initialization_api.get.logInfo("")
      CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.c_initialization_api.get.logDebug("")
      CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.c_initialization_api.get.logError("")
      CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.c_operational_api.get.logInfo("")
      CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.c_operational_api.get.logDebug("")
      CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.c_operational_api.get.logError("")
      val apiUsage_Observed: Option[Base_Types.Bits] = CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.c_operational_api.get.get_Observed()
      CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.c_initialization_api.get.put_Suspect_Traffic_Out(Base_Types.Bits_example())
      CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.c_operational_api.get.put_Suspect_Traffic_Out(Base_Types.Bits_example())
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

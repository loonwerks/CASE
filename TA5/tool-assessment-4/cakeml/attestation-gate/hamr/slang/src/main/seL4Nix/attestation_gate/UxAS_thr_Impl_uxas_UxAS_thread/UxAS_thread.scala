// #Sireum

// This file was auto-generated.  Do not edit

package attestation_gate.UxAS_thr_Impl_uxas_UxAS_thread

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import attestation_gate._
import attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_seL4Nix

object UxAS_thread extends App {

  val UxAS_threadBridge : attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge = {
    val AutomationRequest = Port[Base_Types.Bits] (id = 0, name = "top_Impl_Instance_uxas_UxAS_thread_AutomationRequest", mode = EventIn)
    val OperatingRegion = Port[Base_Types.Bits] (id = 1, name = "top_Impl_Instance_uxas_UxAS_thread_OperatingRegion", mode = EventIn)
    val LineSearchTask = Port[Base_Types.Bits] (id = 2, name = "top_Impl_Instance_uxas_UxAS_thread_LineSearchTask", mode = EventIn)

    attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge(
      id = 0,
      name = "top_Impl_Instance_uxas_UxAS_thread",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      AutomationRequest = AutomationRequest,
      OperatingRegion = OperatingRegion,
      LineSearchTask = LineSearchTask
    )
  }

  val entryPoints: Bridge.EntryPoints = UxAS_threadBridge.entryPoints
  val noData: Option[DataContent] = None()

  // AutomationRequest: In EventDataPort Base_Types.Bits
  val AutomationRequest_id: Art.PortId = UxAS_threadBridge.AutomationRequest.id
  var AutomationRequest_port: Option[DataContent] = noData

  // OperatingRegion: In EventDataPort Base_Types.Bits
  val OperatingRegion_id: Art.PortId = UxAS_threadBridge.OperatingRegion.id
  var OperatingRegion_port: Option[DataContent] = noData

  // LineSearchTask: In EventDataPort Base_Types.Bits
  val LineSearchTask_id: Art.PortId = UxAS_threadBridge.LineSearchTask.id
  var LineSearchTask_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == AutomationRequest_id) {
      return AutomationRequest_port
    } else if(portId == OperatingRegion_id) {
      return OperatingRegion_port
    } else if(portId == LineSearchTask_id) {
      return LineSearchTask_port
    } else {
      halt(s"Unexpected: UxAS_thread.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    AutomationRequest_port = UxAS_thr_Impl_uxas_UxAS_thread_seL4Nix.AutomationRequest_Receive()

    OperatingRegion_port = UxAS_thr_Impl_uxas_UxAS_thread_seL4Nix.OperatingRegion_Receive()

    LineSearchTask_port = UxAS_thr_Impl_uxas_UxAS_thread_seL4Nix.LineSearchTask_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    halt(s"Unexpected: UxAS_thread.putValue called with: ${portId}")
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (UxAS_threadBridge),
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

      attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_initialization_api.get.logInfo("")
      attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_initialization_api.get.logDebug("")
      attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_initialization_api.get.logError("")
      attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_operational_api.get.logInfo("")
      attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_operational_api.get.logDebug("")
      attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_operational_api.get.logError("")
      val apiUsage_AutomationRequest: Option[Base_Types.Bits] = attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_operational_api.get.get_AutomationRequest()
      val apiUsage_OperatingRegion: Option[Base_Types.Bits] = attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_operational_api.get.get_OperatingRegion()
      val apiUsage_LineSearchTask: Option[Base_Types.Bits] = attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge.c_operational_api.get.get_LineSearchTask()
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

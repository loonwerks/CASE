// #Sireum

package attestation_gate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import attestation_gate._
import attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_seL4Nix

object CASE_AttestationGate extends App {

  val CASE_AttestationGateBridge : attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge = {
    val trusted_ids = Port[Base_Types.Bits] (id = 0, name = "top_Impl_Instance_am_gate_CASE_AttestationGate_trusted_ids", mode = DataIn)
    val AutomationRequest_in = Port[Base_Types.Bits] (id = 1, name = "top_Impl_Instance_am_gate_CASE_AttestationGate_AutomationRequest_in", mode = EventIn)
    val AutomationRequest_out = Port[Base_Types.Bits] (id = 2, name = "top_Impl_Instance_am_gate_CASE_AttestationGate_AutomationRequest_out", mode = EventOut)
    val OperatingRegion_in = Port[Base_Types.Bits] (id = 3, name = "top_Impl_Instance_am_gate_CASE_AttestationGate_OperatingRegion_in", mode = EventIn)
    val OperatingRegion_out = Port[Base_Types.Bits] (id = 4, name = "top_Impl_Instance_am_gate_CASE_AttestationGate_OperatingRegion_out", mode = EventOut)
    val LineSearchTask_in = Port[Base_Types.Bits] (id = 5, name = "top_Impl_Instance_am_gate_CASE_AttestationGate_LineSearchTask_in", mode = EventIn)
    val LineSearchTask_out = Port[Base_Types.Bits] (id = 6, name = "top_Impl_Instance_am_gate_CASE_AttestationGate_LineSearchTask_out", mode = EventOut)

    attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge(
      id = 0,
      name = "top_Impl_Instance_am_gate_CASE_AttestationGate",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      trusted_ids = trusted_ids,
      AutomationRequest_in = AutomationRequest_in,
      AutomationRequest_out = AutomationRequest_out,
      OperatingRegion_in = OperatingRegion_in,
      OperatingRegion_out = OperatingRegion_out,
      LineSearchTask_in = LineSearchTask_in,
      LineSearchTask_out = LineSearchTask_out
    )
  }

  val entryPoints: Bridge.EntryPoints = CASE_AttestationGateBridge.entryPoints
  val noData: Option[DataContent] = None()

  // trusted_ids: In DataPort Base_Types.Bits
  val trusted_ids_id: Art.PortId = CASE_AttestationGateBridge.trusted_ids.id
  var trusted_ids_port: Option[DataContent] = noData

  // AutomationRequest_in: In EventDataPort Base_Types.Bits
  val AutomationRequest_in_id: Art.PortId = CASE_AttestationGateBridge.AutomationRequest_in.id
  var AutomationRequest_in_port: Option[DataContent] = noData

  // AutomationRequest_out: Out EventDataPort Base_Types.Bits
  val AutomationRequest_out_id: Art.PortId = CASE_AttestationGateBridge.AutomationRequest_out.id
  var AutomationRequest_out_port: Option[DataContent] = noData

  // OperatingRegion_in: In EventDataPort Base_Types.Bits
  val OperatingRegion_in_id: Art.PortId = CASE_AttestationGateBridge.OperatingRegion_in.id
  var OperatingRegion_in_port: Option[DataContent] = noData

  // OperatingRegion_out: Out EventDataPort Base_Types.Bits
  val OperatingRegion_out_id: Art.PortId = CASE_AttestationGateBridge.OperatingRegion_out.id
  var OperatingRegion_out_port: Option[DataContent] = noData

  // LineSearchTask_in: In EventDataPort Base_Types.Bits
  val LineSearchTask_in_id: Art.PortId = CASE_AttestationGateBridge.LineSearchTask_in.id
  var LineSearchTask_in_port: Option[DataContent] = noData

  // LineSearchTask_out: Out EventDataPort Base_Types.Bits
  val LineSearchTask_out_id: Art.PortId = CASE_AttestationGateBridge.LineSearchTask_out.id
  var LineSearchTask_out_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == trusted_ids_id) {
      return trusted_ids_port
    } else if(portId == AutomationRequest_in_id) {
      return AutomationRequest_in_port
    } else if(portId == OperatingRegion_in_id) {
      return OperatingRegion_in_port
    } else if(portId == LineSearchTask_in_id) {
      return LineSearchTask_in_port
    } else {
      halt(s"Unexpected: CASE_AttestationGate.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    trusted_ids_port = CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_seL4Nix.trusted_ids_Receive()

    AutomationRequest_in_port = CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_seL4Nix.AutomationRequest_in_Receive()

    OperatingRegion_in_port = CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_seL4Nix.OperatingRegion_in_Receive()

    LineSearchTask_in_port = CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_seL4Nix.LineSearchTask_in_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == AutomationRequest_out_id) {
      AutomationRequest_out_port = Some(data)
    } else if(portId == OperatingRegion_out_id) {
      OperatingRegion_out_port = Some(data)
    } else if(portId == LineSearchTask_out_id) {
      LineSearchTask_out_port = Some(data)
    } else {
      halt(s"Unexpected: CASE_AttestationGate.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(AutomationRequest_out_port.nonEmpty) {
      CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_seL4Nix.AutomationRequest_out_Send(AutomationRequest_out_port.get)
      AutomationRequest_out_port = noData
    }

    if(OperatingRegion_out_port.nonEmpty) {
      CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_seL4Nix.OperatingRegion_out_Send(OperatingRegion_out_port.get)
      OperatingRegion_out_port = noData
    }

    if(LineSearchTask_out_port.nonEmpty) {
      CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_seL4Nix.LineSearchTask_out_Send(LineSearchTask_out_port.get)
      LineSearchTask_out_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (CASE_AttestationGateBridge),
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

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_empty()))
      printDataContent(art.Empty())

      attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_initialization_api.get.logInfo("")
      attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_initialization_api.get.logDebug("")
      attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_initialization_api.get.logError("")
      attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_operational_api.get.logInfo("")
      attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_operational_api.get.logDebug("")
      attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_operational_api.get.logError("")
      val apiUsage_trusted_ids: Option[Base_Types.Bits] = attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_operational_api.get.gettrusted_ids()
      val apiUsage_AutomationRequest_in: Option[Base_Types.Bits] = attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_operational_api.get.getAutomationRequest_in()
      attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_initialization_api.get.sendAutomationRequest_out(Base_Types.Bits_empty())
      attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_operational_api.get.sendAutomationRequest_out(Base_Types.Bits_empty())
      val apiUsage_OperatingRegion_in: Option[Base_Types.Bits] = attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_operational_api.get.getOperatingRegion_in()
      attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_initialization_api.get.sendOperatingRegion_out(Base_Types.Bits_empty())
      attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_operational_api.get.sendOperatingRegion_out(Base_Types.Bits_empty())
      val apiUsage_LineSearchTask_in: Option[Base_Types.Bits] = attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_operational_api.get.getLineSearchTask_in()
      attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_initialization_api.get.sendLineSearchTask_out(Base_Types.Bits_empty())
      attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_operational_api.get.sendLineSearchTask_out(Base_Types.Bits_empty())
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

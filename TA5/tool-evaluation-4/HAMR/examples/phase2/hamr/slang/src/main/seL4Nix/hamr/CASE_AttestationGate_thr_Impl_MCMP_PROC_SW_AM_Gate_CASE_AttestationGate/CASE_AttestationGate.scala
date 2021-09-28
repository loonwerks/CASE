// #Sireum

// This file was auto-generated.  Do not edit

package hamr.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import hamr._
import hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix

object CASE_AttestationGate extends App {

  val CASE_AttestationGateBridge : hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge = {
    val trusted_ids = Port[Base_Types.Bits] (id = 0, name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_trusted_ids", mode = EventIn)
    val AutomationRequest_in = Port[Base_Types.Bits] (id = 1, name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_AutomationRequest_in", mode = EventIn)
    val AutomationRequest_out_UXAS = Port[Base_Types.Bits] (id = 2, name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_AutomationRequest_out_UXAS", mode = EventOut)
    val AutomationRequest_out_MON_REQ = Port[Base_Types.Bits] (id = 3, name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_AutomationRequest_out_MON_REQ", mode = EventOut)
    val OperatingRegion_in = Port[Base_Types.Bits] (id = 4, name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_OperatingRegion_in", mode = EventIn)
    val OperatingRegion_out = Port[Base_Types.Bits] (id = 5, name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_OperatingRegion_out", mode = EventOut)
    val LineSearchTask_in = Port[Base_Types.Bits] (id = 6, name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_LineSearchTask_in", mode = EventIn)
    val LineSearchTask_out = Port[Base_Types.Bits] (id = 7, name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_LineSearchTask_out", mode = EventOut)

    hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge(
      id = 0,
      name = "UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      trusted_ids = trusted_ids,
      AutomationRequest_in = AutomationRequest_in,
      AutomationRequest_out_UXAS = AutomationRequest_out_UXAS,
      AutomationRequest_out_MON_REQ = AutomationRequest_out_MON_REQ,
      OperatingRegion_in = OperatingRegion_in,
      OperatingRegion_out = OperatingRegion_out,
      LineSearchTask_in = LineSearchTask_in,
      LineSearchTask_out = LineSearchTask_out
    )
  }

  val entryPoints: Bridge.EntryPoints = CASE_AttestationGateBridge.entryPoints
  val noData: Option[DataContent] = None()

  // trusted_ids: In EventDataPort Base_Types.Bits
  val trusted_ids_id: Art.PortId = CASE_AttestationGateBridge.trusted_ids.id
  var trusted_ids_port: Option[DataContent] = noData

  // AutomationRequest_in: In EventDataPort Base_Types.Bits
  val AutomationRequest_in_id: Art.PortId = CASE_AttestationGateBridge.AutomationRequest_in.id
  var AutomationRequest_in_port: Option[DataContent] = noData

  // AutomationRequest_out_UXAS: Out EventDataPort Base_Types.Bits
  val AutomationRequest_out_UXAS_id: Art.PortId = CASE_AttestationGateBridge.AutomationRequest_out_UXAS.id
  var AutomationRequest_out_UXAS_port: Option[DataContent] = noData

  // AutomationRequest_out_MON_REQ: Out EventDataPort Base_Types.Bits
  val AutomationRequest_out_MON_REQ_id: Art.PortId = CASE_AttestationGateBridge.AutomationRequest_out_MON_REQ.id
  var AutomationRequest_out_MON_REQ_port: Option[DataContent] = noData

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

    trusted_ids_port = CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix.trusted_ids_Receive()

    AutomationRequest_in_port = CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix.AutomationRequest_in_Receive()

    OperatingRegion_in_port = CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix.OperatingRegion_in_Receive()

    LineSearchTask_in_port = CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix.LineSearchTask_in_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == AutomationRequest_out_UXAS_id) {
      AutomationRequest_out_UXAS_port = Some(data)
    } else if(portId == AutomationRequest_out_MON_REQ_id) {
      AutomationRequest_out_MON_REQ_port = Some(data)
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

    if(AutomationRequest_out_UXAS_port.nonEmpty) {
      CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix.AutomationRequest_out_UXAS_Send(AutomationRequest_out_UXAS_port.get)
      AutomationRequest_out_UXAS_port = noData
    }

    if(AutomationRequest_out_MON_REQ_port.nonEmpty) {
      CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix.AutomationRequest_out_MON_REQ_Send(AutomationRequest_out_MON_REQ_port.get)
      AutomationRequest_out_MON_REQ_port = noData
    }

    if(OperatingRegion_out_port.nonEmpty) {
      CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix.OperatingRegion_out_Send(OperatingRegion_out_port.get)
      OperatingRegion_out_port = noData
    }

    if(LineSearchTask_out_port.nonEmpty) {
      CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix.LineSearchTask_out_Send(LineSearchTask_out_port.get)
      LineSearchTask_out_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    // nothing to do - CAmkES is responsible for initialization
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

      // add types used in Platform.receive and Platform.receiveAsync
      val mbox2Boolean_Payload: MBox2[Art.PortId, DataContent] = MBox2(0, Base_Types.Boolean_Payload(T))
      val mbox2OptionDataContent: MBox2[Art.PortId, Option[DataContent]] = MBox2(0, None())

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_initialization_api.get.logInfo("")
      hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_initialization_api.get.logDebug("")
      hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_initialization_api.get.logError("")
      hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.logInfo("")
      hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.logDebug("")
      hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.logError("")
      val apiUsage_trusted_ids: Option[Base_Types.Bits] = hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.get_trusted_ids()
      val apiUsage_AutomationRequest_in: Option[Base_Types.Bits] = hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.get_AutomationRequest_in()
      hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_initialization_api.get.put_AutomationRequest_out_UXAS(Base_Types.Bits_example())
      hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.put_AutomationRequest_out_UXAS(Base_Types.Bits_example())
      hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_initialization_api.get.put_AutomationRequest_out_MON_REQ(Base_Types.Bits_example())
      hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.put_AutomationRequest_out_MON_REQ(Base_Types.Bits_example())
      val apiUsage_OperatingRegion_in: Option[Base_Types.Bits] = hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.get_OperatingRegion_in()
      hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_initialization_api.get.put_OperatingRegion_out(Base_Types.Bits_example())
      hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.put_OperatingRegion_out(Base_Types.Bits_example())
      val apiUsage_LineSearchTask_in: Option[Base_Types.Bits] = hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.get_LineSearchTask_in()
      hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_initialization_api.get.put_LineSearchTask_out(Base_Types.Bits_example())
      hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api.get.put_LineSearchTask_out(Base_Types.Bits_example())
    }
  }

  def logInfo(title: String, msg: String): Unit = {
    print(CASE_AttestationGateBridge.name)
    print(": ")
    println(msg)
  }

  def logError(title: String, msg: String): Unit = {
    eprint(CASE_AttestationGateBridge.name)
    eprint(": ")
    eprintln(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    print(CASE_AttestationGateBridge.name)
    print(": ")
    println(msg)
  }

  def run(): Unit = {}

}

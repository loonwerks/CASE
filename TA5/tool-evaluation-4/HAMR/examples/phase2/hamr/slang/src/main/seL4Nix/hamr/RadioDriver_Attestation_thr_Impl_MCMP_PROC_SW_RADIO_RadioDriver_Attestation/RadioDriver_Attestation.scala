// #Sireum

// This file was auto-generated.  Do not edit

package hamr.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import hamr._
import hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_seL4Nix

object RadioDriver_Attestation extends App {

  val RadioDriver_AttestationBridge : hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge = {
    val recv_data = Port[Base_Types.Bits] (id = 0, name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_recv_data", mode = EventIn)
    val send_data = Port[Base_Types.Bits] (id = 1, name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_send_data", mode = EventOut)
    val trusted_ids = Port[Base_Types.Bits] (id = 2, name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_trusted_ids", mode = EventOut)
    val AutomationRequest = Port[Base_Types.Bits] (id = 3, name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_AutomationRequest", mode = EventOut)
    val OperatingRegion = Port[Base_Types.Bits] (id = 4, name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_OperatingRegion", mode = EventOut)
    val LineSearchTask = Port[Base_Types.Bits] (id = 5, name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_LineSearchTask", mode = EventOut)

    hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge(
      id = 0,
      name = "UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      recv_data = recv_data,
      send_data = send_data,
      trusted_ids = trusted_ids,
      AutomationRequest = AutomationRequest,
      OperatingRegion = OperatingRegion,
      LineSearchTask = LineSearchTask
    )
  }

  val entryPoints: Bridge.EntryPoints = RadioDriver_AttestationBridge.entryPoints
  val noData: Option[DataContent] = None()

  // recv_data: In EventDataPort Base_Types.Bits
  val recv_data_id: Art.PortId = RadioDriver_AttestationBridge.recv_data.id
  var recv_data_port: Option[DataContent] = noData

  // send_data: Out EventDataPort Base_Types.Bits
  val send_data_id: Art.PortId = RadioDriver_AttestationBridge.send_data.id
  var send_data_port: Option[DataContent] = noData

  // trusted_ids: Out EventDataPort Base_Types.Bits
  val trusted_ids_id: Art.PortId = RadioDriver_AttestationBridge.trusted_ids.id
  var trusted_ids_port: Option[DataContent] = noData

  // AutomationRequest: Out EventDataPort Base_Types.Bits
  val AutomationRequest_id: Art.PortId = RadioDriver_AttestationBridge.AutomationRequest.id
  var AutomationRequest_port: Option[DataContent] = noData

  // OperatingRegion: Out EventDataPort Base_Types.Bits
  val OperatingRegion_id: Art.PortId = RadioDriver_AttestationBridge.OperatingRegion.id
  var OperatingRegion_port: Option[DataContent] = noData

  // LineSearchTask: Out EventDataPort Base_Types.Bits
  val LineSearchTask_id: Art.PortId = RadioDriver_AttestationBridge.LineSearchTask.id
  var LineSearchTask_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == recv_data_id) {
      return recv_data_port
    } else {
      halt(s"Unexpected: RadioDriver_Attestation.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    recv_data_port = RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_seL4Nix.recv_data_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == send_data_id) {
      send_data_port = Some(data)
    } else if(portId == trusted_ids_id) {
      trusted_ids_port = Some(data)
    } else if(portId == AutomationRequest_id) {
      AutomationRequest_port = Some(data)
    } else if(portId == OperatingRegion_id) {
      OperatingRegion_port = Some(data)
    } else if(portId == LineSearchTask_id) {
      LineSearchTask_port = Some(data)
    } else {
      halt(s"Unexpected: RadioDriver_Attestation.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(send_data_port.nonEmpty) {
      RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_seL4Nix.send_data_Send(send_data_port.get)
      send_data_port = noData
    }

    if(trusted_ids_port.nonEmpty) {
      RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_seL4Nix.trusted_ids_Send(trusted_ids_port.get)
      trusted_ids_port = noData
    }

    if(AutomationRequest_port.nonEmpty) {
      RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_seL4Nix.AutomationRequest_Send(AutomationRequest_port.get)
      AutomationRequest_port = noData
    }

    if(OperatingRegion_port.nonEmpty) {
      RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_seL4Nix.OperatingRegion_Send(OperatingRegion_port.get)
      OperatingRegion_port = noData
    }

    if(LineSearchTask_port.nonEmpty) {
      RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_seL4Nix.LineSearchTask_Send(LineSearchTask_port.get)
      LineSearchTask_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (RadioDriver_AttestationBridge),
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

      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.logInfo("")
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.logDebug("")
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.logError("")
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.logInfo("")
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.logDebug("")
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.logError("")
      val apiUsage_recv_data: Option[Base_Types.Bits] = hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.get_recv_data()
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_send_data(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.put_send_data(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_trusted_ids(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.put_trusted_ids(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_AutomationRequest(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.put_AutomationRequest(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_OperatingRegion(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.put_OperatingRegion(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_LineSearchTask(Base_Types.Bits_example())
      hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c_operational_api.get.put_LineSearchTask(Base_Types.Bits_example())
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

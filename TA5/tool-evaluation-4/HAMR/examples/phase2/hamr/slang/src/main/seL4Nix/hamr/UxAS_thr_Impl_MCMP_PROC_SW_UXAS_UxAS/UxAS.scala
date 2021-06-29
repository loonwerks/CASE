// #Sireum

// This file was auto-generated.  Do not edit

package hamr.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import hamr._
import hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_seL4Nix

object UxAS extends App {

  val UxASBridge : hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge = {
    val AutomationRequest = Port[Base_Types.Bits] (id = 0, name = "UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_AutomationRequest", mode = EventIn)
    val AirVehicleState = Port[Base_Types.Bits] (id = 1, name = "UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_AirVehicleState", mode = EventIn)
    val OperatingRegion = Port[Base_Types.Bits] (id = 2, name = "UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_OperatingRegion", mode = EventIn)
    val LineSearchTask = Port[Base_Types.Bits] (id = 3, name = "UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_LineSearchTask", mode = EventIn)
    val AutomationResponse_MON_GEO = Port[Base_Types.Bits] (id = 4, name = "UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_AutomationResponse_MON_GEO", mode = EventOut)
    val AutomationResponse_MON_REQ = Port[Base_Types.Bits] (id = 5, name = "UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_AutomationResponse_MON_REQ", mode = EventOut)

    hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge(
      id = 0,
      name = "UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      AutomationRequest = AutomationRequest,
      AirVehicleState = AirVehicleState,
      OperatingRegion = OperatingRegion,
      LineSearchTask = LineSearchTask,
      AutomationResponse_MON_GEO = AutomationResponse_MON_GEO,
      AutomationResponse_MON_REQ = AutomationResponse_MON_REQ
    )
  }

  val entryPoints: Bridge.EntryPoints = UxASBridge.entryPoints
  val noData: Option[DataContent] = None()

  // AutomationRequest: In EventDataPort Base_Types.Bits
  val AutomationRequest_id: Art.PortId = UxASBridge.AutomationRequest.id
  var AutomationRequest_port: Option[DataContent] = noData

  // AirVehicleState: In EventDataPort Base_Types.Bits
  val AirVehicleState_id: Art.PortId = UxASBridge.AirVehicleState.id
  var AirVehicleState_port: Option[DataContent] = noData

  // OperatingRegion: In EventDataPort Base_Types.Bits
  val OperatingRegion_id: Art.PortId = UxASBridge.OperatingRegion.id
  var OperatingRegion_port: Option[DataContent] = noData

  // LineSearchTask: In EventDataPort Base_Types.Bits
  val LineSearchTask_id: Art.PortId = UxASBridge.LineSearchTask.id
  var LineSearchTask_port: Option[DataContent] = noData

  // AutomationResponse_MON_GEO: Out EventDataPort Base_Types.Bits
  val AutomationResponse_MON_GEO_id: Art.PortId = UxASBridge.AutomationResponse_MON_GEO.id
  var AutomationResponse_MON_GEO_port: Option[DataContent] = noData

  // AutomationResponse_MON_REQ: Out EventDataPort Base_Types.Bits
  val AutomationResponse_MON_REQ_id: Art.PortId = UxASBridge.AutomationResponse_MON_REQ.id
  var AutomationResponse_MON_REQ_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == AutomationRequest_id) {
      return AutomationRequest_port
    } else if(portId == AirVehicleState_id) {
      return AirVehicleState_port
    } else if(portId == OperatingRegion_id) {
      return OperatingRegion_port
    } else if(portId == LineSearchTask_id) {
      return LineSearchTask_port
    } else {
      halt(s"Unexpected: UxAS.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    AutomationRequest_port = UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_seL4Nix.AutomationRequest_Receive()

    AirVehicleState_port = UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_seL4Nix.AirVehicleState_Receive()

    OperatingRegion_port = UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_seL4Nix.OperatingRegion_Receive()

    LineSearchTask_port = UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_seL4Nix.LineSearchTask_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == AutomationResponse_MON_GEO_id) {
      AutomationResponse_MON_GEO_port = Some(data)
    } else if(portId == AutomationResponse_MON_REQ_id) {
      AutomationResponse_MON_REQ_port = Some(data)
    } else {
      halt(s"Unexpected: UxAS.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(AutomationResponse_MON_GEO_port.nonEmpty) {
      UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_seL4Nix.AutomationResponse_MON_GEO_Send(AutomationResponse_MON_GEO_port.get)
      AutomationResponse_MON_GEO_port = noData
    }

    if(AutomationResponse_MON_REQ_port.nonEmpty) {
      UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_seL4Nix.AutomationResponse_MON_REQ_Send(AutomationResponse_MON_REQ_port.get)
      AutomationResponse_MON_REQ_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (UxASBridge),
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

      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_initialization_api.get.logInfo("")
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_initialization_api.get.logDebug("")
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_initialization_api.get.logError("")
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.logInfo("")
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.logDebug("")
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.logError("")
      val apiUsage_AutomationRequest: Option[Base_Types.Bits] = hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.get_AutomationRequest()
      val apiUsage_AirVehicleState: Option[Base_Types.Bits] = hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.get_AirVehicleState()
      val apiUsage_OperatingRegion: Option[Base_Types.Bits] = hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.get_OperatingRegion()
      val apiUsage_LineSearchTask: Option[Base_Types.Bits] = hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.get_LineSearchTask()
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_initialization_api.get.put_AutomationResponse_MON_GEO(Base_Types.Bits_example())
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.put_AutomationResponse_MON_GEO(Base_Types.Bits_example())
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_initialization_api.get.put_AutomationResponse_MON_REQ(Base_Types.Bits_example())
      hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c_operational_api.get.put_AutomationResponse_MON_REQ(Base_Types.Bits_example())
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

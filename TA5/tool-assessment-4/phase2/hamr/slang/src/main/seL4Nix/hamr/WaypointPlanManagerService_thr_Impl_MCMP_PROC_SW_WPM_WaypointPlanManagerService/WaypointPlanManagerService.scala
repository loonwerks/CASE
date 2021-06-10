// #Sireum

// This file was auto-generated.  Do not edit

package hamr.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import hamr._
import hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix

object WaypointPlanManagerService extends App {

  val WaypointPlanManagerServiceBridge : hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge = {
    val AutomationResponse = Port[Base_Types.Bits] (id = 0, name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService_AutomationResponse", mode = EventIn)
    val AirVehicleState = Port[Base_Types.Bits] (id = 1, name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService_AirVehicleState", mode = EventIn)
    val MissionCommand = Port[Base_Types.Bits] (id = 2, name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService_MissionCommand", mode = EventOut)
    val ReturnHome = Port[art.Empty] (id = 3, name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService_ReturnHome", mode = EventIn)

    hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge(
      id = 0,
      name = "UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      AutomationResponse = AutomationResponse,
      AirVehicleState = AirVehicleState,
      MissionCommand = MissionCommand,
      ReturnHome = ReturnHome
    )
  }

  val entryPoints: Bridge.EntryPoints = WaypointPlanManagerServiceBridge.entryPoints
  val noData: Option[DataContent] = None()

  // AutomationResponse: In EventDataPort Base_Types.Bits
  val AutomationResponse_id: Art.PortId = WaypointPlanManagerServiceBridge.AutomationResponse.id
  var AutomationResponse_port: Option[DataContent] = noData

  // AirVehicleState: In EventDataPort Base_Types.Bits
  val AirVehicleState_id: Art.PortId = WaypointPlanManagerServiceBridge.AirVehicleState.id
  var AirVehicleState_port: Option[DataContent] = noData

  // MissionCommand: Out EventDataPort Base_Types.Bits
  val MissionCommand_id: Art.PortId = WaypointPlanManagerServiceBridge.MissionCommand.id
  var MissionCommand_port: Option[DataContent] = noData

  // ReturnHome: In EventPort art.Empty
  val ReturnHome_id: Art.PortId = WaypointPlanManagerServiceBridge.ReturnHome.id
  var ReturnHome_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == AutomationResponse_id) {
      return AutomationResponse_port
    } else if(portId == AirVehicleState_id) {
      return AirVehicleState_port
    } else if(portId == ReturnHome_id) {
      return ReturnHome_port
    } else {
      halt(s"Unexpected: WaypointPlanManagerService.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    AutomationResponse_port = WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix.AutomationResponse_Receive()

    AirVehicleState_port = WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix.AirVehicleState_Receive()

    ReturnHome_port = WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix.ReturnHome_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == MissionCommand_id) {
      MissionCommand_port = Some(data)
    } else {
      halt(s"Unexpected: WaypointPlanManagerService.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(MissionCommand_port.nonEmpty) {
      WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix.MissionCommand_Send(MissionCommand_port.get)
      MissionCommand_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (WaypointPlanManagerServiceBridge),
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

      hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_initialization_api.get.logInfo("")
      hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_initialization_api.get.logDebug("")
      hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_initialization_api.get.logError("")
      hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.logInfo("")
      hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.logDebug("")
      hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.logError("")
      val apiUsage_AutomationResponse: Option[Base_Types.Bits] = hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.get_AutomationResponse()
      val apiUsage_AirVehicleState: Option[Base_Types.Bits] = hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.get_AirVehicleState()
      hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_initialization_api.get.put_MissionCommand(Base_Types.Bits_example())
      hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.put_MissionCommand(Base_Types.Bits_example())
      val apiUsage_ReturnHome: Option[art.Empty] = hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api.get.get_ReturnHome()
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

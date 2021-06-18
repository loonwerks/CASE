// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._
import hamr.SW.{WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService => component}

// This file was auto-generated.  Do not edit

@datatype class WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  AutomationResponse: Port[Base_Types.Bits],
  AirVehicleState: Port[Base_Types.Bits],
  MissionCommand: Port[Base_Types.Bits],
  ReturnHome: Port[art.Empty]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(AutomationResponse,
              AirVehicleState,
              MissionCommand,
              ReturnHome),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(AutomationResponse,
                   AirVehicleState,
                   ReturnHome),

    eventOuts = ISZ(MissionCommand)
  )

  val initialization_api : WaypointPlanManagerService_thr_Impl_Initialization_Api = {
    val api = WaypointPlanManagerService_thr_Impl_Initialization_Api(
      id,
      AutomationResponse.id,
      AirVehicleState.id,
      MissionCommand.id,
      ReturnHome.id
    )
    WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : WaypointPlanManagerService_thr_Impl_Operational_Api = {
    val api = WaypointPlanManagerService_thr_Impl_Operational_Api(
      id,
      AutomationResponse.id,
      AirVehicleState.id,
      MissionCommand.id,
      ReturnHome.id
    )
    WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.EntryPoints(
      id,

      AutomationResponse.id,
      AirVehicleState.id,
      MissionCommand.id,
      ReturnHome.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge {

  var c_initialization_api: Option[WaypointPlanManagerService_thr_Impl_Initialization_Api] = None()
  var c_operational_api: Option[WaypointPlanManagerService_thr_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_BridgeId : Art.BridgeId,

    AutomationResponse_Id : Art.PortId,
    AirVehicleState_Id : Art.PortId,
    MissionCommand_Id : Art.PortId,
    ReturnHome_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: WaypointPlanManagerService_thr_Impl_Initialization_Api,
    operational_api: WaypointPlanManagerService_thr_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(AutomationResponse_Id,
                                              AirVehicleState_Id,
                                              ReturnHome_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(MissionCommand_Id)

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: WaypointPlanManagerService_thr_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: WaypointPlanManagerService_thr_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: WaypointPlanManagerService_thr_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: WaypointPlanManagerService_thr_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: WaypointPlanManagerService_thr_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: WaypointPlanManagerService_thr_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: WaypointPlanManagerService_thr_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
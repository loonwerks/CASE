// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._
import HAMR.SW.{WaypointManager_Impl_SW_WaypointManager_WaypointManager => component}

// This file was auto-generated.  Do not edit

@record class WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  FlightPlan: Port[SW.Mission],
  MissionWindow: Port[SW.MissionWindow],
  Status: Port[SW.Coordinate_Impl],
  ReturnHome: Port[art.Empty]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(FlightPlan,
              MissionWindow,
              Status,
              ReturnHome),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(FlightPlan,
                   Status,
                   ReturnHome),

    eventOuts = ISZ(MissionWindow)
  )

  val initialization_api : WaypointManager_Impl_Initialization_Api = {
    val api = WaypointManager_Impl_Initialization_Api(
      id,
      FlightPlan.id,
      MissionWindow.id,
      Status.id,
      ReturnHome.id
    )
    WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : WaypointManager_Impl_Operational_Api = {
    val api = WaypointManager_Impl_Operational_Api(
      id,
      FlightPlan.id,
      MissionWindow.id,
      Status.id,
      ReturnHome.id
    )
    WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge.EntryPoints(
      id,

      FlightPlan.id,
      MissionWindow.id,
      Status.id,
      ReturnHome.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge {

  var c_initialization_api: Option[WaypointManager_Impl_Initialization_Api] = None()
  var c_operational_api: Option[WaypointManager_Impl_Operational_Api] = None()

  @record class EntryPoints(
    WaypointManager_Impl_SW_WaypointManager_WaypointManager_BridgeId : Art.BridgeId,

    FlightPlan_Id : Art.PortId,
    MissionWindow_Id : Art.PortId,
    Status_Id : Art.PortId,
    ReturnHome_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: WaypointManager_Impl_Initialization_Api,
    operational_api: WaypointManager_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(FlightPlan_Id,
                                              Status_Id,
                                              ReturnHome_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(MissionWindow_Id)

    def compute(): Unit = {
      // transpiler friendly filter
      def filter(receivedEvents: ISZ[Art.PortId], triggers: ISZ[Art.PortId]): ISZ[Art.PortId] = {
        var r = ISZ[Art.PortId]()
        val opsTriggers = ops.ISZOps(triggers)
        for(e <- receivedEvents) {
          if(opsTriggers.contains(e)) {
            r = r :+ e
          }
        }
        return r
      }

      // fetch received events ordered by highest urgency then earliest arrival-time
      val EventTriggered(receivedEvents) = Art.dispatchStatus(WaypointManager_Impl_SW_WaypointManager_WaypointManager_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == FlightPlan_Id){
          val Some(SW.Mission_Payload(value)) = Art.getValue(FlightPlan_Id)

          // implement the following in 'component':  def handle_FlightPlan(api: WaypointManager_Impl_Operational_Api, value: SW.Mission): Unit = {}
          component.handle_FlightPlan(operational_api, value)
        }
        else if(portId == Status_Id){
          val Some(SW.Coordinate_Impl_Payload(value)) = Art.getValue(Status_Id)

          // implement the following in 'component':  def handle_Status(api: WaypointManager_Impl_Operational_Api, value: SW.Coordinate_Impl): Unit = {}
          component.handle_Status(operational_api, value)
        }
        else if(portId == ReturnHome_Id) {
          // implement the following in 'component':  def handle_ReturnHome(api: WaypointManager_Impl_Operational_Api): Unit = {}
          component.handle_ReturnHome(operational_api)
        }
      }

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      // transpiler friendly filter
      def filter(receivedEvents: ISZ[Art.PortId], triggers: ISZ[Art.PortId]): ISZ[Art.PortId] = {
        var r = ISZ[Art.PortId]()
        val opsTriggers = ops.ISZOps(triggers)
        for(e <- receivedEvents) {
          if(opsTriggers.contains(e)) {
            r = r :+ e
          }
        }
        return r
      }

      // fetch received events ordered by highest urgency then earliest arrival-time
      val EventTriggered(receivedEvents) = Art.dispatchStatus(WaypointManager_Impl_SW_WaypointManager_WaypointManager_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == FlightPlan_Id){
          val Some(SW.Mission_Payload(value)) = Art.getValue(FlightPlan_Id)

          // implement the following in 'component':  def handle_FlightPlan(api: WaypointManager_Impl_Operational_Api, value: SW.Mission): Unit = {}
          component.handle_FlightPlan(operational_api, value)
        }
        else if(portId == Status_Id){
          val Some(SW.Coordinate_Impl_Payload(value)) = Art.getValue(Status_Id)

          // implement the following in 'component':  def handle_Status(api: WaypointManager_Impl_Operational_Api, value: SW.Coordinate_Impl): Unit = {}
          component.handle_Status(operational_api, value)
        }
        else if(portId == ReturnHome_Id) {
          // implement the following in 'component':  def handle_ReturnHome(api: WaypointManager_Impl_Operational_Api): Unit = {}
          component.handle_ReturnHome(operational_api)
        }
      }

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: WaypointManager_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: WaypointManager_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: WaypointManager_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: WaypointManager_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: WaypointManager_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
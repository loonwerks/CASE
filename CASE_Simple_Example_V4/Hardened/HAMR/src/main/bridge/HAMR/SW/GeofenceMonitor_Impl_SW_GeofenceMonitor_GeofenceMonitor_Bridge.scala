// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._
import HAMR.SW.{GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor => component}

// This file was auto-generated.  Do not edit

@record class GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  FlyZones: Port[SW.MapArray],
  FlightPlan_In: Port[SW.Mission],
  FlightPlan_Out: Port[SW.Mission],
  Alert: Port[art.Empty]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(FlyZones,
              FlightPlan_In,
              FlightPlan_Out,
              Alert),

    dataIns = ISZ(FlyZones),

    dataOuts = ISZ(),

    eventIns = ISZ(FlightPlan_In),

    eventOuts = ISZ(FlightPlan_Out,
                    Alert)
  )

  val initialization_api : GeofenceMonitor_Impl_Initialization_Api = {
    val api = GeofenceMonitor_Impl_Initialization_Api(
      id,
      FlyZones.id,
      FlightPlan_In.id,
      FlightPlan_Out.id,
      Alert.id
    )
    GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : GeofenceMonitor_Impl_Operational_Api = {
    val api = GeofenceMonitor_Impl_Operational_Api(
      id,
      FlyZones.id,
      FlightPlan_In.id,
      FlightPlan_Out.id,
      Alert.id
    )
    GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge.EntryPoints(
      id,

      FlyZones.id,
      FlightPlan_In.id,
      FlightPlan_Out.id,
      Alert.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge {

  var c_initialization_api: Option[GeofenceMonitor_Impl_Initialization_Api] = None()
  var c_operational_api: Option[GeofenceMonitor_Impl_Operational_Api] = None()

  @record class EntryPoints(
    GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_BridgeId : Art.BridgeId,

    FlyZones_Id : Art.PortId,
    FlightPlan_In_Id : Art.PortId,
    FlightPlan_Out_Id : Art.PortId,
    Alert_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: GeofenceMonitor_Impl_Initialization_Api,
    operational_api: GeofenceMonitor_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ(FlyZones_Id)

    val eventInPortIds: ISZ[Art.PortId] = ISZ(FlightPlan_In_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(FlightPlan_Out_Id,
                                               Alert_Id)

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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == FlightPlan_In_Id){
          val Some(SW.Mission_Payload(value)) = Art.getValue(FlightPlan_In_Id)

          // implement the following in 'component':  def handle_FlightPlan_In(api: GeofenceMonitor_Impl_Operational_Api, value: SW.Mission): Unit = {}
          component.handle_FlightPlan_In(operational_api, value)
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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == FlightPlan_In_Id){
          val Some(SW.Mission_Payload(value)) = Art.getValue(FlightPlan_In_Id)

          // implement the following in 'component':  def handle_FlightPlan_In(api: GeofenceMonitor_Impl_Operational_Api, value: SW.Mission): Unit = {}
          component.handle_FlightPlan_In(operational_api, value)
        }
      }

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: GeofenceMonitor_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: GeofenceMonitor_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: GeofenceMonitor_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: GeofenceMonitor_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: GeofenceMonitor_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
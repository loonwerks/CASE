// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._
import HAMR.SW.{ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor => component}

// This file was auto-generated.  Do not edit

@record class ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  FlightPlan: Port[SW.Mission],
  MissionCommand: Port[SW.RF_Msg_Impl],
  Alert: Port[art.Empty]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(FlightPlan,
              MissionCommand,
              Alert),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(FlightPlan,
                   MissionCommand),

    eventOuts = ISZ(Alert)
  )

  val initialization_api : ResponseMonitor_Impl_Initialization_Api = {
    val api = ResponseMonitor_Impl_Initialization_Api(
      id,
      FlightPlan.id,
      MissionCommand.id,
      Alert.id
    )
    ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : ResponseMonitor_Impl_Operational_Api = {
    val api = ResponseMonitor_Impl_Operational_Api(
      id,
      FlightPlan.id,
      MissionCommand.id,
      Alert.id
    )
    ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_Bridge.EntryPoints(
      id,

      FlightPlan.id,
      MissionCommand.id,
      Alert.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_Bridge {

  var c_initialization_api: Option[ResponseMonitor_Impl_Initialization_Api] = None()
  var c_operational_api: Option[ResponseMonitor_Impl_Operational_Api] = None()

  @record class EntryPoints(
    ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_BridgeId : Art.BridgeId,

    FlightPlan_Id : Art.PortId,
    MissionCommand_Id : Art.PortId,
    Alert_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: ResponseMonitor_Impl_Initialization_Api,
    operational_api: ResponseMonitor_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(FlightPlan_Id,
                                              MissionCommand_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(Alert_Id)

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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == FlightPlan_Id){
          val Some(SW.Mission_Payload(value)) = Art.getValue(FlightPlan_Id)

          // implement the following in 'component':  def handle_FlightPlan(api: ResponseMonitor_Impl_Operational_Api, value: SW.Mission): Unit = {}
          component.handle_FlightPlan(operational_api, value)
        }
        else if(portId == MissionCommand_Id){
          val Some(SW.RF_Msg_Impl_Payload(value)) = Art.getValue(MissionCommand_Id)

          // implement the following in 'component':  def handle_MissionCommand(api: ResponseMonitor_Impl_Operational_Api, value: SW.RF_Msg_Impl): Unit = {}
          component.handle_MissionCommand(operational_api, value)
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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == FlightPlan_Id){
          val Some(SW.Mission_Payload(value)) = Art.getValue(FlightPlan_Id)

          // implement the following in 'component':  def handle_FlightPlan(api: ResponseMonitor_Impl_Operational_Api, value: SW.Mission): Unit = {}
          component.handle_FlightPlan(operational_api, value)
        }
        else if(portId == MissionCommand_Id){
          val Some(SW.RF_Msg_Impl_Payload(value)) = Art.getValue(MissionCommand_Id)

          // implement the following in 'component':  def handle_MissionCommand(api: ResponseMonitor_Impl_Operational_Api, value: SW.RF_Msg_Impl): Unit = {}
          component.handle_MissionCommand(operational_api, value)
        }
      }

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: ResponseMonitor_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: ResponseMonitor_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: ResponseMonitor_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: ResponseMonitor_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: ResponseMonitor_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._
import HAMR.SW.{Monitor_Impl_SW_Monitor_Monitor => component}

// This file was auto-generated.  Do not edit

@datatype class Monitor_Impl_SW_Monitor_Monitor_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  FlightPlan_in: Port[Base_Types.Bits],
  FlightPlan_out: Port[Base_Types.Bits],
  Alert: Port[art.Empty]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(FlightPlan_in,
              FlightPlan_out,
              Alert),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(FlightPlan_in),

    eventOuts = ISZ(FlightPlan_out,
                    Alert)
  )

  val initialization_api : Monitor_Impl_Initialization_Api = {
    val api = Monitor_Impl_Initialization_Api(
      id,
      FlightPlan_in.id,
      FlightPlan_out.id,
      Alert.id
    )
    Monitor_Impl_SW_Monitor_Monitor_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : Monitor_Impl_Operational_Api = {
    val api = Monitor_Impl_Operational_Api(
      id,
      FlightPlan_in.id,
      FlightPlan_out.id,
      Alert.id
    )
    Monitor_Impl_SW_Monitor_Monitor_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    Monitor_Impl_SW_Monitor_Monitor_Bridge.EntryPoints(
      id,

      FlightPlan_in.id,
      FlightPlan_out.id,
      Alert.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object Monitor_Impl_SW_Monitor_Monitor_Bridge {

  var c_initialization_api: Option[Monitor_Impl_Initialization_Api] = None()
  var c_operational_api: Option[Monitor_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    Monitor_Impl_SW_Monitor_Monitor_BridgeId : Art.BridgeId,

    FlightPlan_in_Id : Art.PortId,
    FlightPlan_out_Id : Art.PortId,
    Alert_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: Monitor_Impl_Initialization_Api,
    operational_api: Monitor_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(FlightPlan_in_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(FlightPlan_out_Id,
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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(Monitor_Impl_SW_Monitor_Monitor_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == FlightPlan_in_Id){
          val Some(Base_Types.Bits_Payload(value)) = Art.getValue(FlightPlan_in_Id)

          // implement the following in 'component':  def handle_FlightPlan_in(api: Monitor_Impl_Operational_Api, value: Base_Types.Bits): Unit = {}
          component.handle_FlightPlan_in(operational_api, value)
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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(Monitor_Impl_SW_Monitor_Monitor_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == FlightPlan_in_Id){
          val Some(Base_Types.Bits_Payload(value)) = Art.getValue(FlightPlan_in_Id)

          // implement the following in 'component':  def handle_FlightPlan_in(api: Monitor_Impl_Operational_Api, value: Base_Types.Bits): Unit = {}
          component.handle_FlightPlan_in(operational_api, value)
        }
      }

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: Monitor_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: Monitor_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: Monitor_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: Monitor_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: Monitor_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
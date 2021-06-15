// #Sireum

package HAMR_Simple_V4.SW

import org.sireum._
import art._
import HAMR_Simple_V4._
import HAMR_Simple_V4.SW.{FlightController_Impl_SW_FlightController_FlightController => component}

// This file was auto-generated.  Do not edit

@datatype class FlightController_Impl_SW_FlightController_FlightController_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  FlightPlan: Port[Base_Types.Bits],
  Alert: Port[art.Empty]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(FlightPlan,
              Alert),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(FlightPlan,
                   Alert),

    eventOuts = ISZ()
  )

  val initialization_api : FlightController_Impl_Initialization_Api = {
    val api = FlightController_Impl_Initialization_Api(
      id,
      FlightPlan.id,
      Alert.id
    )
    FlightController_Impl_SW_FlightController_FlightController_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : FlightController_Impl_Operational_Api = {
    val api = FlightController_Impl_Operational_Api(
      id,
      FlightPlan.id,
      Alert.id
    )
    FlightController_Impl_SW_FlightController_FlightController_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    FlightController_Impl_SW_FlightController_FlightController_Bridge.EntryPoints(
      id,

      FlightPlan.id,
      Alert.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object FlightController_Impl_SW_FlightController_FlightController_Bridge {

  var c_initialization_api: Option[FlightController_Impl_Initialization_Api] = None()
  var c_operational_api: Option[FlightController_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    FlightController_Impl_SW_FlightController_FlightController_BridgeId : Art.BridgeId,

    FlightPlan_Id : Art.PortId,
    Alert_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: FlightController_Impl_Initialization_Api,
    operational_api: FlightController_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(FlightPlan_Id,
                                              Alert_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ()

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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(FlightController_Impl_SW_FlightController_FlightController_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == FlightPlan_Id){
          val Some(Base_Types.Bits_Payload(value)) = Art.getValue(FlightPlan_Id)

          // implement the following in 'component':  def handle_FlightPlan(api: FlightController_Impl_Operational_Api, value: Base_Types.Bits): Unit = {}
          component.handle_FlightPlan(operational_api, value)
        }
        else if(portId == Alert_Id) {
          // implement the following in 'component':  def handle_Alert(api: FlightController_Impl_Operational_Api): Unit = {}
          component.handle_Alert(operational_api)
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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(FlightController_Impl_SW_FlightController_FlightController_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == FlightPlan_Id){
          val Some(Base_Types.Bits_Payload(value)) = Art.getValue(FlightPlan_Id)

          // implement the following in 'component':  def handle_FlightPlan(api: FlightController_Impl_Operational_Api, value: Base_Types.Bits): Unit = {}
          component.handle_FlightPlan(operational_api, value)
        }
        else if(portId == Alert_Id) {
          // implement the following in 'component':  def handle_Alert(api: FlightController_Impl_Operational_Api): Unit = {}
          component.handle_Alert(operational_api)
        }
      }

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: FlightController_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: FlightController_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: FlightController_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: FlightController_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: FlightController_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
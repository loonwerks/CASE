// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._
import HAMR.SW.{Filter_Impl_SW_Filter_Filter => component}

// This file was auto-generated.  Do not edit

@datatype class Filter_Impl_SW_Filter_Filter_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  Input: Port[Base_Types.Bits],
  Output: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(Input,
              Output),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(Input),

    eventOuts = ISZ(Output)
  )

  val initialization_api : Filter_Impl_Initialization_Api = {
    val api = Filter_Impl_Initialization_Api(
      id,
      Input.id,
      Output.id
    )
    Filter_Impl_SW_Filter_Filter_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : Filter_Impl_Operational_Api = {
    val api = Filter_Impl_Operational_Api(
      id,
      Input.id,
      Output.id
    )
    Filter_Impl_SW_Filter_Filter_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    Filter_Impl_SW_Filter_Filter_Bridge.EntryPoints(
      id,

      Input.id,
      Output.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object Filter_Impl_SW_Filter_Filter_Bridge {

  var c_initialization_api: Option[Filter_Impl_Initialization_Api] = None()
  var c_operational_api: Option[Filter_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    Filter_Impl_SW_Filter_Filter_BridgeId : Art.BridgeId,

    Input_Id : Art.PortId,
    Output_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: Filter_Impl_Initialization_Api,
    operational_api: Filter_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(Input_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(Output_Id)

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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(Filter_Impl_SW_Filter_Filter_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == Input_Id){
          val Some(Base_Types.Bits_Payload(value)) = Art.getValue(Input_Id)

          // implement the following in 'component':  def handle_Input(api: Filter_Impl_Operational_Api, value: Base_Types.Bits): Unit = {}
          component.handle_Input(operational_api, value)
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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(Filter_Impl_SW_Filter_Filter_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == Input_Id){
          val Some(Base_Types.Bits_Payload(value)) = Art.getValue(Input_Id)

          // implement the following in 'component':  def handle_Input(api: Filter_Impl_Operational_Api, value: Base_Types.Bits): Unit = {}
          component.handle_Input(operational_api, value)
        }
      }

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: Filter_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: Filter_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: Filter_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: Filter_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: Filter_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
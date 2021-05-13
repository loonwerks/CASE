// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._
import HAMR.SW.{UARTDriver_Impl_SW_UART_UARTDriver => component}

// This file was auto-generated.  Do not edit

@record class UARTDriver_Impl_SW_UART_UARTDriver_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  Status: Port[SW.Coordinate_Impl],
  MissionWindow: Port[SW.MissionWindow]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(Status,
              MissionWindow),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(MissionWindow),

    eventOuts = ISZ(Status)
  )

  val initialization_api : UARTDriver_Impl_Initialization_Api = {
    val api = UARTDriver_Impl_Initialization_Api(
      id,
      Status.id,
      MissionWindow.id
    )
    UARTDriver_Impl_SW_UART_UARTDriver_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : UARTDriver_Impl_Operational_Api = {
    val api = UARTDriver_Impl_Operational_Api(
      id,
      Status.id,
      MissionWindow.id
    )
    UARTDriver_Impl_SW_UART_UARTDriver_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    UARTDriver_Impl_SW_UART_UARTDriver_Bridge.EntryPoints(
      id,

      Status.id,
      MissionWindow.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object UARTDriver_Impl_SW_UART_UARTDriver_Bridge {

  var c_initialization_api: Option[UARTDriver_Impl_Initialization_Api] = None()
  var c_operational_api: Option[UARTDriver_Impl_Operational_Api] = None()

  @record class EntryPoints(
    UARTDriver_Impl_SW_UART_UARTDriver_BridgeId : Art.BridgeId,

    Status_Id : Art.PortId,
    MissionWindow_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: UARTDriver_Impl_Initialization_Api,
    operational_api: UARTDriver_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(MissionWindow_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(Status_Id)

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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(UARTDriver_Impl_SW_UART_UARTDriver_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == MissionWindow_Id){
          val Some(SW.MissionWindow_Payload(value)) = Art.getValue(MissionWindow_Id)

          // implement the following in 'component':  def handle_MissionWindow(api: UARTDriver_Impl_Operational_Api, value: SW.MissionWindow): Unit = {}
          component.handle_MissionWindow(operational_api, value)
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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(UARTDriver_Impl_SW_UART_UARTDriver_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
        if(portId == MissionWindow_Id){
          val Some(SW.MissionWindow_Payload(value)) = Art.getValue(MissionWindow_Id)

          // implement the following in 'component':  def handle_MissionWindow(api: UARTDriver_Impl_Operational_Api, value: SW.MissionWindow): Unit = {}
          component.handle_MissionWindow(operational_api, value)
        }
      }

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: UARTDriver_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: UARTDriver_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: UARTDriver_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: UARTDriver_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: UARTDriver_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
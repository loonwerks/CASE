// #Sireum

package HAMR_Simple_V4.SW

import org.sireum._
import art._
import HAMR_Simple_V4._
import HAMR_Simple_V4.SW.{RadioDriver_Impl_SW_Radio => component}

// This file was auto-generated.  Do not edit

@datatype class RadioDriver_Impl_SW_Radio_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  MissionCommand: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(MissionCommand),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(),

    eventOuts = ISZ(MissionCommand)
  )

  val initialization_api : RadioDriver_Impl_Initialization_Api = {
    val api = RadioDriver_Impl_Initialization_Api(
      id,
      MissionCommand.id
    )
    RadioDriver_Impl_SW_Radio_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : RadioDriver_Impl_Operational_Api = {
    val api = RadioDriver_Impl_Operational_Api(
      id,
      MissionCommand.id
    )
    RadioDriver_Impl_SW_Radio_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    RadioDriver_Impl_SW_Radio_Bridge.EntryPoints(
      id,

      MissionCommand.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object RadioDriver_Impl_SW_Radio_Bridge {

  var c_initialization_api: Option[RadioDriver_Impl_Initialization_Api] = None()
  var c_operational_api: Option[RadioDriver_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    RadioDriver_Impl_SW_Radio_BridgeId : Art.BridgeId,

    MissionCommand_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: RadioDriver_Impl_Initialization_Api,
    operational_api: RadioDriver_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ()

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(MissionCommand_Id)

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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(RadioDriver_Impl_SW_Radio_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(RadioDriver_Impl_SW_Radio_BridgeId)

      // remove non-dispatching event ports
      val dispatchableEventPorts: ISZ[Art.PortId] =
        if(dispatchTriggers.isEmpty) receivedEvents
        else filter(receivedEvents, dispatchTriggers.get)

      Art.receiveInput(eventInPortIds, dataInPortIds)

      for(portId <- dispatchableEventPorts) {
      }

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: RadioDriver_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: RadioDriver_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: RadioDriver_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: RadioDriver_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: RadioDriver_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
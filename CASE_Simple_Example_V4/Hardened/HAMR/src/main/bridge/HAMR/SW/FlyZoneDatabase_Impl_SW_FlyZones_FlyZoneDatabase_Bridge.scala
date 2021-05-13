// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._
import HAMR.SW.{FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase => component}

// This file was auto-generated.  Do not edit

@record class FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  FlyZones: Port[SW.MapArray]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(FlyZones),

    dataIns = ISZ(),

    dataOuts = ISZ(FlyZones),

    eventIns = ISZ(),

    eventOuts = ISZ()
  )

  val initialization_api : FlyZoneDatabase_Impl_Initialization_Api = {
    val api = FlyZoneDatabase_Impl_Initialization_Api(
      id,
      FlyZones.id
    )
    FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : FlyZoneDatabase_Impl_Operational_Api = {
    val api = FlyZoneDatabase_Impl_Operational_Api(
      id,
      FlyZones.id
    )
    FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge.EntryPoints(
      id,

      FlyZones.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge {

  var c_initialization_api: Option[FlyZoneDatabase_Impl_Initialization_Api] = None()
  var c_operational_api: Option[FlyZoneDatabase_Impl_Operational_Api] = None()

  @record class EntryPoints(
    FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_BridgeId : Art.BridgeId,

    FlyZones_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: FlyZoneDatabase_Impl_Initialization_Api,
    operational_api: FlyZoneDatabase_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ()

    val dataOutPortIds: ISZ[Art.PortId] = ISZ(FlyZones_Id)

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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_BridgeId)

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
      val EventTriggered(receivedEvents) = Art.dispatchStatus(FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_BridgeId)

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
      // implement the following method in 'component':  def activate(api: FlyZoneDatabase_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: FlyZoneDatabase_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: FlyZoneDatabase_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: FlyZoneDatabase_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: FlyZoneDatabase_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
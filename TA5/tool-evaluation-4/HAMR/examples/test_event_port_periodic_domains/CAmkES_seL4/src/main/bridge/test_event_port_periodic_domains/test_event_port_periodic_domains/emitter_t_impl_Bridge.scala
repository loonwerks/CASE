// #Sireum

package test_event_port_periodic_domains.test_event_port_periodic_domains

import org.sireum._
import art._
import test_event_port_periodic_domains._

// This file was auto-generated.  Do not edit

@record class emitter_t_impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  emit: Port[art.Empty]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(emit),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(),

    eventOuts = ISZ(emit)
  )

  val api : emitter_t_impl_Bridge.Api =
    emitter_t_impl_Bridge.Api(
      id,
      emit.id
    )

  val entryPoints : Bridge.EntryPoints =
    emitter_t_impl_Bridge.EntryPoints(
      id,

      emit.id,

      dispatchTriggers,

      emitter_t_impl_Impl(api)
    )
}

object emitter_t_impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    emit_Id : Art.PortId) {

    def sendemit() : Unit = {
      Art.putValue(emit_Id, art.Empty())
    }


    def logInfo(msg: String): Unit = {
      Art.logInfo(id, msg)
    }

    def logDebug(msg: String): Unit = {
      Art.logDebug(id, msg)
    }

    def logError(msg: String): Unit = {
      Art.logError(id, msg)
    }
  }

  @record class EntryPoints(
    emitter_t_impl_BridgeId : Art.BridgeId,

    emit_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    component : emitter_t_impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ()

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(emit_Id)

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)
      component.timeTriggered()
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)
      component.timeTriggered()
      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate: Unit = {
      component.activate()
    }

    def deactivate: Unit = {
      component.deactivate()
    }

    def finalise: Unit = {
      component.finalise()
    }

    def initialise: Unit = {
      component.initialise()
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover: Unit = {
      component.recover()
    }
  }
}
// #Sireum

package hamr.test_event_port_periodic_domains

import org.sireum._
import art._
import hamr._

// This file was auto-generated.  Do not edit

@record class consumer_t_impl_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  consume: Port[art.Empty]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(consume),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(consume),

    eventOuts = ISZ()
  )

  val api : consumer_t_impl_Bridge.Api =
    consumer_t_impl_Bridge.Api(
      id,
      consume.id
    )

  val entryPoints : Bridge.EntryPoints =
    consumer_t_impl_Bridge.EntryPoints(
      id,

      consume.id,

      dispatchTriggers,

      consumer_t_impl_Impl(api)
    )
}

object consumer_t_impl_Bridge {

  @record class Api(
    id : Art.BridgeId,
    consume_Id : Art.PortId) {

    def getconsume() : Option[art.Empty] = {
      val value : Option[art.Empty] = Art.getValue(consume_Id) match {
        case Some(Empty()) => Some(Empty())
        case Some(v) => 
          Art.logError(id, s"Unexpected payload on port consume.  Expecting 'Empty' but received ${v}")
          None[art.Empty]() 
        case _ => None[art.Empty]()
      }
      return value
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
    consumer_t_impl_BridgeId : Art.BridgeId,

    consume_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    component : consumer_t_impl_Impl ) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(consume_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ()

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
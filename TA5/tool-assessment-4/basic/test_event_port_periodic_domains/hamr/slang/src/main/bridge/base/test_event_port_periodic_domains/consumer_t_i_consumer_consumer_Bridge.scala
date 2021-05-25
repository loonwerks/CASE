// #Sireum

package base.test_event_port_periodic_domains

import org.sireum._
import art._
import base._
import base.test_event_port_periodic_domains.{consumer_t_i_consumer_consumer => component}

// This file was auto-generated.  Do not edit

@datatype class consumer_t_i_consumer_consumer_Bridge(
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

  val initialization_api : consumer_t_i_Initialization_Api = {
    val api = consumer_t_i_Initialization_Api(
      id,
      consume.id
    )
    consumer_t_i_consumer_consumer_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : consumer_t_i_Operational_Api = {
    val api = consumer_t_i_Operational_Api(
      id,
      consume.id
    )
    consumer_t_i_consumer_consumer_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    consumer_t_i_consumer_consumer_Bridge.EntryPoints(
      id,

      consume.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object consumer_t_i_consumer_consumer_Bridge {

  var c_initialization_api: Option[consumer_t_i_Initialization_Api] = None()
  var c_operational_api: Option[consumer_t_i_Operational_Api] = None()

  @datatype class EntryPoints(
    consumer_t_i_consumer_consumer_BridgeId : Art.BridgeId,

    consume_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: consumer_t_i_Initialization_Api,
    operational_api: consumer_t_i_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(consume_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ()

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: consumer_t_i_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: consumer_t_i_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: consumer_t_i_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: consumer_t_i_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: consumer_t_i_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: consumer_t_i_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: consumer_t_i_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
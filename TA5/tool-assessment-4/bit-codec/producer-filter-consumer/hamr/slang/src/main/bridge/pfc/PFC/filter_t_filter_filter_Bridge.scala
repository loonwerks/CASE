// #Sireum

package pfc.PFC

import org.sireum._
import art._
import pfc._
import pfc.PFC.{filter_t_filter_filter => component}

// This file was auto-generated.  Do not edit

@datatype class filter_t_filter_filter_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  from_producer: Port[Base_Types.Bits],
  to_consumer: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(from_producer,
              to_consumer),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(from_producer),

    eventOuts = ISZ(to_consumer)
  )

  val initialization_api : filter_t_Initialization_Api = {
    val api = filter_t_Initialization_Api(
      id,
      from_producer.id,
      to_consumer.id
    )
    filter_t_filter_filter_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : filter_t_Operational_Api = {
    val api = filter_t_Operational_Api(
      id,
      from_producer.id,
      to_consumer.id
    )
    filter_t_filter_filter_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    filter_t_filter_filter_Bridge.EntryPoints(
      id,

      from_producer.id,
      to_consumer.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object filter_t_filter_filter_Bridge {

  var c_initialization_api: Option[filter_t_Initialization_Api] = None()
  var c_operational_api: Option[filter_t_Operational_Api] = None()

  @datatype class EntryPoints(
    filter_t_filter_filter_BridgeId : Art.BridgeId,

    from_producer_Id : Art.PortId,
    to_consumer_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: filter_t_Initialization_Api,
    operational_api: filter_t_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(from_producer_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(to_consumer_Id)

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: filter_t_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: filter_t_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: filter_t_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: filter_t_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: filter_t_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: filter_t_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: filter_t_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
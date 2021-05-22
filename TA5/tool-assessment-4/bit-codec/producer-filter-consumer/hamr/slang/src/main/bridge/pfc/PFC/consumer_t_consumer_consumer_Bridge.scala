// #Sireum

package pfc.PFC

import org.sireum._
import art._
import pfc._
import pfc.PFC.{consumer_t_consumer_consumer => component}

// This file was auto-generated.  Do not edit

@datatype class consumer_t_consumer_consumer_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  from_filter: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(from_filter),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(from_filter),

    eventOuts = ISZ()
  )

  val initialization_api : consumer_t_Initialization_Api = {
    val api = consumer_t_Initialization_Api(
      id,
      from_filter.id
    )
    consumer_t_consumer_consumer_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : consumer_t_Operational_Api = {
    val api = consumer_t_Operational_Api(
      id,
      from_filter.id
    )
    consumer_t_consumer_consumer_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    consumer_t_consumer_consumer_Bridge.EntryPoints(
      id,

      from_filter.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object consumer_t_consumer_consumer_Bridge {

  var c_initialization_api: Option[consumer_t_Initialization_Api] = None()
  var c_operational_api: Option[consumer_t_Operational_Api] = None()

  @datatype class EntryPoints(
    consumer_t_consumer_consumer_BridgeId : Art.BridgeId,

    from_filter_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: consumer_t_Initialization_Api,
    operational_api: consumer_t_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(from_filter_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ()

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: consumer_t_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: consumer_t_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: consumer_t_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: consumer_t_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: consumer_t_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: consumer_t_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: consumer_t_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
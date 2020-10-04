// #Sireum

package test_data_port_periodic_domains.test_data_port_periodic_domains

import org.sireum._
import art._
import test_data_port_periodic_domains._
import test_data_port_periodic_domains.test_data_port_periodic_domains.{destination_thread_impl_destination_process_component_destination_thread_component => component}

// This file was auto-generated.  Do not edit

@record class destination_thread_impl_destination_process_component_destination_thread_component_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  read_port: Port[Base_Types.Integer_8]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(read_port),

    dataIns = ISZ(read_port),

    dataOuts = ISZ(),

    eventIns = ISZ(),

    eventOuts = ISZ()
  )

  val initialization_api : destination_thread_impl_Initialization_Api = {
    val api = destination_thread_impl_Initialization_Api(
      id,
      read_port.id
    )
    destination_thread_impl_destination_process_component_destination_thread_component_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : destination_thread_impl_Operational_Api = {
    val api = destination_thread_impl_Operational_Api(
      id,
      read_port.id
    )
    destination_thread_impl_destination_process_component_destination_thread_component_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    destination_thread_impl_destination_process_component_destination_thread_component_Bridge.EntryPoints(
      id,

      read_port.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object destination_thread_impl_destination_process_component_destination_thread_component_Bridge {

  var c_initialization_api: Option[destination_thread_impl_Initialization_Api] = None()
  var c_operational_api: Option[destination_thread_impl_Operational_Api] = None()

  @record class EntryPoints(
    destination_thread_impl_destination_process_component_destination_thread_component_BridgeId : Art.BridgeId,

    read_port_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: destination_thread_impl_Initialization_Api,
    operational_api: destination_thread_impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ(read_port_Id)

    val eventInPortIds: ISZ[Art.PortId] = ISZ()

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ()

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)
      component.timeTriggered(operational_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)
      component.timeTriggered(operational_api)
      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      component.recover(operational_api)
    }
  }
}
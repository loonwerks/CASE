// #Sireum

package both_vm.test_event_data_port_periodic_domains

import org.sireum._
import art._
import both_vm._
import both_vm.test_event_data_port_periodic_domains.{emitter_t_impl_src_process_src_thread => component}

// This file was auto-generated.  Do not edit

@record class emitter_t_impl_src_process_src_thread_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  write_port: Port[Base_Types.Integer_8]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(write_port),

    dataIns = ISZ(),

    dataOuts = ISZ(write_port),

    eventIns = ISZ(),

    eventOuts = ISZ()
  )

  val initialization_api : emitter_t_impl_Initialization_Api = {
    val api = emitter_t_impl_Initialization_Api(
      id,
      write_port.id
    )
    emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : emitter_t_impl_Operational_Api = {
    val api = emitter_t_impl_Operational_Api(
      id,
      write_port.id
    )
    emitter_t_impl_src_process_src_thread_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    emitter_t_impl_src_process_src_thread_Bridge.EntryPoints(
      id,

      write_port.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object emitter_t_impl_src_process_src_thread_Bridge {

  var c_initialization_api: Option[emitter_t_impl_Initialization_Api] = None()
  var c_operational_api: Option[emitter_t_impl_Operational_Api] = None()

  @record class EntryPoints(
    emitter_t_impl_src_process_src_thread_BridgeId : Art.BridgeId,

    write_port_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: emitter_t_impl_Initialization_Api,
    operational_api: emitter_t_impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ()

    val dataOutPortIds: ISZ[Art.PortId] = ISZ(write_port_Id)

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
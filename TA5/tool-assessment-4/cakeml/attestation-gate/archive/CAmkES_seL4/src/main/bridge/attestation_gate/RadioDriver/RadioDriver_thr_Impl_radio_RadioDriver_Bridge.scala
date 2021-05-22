// #Sireum

package attestation_gate.RadioDriver

import org.sireum._
import art._
import attestation_gate._
import attestation_gate.RadioDriver.{RadioDriver_thr_Impl_radio_RadioDriver => component}

// This file was auto-generated.  Do not edit

@record class RadioDriver_thr_Impl_radio_RadioDriver_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  trusted_ids_out: Port[Base_Types.Bits],
  automation_request_out: Port[Base_Types.Bits],
  operating_region_out: Port[Base_Types.Bits],
  line_search_task_out: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(trusted_ids_out,
              automation_request_out,
              operating_region_out,
              line_search_task_out),

    dataIns = ISZ(),

    dataOuts = ISZ(trusted_ids_out),

    eventIns = ISZ(),

    eventOuts = ISZ(automation_request_out,
                    operating_region_out,
                    line_search_task_out)
  )

  val initialization_api : RadioDriver_thr_Impl_Initialization_Api = {
    val api = RadioDriver_thr_Impl_Initialization_Api(
      id,
      trusted_ids_out.id,
      automation_request_out.id,
      operating_region_out.id,
      line_search_task_out.id
    )
    RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : RadioDriver_thr_Impl_Operational_Api = {
    val api = RadioDriver_thr_Impl_Operational_Api(
      id,
      trusted_ids_out.id,
      automation_request_out.id,
      operating_region_out.id,
      line_search_task_out.id
    )
    RadioDriver_thr_Impl_radio_RadioDriver_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    RadioDriver_thr_Impl_radio_RadioDriver_Bridge.EntryPoints(
      id,

      trusted_ids_out.id,
      automation_request_out.id,
      operating_region_out.id,
      line_search_task_out.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object RadioDriver_thr_Impl_radio_RadioDriver_Bridge {

  var c_initialization_api: Option[RadioDriver_thr_Impl_Initialization_Api] = None()
  var c_operational_api: Option[RadioDriver_thr_Impl_Operational_Api] = None()

  @record class EntryPoints(
    RadioDriver_thr_Impl_radio_RadioDriver_BridgeId : Art.BridgeId,

    trusted_ids_out_Id : Art.PortId,
    automation_request_out_Id : Art.PortId,
    operating_region_out_Id : Art.PortId,
    line_search_task_out_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: RadioDriver_thr_Impl_Initialization_Api,
    operational_api: RadioDriver_thr_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ()

    val dataOutPortIds: ISZ[Art.PortId] = ISZ(trusted_ids_out_Id)

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(automation_request_out_Id,
                                               operating_region_out_Id,
                                               line_search_task_out_Id)

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
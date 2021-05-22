// #Sireum

package attestation_gate.CASE_AttestationGate

import org.sireum._
import art._
import attestation_gate._
import attestation_gate.CASE_AttestationGate.{CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate => component}

// This file was auto-generated.  Do not edit

@record class CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  trusted_ids: Port[Base_Types.Bits],
  AutomationRequest_in: Port[Base_Types.Bits],
  AutomationRequest_out: Port[Base_Types.Bits],
  OperatingRegion_in: Port[Base_Types.Bits],
  OperatingRegion_out: Port[Base_Types.Bits],
  LineSearchTask_in: Port[Base_Types.Bits],
  LineSearchTask_out: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(trusted_ids,
              AutomationRequest_in,
              AutomationRequest_out,
              OperatingRegion_in,
              OperatingRegion_out,
              LineSearchTask_in,
              LineSearchTask_out),

    dataIns = ISZ(trusted_ids),

    dataOuts = ISZ(),

    eventIns = ISZ(AutomationRequest_in,
                   OperatingRegion_in,
                   LineSearchTask_in),

    eventOuts = ISZ(AutomationRequest_out,
                    OperatingRegion_out,
                    LineSearchTask_out)
  )

  val initialization_api : CASE_AttestationGate_thr_Impl_Initialization_Api = {
    val api = CASE_AttestationGate_thr_Impl_Initialization_Api(
      id,
      trusted_ids.id,
      AutomationRequest_in.id,
      AutomationRequest_out.id,
      OperatingRegion_in.id,
      OperatingRegion_out.id,
      LineSearchTask_in.id,
      LineSearchTask_out.id
    )
    CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : CASE_AttestationGate_thr_Impl_Operational_Api = {
    val api = CASE_AttestationGate_thr_Impl_Operational_Api(
      id,
      trusted_ids.id,
      AutomationRequest_in.id,
      AutomationRequest_out.id,
      OperatingRegion_in.id,
      OperatingRegion_out.id,
      LineSearchTask_in.id,
      LineSearchTask_out.id
    )
    CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge.EntryPoints(
      id,

      trusted_ids.id,
      AutomationRequest_in.id,
      AutomationRequest_out.id,
      OperatingRegion_in.id,
      OperatingRegion_out.id,
      LineSearchTask_in.id,
      LineSearchTask_out.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge {

  var c_initialization_api: Option[CASE_AttestationGate_thr_Impl_Initialization_Api] = None()
  var c_operational_api: Option[CASE_AttestationGate_thr_Impl_Operational_Api] = None()

  @record class EntryPoints(
    CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_BridgeId : Art.BridgeId,

    trusted_ids_Id : Art.PortId,
    AutomationRequest_in_Id : Art.PortId,
    AutomationRequest_out_Id : Art.PortId,
    OperatingRegion_in_Id : Art.PortId,
    OperatingRegion_out_Id : Art.PortId,
    LineSearchTask_in_Id : Art.PortId,
    LineSearchTask_out_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: CASE_AttestationGate_thr_Impl_Initialization_Api,
    operational_api: CASE_AttestationGate_thr_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ(trusted_ids_Id)

    val eventInPortIds: ISZ[Art.PortId] = ISZ(AutomationRequest_in_Id,
                                              OperatingRegion_in_Id,
                                              LineSearchTask_in_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(AutomationRequest_out_Id,
                                               OperatingRegion_out_Id,
                                               LineSearchTask_out_Id)

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
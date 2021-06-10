// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._
import hamr.SW.{CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate => component}

// This file was auto-generated.  Do not edit

@datatype class CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  trusted_ids: Port[Base_Types.Bits],
  AutomationRequest_in: Port[Base_Types.Bits],
  AutomationRequest_out_UXAS: Port[Base_Types.Bits],
  AutomationRequest_out_MON_REQ: Port[Base_Types.Bits],
  OperatingRegion_in: Port[Base_Types.Bits],
  OperatingRegion_out: Port[Base_Types.Bits],
  LineSearchTask_in: Port[Base_Types.Bits],
  LineSearchTask_out: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(trusted_ids,
              AutomationRequest_in,
              AutomationRequest_out_UXAS,
              AutomationRequest_out_MON_REQ,
              OperatingRegion_in,
              OperatingRegion_out,
              LineSearchTask_in,
              LineSearchTask_out),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(trusted_ids,
                   AutomationRequest_in,
                   OperatingRegion_in,
                   LineSearchTask_in),

    eventOuts = ISZ(AutomationRequest_out_UXAS,
                    AutomationRequest_out_MON_REQ,
                    OperatingRegion_out,
                    LineSearchTask_out)
  )

  val initialization_api : CASE_AttestationGate_thr_Impl_Initialization_Api = {
    val api = CASE_AttestationGate_thr_Impl_Initialization_Api(
      id,
      trusted_ids.id,
      AutomationRequest_in.id,
      AutomationRequest_out_UXAS.id,
      AutomationRequest_out_MON_REQ.id,
      OperatingRegion_in.id,
      OperatingRegion_out.id,
      LineSearchTask_in.id,
      LineSearchTask_out.id
    )
    CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : CASE_AttestationGate_thr_Impl_Operational_Api = {
    val api = CASE_AttestationGate_thr_Impl_Operational_Api(
      id,
      trusted_ids.id,
      AutomationRequest_in.id,
      AutomationRequest_out_UXAS.id,
      AutomationRequest_out_MON_REQ.id,
      OperatingRegion_in.id,
      OperatingRegion_out.id,
      LineSearchTask_in.id,
      LineSearchTask_out.id
    )
    CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.EntryPoints(
      id,

      trusted_ids.id,
      AutomationRequest_in.id,
      AutomationRequest_out_UXAS.id,
      AutomationRequest_out_MON_REQ.id,
      OperatingRegion_in.id,
      OperatingRegion_out.id,
      LineSearchTask_in.id,
      LineSearchTask_out.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge {

  var c_initialization_api: Option[CASE_AttestationGate_thr_Impl_Initialization_Api] = None()
  var c_operational_api: Option[CASE_AttestationGate_thr_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_BridgeId : Art.BridgeId,

    trusted_ids_Id : Art.PortId,
    AutomationRequest_in_Id : Art.PortId,
    AutomationRequest_out_UXAS_Id : Art.PortId,
    AutomationRequest_out_MON_REQ_Id : Art.PortId,
    OperatingRegion_in_Id : Art.PortId,
    OperatingRegion_out_Id : Art.PortId,
    LineSearchTask_in_Id : Art.PortId,
    LineSearchTask_out_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: CASE_AttestationGate_thr_Impl_Initialization_Api,
    operational_api: CASE_AttestationGate_thr_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(trusted_ids_Id,
                                              AutomationRequest_in_Id,
                                              OperatingRegion_in_Id,
                                              LineSearchTask_in_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(AutomationRequest_out_UXAS_Id,
                                               AutomationRequest_out_MON_REQ_Id,
                                               OperatingRegion_out_Id,
                                               LineSearchTask_out_Id)

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: CASE_AttestationGate_thr_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: CASE_AttestationGate_thr_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: CASE_AttestationGate_thr_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: CASE_AttestationGate_thr_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: CASE_AttestationGate_thr_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: CASE_AttestationGate_thr_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: CASE_AttestationGate_thr_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
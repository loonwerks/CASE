// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._
import hamr.SW.{CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req => component}

// This file was auto-generated.  Do not edit

@datatype class CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  observed: Port[Base_Types.Bits],
  reference_1: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(observed,
              reference_1),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(observed,
                   reference_1),

    eventOuts = ISZ()
  )

  val initialization_api : CASE_Monitor_Req_thr_Impl_Initialization_Api = {
    val api = CASE_Monitor_Req_thr_Impl_Initialization_Api(
      id,
      observed.id,
      reference_1.id
    )
    CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : CASE_Monitor_Req_thr_Impl_Operational_Api = {
    val api = CASE_Monitor_Req_thr_Impl_Operational_Api(
      id,
      observed.id,
      reference_1.id
    )
    CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.EntryPoints(
      id,

      observed.id,
      reference_1.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge {

  var c_initialization_api: Option[CASE_Monitor_Req_thr_Impl_Initialization_Api] = None()
  var c_operational_api: Option[CASE_Monitor_Req_thr_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_BridgeId : Art.BridgeId,

    observed_Id : Art.PortId,
    reference_1_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: CASE_Monitor_Req_thr_Impl_Initialization_Api,
    operational_api: CASE_Monitor_Req_thr_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(observed_Id,
                                              reference_1_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ()

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: CASE_Monitor_Req_thr_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: CASE_Monitor_Req_thr_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: CASE_Monitor_Req_thr_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: CASE_Monitor_Req_thr_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: CASE_Monitor_Req_thr_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: CASE_Monitor_Req_thr_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: CASE_Monitor_Req_thr_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
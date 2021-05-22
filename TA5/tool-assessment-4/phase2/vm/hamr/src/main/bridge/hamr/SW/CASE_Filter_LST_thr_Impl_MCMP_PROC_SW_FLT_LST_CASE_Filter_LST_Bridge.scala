// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._
import hamr.SW.{CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST => component}

// This file was auto-generated.  Do not edit

@datatype class CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  filter_in: Port[Base_Types.Bits],
  filter_out: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(filter_in,
              filter_out),

    dataIns = ISZ(),

    dataOuts = ISZ(),

    eventIns = ISZ(filter_in),

    eventOuts = ISZ(filter_out)
  )

  val initialization_api : CASE_Filter_LST_thr_Impl_Initialization_Api = {
    val api = CASE_Filter_LST_thr_Impl_Initialization_Api(
      id,
      filter_in.id,
      filter_out.id
    )
    CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : CASE_Filter_LST_thr_Impl_Operational_Api = {
    val api = CASE_Filter_LST_thr_Impl_Operational_Api(
      id,
      filter_in.id,
      filter_out.id
    )
    CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.EntryPoints(
      id,

      filter_in.id,
      filter_out.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge {

  var c_initialization_api: Option[CASE_Filter_LST_thr_Impl_Initialization_Api] = None()
  var c_operational_api: Option[CASE_Filter_LST_thr_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_BridgeId : Art.BridgeId,

    filter_in_Id : Art.PortId,
    filter_out_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: CASE_Filter_LST_thr_Impl_Initialization_Api,
    operational_api: CASE_Filter_LST_thr_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ(filter_in_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(filter_out_Id)

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: CASE_Filter_LST_thr_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: CASE_Filter_LST_thr_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: CASE_Filter_LST_thr_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: CASE_Filter_LST_thr_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: CASE_Filter_LST_thr_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: CASE_Filter_LST_thr_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: CASE_Filter_LST_thr_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
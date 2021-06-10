// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._
import hamr.SW.{CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo => component}

// This file was auto-generated.  Do not edit

@datatype class CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  keep_in_zones: Port[Base_Types.Bits],
  keep_out_zones: Port[Base_Types.Bits],
  observed: Port[Base_Types.Bits],
  output: Port[Base_Types.Bits],
  alert: Port[art.Empty]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(keep_in_zones,
              keep_out_zones,
              observed,
              output,
              alert),

    dataIns = ISZ(keep_in_zones,
                  keep_out_zones),

    dataOuts = ISZ(),

    eventIns = ISZ(observed),

    eventOuts = ISZ(output,
                    alert)
  )

  val initialization_api : CASE_Monitor_Geo_thr_Impl_Initialization_Api = {
    val api = CASE_Monitor_Geo_thr_Impl_Initialization_Api(
      id,
      keep_in_zones.id,
      keep_out_zones.id,
      observed.id,
      output.id,
      alert.id
    )
    CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : CASE_Monitor_Geo_thr_Impl_Operational_Api = {
    val api = CASE_Monitor_Geo_thr_Impl_Operational_Api(
      id,
      keep_in_zones.id,
      keep_out_zones.id,
      observed.id,
      output.id,
      alert.id
    )
    CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.EntryPoints(
      id,

      keep_in_zones.id,
      keep_out_zones.id,
      observed.id,
      output.id,
      alert.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge {

  var c_initialization_api: Option[CASE_Monitor_Geo_thr_Impl_Initialization_Api] = None()
  var c_operational_api: Option[CASE_Monitor_Geo_thr_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_BridgeId : Art.BridgeId,

    keep_in_zones_Id : Art.PortId,
    keep_out_zones_Id : Art.PortId,
    observed_Id : Art.PortId,
    output_Id : Art.PortId,
    alert_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: CASE_Monitor_Geo_thr_Impl_Initialization_Api,
    operational_api: CASE_Monitor_Geo_thr_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ(keep_in_zones_Id,
                                             keep_out_zones_Id)

    val eventInPortIds: ISZ[Art.PortId] = ISZ(observed_Id)

    val dataOutPortIds: ISZ[Art.PortId] = ISZ()

    val eventOutPortIds: ISZ[Art.PortId] = ISZ(output_Id,
                                               alert_Id)

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: CASE_Monitor_Geo_thr_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: CASE_Monitor_Geo_thr_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: CASE_Monitor_Geo_thr_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: CASE_Monitor_Geo_thr_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: CASE_Monitor_Geo_thr_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: CASE_Monitor_Geo_thr_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: CASE_Monitor_Geo_thr_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
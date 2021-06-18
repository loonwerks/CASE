// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._
import hamr.SW.{FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase => component}

// This file was auto-generated.  Do not edit

@datatype class FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge(
  val id: Art.BridgeId,
  val name: String,
  val dispatchProtocol: DispatchPropertyProtocol,
  val dispatchTriggers: Option[ISZ[Art.PortId]],

  keep_in_zones: Port[Base_Types.Bits],
  keep_out_zones: Port[Base_Types.Bits]
  ) extends Bridge {

  val ports : Bridge.Ports = Bridge.Ports(
    all = ISZ(keep_in_zones,
              keep_out_zones),

    dataIns = ISZ(),

    dataOuts = ISZ(keep_in_zones,
                   keep_out_zones),

    eventIns = ISZ(),

    eventOuts = ISZ()
  )

  val initialization_api : FlyZonesDatabase_thr_Impl_Initialization_Api = {
    val api = FlyZonesDatabase_thr_Impl_Initialization_Api(
      id,
      keep_in_zones.id,
      keep_out_zones.id
    )
    FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_initialization_api = Some(api)
    api
  }

  val operational_api : FlyZonesDatabase_thr_Impl_Operational_Api = {
    val api = FlyZonesDatabase_thr_Impl_Operational_Api(
      id,
      keep_in_zones.id,
      keep_out_zones.id
    )
    FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_operational_api = Some(api)
    api
  }

  val entryPoints : Bridge.EntryPoints =
    FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.EntryPoints(
      id,

      keep_in_zones.id,
      keep_out_zones.id,

      dispatchTriggers,

      initialization_api,
      operational_api)
}

object FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge {

  var c_initialization_api: Option[FlyZonesDatabase_thr_Impl_Initialization_Api] = None()
  var c_operational_api: Option[FlyZonesDatabase_thr_Impl_Operational_Api] = None()

  @datatype class EntryPoints(
    FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_BridgeId : Art.BridgeId,

    keep_in_zones_Id : Art.PortId,
    keep_out_zones_Id : Art.PortId,

    dispatchTriggers : Option[ISZ[Art.PortId]],

    initialization_api: FlyZonesDatabase_thr_Impl_Initialization_Api,
    operational_api: FlyZonesDatabase_thr_Impl_Operational_Api) extends Bridge.EntryPoints {

    val dataInPortIds: ISZ[Art.PortId] = ISZ()

    val eventInPortIds: ISZ[Art.PortId] = ISZ()

    val dataOutPortIds: ISZ[Art.PortId] = ISZ(keep_in_zones_Id,
                                              keep_out_zones_Id)

    val eventOutPortIds: ISZ[Art.PortId] = ISZ()

    def compute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: FlyZonesDatabase_thr_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    override
    def testCompute(): Unit = {
      Art.receiveInput(eventInPortIds, dataInPortIds)

      // implement the following in 'component':  def timeTriggered(api: FlyZonesDatabase_thr_Impl_Operational_Api): Unit = {}
      component.timeTriggered(operational_api)

      Art.releaseOutput(eventOutPortIds, dataOutPortIds)
    }

    def activate(): Unit = {
      // implement the following method in 'component':  def activate(api: FlyZonesDatabase_thr_Impl_Operational_Api): Unit = {}
      component.activate(operational_api)
    }

    def deactivate(): Unit = {
      // implement the following method in 'component':  def deactivate(api: FlyZonesDatabase_thr_Impl_Operational_Api): Unit = {}
      component.deactivate(operational_api)
    }

    def finalise(): Unit = {
      // implement the following method in 'component':  def finalise(api: FlyZonesDatabase_thr_Impl_Operational_Api): Unit = {}
      component.finalise(operational_api)
    }

    def initialise(): Unit = {
      // implement the following method in 'component':  def initialise(api: FlyZonesDatabase_thr_Impl_Initialization_Api): Unit = {}
      component.initialise(initialization_api)
      Art.sendOutput(eventOutPortIds, dataOutPortIds)
    }

    def recover(): Unit = {
      // implement the following method in 'component':  def recover(api: FlyZonesDatabase_thr_Impl_Operational_Api): Unit = {}
      component.recover(operational_api)
    }
  }
}
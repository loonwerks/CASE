// #Sireum

// This file was auto-generated.  Do not edit

package hamr.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import hamr._
import hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix

object CASE_Monitor_Geo extends App {

  val CASE_Monitor_GeoBridge : hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge = {
    val keep_in_zones = Port[Base_Types.Bits] (id = 0, name = "UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_keep_in_zones", mode = DataIn)
    val keep_out_zones = Port[Base_Types.Bits] (id = 1, name = "UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_keep_out_zones", mode = DataIn)
    val observed = Port[Base_Types.Bits] (id = 2, name = "UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_observed", mode = EventIn)
    val output = Port[Base_Types.Bits] (id = 3, name = "UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_output", mode = EventOut)
    val alert = Port[art.Empty] (id = 4, name = "UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_alert", mode = EventOut)

    hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge(
      id = 0,
      name = "UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      keep_in_zones = keep_in_zones,
      keep_out_zones = keep_out_zones,
      observed = observed,
      output = output,
      alert = alert
    )
  }

  val entryPoints: Bridge.EntryPoints = CASE_Monitor_GeoBridge.entryPoints
  val noData: Option[DataContent] = None()

  // keep_in_zones: In DataPort Base_Types.Bits
  val keep_in_zones_id: Art.PortId = CASE_Monitor_GeoBridge.keep_in_zones.id
  var keep_in_zones_port: Option[DataContent] = noData

  // keep_out_zones: In DataPort Base_Types.Bits
  val keep_out_zones_id: Art.PortId = CASE_Monitor_GeoBridge.keep_out_zones.id
  var keep_out_zones_port: Option[DataContent] = noData

  // observed: In EventDataPort Base_Types.Bits
  val observed_id: Art.PortId = CASE_Monitor_GeoBridge.observed.id
  var observed_port: Option[DataContent] = noData

  // output: Out EventDataPort Base_Types.Bits
  val output_id: Art.PortId = CASE_Monitor_GeoBridge.output.id
  var output_port: Option[DataContent] = noData

  // alert: Out EventPort art.Empty
  val alert_id: Art.PortId = CASE_Monitor_GeoBridge.alert.id
  var alert_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == keep_in_zones_id) {
      return keep_in_zones_port
    } else if(portId == keep_out_zones_id) {
      return keep_out_zones_port
    } else if(portId == observed_id) {
      return observed_port
    } else {
      halt(s"Unexpected: CASE_Monitor_Geo.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    keep_in_zones_port = CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix.keep_in_zones_Receive()

    keep_out_zones_port = CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix.keep_out_zones_Receive()

    observed_port = CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix.observed_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == output_id) {
      output_port = Some(data)
    } else if(portId == alert_id) {
      alert_port = Some(data)
    } else {
      halt(s"Unexpected: CASE_Monitor_Geo.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(output_port.nonEmpty) {
      CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix.output_Send(output_port.get)
      output_port = noData
    }

    if(alert_port.nonEmpty) {
      CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix.alert_Send(alert_port.get)
      alert_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    // nothing to do - CAmkES is responsible for initialization
  }

  def initialiseEntryPoint(): Unit = { entryPoints.initialise() }

  def computeEntryPoint(): Unit = { entryPoints.compute() }

  def finaliseEntryPoint(): Unit = { entryPoints.finalise() }

  def main(args: ISZ[String]): Z = {

    // need to touch the following for transpiler
    initialiseArchitecture()
    initialiseEntryPoint()
    computeEntryPoint()
    finaliseEntryPoint()

    touch()

    return 0
  }

  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // add types used in Platform.receive and Platform.receiveAsync
      val mbox2Boolean_Payload: MBox2[Art.PortId, DataContent] = MBox2(0, Base_Types.Boolean_Payload(T))
      val mbox2OptionDataContent: MBox2[Art.PortId, Option[DataContent]] = MBox2(0, None())

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_initialization_api.get.logInfo("")
      hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_initialization_api.get.logDebug("")
      hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_initialization_api.get.logError("")
      hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api.get.logInfo("")
      hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api.get.logDebug("")
      hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api.get.logError("")
      val apiUsage_keep_in_zones: Option[Base_Types.Bits] = hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api.get.get_keep_in_zones()
      val apiUsage_keep_out_zones: Option[Base_Types.Bits] = hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api.get.get_keep_out_zones()
      val apiUsage_observed: Option[Base_Types.Bits] = hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api.get.get_observed()
      hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_initialization_api.get.put_output(Base_Types.Bits_example())
      hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api.get.put_output(Base_Types.Bits_example())
      hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_initialization_api.get.put_alert()
      hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c_operational_api.get.put_alert()
    }
  }

  def logInfo(title: String, msg: String): Unit = {
    print(CASE_Monitor_GeoBridge.name)
    print(": ")
    println(msg)
  }

  def logError(title: String, msg: String): Unit = {
    eprint(CASE_Monitor_GeoBridge.name)
    eprint(": ")
    eprintln(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    print(CASE_Monitor_GeoBridge.name)
    print(": ")
    println(msg)
  }

  def run(): Unit = {}

}

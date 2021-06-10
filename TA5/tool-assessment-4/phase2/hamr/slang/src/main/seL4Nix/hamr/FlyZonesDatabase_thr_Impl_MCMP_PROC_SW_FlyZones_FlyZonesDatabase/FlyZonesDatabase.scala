// #Sireum

// This file was auto-generated.  Do not edit

package hamr.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import hamr._
import hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_seL4Nix

object FlyZonesDatabase extends App {

  val FlyZonesDatabaseBridge : hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge = {
    val keep_in_zones = Port[Base_Types.Bits] (id = 0, name = "UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_keep_in_zones", mode = DataOut)
    val keep_out_zones = Port[Base_Types.Bits] (id = 1, name = "UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_keep_out_zones", mode = DataOut)

    hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge(
      id = 0,
      name = "UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      keep_in_zones = keep_in_zones,
      keep_out_zones = keep_out_zones
    )
  }

  val entryPoints: Bridge.EntryPoints = FlyZonesDatabaseBridge.entryPoints
  val noData: Option[DataContent] = None()

  // keep_in_zones: Out DataPort Base_Types.Bits
  val keep_in_zones_id: Art.PortId = FlyZonesDatabaseBridge.keep_in_zones.id
  var keep_in_zones_port: Option[DataContent] = noData

  // keep_out_zones: Out DataPort Base_Types.Bits
  val keep_out_zones_id: Art.PortId = FlyZonesDatabaseBridge.keep_out_zones.id
  var keep_out_zones_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    halt(s"Unexpected: FlyZonesDatabase.getValue called with: ${portId}")
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == keep_in_zones_id) {
      keep_in_zones_port = Some(data)
    } else if(portId == keep_out_zones_id) {
      keep_out_zones_port = Some(data)
    } else {
      halt(s"Unexpected: FlyZonesDatabase.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(keep_in_zones_port.nonEmpty) {
      FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_seL4Nix.keep_in_zones_Send(keep_in_zones_port.get)
      keep_in_zones_port = noData
    }

    if(keep_out_zones_port.nonEmpty) {
      FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_seL4Nix.keep_out_zones_Send(keep_out_zones_port.get)
      keep_out_zones_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (FlyZonesDatabaseBridge),
      connections = ISZ ()
    )
    Art.run(ad)
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

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_initialization_api.get.logInfo("")
      hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_initialization_api.get.logDebug("")
      hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_initialization_api.get.logError("")
      hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_operational_api.get.logInfo("")
      hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_operational_api.get.logDebug("")
      hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_operational_api.get.logError("")
      hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_initialization_api.get.put_keep_in_zones(Base_Types.Bits_example())
      hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_operational_api.get.put_keep_in_zones(Base_Types.Bits_example())
      hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_initialization_api.get.put_keep_out_zones(Base_Types.Bits_example())
      hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c_operational_api.get.put_keep_out_zones(Base_Types.Bits_example())
    }
  }

  def logInfo(title: String, msg: String): Unit = {
    print(title)
    print(": ")
    println(msg)
  }

  def logError(title: String, msg: String): Unit = {
    eprint(title)
    eprint(": ")
    eprintln(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    print(title)
    print(": ")
    println(msg)
  }

  def run(): Unit = {}

}

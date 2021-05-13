// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_seL4Nix

object FlyZoneDatabase extends App {

  val FlyZoneDatabaseBridge : HAMR.SW.FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge = {
    val FlyZones = Port[SW.MapArray] (id = 0, name = "MissionComputer_Impl_Instance_SW_FlyZones_FlyZoneDatabase_FlyZones", mode = DataOut)

    HAMR.SW.FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_FlyZones_FlyZoneDatabase",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      FlyZones = FlyZones
    )
  }

  val entryPoints: Bridge.EntryPoints = FlyZoneDatabaseBridge.entryPoints
  val noData: Option[DataContent] = None()

  // FlyZones: Out DataPort SW.MapArray
  val FlyZones_id: Art.PortId = FlyZoneDatabaseBridge.FlyZones.id
  var FlyZones_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    return EventTriggered(portIds)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    halt(s"Unexpected: FlyZoneDatabase.getValue called with: ${portId}")
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == FlyZones_id) {
      FlyZones_port = Some(data)
    } else {
      halt(s"Unexpected: FlyZoneDatabase.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(FlyZones_port.nonEmpty) {
      FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_seL4Nix.FlyZones_Send(FlyZones_port.get)
      FlyZones_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (FlyZoneDatabaseBridge),
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

      printDataContent(Base_Types.Integer_32_Payload(Base_Types.Integer_32_example()))
      printDataContent(Base_Types.Boolean_Payload(Base_Types.Boolean_example()))
      printDataContent(CASE_Model_Transformations.CASE_MsgHeader_Impl_Payload(CASE_Model_Transformations.CASE_MsgHeader_Impl.example()))
      printDataContent(CASE_Model_Transformations.CASE_RF_Msg_Impl_Payload(CASE_Model_Transformations.CASE_RF_Msg_Impl.example()))
      printDataContent(CASE_Model_Transformations.CASE_UART_Msg_Impl_Payload(CASE_Model_Transformations.CASE_UART_Msg_Impl.example()))
      printDataContent(SW.Coordinate_Impl_Payload(SW.Coordinate_Impl.example()))
      printDataContent(SW.Map_Payload(SW.Map.example()))
      printDataContent(SW.MapArray_Payload(SW.MapArray.example()))
      printDataContent(Base_Types.Unsigned_32_Payload(Base_Types.Unsigned_32_example()))
      printDataContent(SW.MsgHeader_Impl_Payload(SW.MsgHeader_Impl.example()))
      printDataContent(SW.FlightPattern_Payload(SW.FlightPattern.byOrdinal(0).get))
      printDataContent(SW.Command_Impl_Payload(SW.Command_Impl.example()))
      printDataContent(SW.RF_Msg_Impl_Payload(SW.RF_Msg_Impl.example()))
      printDataContent(CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl_Payload(CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl.example()))
      printDataContent(CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl_Payload(CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl.example()))
      printDataContent(SW.MissionWindow_Payload(SW.MissionWindow.example()))
      printDataContent(SW.Address_Impl_Payload(SW.Address_Impl.example()))
      printDataContent(SW.Mission_Payload(SW.Mission.example()))
      printDataContent(Missing.MISSING_AADL_TYPE_Payload(Missing.MISSING_AADL_TYPE.example()))
      printDataContent(art.Empty())

      HAMR.SW.FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge.c_operational_api.get.logError("")
      HAMR.SW.FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge.c_initialization_api.get.put_FlyZones(SW.MapArray.example())
      HAMR.SW.FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase_Bridge.c_operational_api.get.put_FlyZones(SW.MapArray.example())
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

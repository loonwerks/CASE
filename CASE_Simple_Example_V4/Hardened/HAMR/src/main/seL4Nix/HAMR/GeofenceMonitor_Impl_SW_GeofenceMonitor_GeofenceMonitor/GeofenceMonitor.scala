// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix

object GeofenceMonitor extends App {

  val GeofenceMonitorBridge : HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge = {
    val FlyZones = Port[SW.MapArray] (id = 0, name = "MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor_FlyZones", mode = DataIn)
    val FlightPlan_In = Port[SW.Mission] (id = 1, name = "MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor_FlightPlan_In", mode = EventIn)
    val FlightPlan_Out = Port[SW.Mission] (id = 2, name = "MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor_FlightPlan_Out", mode = EventOut)
    val Alert = Port[art.Empty] (id = 3, name = "MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor_Alert", mode = EventOut)

    HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_GeofenceMonitor_GeofenceMonitor",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      FlyZones = FlyZones,
      FlightPlan_In = FlightPlan_In,
      FlightPlan_Out = FlightPlan_Out,
      Alert = Alert
    )
  }

  val entryPoints: Bridge.EntryPoints = GeofenceMonitorBridge.entryPoints
  val noData: Option[DataContent] = None()

  // FlyZones: In DataPort SW.MapArray
  val FlyZones_id: Art.PortId = GeofenceMonitorBridge.FlyZones.id
  var FlyZones_port: Option[DataContent] = noData

  // FlightPlan_In: In EventDataPort SW.Mission
  val FlightPlan_In_id: Art.PortId = GeofenceMonitorBridge.FlightPlan_In.id
  var FlightPlan_In_port: Option[DataContent] = noData

  // FlightPlan_Out: Out EventDataPort SW.Mission
  val FlightPlan_Out_id: Art.PortId = GeofenceMonitorBridge.FlightPlan_Out.id
  var FlightPlan_Out_port: Option[DataContent] = noData

  // Alert: Out EventPort art.Empty
  val Alert_id: Art.PortId = GeofenceMonitorBridge.Alert.id
  var Alert_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix.FlightPlan_In_IsEmpty()) {
      portIds = portIds :+ FlightPlan_In_id
    }
    return EventTriggered(portIds)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == FlyZones_id) {
      return FlyZones_port
    } else if(portId == FlightPlan_In_id) {
      return FlightPlan_In_port
    } else {
      halt(s"Unexpected: GeofenceMonitor.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    FlyZones_port = GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix.FlyZones_Receive()

    FlightPlan_In_port = GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix.FlightPlan_In_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == FlightPlan_Out_id) {
      FlightPlan_Out_port = Some(data)
    } else if(portId == Alert_id) {
      Alert_port = Some(data)
    } else {
      halt(s"Unexpected: GeofenceMonitor.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(FlightPlan_Out_port.nonEmpty) {
      GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix.FlightPlan_Out_Send(FlightPlan_Out_port.get)
      FlightPlan_Out_port = noData
    }

    if(Alert_port.nonEmpty) {
      GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix.Alert_Send(Alert_port.get)
      Alert_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (GeofenceMonitorBridge),
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

      HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge.c_operational_api.get.logError("")
      val apiUsage_FlyZones: Option[SW.MapArray] = HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge.c_operational_api.get.get_FlyZones()
      val apiUsage_FlightPlan_In: Option[SW.Mission] = HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge.c_operational_api.get.get_FlightPlan_In()
      HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge.c_initialization_api.get.put_FlightPlan_Out(SW.Mission.example())
      HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge.c_operational_api.get.put_FlightPlan_Out(SW.Mission.example())
      HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge.c_initialization_api.get.put_Alert()
      HAMR.SW.GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge.c_operational_api.get.put_Alert()
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

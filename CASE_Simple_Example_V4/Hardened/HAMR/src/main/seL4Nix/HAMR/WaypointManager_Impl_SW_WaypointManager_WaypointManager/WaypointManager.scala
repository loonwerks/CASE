// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.WaypointManager_Impl_SW_WaypointManager_WaypointManager

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix

object WaypointManager extends App {

  val WaypointManagerBridge : HAMR.SW.WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge = {
    val FlightPlan = Port[SW.Mission] (id = 0, name = "MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager_FlightPlan", mode = EventIn)
    val MissionWindow = Port[SW.MissionWindow] (id = 1, name = "MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager_MissionWindow", mode = EventOut)
    val Status = Port[SW.Coordinate_Impl] (id = 2, name = "MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager_Status", mode = EventIn)
    val ReturnHome = Port[art.Empty] (id = 3, name = "MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager_ReturnHome", mode = EventIn)

    HAMR.SW.WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_WaypointManager_WaypointManager",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      FlightPlan = FlightPlan,
      MissionWindow = MissionWindow,
      Status = Status,
      ReturnHome = ReturnHome
    )
  }

  val entryPoints: Bridge.EntryPoints = WaypointManagerBridge.entryPoints
  val noData: Option[DataContent] = None()

  // FlightPlan: In EventDataPort SW.Mission
  val FlightPlan_id: Art.PortId = WaypointManagerBridge.FlightPlan.id
  var FlightPlan_port: Option[DataContent] = noData

  // MissionWindow: Out EventDataPort SW.MissionWindow
  val MissionWindow_id: Art.PortId = WaypointManagerBridge.MissionWindow.id
  var MissionWindow_port: Option[DataContent] = noData

  // Status: In EventDataPort SW.Coordinate_Impl
  val Status_id: Art.PortId = WaypointManagerBridge.Status.id
  var Status_port: Option[DataContent] = noData

  // ReturnHome: In EventPort art.Empty
  val ReturnHome_id: Art.PortId = WaypointManagerBridge.ReturnHome.id
  var ReturnHome_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix.FlightPlan_IsEmpty()) {
      portIds = portIds :+ FlightPlan_id
    }
    if(!WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix.Status_IsEmpty()) {
      portIds = portIds :+ Status_id
    }
    if(!WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix.ReturnHome_IsEmpty()) {
      portIds = portIds :+ ReturnHome_id
    }
    return EventTriggered(portIds)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == FlightPlan_id) {
      return FlightPlan_port
    } else if(portId == Status_id) {
      return Status_port
    } else if(portId == ReturnHome_id) {
      return ReturnHome_port
    } else {
      halt(s"Unexpected: WaypointManager.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    FlightPlan_port = WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix.FlightPlan_Receive()

    Status_port = WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix.Status_Receive()

    ReturnHome_port = WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix.ReturnHome_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == MissionWindow_id) {
      MissionWindow_port = Some(data)
    } else {
      halt(s"Unexpected: WaypointManager.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(MissionWindow_port.nonEmpty) {
      WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix.MissionWindow_Send(MissionWindow_port.get)
      MissionWindow_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (WaypointManagerBridge),
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

      HAMR.SW.WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge.c_operational_api.get.logError("")
      val apiUsage_FlightPlan: Option[SW.Mission] = HAMR.SW.WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge.c_operational_api.get.get_FlightPlan()
      HAMR.SW.WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge.c_initialization_api.get.put_MissionWindow(SW.MissionWindow.example())
      HAMR.SW.WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge.c_operational_api.get.put_MissionWindow(SW.MissionWindow.example())
      val apiUsage_Status: Option[SW.Coordinate_Impl] = HAMR.SW.WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge.c_operational_api.get.get_Status()
      val apiUsage_ReturnHome: Option[art.Empty] = HAMR.SW.WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge.c_operational_api.get.get_ReturnHome()
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

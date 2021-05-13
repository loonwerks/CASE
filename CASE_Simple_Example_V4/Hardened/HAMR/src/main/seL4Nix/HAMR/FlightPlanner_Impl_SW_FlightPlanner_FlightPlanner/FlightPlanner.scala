// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_seL4Nix

object FlightPlanner extends App {

  val FlightPlannerBridge : HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge = {
    val FlightPlan = Port[SW.Mission] (id = 0, name = "MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner_FlightPlan", mode = EventOut)
    val MissionCommand = Port[SW.RF_Msg_Impl] (id = 1, name = "MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner_MissionCommand", mode = EventIn)

    HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      FlightPlan = FlightPlan,
      MissionCommand = MissionCommand
    )
  }

  val entryPoints: Bridge.EntryPoints = FlightPlannerBridge.entryPoints
  val noData: Option[DataContent] = None()

  // FlightPlan: Out EventDataPort SW.Mission
  val FlightPlan_id: Art.PortId = FlightPlannerBridge.FlightPlan.id
  var FlightPlan_port: Option[DataContent] = noData

  // MissionCommand: In EventDataPort SW.RF_Msg_Impl
  val MissionCommand_id: Art.PortId = FlightPlannerBridge.MissionCommand.id
  var MissionCommand_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_seL4Nix.MissionCommand_IsEmpty()) {
      portIds = portIds :+ MissionCommand_id
    }
    return EventTriggered(portIds)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == MissionCommand_id) {
      return MissionCommand_port
    } else {
      halt(s"Unexpected: FlightPlanner.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    MissionCommand_port = FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_seL4Nix.MissionCommand_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == FlightPlan_id) {
      FlightPlan_port = Some(data)
    } else {
      halt(s"Unexpected: FlightPlanner.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(FlightPlan_port.nonEmpty) {
      FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_seL4Nix.FlightPlan_Send(FlightPlan_port.get)
      FlightPlan_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (FlightPlannerBridge),
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

      HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_operational_api.get.logError("")
      HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_initialization_api.get.put_FlightPlan(SW.Mission.example())
      HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_operational_api.get.put_FlightPlan(SW.Mission.example())
      val apiUsage_MissionCommand: Option[SW.RF_Msg_Impl] = HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_operational_api.get.get_MissionCommand()
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

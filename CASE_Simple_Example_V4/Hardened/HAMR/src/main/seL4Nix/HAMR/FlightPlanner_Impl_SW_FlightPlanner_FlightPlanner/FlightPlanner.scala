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
    val MissionCommand = Port[Base_Types.Bits] (id = 0, name = "MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner_MissionCommand", mode = EventIn)
    val FlightPlan = Port[Base_Types.Bits] (id = 1, name = "MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner_FlightPlan", mode = EventOut)

    HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      MissionCommand = MissionCommand,
      FlightPlan = FlightPlan
    )
  }

  val entryPoints: Bridge.EntryPoints = FlightPlannerBridge.entryPoints
  val noData: Option[DataContent] = None()

  // MissionCommand: In EventDataPort Base_Types.Bits
  val MissionCommand_id: Art.PortId = FlightPlannerBridge.MissionCommand.id
  var MissionCommand_port: Option[DataContent] = noData

  // FlightPlan: Out EventDataPort Base_Types.Bits
  val FlightPlan_id: Art.PortId = FlightPlannerBridge.FlightPlan.id
  var FlightPlan_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
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
      components = ISZ (FlightPlannerBridge),
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

      HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_operational_api.get.logError("")
      val apiUsage_MissionCommand: Option[Base_Types.Bits] = HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_operational_api.get.get_MissionCommand()
      HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_initialization_api.get.put_FlightPlan(Base_Types.Bits_example())
      HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.c_operational_api.get.put_FlightPlan(Base_Types.Bits_example())
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

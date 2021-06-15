// #Sireum

// This file was auto-generated.  Do not edit

package HAMR_Simple_V4.FlightController_Impl_SW_FlightController_FlightController

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR_Simple_V4._
import HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_FlightController_seL4Nix

object FlightController extends App {

  val FlightControllerBridge : HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge = {
    val FlightPlan = Port[Base_Types.Bits] (id = 0, name = "MissionComputer_Impl_Instance_SW_FlightController_FlightController_FlightPlan", mode = EventIn)
    val Alert = Port[art.Empty] (id = 1, name = "MissionComputer_Impl_Instance_SW_FlightController_FlightController_Alert", mode = EventIn)

    HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_FlightController_FlightController",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      FlightPlan = FlightPlan,
      Alert = Alert
    )
  }

  val entryPoints: Bridge.EntryPoints = FlightControllerBridge.entryPoints
  val noData: Option[DataContent] = None()

  // FlightPlan: In EventDataPort Base_Types.Bits
  val FlightPlan_id: Art.PortId = FlightControllerBridge.FlightPlan.id
  var FlightPlan_port: Option[DataContent] = noData

  // Alert: In EventPort art.Empty
  val Alert_id: Art.PortId = FlightControllerBridge.Alert.id
  var Alert_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!FlightController_Impl_SW_FlightController_FlightController_seL4Nix.FlightPlan_IsEmpty()) {
      portIds = portIds :+ FlightPlan_id
    }
    if(!FlightController_Impl_SW_FlightController_FlightController_seL4Nix.Alert_IsEmpty()) {
      portIds = portIds :+ Alert_id
    }
    return EventTriggered(portIds)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == FlightPlan_id) {
      return FlightPlan_port
    } else if(portId == Alert_id) {
      return Alert_port
    } else {
      halt(s"Unexpected: FlightController.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    FlightPlan_port = FlightController_Impl_SW_FlightController_FlightController_seL4Nix.FlightPlan_Receive()

    Alert_port = FlightController_Impl_SW_FlightController_FlightController_seL4Nix.Alert_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    halt(s"Unexpected: FlightController.putValue called with: ${portId}")
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (FlightControllerBridge),
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

      HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.c_initialization_api.get.logInfo("")
      HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.c_initialization_api.get.logDebug("")
      HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.c_initialization_api.get.logError("")
      HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.c_operational_api.get.logInfo("")
      HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.c_operational_api.get.logDebug("")
      HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.c_operational_api.get.logError("")
      val apiUsage_FlightPlan: Option[Base_Types.Bits] = HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.c_operational_api.get.get_FlightPlan()
      val apiUsage_Alert: Option[art.Empty] = HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.c_operational_api.get.get_Alert()
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

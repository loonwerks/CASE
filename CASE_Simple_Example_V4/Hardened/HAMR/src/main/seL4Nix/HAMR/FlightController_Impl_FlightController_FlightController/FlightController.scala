// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.FlightController_Impl_FlightController_FlightController

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.FlightController_Impl_FlightController_FlightController_seL4Nix

object FlightController extends App {

  val FlightControllerBridge : HAMR.SW.FlightController_Impl_FlightController_FlightController_Bridge = {
    val FlightPlan = Port[SW.Mission] (id = 0, name = "SW_seL4_Impl_Instance_FlightController_FlightController_FlightPlan", mode = EventIn)
    val Alert = Port[art.Empty] (id = 1, name = "SW_seL4_Impl_Instance_FlightController_FlightController_Alert", mode = EventIn)

    HAMR.SW.FlightController_Impl_FlightController_FlightController_Bridge(
      id = 0,
      name = "SW_seL4_Impl_Instance_FlightController_FlightController",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      FlightPlan = FlightPlan,
      Alert = Alert
    )
  }

  val entryPoints: Bridge.EntryPoints = FlightControllerBridge.entryPoints
  val noData: Option[DataContent] = None()

  // FlightPlan: In EventDataPort SW.Mission
  val FlightPlan_id: Art.PortId = FlightControllerBridge.FlightPlan.id
  var FlightPlan_port: Option[DataContent] = noData

  // Alert: In EventPort art.Empty
  val Alert_id: Art.PortId = FlightControllerBridge.Alert.id
  var Alert_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!FlightController_Impl_FlightController_FlightController_seL4Nix.FlightPlan_IsEmpty()) {
      portIds = portIds :+ FlightPlan_id
    }
    if(!FlightController_Impl_FlightController_FlightController_seL4Nix.Alert_IsEmpty()) {
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

    FlightPlan_port = FlightController_Impl_FlightController_FlightController_seL4Nix.FlightPlan_Receive()

    Alert_port = FlightController_Impl_FlightController_FlightController_seL4Nix.Alert_Receive()
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

      printDataContent(Base_Types.Unsigned_8_Payload(Base_Types.Unsigned_8_example()))
      printDataContent(SW.AttestationRequestMsg_Impl_Payload(SW.AttestationRequestMsg_Impl.example()))
      printDataContent(SW.AttestationResponseMsg_Impl_Payload(SW.AttestationResponseMsg_Impl.example()))
      printDataContent(Base_Types.Unsigned_32_Payload(Base_Types.Unsigned_32_example()))
      printDataContent(SW.MsgHeader_Impl_Payload(SW.MsgHeader_Impl.example()))
      printDataContent(Base_Types.Integer_32_Payload(Base_Types.Integer_32_example()))
      printDataContent(SW.Coordinate_Impl_Payload(SW.Coordinate_Impl.example()))
      printDataContent(SW.Map_Payload(SW.Map.example()))
      printDataContent(SW.Command_Impl_Payload(SW.Command_Impl.example()))
      printDataContent(SW.RF_Msg_Impl_Payload(SW.RF_Msg_Impl.example()))
      printDataContent(SW.Mission_Payload(SW.Mission.example()))
      printDataContent(SW.AddressArray_Impl_Payload(SW.AddressArray_Impl.example()))
      printDataContent(SW.AllowList_Impl_Payload(SW.AllowList_Impl.example()))
      printDataContent(art.Empty())

      HAMR.SW.FlightController_Impl_FlightController_FlightController_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.FlightController_Impl_FlightController_FlightController_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.FlightController_Impl_FlightController_FlightController_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.FlightController_Impl_FlightController_FlightController_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.FlightController_Impl_FlightController_FlightController_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.FlightController_Impl_FlightController_FlightController_Bridge.c_operational_api.get.logError("")
      val apiUsage_FlightPlan: Option[SW.Mission] = HAMR.SW.FlightController_Impl_FlightController_FlightController_Bridge.c_operational_api.get.get_FlightPlan()
      val apiUsage_Alert: Option[art.Empty] = HAMR.SW.FlightController_Impl_FlightController_FlightController_Bridge.c_operational_api.get.get_Alert()
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

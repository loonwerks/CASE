// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.UARTDriver_Impl_SW_UART_UARTDriver

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.UARTDriver_Impl_SW_UART_UARTDriver_seL4Nix

object UARTDriver extends App {

  val UARTDriverBridge : HAMR.SW.UARTDriver_Impl_SW_UART_UARTDriver_Bridge = {
    val Status = Port[SW.Coordinate_Impl] (id = 0, name = "MissionComputer_Impl_Instance_SW_UART_UARTDriver_Status", mode = EventOut)
    val MissionWindow = Port[SW.MissionWindow] (id = 1, name = "MissionComputer_Impl_Instance_SW_UART_UARTDriver_MissionWindow", mode = EventIn)

    HAMR.SW.UARTDriver_Impl_SW_UART_UARTDriver_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_UART_UARTDriver",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      Status = Status,
      MissionWindow = MissionWindow
    )
  }

  val entryPoints: Bridge.EntryPoints = UARTDriverBridge.entryPoints
  val noData: Option[DataContent] = None()

  // Status: Out EventDataPort SW.Coordinate_Impl
  val Status_id: Art.PortId = UARTDriverBridge.Status.id
  var Status_port: Option[DataContent] = noData

  // MissionWindow: In EventDataPort SW.MissionWindow
  val MissionWindow_id: Art.PortId = UARTDriverBridge.MissionWindow.id
  var MissionWindow_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!UARTDriver_Impl_SW_UART_UARTDriver_seL4Nix.MissionWindow_IsEmpty()) {
      portIds = portIds :+ MissionWindow_id
    }
    return EventTriggered(portIds)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == MissionWindow_id) {
      return MissionWindow_port
    } else {
      halt(s"Unexpected: UARTDriver.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    MissionWindow_port = UARTDriver_Impl_SW_UART_UARTDriver_seL4Nix.MissionWindow_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == Status_id) {
      Status_port = Some(data)
    } else {
      halt(s"Unexpected: UARTDriver.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(Status_port.nonEmpty) {
      UARTDriver_Impl_SW_UART_UARTDriver_seL4Nix.Status_Send(Status_port.get)
      Status_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (UARTDriverBridge),
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

      HAMR.SW.UARTDriver_Impl_SW_UART_UARTDriver_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.UARTDriver_Impl_SW_UART_UARTDriver_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.UARTDriver_Impl_SW_UART_UARTDriver_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.UARTDriver_Impl_SW_UART_UARTDriver_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.UARTDriver_Impl_SW_UART_UARTDriver_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.UARTDriver_Impl_SW_UART_UARTDriver_Bridge.c_operational_api.get.logError("")
      HAMR.SW.UARTDriver_Impl_SW_UART_UARTDriver_Bridge.c_initialization_api.get.put_Status(SW.Coordinate_Impl.example())
      HAMR.SW.UARTDriver_Impl_SW_UART_UARTDriver_Bridge.c_operational_api.get.put_Status(SW.Coordinate_Impl.example())
      val apiUsage_MissionWindow: Option[SW.MissionWindow] = HAMR.SW.UARTDriver_Impl_SW_UART_UARTDriver_Bridge.c_operational_api.get.get_MissionWindow()
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

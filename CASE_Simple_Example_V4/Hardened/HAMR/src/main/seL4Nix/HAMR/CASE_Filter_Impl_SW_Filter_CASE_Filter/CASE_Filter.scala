// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.CASE_Filter_Impl_SW_Filter_CASE_Filter

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.CASE_Filter_Impl_SW_Filter_CASE_Filter_seL4Nix

object CASE_Filter extends App {

  val CASE_FilterBridge : HAMR.SW.CASE_Filter_Impl_SW_Filter_CASE_Filter_Bridge = {
    val Input = Port[SW.RF_Msg_Impl] (id = 0, name = "MissionComputer_Impl_Instance_SW_Filter_CASE_Filter_Input", mode = EventIn)
    val Output = Port[SW.RF_Msg_Impl] (id = 1, name = "MissionComputer_Impl_Instance_SW_Filter_CASE_Filter_Output", mode = EventOut)

    HAMR.SW.CASE_Filter_Impl_SW_Filter_CASE_Filter_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_Filter_CASE_Filter",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      Input = Input,
      Output = Output
    )
  }

  val entryPoints: Bridge.EntryPoints = CASE_FilterBridge.entryPoints
  val noData: Option[DataContent] = None()

  // Input: In EventDataPort SW.RF_Msg_Impl
  val Input_id: Art.PortId = CASE_FilterBridge.Input.id
  var Input_port: Option[DataContent] = noData

  // Output: Out EventDataPort SW.RF_Msg_Impl
  val Output_id: Art.PortId = CASE_FilterBridge.Output.id
  var Output_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!CASE_Filter_Impl_SW_Filter_CASE_Filter_seL4Nix.Input_IsEmpty()) {
      portIds = portIds :+ Input_id
    }
    return EventTriggered(portIds)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == Input_id) {
      return Input_port
    } else {
      halt(s"Unexpected: CASE_Filter.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    Input_port = CASE_Filter_Impl_SW_Filter_CASE_Filter_seL4Nix.Input_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == Output_id) {
      Output_port = Some(data)
    } else {
      halt(s"Unexpected: CASE_Filter.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(Output_port.nonEmpty) {
      CASE_Filter_Impl_SW_Filter_CASE_Filter_seL4Nix.Output_Send(Output_port.get)
      Output_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (CASE_FilterBridge),
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

      HAMR.SW.CASE_Filter_Impl_SW_Filter_CASE_Filter_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.CASE_Filter_Impl_SW_Filter_CASE_Filter_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.CASE_Filter_Impl_SW_Filter_CASE_Filter_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.CASE_Filter_Impl_SW_Filter_CASE_Filter_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.CASE_Filter_Impl_SW_Filter_CASE_Filter_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.CASE_Filter_Impl_SW_Filter_CASE_Filter_Bridge.c_operational_api.get.logError("")
      val apiUsage_Input: Option[SW.RF_Msg_Impl] = HAMR.SW.CASE_Filter_Impl_SW_Filter_CASE_Filter_Bridge.c_operational_api.get.get_Input()
      HAMR.SW.CASE_Filter_Impl_SW_Filter_CASE_Filter_Bridge.c_initialization_api.get.put_Output(SW.RF_Msg_Impl.example())
      HAMR.SW.CASE_Filter_Impl_SW_Filter_CASE_Filter_Bridge.c_operational_api.get.put_Output(SW.RF_Msg_Impl.example())
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

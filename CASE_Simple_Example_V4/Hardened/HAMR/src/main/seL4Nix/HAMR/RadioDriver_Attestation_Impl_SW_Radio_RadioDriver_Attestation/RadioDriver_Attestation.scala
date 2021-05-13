// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix

object RadioDriver_Attestation extends App {

  val RadioDriver_AttestationBridge : HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge = {
    val MissionCommand = Port[SW.RF_Msg_Impl] (id = 0, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation_MissionCommand", mode = EventOut)
    val AttestationRequest = Port[CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl] (id = 1, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation_AttestationRequest", mode = EventIn)
    val AttestationResponse = Port[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl] (id = 2, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation_AttestationResponse", mode = EventOut)
    val Alert = Port[art.Empty] (id = 3, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation_Alert", mode = EventIn)

    HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_Attestation",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      MissionCommand = MissionCommand,
      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse,
      Alert = Alert
    )
  }

  val entryPoints: Bridge.EntryPoints = RadioDriver_AttestationBridge.entryPoints
  val noData: Option[DataContent] = None()

  // MissionCommand: Out EventDataPort SW.RF_Msg_Impl
  val MissionCommand_id: Art.PortId = RadioDriver_AttestationBridge.MissionCommand.id
  var MissionCommand_port: Option[DataContent] = noData

  // AttestationRequest: In EventDataPort CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl
  val AttestationRequest_id: Art.PortId = RadioDriver_AttestationBridge.AttestationRequest.id
  var AttestationRequest_port: Option[DataContent] = noData

  // AttestationResponse: Out EventDataPort CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl
  val AttestationResponse_id: Art.PortId = RadioDriver_AttestationBridge.AttestationResponse.id
  var AttestationResponse_port: Option[DataContent] = noData

  // Alert: In EventPort art.Empty
  val Alert_id: Art.PortId = RadioDriver_AttestationBridge.Alert.id
  var Alert_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix.AttestationRequest_IsEmpty()) {
      portIds = portIds :+ AttestationRequest_id
    }
    if(!RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix.Alert_IsEmpty()) {
      portIds = portIds :+ Alert_id
    }
    return EventTriggered(portIds)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == AttestationRequest_id) {
      return AttestationRequest_port
    } else if(portId == Alert_id) {
      return Alert_port
    } else {
      halt(s"Unexpected: RadioDriver_Attestation.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    AttestationRequest_port = RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix.AttestationRequest_Receive()

    Alert_port = RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix.Alert_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == MissionCommand_id) {
      MissionCommand_port = Some(data)
    } else if(portId == AttestationResponse_id) {
      AttestationResponse_port = Some(data)
    } else {
      halt(s"Unexpected: RadioDriver_Attestation.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(MissionCommand_port.nonEmpty) {
      RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix.MissionCommand_Send(MissionCommand_port.get)
      MissionCommand_port = noData
    }

    if(AttestationResponse_port.nonEmpty) {
      RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix.AttestationResponse_Send(AttestationResponse_port.get)
      AttestationResponse_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (RadioDriver_AttestationBridge),
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

      HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge.c_operational_api.get.logError("")
      HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_MissionCommand(SW.RF_Msg_Impl.example())
      HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge.c_operational_api.get.put_MissionCommand(SW.RF_Msg_Impl.example())
      val apiUsage_AttestationRequest: Option[CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl] = HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge.c_operational_api.get.get_AttestationRequest()
      HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_AttestationResponse(CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl.example())
      HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge.c_operational_api.get.put_AttestationResponse(CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl.example())
      val apiUsage_Alert: Option[art.Empty] = HAMR.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_Bridge.c_operational_api.get.get_Alert()
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

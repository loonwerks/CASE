// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_seL4Nix

object RadioDriver_Attestation extends App {

  val RadioDriver_AttestationBridge : HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge = {
    val AttestationTesterResponse = Port[SW.AttestationResponseMsg_Impl] (id = 0, name = "SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation_AttestationTesterResponse", mode = EventIn)
    val AttestationTesterRequest = Port[SW.AttestationRequestMsg_Impl] (id = 1, name = "SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation_AttestationTesterRequest", mode = EventOut)
    val MissionCommand = Port[SW.RF_Msg_Impl] (id = 2, name = "SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation_MissionCommand", mode = EventOut)
    val AttestationRequest = Port[SW.AttestationRequestMsg_Impl] (id = 3, name = "SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation_AttestationRequest", mode = EventIn)
    val AttestationResponse = Port[SW.AttestationResponseMsg_Impl] (id = 4, name = "SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation_AttestationResponse", mode = EventOut)

    HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge(
      id = 0,
      name = "SW_seL4_Impl_Instance_Radio_RadioDriver_Attestation",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      AttestationTesterResponse = AttestationTesterResponse,
      AttestationTesterRequest = AttestationTesterRequest,
      MissionCommand = MissionCommand,
      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse
    )
  }

  val entryPoints: Bridge.EntryPoints = RadioDriver_AttestationBridge.entryPoints
  val noData: Option[DataContent] = None()

  // AttestationTesterResponse: In EventDataPort SW.AttestationResponseMsg_Impl
  val AttestationTesterResponse_id: Art.PortId = RadioDriver_AttestationBridge.AttestationTesterResponse.id
  var AttestationTesterResponse_port: Option[DataContent] = noData

  // AttestationTesterRequest: Out EventDataPort SW.AttestationRequestMsg_Impl
  val AttestationTesterRequest_id: Art.PortId = RadioDriver_AttestationBridge.AttestationTesterRequest.id
  var AttestationTesterRequest_port: Option[DataContent] = noData

  // MissionCommand: Out EventDataPort SW.RF_Msg_Impl
  val MissionCommand_id: Art.PortId = RadioDriver_AttestationBridge.MissionCommand.id
  var MissionCommand_port: Option[DataContent] = noData

  // AttestationRequest: In EventDataPort SW.AttestationRequestMsg_Impl
  val AttestationRequest_id: Art.PortId = RadioDriver_AttestationBridge.AttestationRequest.id
  var AttestationRequest_port: Option[DataContent] = noData

  // AttestationResponse: Out EventDataPort SW.AttestationResponseMsg_Impl
  val AttestationResponse_id: Art.PortId = RadioDriver_AttestationBridge.AttestationResponse.id
  var AttestationResponse_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_seL4Nix.AttestationTesterResponse_IsEmpty()) {
      portIds = portIds :+ AttestationTesterResponse_id
    }
    if(!RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_seL4Nix.AttestationRequest_IsEmpty()) {
      portIds = portIds :+ AttestationRequest_id
    }
    return EventTriggered(portIds)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == AttestationTesterResponse_id) {
      return AttestationTesterResponse_port
    } else if(portId == AttestationRequest_id) {
      return AttestationRequest_port
    } else {
      halt(s"Unexpected: RadioDriver_Attestation.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    AttestationTesterResponse_port = RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_seL4Nix.AttestationTesterResponse_Receive()

    AttestationRequest_port = RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_seL4Nix.AttestationRequest_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == AttestationTesterRequest_id) {
      AttestationTesterRequest_port = Some(data)
    } else if(portId == MissionCommand_id) {
      MissionCommand_port = Some(data)
    } else if(portId == AttestationResponse_id) {
      AttestationResponse_port = Some(data)
    } else {
      halt(s"Unexpected: RadioDriver_Attestation.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(AttestationTesterRequest_port.nonEmpty) {
      RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_seL4Nix.AttestationTesterRequest_Send(AttestationTesterRequest_port.get)
      AttestationTesterRequest_port = noData
    }

    if(MissionCommand_port.nonEmpty) {
      RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_seL4Nix.MissionCommand_Send(MissionCommand_port.get)
      MissionCommand_port = noData
    }

    if(AttestationResponse_port.nonEmpty) {
      RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_seL4Nix.AttestationResponse_Send(AttestationResponse_port.get)
      AttestationResponse_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (RadioDriver_AttestationBridge),
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

      HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge.c_operational_api.get.logError("")
      val apiUsage_AttestationTesterResponse: Option[SW.AttestationResponseMsg_Impl] = HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge.c_operational_api.get.get_AttestationTesterResponse()
      HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_AttestationTesterRequest(SW.AttestationRequestMsg_Impl.example())
      HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge.c_operational_api.get.put_AttestationTesterRequest(SW.AttestationRequestMsg_Impl.example())
      HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_MissionCommand(SW.RF_Msg_Impl.example())
      HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge.c_operational_api.get.put_MissionCommand(SW.RF_Msg_Impl.example())
      val apiUsage_AttestationRequest: Option[SW.AttestationRequestMsg_Impl] = HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge.c_operational_api.get.get_AttestationRequest()
      HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge.c_initialization_api.get.put_AttestationResponse(SW.AttestationResponseMsg_Impl.example())
      HAMR.SW.RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_Bridge.c_operational_api.get.put_AttestationResponse(SW.AttestationResponseMsg_Impl.example())
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

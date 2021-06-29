// #Sireum

// This file was auto-generated.  Do not edit

package HAMR_Simple_V4.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR_Simple_V4._
import HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_seL4Nix

object RadioDriver extends App {

  val RadioDriverBridge : HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge = {
    val MissionCommand = Port[Base_Types.Bits] (id = 0, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_MissionCommand", mode = EventOut)
    val AttestationRequest = Port[Base_Types.Bits] (id = 1, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_AttestationRequest", mode = EventIn)
    val AttestationResponse = Port[Base_Types.Bits] (id = 2, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_AttestationResponse", mode = EventOut)
    val AttestationTesterResponse = Port[Base_Types.Bits] (id = 3, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_AttestationTesterResponse", mode = EventIn)
    val AttestationTesterRequest = Port[Base_Types.Bits] (id = 4, name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver_AttestationTesterRequest", mode = EventOut)

    HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_Radio_RadioDriver",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      MissionCommand = MissionCommand,
      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse,
      AttestationTesterResponse = AttestationTesterResponse,
      AttestationTesterRequest = AttestationTesterRequest
    )
  }

  val entryPoints: Bridge.EntryPoints = RadioDriverBridge.entryPoints
  val noData: Option[DataContent] = None()

  // MissionCommand: Out EventDataPort Base_Types.Bits
  val MissionCommand_id: Art.PortId = RadioDriverBridge.MissionCommand.id
  var MissionCommand_port: Option[DataContent] = noData

  // AttestationRequest: In EventDataPort Base_Types.Bits
  val AttestationRequest_id: Art.PortId = RadioDriverBridge.AttestationRequest.id
  var AttestationRequest_port: Option[DataContent] = noData

  // AttestationResponse: Out EventDataPort Base_Types.Bits
  val AttestationResponse_id: Art.PortId = RadioDriverBridge.AttestationResponse.id
  var AttestationResponse_port: Option[DataContent] = noData

  // AttestationTesterResponse: In EventDataPort Base_Types.Bits
  val AttestationTesterResponse_id: Art.PortId = RadioDriverBridge.AttestationTesterResponse.id
  var AttestationTesterResponse_port: Option[DataContent] = noData

  // AttestationTesterRequest: Out EventDataPort Base_Types.Bits
  val AttestationTesterRequest_id: Art.PortId = RadioDriverBridge.AttestationTesterRequest.id
  var AttestationTesterRequest_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == AttestationRequest_id) {
      return AttestationRequest_port
    } else if(portId == AttestationTesterResponse_id) {
      return AttestationTesterResponse_port
    } else {
      halt(s"Unexpected: RadioDriver.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    AttestationRequest_port = RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_seL4Nix.AttestationRequest_Receive()

    AttestationTesterResponse_port = RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_seL4Nix.AttestationTesterResponse_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == MissionCommand_id) {
      MissionCommand_port = Some(data)
    } else if(portId == AttestationResponse_id) {
      AttestationResponse_port = Some(data)
    } else if(portId == AttestationTesterRequest_id) {
      AttestationTesterRequest_port = Some(data)
    } else {
      halt(s"Unexpected: RadioDriver.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(MissionCommand_port.nonEmpty) {
      RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_seL4Nix.MissionCommand_Send(MissionCommand_port.get)
      MissionCommand_port = noData
    }

    if(AttestationResponse_port.nonEmpty) {
      RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_seL4Nix.AttestationResponse_Send(AttestationResponse_port.get)
      AttestationResponse_port = noData
    }

    if(AttestationTesterRequest_port.nonEmpty) {
      RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_seL4Nix.AttestationTesterRequest_Send(AttestationTesterRequest_port.get)
      AttestationTesterRequest_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (RadioDriverBridge),
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

      HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.c_initialization_api.get.logInfo("")
      HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.c_initialization_api.get.logDebug("")
      HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.c_initialization_api.get.logError("")
      HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.c_operational_api.get.logInfo("")
      HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.c_operational_api.get.logDebug("")
      HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.c_operational_api.get.logError("")
      HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.c_initialization_api.get.put_MissionCommand(Base_Types.Bits_example())
      HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.c_operational_api.get.put_MissionCommand(Base_Types.Bits_example())
      val apiUsage_AttestationRequest: Option[Base_Types.Bits] = HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.c_operational_api.get.get_AttestationRequest()
      HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.c_initialization_api.get.put_AttestationResponse(Base_Types.Bits_example())
      HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.c_operational_api.get.put_AttestationResponse(Base_Types.Bits_example())
      val apiUsage_AttestationTesterResponse: Option[Base_Types.Bits] = HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.c_operational_api.get.get_AttestationTesterResponse()
      HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.c_initialization_api.get.put_AttestationTesterRequest(Base_Types.Bits_example())
      HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.c_operational_api.get.put_AttestationTesterRequest(Base_Types.Bits_example())
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

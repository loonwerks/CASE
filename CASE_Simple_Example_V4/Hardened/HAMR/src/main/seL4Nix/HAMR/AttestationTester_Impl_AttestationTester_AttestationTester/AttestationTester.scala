// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.AttestationTester_Impl_AttestationTester_AttestationTester

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.AttestationTester_Impl_AttestationTester_AttestationTester_seL4Nix

object AttestationTester extends App {

  val AttestationTesterBridge : HAMR.SW.AttestationTester_Impl_AttestationTester_AttestationTester_Bridge = {
    val AttestationRequest = Port[SW.AttestationRequestMsg_Impl] (id = 0, name = "SW_seL4_Impl_Instance_AttestationTester_AttestationTester_AttestationRequest", mode = EventIn)
    val AttestationResponse = Port[SW.AttestationResponseMsg_Impl] (id = 1, name = "SW_seL4_Impl_Instance_AttestationTester_AttestationTester_AttestationResponse", mode = EventOut)

    HAMR.SW.AttestationTester_Impl_AttestationTester_AttestationTester_Bridge(
      id = 0,
      name = "SW_seL4_Impl_Instance_AttestationTester_AttestationTester",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse
    )
  }

  val entryPoints: Bridge.EntryPoints = AttestationTesterBridge.entryPoints
  val noData: Option[DataContent] = None()

  // AttestationRequest: In EventDataPort SW.AttestationRequestMsg_Impl
  val AttestationRequest_id: Art.PortId = AttestationTesterBridge.AttestationRequest.id
  var AttestationRequest_port: Option[DataContent] = noData

  // AttestationResponse: Out EventDataPort SW.AttestationResponseMsg_Impl
  val AttestationResponse_id: Art.PortId = AttestationTesterBridge.AttestationResponse.id
  var AttestationResponse_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!AttestationTester_Impl_AttestationTester_AttestationTester_seL4Nix.AttestationRequest_IsEmpty()) {
      portIds = portIds :+ AttestationRequest_id
    }
    return EventTriggered(portIds)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == AttestationRequest_id) {
      return AttestationRequest_port
    } else {
      halt(s"Unexpected: AttestationTester.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    AttestationRequest_port = AttestationTester_Impl_AttestationTester_AttestationTester_seL4Nix.AttestationRequest_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == AttestationResponse_id) {
      AttestationResponse_port = Some(data)
    } else {
      halt(s"Unexpected: AttestationTester.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(AttestationResponse_port.nonEmpty) {
      AttestationTester_Impl_AttestationTester_AttestationTester_seL4Nix.AttestationResponse_Send(AttestationResponse_port.get)
      AttestationResponse_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (AttestationTesterBridge),
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

      HAMR.SW.AttestationTester_Impl_AttestationTester_AttestationTester_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.AttestationTester_Impl_AttestationTester_AttestationTester_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.AttestationTester_Impl_AttestationTester_AttestationTester_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.AttestationTester_Impl_AttestationTester_AttestationTester_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.AttestationTester_Impl_AttestationTester_AttestationTester_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.AttestationTester_Impl_AttestationTester_AttestationTester_Bridge.c_operational_api.get.logError("")
      val apiUsage_AttestationRequest: Option[SW.AttestationRequestMsg_Impl] = HAMR.SW.AttestationTester_Impl_AttestationTester_AttestationTester_Bridge.c_operational_api.get.get_AttestationRequest()
      HAMR.SW.AttestationTester_Impl_AttestationTester_AttestationTester_Bridge.c_initialization_api.get.put_AttestationResponse(SW.AttestationResponseMsg_Impl.example())
      HAMR.SW.AttestationTester_Impl_AttestationTester_AttestationTester_Bridge.c_operational_api.get.put_AttestationResponse(SW.AttestationResponseMsg_Impl.example())
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

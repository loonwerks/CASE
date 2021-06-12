// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.AttestationManager_Impl_AttestationManager_AttestationManager

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.AttestationManager_Impl_AttestationManager_AttestationManager_seL4Nix

object AttestationManager extends App {

  val AttestationManagerBridge : HAMR.SW.AttestationManager_Impl_AttestationManager_AttestationManager_Bridge = {
    val AttestationRequest = Port[SW.AttestationRequestMsg_Impl] (id = 0, name = "SW_seL4_Impl_Instance_AttestationManager_AttestationManager_AttestationRequest", mode = EventOut)
    val AttestationResponse = Port[SW.AttestationResponseMsg_Impl] (id = 1, name = "SW_seL4_Impl_Instance_AttestationManager_AttestationManager_AttestationResponse", mode = EventIn)
    val TrustedIds = Port[SW.AllowList_Impl] (id = 2, name = "SW_seL4_Impl_Instance_AttestationManager_AttestationManager_TrustedIds", mode = EventOut)

    HAMR.SW.AttestationManager_Impl_AttestationManager_AttestationManager_Bridge(
      id = 0,
      name = "SW_seL4_Impl_Instance_AttestationManager_AttestationManager",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse,
      TrustedIds = TrustedIds
    )
  }

  val entryPoints: Bridge.EntryPoints = AttestationManagerBridge.entryPoints
  val noData: Option[DataContent] = None()

  // AttestationRequest: Out EventDataPort SW.AttestationRequestMsg_Impl
  val AttestationRequest_id: Art.PortId = AttestationManagerBridge.AttestationRequest.id
  var AttestationRequest_port: Option[DataContent] = noData

  // AttestationResponse: In EventDataPort SW.AttestationResponseMsg_Impl
  val AttestationResponse_id: Art.PortId = AttestationManagerBridge.AttestationResponse.id
  var AttestationResponse_port: Option[DataContent] = noData

  // TrustedIds: Out EventDataPort SW.AllowList_Impl
  val TrustedIds_id: Art.PortId = AttestationManagerBridge.TrustedIds.id
  var TrustedIds_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!AttestationManager_Impl_AttestationManager_AttestationManager_seL4Nix.AttestationResponse_IsEmpty()) {
      portIds = portIds :+ AttestationResponse_id
    }
    return EventTriggered(portIds)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == AttestationResponse_id) {
      return AttestationResponse_port
    } else {
      halt(s"Unexpected: AttestationManager.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    AttestationResponse_port = AttestationManager_Impl_AttestationManager_AttestationManager_seL4Nix.AttestationResponse_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == AttestationRequest_id) {
      AttestationRequest_port = Some(data)
    } else if(portId == TrustedIds_id) {
      TrustedIds_port = Some(data)
    } else {
      halt(s"Unexpected: AttestationManager.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(AttestationRequest_port.nonEmpty) {
      AttestationManager_Impl_AttestationManager_AttestationManager_seL4Nix.AttestationRequest_Send(AttestationRequest_port.get)
      AttestationRequest_port = noData
    }

    if(TrustedIds_port.nonEmpty) {
      AttestationManager_Impl_AttestationManager_AttestationManager_seL4Nix.TrustedIds_Send(TrustedIds_port.get)
      TrustedIds_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (AttestationManagerBridge),
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

      HAMR.SW.AttestationManager_Impl_AttestationManager_AttestationManager_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.AttestationManager_Impl_AttestationManager_AttestationManager_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.AttestationManager_Impl_AttestationManager_AttestationManager_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.AttestationManager_Impl_AttestationManager_AttestationManager_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.AttestationManager_Impl_AttestationManager_AttestationManager_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.AttestationManager_Impl_AttestationManager_AttestationManager_Bridge.c_operational_api.get.logError("")
      HAMR.SW.AttestationManager_Impl_AttestationManager_AttestationManager_Bridge.c_initialization_api.get.put_AttestationRequest(SW.AttestationRequestMsg_Impl.example())
      HAMR.SW.AttestationManager_Impl_AttestationManager_AttestationManager_Bridge.c_operational_api.get.put_AttestationRequest(SW.AttestationRequestMsg_Impl.example())
      val apiUsage_AttestationResponse: Option[SW.AttestationResponseMsg_Impl] = HAMR.SW.AttestationManager_Impl_AttestationManager_AttestationManager_Bridge.c_operational_api.get.get_AttestationResponse()
      HAMR.SW.AttestationManager_Impl_AttestationManager_AttestationManager_Bridge.c_initialization_api.get.put_TrustedIds(SW.AllowList_Impl.example())
      HAMR.SW.AttestationManager_Impl_AttestationManager_AttestationManager_Bridge.c_operational_api.get.put_TrustedIds(SW.AllowList_Impl.example())
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

// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_seL4Nix

object CASE_AttestationManager extends App {

  val CASE_AttestationManagerBridge : HAMR.SW.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge = {
    val AttestationRequest = Port[CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl] (id = 0, name = "MissionComputer_Impl_Instance_SW_AttestationManager_CASE_AttestationManager_AttestationRequest", mode = EventOut)
    val AttestationResponse = Port[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl] (id = 1, name = "MissionComputer_Impl_Instance_SW_AttestationManager_CASE_AttestationManager_AttestationResponse", mode = EventIn)
    val TrustedIds = Port[SW.Address_Impl] (id = 2, name = "MissionComputer_Impl_Instance_SW_AttestationManager_CASE_AttestationManager_TrustedIds", mode = EventOut)

    HAMR.SW.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_AttestationManager_CASE_AttestationManager",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse,
      TrustedIds = TrustedIds
    )
  }

  val entryPoints: Bridge.EntryPoints = CASE_AttestationManagerBridge.entryPoints
  val noData: Option[DataContent] = None()

  // AttestationRequest: Out EventDataPort CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl
  val AttestationRequest_id: Art.PortId = CASE_AttestationManagerBridge.AttestationRequest.id
  var AttestationRequest_port: Option[DataContent] = noData

  // AttestationResponse: In EventDataPort CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl
  val AttestationResponse_id: Art.PortId = CASE_AttestationManagerBridge.AttestationResponse.id
  var AttestationResponse_port: Option[DataContent] = noData

  // TrustedIds: Out EventDataPort SW.Address_Impl
  val TrustedIds_id: Art.PortId = CASE_AttestationManagerBridge.TrustedIds.id
  var TrustedIds_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_seL4Nix.AttestationResponse_IsEmpty()) {
      portIds = portIds :+ AttestationResponse_id
    }
    return EventTriggered(portIds)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == AttestationResponse_id) {
      return AttestationResponse_port
    } else {
      halt(s"Unexpected: CASE_AttestationManager.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    AttestationResponse_port = CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_seL4Nix.AttestationResponse_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == AttestationRequest_id) {
      AttestationRequest_port = Some(data)
    } else if(portId == TrustedIds_id) {
      TrustedIds_port = Some(data)
    } else {
      halt(s"Unexpected: CASE_AttestationManager.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(AttestationRequest_port.nonEmpty) {
      CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_seL4Nix.AttestationRequest_Send(AttestationRequest_port.get)
      AttestationRequest_port = noData
    }

    if(TrustedIds_port.nonEmpty) {
      CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_seL4Nix.TrustedIds_Send(TrustedIds_port.get)
      TrustedIds_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (CASE_AttestationManagerBridge),
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

      HAMR.SW.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge.c_operational_api.get.logError("")
      HAMR.SW.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge.c_initialization_api.get.put_AttestationRequest(CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl.example())
      HAMR.SW.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge.c_operational_api.get.put_AttestationRequest(CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl.example())
      val apiUsage_AttestationResponse: Option[CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl] = HAMR.SW.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge.c_operational_api.get.get_AttestationResponse()
      HAMR.SW.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge.c_initialization_api.get.put_TrustedIds(SW.Address_Impl.example())
      HAMR.SW.CASE_AttestationManager_Impl_SW_AttestationManager_CASE_AttestationManager_Bridge.c_operational_api.get.put_TrustedIds(SW.Address_Impl.example())
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

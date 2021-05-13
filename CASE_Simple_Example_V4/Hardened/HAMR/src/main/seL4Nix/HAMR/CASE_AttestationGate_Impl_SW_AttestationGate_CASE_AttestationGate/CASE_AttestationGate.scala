// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_seL4Nix

object CASE_AttestationGate extends App {

  val CASE_AttestationGateBridge : HAMR.SW.CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge = {
    val MissionCommand_in = Port[SW.RF_Msg_Impl] (id = 0, name = "MissionComputer_Impl_Instance_SW_AttestationGate_CASE_AttestationGate_MissionCommand_in", mode = EventIn)
    val MissionCommand_out = Port[SW.RF_Msg_Impl] (id = 1, name = "MissionComputer_Impl_Instance_SW_AttestationGate_CASE_AttestationGate_MissionCommand_out", mode = EventOut)
    val TrustedIds = Port[SW.Address_Impl] (id = 2, name = "MissionComputer_Impl_Instance_SW_AttestationGate_CASE_AttestationGate_TrustedIds", mode = EventIn)

    HAMR.SW.CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_AttestationGate_CASE_AttestationGate",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      MissionCommand_in = MissionCommand_in,
      MissionCommand_out = MissionCommand_out,
      TrustedIds = TrustedIds
    )
  }

  val entryPoints: Bridge.EntryPoints = CASE_AttestationGateBridge.entryPoints
  val noData: Option[DataContent] = None()

  // MissionCommand_in: In EventDataPort SW.RF_Msg_Impl
  val MissionCommand_in_id: Art.PortId = CASE_AttestationGateBridge.MissionCommand_in.id
  var MissionCommand_in_port: Option[DataContent] = noData

  // MissionCommand_out: Out EventDataPort SW.RF_Msg_Impl
  val MissionCommand_out_id: Art.PortId = CASE_AttestationGateBridge.MissionCommand_out.id
  var MissionCommand_out_port: Option[DataContent] = noData

  // TrustedIds: In EventDataPort SW.Address_Impl
  val TrustedIds_id: Art.PortId = CASE_AttestationGateBridge.TrustedIds.id
  var TrustedIds_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_seL4Nix.MissionCommand_in_IsEmpty()) {
      portIds = portIds :+ MissionCommand_in_id
    }
    if(!CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_seL4Nix.TrustedIds_IsEmpty()) {
      portIds = portIds :+ TrustedIds_id
    }
    return EventTriggered(portIds)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == MissionCommand_in_id) {
      return MissionCommand_in_port
    } else if(portId == TrustedIds_id) {
      return TrustedIds_port
    } else {
      halt(s"Unexpected: CASE_AttestationGate.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    MissionCommand_in_port = CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_seL4Nix.MissionCommand_in_Receive()

    TrustedIds_port = CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_seL4Nix.TrustedIds_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == MissionCommand_out_id) {
      MissionCommand_out_port = Some(data)
    } else {
      halt(s"Unexpected: CASE_AttestationGate.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(MissionCommand_out_port.nonEmpty) {
      CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_seL4Nix.MissionCommand_out_Send(MissionCommand_out_port.get)
      MissionCommand_out_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (CASE_AttestationGateBridge),
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

      HAMR.SW.CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge.c_operational_api.get.logError("")
      val apiUsage_MissionCommand_in: Option[SW.RF_Msg_Impl] = HAMR.SW.CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge.c_operational_api.get.get_MissionCommand_in()
      HAMR.SW.CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge.c_initialization_api.get.put_MissionCommand_out(SW.RF_Msg_Impl.example())
      HAMR.SW.CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge.c_operational_api.get.put_MissionCommand_out(SW.RF_Msg_Impl.example())
      val apiUsage_TrustedIds: Option[SW.Address_Impl] = HAMR.SW.CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate_Bridge.c_operational_api.get.get_TrustedIds()
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

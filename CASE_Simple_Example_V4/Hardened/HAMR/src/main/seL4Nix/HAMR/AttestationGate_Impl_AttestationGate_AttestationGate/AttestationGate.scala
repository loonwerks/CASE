// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.AttestationGate_Impl_AttestationGate_AttestationGate

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.AttestationGate_Impl_AttestationGate_AttestationGate_seL4Nix

object AttestationGate extends App {

  val AttestationGateBridge : HAMR.SW.AttestationGate_Impl_AttestationGate_AttestationGate_Bridge = {
    val MissionCommand_in = Port[SW.RF_Msg_Impl] (id = 0, name = "SW_seL4_Impl_Instance_AttestationGate_AttestationGate_MissionCommand_in", mode = EventIn)
    val MissionCommand_out = Port[SW.RF_Msg_Impl] (id = 1, name = "SW_seL4_Impl_Instance_AttestationGate_AttestationGate_MissionCommand_out", mode = EventOut)
    val TrustedIds = Port[SW.AllowList_Impl] (id = 2, name = "SW_seL4_Impl_Instance_AttestationGate_AttestationGate_TrustedIds", mode = EventIn)

    HAMR.SW.AttestationGate_Impl_AttestationGate_AttestationGate_Bridge(
      id = 0,
      name = "SW_seL4_Impl_Instance_AttestationGate_AttestationGate",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      MissionCommand_in = MissionCommand_in,
      MissionCommand_out = MissionCommand_out,
      TrustedIds = TrustedIds
    )
  }

  val entryPoints: Bridge.EntryPoints = AttestationGateBridge.entryPoints
  val noData: Option[DataContent] = None()

  // MissionCommand_in: In EventDataPort SW.RF_Msg_Impl
  val MissionCommand_in_id: Art.PortId = AttestationGateBridge.MissionCommand_in.id
  var MissionCommand_in_port: Option[DataContent] = noData

  // MissionCommand_out: Out EventDataPort SW.RF_Msg_Impl
  val MissionCommand_out_id: Art.PortId = AttestationGateBridge.MissionCommand_out.id
  var MissionCommand_out_port: Option[DataContent] = noData

  // TrustedIds: In EventDataPort SW.AllowList_Impl
  val TrustedIds_id: Art.PortId = AttestationGateBridge.TrustedIds.id
  var TrustedIds_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!AttestationGate_Impl_AttestationGate_AttestationGate_seL4Nix.MissionCommand_in_IsEmpty()) {
      portIds = portIds :+ MissionCommand_in_id
    }
    if(!AttestationGate_Impl_AttestationGate_AttestationGate_seL4Nix.TrustedIds_IsEmpty()) {
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
      halt(s"Unexpected: AttestationGate.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    MissionCommand_in_port = AttestationGate_Impl_AttestationGate_AttestationGate_seL4Nix.MissionCommand_in_Receive()

    TrustedIds_port = AttestationGate_Impl_AttestationGate_AttestationGate_seL4Nix.TrustedIds_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == MissionCommand_out_id) {
      MissionCommand_out_port = Some(data)
    } else {
      halt(s"Unexpected: AttestationGate.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(MissionCommand_out_port.nonEmpty) {
      AttestationGate_Impl_AttestationGate_AttestationGate_seL4Nix.MissionCommand_out_Send(MissionCommand_out_port.get)
      MissionCommand_out_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (AttestationGateBridge),
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

      HAMR.SW.AttestationGate_Impl_AttestationGate_AttestationGate_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.AttestationGate_Impl_AttestationGate_AttestationGate_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.AttestationGate_Impl_AttestationGate_AttestationGate_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.AttestationGate_Impl_AttestationGate_AttestationGate_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.AttestationGate_Impl_AttestationGate_AttestationGate_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.AttestationGate_Impl_AttestationGate_AttestationGate_Bridge.c_operational_api.get.logError("")
      val apiUsage_MissionCommand_in: Option[SW.RF_Msg_Impl] = HAMR.SW.AttestationGate_Impl_AttestationGate_AttestationGate_Bridge.c_operational_api.get.get_MissionCommand_in()
      HAMR.SW.AttestationGate_Impl_AttestationGate_AttestationGate_Bridge.c_initialization_api.get.put_MissionCommand_out(SW.RF_Msg_Impl.example())
      HAMR.SW.AttestationGate_Impl_AttestationGate_AttestationGate_Bridge.c_operational_api.get.put_MissionCommand_out(SW.RF_Msg_Impl.example())
      val apiUsage_TrustedIds: Option[SW.AllowList_Impl] = HAMR.SW.AttestationGate_Impl_AttestationGate_AttestationGate_Bridge.c_operational_api.get.get_TrustedIds()
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

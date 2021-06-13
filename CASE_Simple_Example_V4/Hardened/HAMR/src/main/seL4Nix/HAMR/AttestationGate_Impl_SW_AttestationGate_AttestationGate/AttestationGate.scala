// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix

object AttestationGate extends App {

  val AttestationGateBridge : HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge = {
    val MissionCommand_in = Port[Base_Types.Bits] (id = 0, name = "MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate_MissionCommand_in", mode = EventIn)
    val MissionCommand_out = Port[Base_Types.Bits] (id = 1, name = "MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate_MissionCommand_out", mode = EventOut)
    val TrustedIds = Port[Base_Types.Bits] (id = 2, name = "MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate_TrustedIds", mode = EventIn)

    HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      MissionCommand_in = MissionCommand_in,
      MissionCommand_out = MissionCommand_out,
      TrustedIds = TrustedIds
    )
  }

  val entryPoints: Bridge.EntryPoints = AttestationGateBridge.entryPoints
  val noData: Option[DataContent] = None()

  // MissionCommand_in: In EventDataPort Base_Types.Bits
  val MissionCommand_in_id: Art.PortId = AttestationGateBridge.MissionCommand_in.id
  var MissionCommand_in_port: Option[DataContent] = noData

  // MissionCommand_out: Out EventDataPort Base_Types.Bits
  val MissionCommand_out_id: Art.PortId = AttestationGateBridge.MissionCommand_out.id
  var MissionCommand_out_port: Option[DataContent] = noData

  // TrustedIds: In EventDataPort Base_Types.Bits
  val TrustedIds_id: Art.PortId = AttestationGateBridge.TrustedIds.id
  var TrustedIds_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix.MissionCommand_in_IsEmpty()) {
      portIds = portIds :+ MissionCommand_in_id
    }
    if(!AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix.TrustedIds_IsEmpty()) {
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

    MissionCommand_in_port = AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix.MissionCommand_in_Receive()

    TrustedIds_port = AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix.TrustedIds_Receive()
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
      AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix.MissionCommand_out_Send(MissionCommand_out_port.get)
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

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_operational_api.get.logError("")
      val apiUsage_MissionCommand_in: Option[Base_Types.Bits] = HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_operational_api.get.get_MissionCommand_in()
      HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_initialization_api.get.put_MissionCommand_out(Base_Types.Bits_example())
      HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_operational_api.get.put_MissionCommand_out(Base_Types.Bits_example())
      val apiUsage_TrustedIds: Option[Base_Types.Bits] = HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge.c_operational_api.get.get_TrustedIds()
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

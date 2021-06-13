// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.AttestationTester_Impl_SW_AttestationTester_AttestationTester

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_seL4Nix

object AttestationTester extends App {

  val AttestationTesterBridge : HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge = {
    val AttestationRequest = Port[Base_Types.Bits] (id = 0, name = "MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester_AttestationRequest", mode = EventIn)
    val AttestationResponse = Port[Base_Types.Bits] (id = 1, name = "MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester_AttestationResponse", mode = EventOut)

    HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_AttestationTester_AttestationTester",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      AttestationRequest = AttestationRequest,
      AttestationResponse = AttestationResponse
    )
  }

  val entryPoints: Bridge.EntryPoints = AttestationTesterBridge.entryPoints
  val noData: Option[DataContent] = None()

  // AttestationRequest: In EventDataPort Base_Types.Bits
  val AttestationRequest_id: Art.PortId = AttestationTesterBridge.AttestationRequest.id
  var AttestationRequest_port: Option[DataContent] = noData

  // AttestationResponse: Out EventDataPort Base_Types.Bits
  val AttestationResponse_id: Art.PortId = AttestationTesterBridge.AttestationResponse.id
  var AttestationResponse_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!AttestationTester_Impl_SW_AttestationTester_AttestationTester_seL4Nix.AttestationRequest_IsEmpty()) {
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

    AttestationRequest_port = AttestationTester_Impl_SW_AttestationTester_AttestationTester_seL4Nix.AttestationRequest_Receive()
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
      AttestationTester_Impl_SW_AttestationTester_AttestationTester_seL4Nix.AttestationResponse_Send(AttestationResponse_port.get)
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

      printDataContent(Base_Types.Bits_Payload(Base_Types.Bits_example()))
      printDataContent(art.Empty())

      HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_operational_api.get.logError("")
      val apiUsage_AttestationRequest: Option[Base_Types.Bits] = HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_operational_api.get.get_AttestationRequest()
      HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_initialization_api.get.put_AttestationResponse(Base_Types.Bits_example())
      HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge.c_operational_api.get.put_AttestationResponse(Base_Types.Bits_example())
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

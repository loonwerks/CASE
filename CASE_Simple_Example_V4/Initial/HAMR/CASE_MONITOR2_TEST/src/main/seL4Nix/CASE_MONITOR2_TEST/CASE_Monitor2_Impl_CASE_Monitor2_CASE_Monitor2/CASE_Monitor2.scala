// #Sireum

// This file was auto-generated.  Do not edit

package CASE_MONITOR2_TEST.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import CASE_MONITOR2_TEST._
import CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_seL4Nix

object CASE_Monitor2 extends App {

  val CASE_Monitor2Bridge : CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge = {
    val Observed = Port[Base_Types.Bits] (id = 0, name = "CASE_MONITOR2_TEST_impl_Instance_CASE_Monitor2_CASE_Monitor2_Observed", mode = EventIn)
    val Suspect_Traffic_Out = Port[Base_Types.Bits] (id = 1, name = "CASE_MONITOR2_TEST_impl_Instance_CASE_Monitor2_CASE_Monitor2_Suspect_Traffic_Out", mode = EventOut)

    CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge(
      id = 0,
      name = "CASE_MONITOR2_TEST_impl_Instance_CASE_Monitor2_CASE_Monitor2",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      Observed = Observed,
      Suspect_Traffic_Out = Suspect_Traffic_Out
    )
  }

  val entryPoints: Bridge.EntryPoints = CASE_Monitor2Bridge.entryPoints
  val noData: Option[DataContent] = None()

  // Observed: In EventDataPort Base_Types.Bits
  val Observed_id: Art.PortId = CASE_Monitor2Bridge.Observed.id
  var Observed_port: Option[DataContent] = noData

  // Suspect_Traffic_Out: Out EventDataPort Base_Types.Bits
  val Suspect_Traffic_Out_id: Art.PortId = CASE_Monitor2Bridge.Suspect_Traffic_Out.id
  var Suspect_Traffic_Out_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == Observed_id) {
      return Observed_port
    } else {
      halt(s"Unexpected: CASE_Monitor2.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    Observed_port = CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_seL4Nix.Observed_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == Suspect_Traffic_Out_id) {
      Suspect_Traffic_Out_port = Some(data)
    } else {
      halt(s"Unexpected: CASE_Monitor2.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(Suspect_Traffic_Out_port.nonEmpty) {
      CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_seL4Nix.Suspect_Traffic_Out_Send(Suspect_Traffic_Out_port.get)
      Suspect_Traffic_Out_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (CASE_Monitor2Bridge),
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

      CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge.c_initialization_api.get.logInfo("")
      CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge.c_initialization_api.get.logDebug("")
      CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge.c_initialization_api.get.logError("")
      CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge.c_operational_api.get.logInfo("")
      CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge.c_operational_api.get.logDebug("")
      CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge.c_operational_api.get.logError("")
      val apiUsage_Observed: Option[Base_Types.Bits] = CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge.c_operational_api.get.get_Observed()
      CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge.c_initialization_api.get.put_Suspect_Traffic_Out(Base_Types.Bits_example())
      CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge.c_operational_api.get.put_Suspect_Traffic_Out(Base_Types.Bits_example())
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

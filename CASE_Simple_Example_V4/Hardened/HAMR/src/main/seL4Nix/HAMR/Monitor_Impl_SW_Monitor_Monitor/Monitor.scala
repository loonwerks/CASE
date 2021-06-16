// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.Monitor_Impl_SW_Monitor_Monitor

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_seL4Nix

object Monitor extends App {

  val MonitorBridge : HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge = {
    val FlightPlan_in = Port[Base_Types.Bits] (id = 0, name = "MissionComputer_Impl_Instance_SW_Monitor_Monitor_FlightPlan_in", mode = EventIn)
    val FlightPlan_out = Port[Base_Types.Bits] (id = 1, name = "MissionComputer_Impl_Instance_SW_Monitor_Monitor_FlightPlan_out", mode = EventOut)
    val Alert = Port[art.Empty] (id = 2, name = "MissionComputer_Impl_Instance_SW_Monitor_Monitor_Alert", mode = EventOut)

    HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_Monitor_Monitor",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      FlightPlan_in = FlightPlan_in,
      FlightPlan_out = FlightPlan_out,
      Alert = Alert
    )
  }

  val entryPoints: Bridge.EntryPoints = MonitorBridge.entryPoints
  val noData: Option[DataContent] = None()

  // FlightPlan_in: In EventDataPort Base_Types.Bits
  val FlightPlan_in_id: Art.PortId = MonitorBridge.FlightPlan_in.id
  var FlightPlan_in_port: Option[DataContent] = noData

  // FlightPlan_out: Out EventDataPort Base_Types.Bits
  val FlightPlan_out_id: Art.PortId = MonitorBridge.FlightPlan_out.id
  var FlightPlan_out_port: Option[DataContent] = noData

  // Alert: Out EventPort art.Empty
  val Alert_id: Art.PortId = MonitorBridge.Alert.id
  var Alert_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == FlightPlan_in_id) {
      return FlightPlan_in_port
    } else {
      halt(s"Unexpected: Monitor.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    FlightPlan_in_port = Monitor_Impl_SW_Monitor_Monitor_seL4Nix.FlightPlan_in_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == FlightPlan_out_id) {
      FlightPlan_out_port = Some(data)
    } else if(portId == Alert_id) {
      Alert_port = Some(data)
    } else {
      halt(s"Unexpected: Monitor.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(FlightPlan_out_port.nonEmpty) {
      Monitor_Impl_SW_Monitor_Monitor_seL4Nix.FlightPlan_out_Send(FlightPlan_out_port.get)
      FlightPlan_out_port = noData
    }

    if(Alert_port.nonEmpty) {
      Monitor_Impl_SW_Monitor_Monitor_seL4Nix.Alert_Send(Alert_port.get)
      Alert_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (MonitorBridge),
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

      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_operational_api.get.logError("")
      val apiUsage_FlightPlan_in: Option[Base_Types.Bits] = HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_operational_api.get.get_FlightPlan_in()
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_initialization_api.get.put_FlightPlan_out(Base_Types.Bits_example())
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_operational_api.get.put_FlightPlan_out(Base_Types.Bits_example())
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_initialization_api.get.put_Alert()
      HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.c_operational_api.get.put_Alert()
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

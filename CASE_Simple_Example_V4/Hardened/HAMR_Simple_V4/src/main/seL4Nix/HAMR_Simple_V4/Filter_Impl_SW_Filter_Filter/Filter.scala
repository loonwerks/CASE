// #Sireum

// This file was auto-generated.  Do not edit

package HAMR_Simple_V4.Filter_Impl_SW_Filter_Filter

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR_Simple_V4._
import HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_seL4Nix

object Filter extends App {

  val FilterBridge : HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge = {
    val Input = Port[Base_Types.Bits] (id = 0, name = "MissionComputer_Impl_Instance_SW_Filter_Filter_Input", mode = EventIn)
    val Output = Port[Base_Types.Bits] (id = 1, name = "MissionComputer_Impl_Instance_SW_Filter_Filter_Output", mode = EventOut)

    HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge(
      id = 0,
      name = "MissionComputer_Impl_Instance_SW_Filter_Filter",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      Input = Input,
      Output = Output
    )
  }

  val entryPoints: Bridge.EntryPoints = FilterBridge.entryPoints
  val noData: Option[DataContent] = None()

  // Input: In EventDataPort Base_Types.Bits
  val Input_id: Art.PortId = FilterBridge.Input.id
  var Input_port: Option[DataContent] = noData

  // Output: Out EventDataPort Base_Types.Bits
  val Output_id: Art.PortId = FilterBridge.Output.id
  var Output_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == Input_id) {
      return Input_port
    } else {
      halt(s"Unexpected: Filter.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    Input_port = Filter_Impl_SW_Filter_Filter_seL4Nix.Input_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == Output_id) {
      Output_port = Some(data)
    } else {
      halt(s"Unexpected: Filter.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(Output_port.nonEmpty) {
      Filter_Impl_SW_Filter_Filter_seL4Nix.Output_Send(Output_port.get)
      Output_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (FilterBridge),
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

      HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_initialization_api.get.logInfo("")
      HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_initialization_api.get.logDebug("")
      HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_initialization_api.get.logError("")
      HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_operational_api.get.logInfo("")
      HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_operational_api.get.logDebug("")
      HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_operational_api.get.logError("")
      val apiUsage_Input: Option[Base_Types.Bits] = HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_operational_api.get.get_Input()
      HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_initialization_api.get.put_Output(Base_Types.Bits_example())
      HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge.c_operational_api.get.put_Output(Base_Types.Bits_example())
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

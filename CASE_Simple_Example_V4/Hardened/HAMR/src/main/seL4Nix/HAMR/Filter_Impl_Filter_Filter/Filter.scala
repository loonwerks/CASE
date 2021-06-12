// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.Filter_Impl_Filter_Filter

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import HAMR._
import HAMR.SW.Filter_Impl_Filter_Filter_seL4Nix

object Filter extends App {

  val FilterBridge : HAMR.SW.Filter_Impl_Filter_Filter_Bridge = {
    val Input = Port[SW.RF_Msg_Impl] (id = 0, name = "SW_seL4_Impl_Instance_Filter_Filter_Input", mode = EventIn)
    val Output = Port[SW.RF_Msg_Impl] (id = 1, name = "SW_seL4_Impl_Instance_Filter_Filter_Output", mode = EventOut)

    HAMR.SW.Filter_Impl_Filter_Filter_Bridge(
      id = 0,
      name = "SW_seL4_Impl_Instance_Filter_Filter",
      dispatchProtocol = Sporadic(min = 500),
      dispatchTriggers = None(),

      Input = Input,
      Output = Output
    )
  }

  val entryPoints: Bridge.EntryPoints = FilterBridge.entryPoints
  val noData: Option[DataContent] = None()

  // Input: In EventDataPort SW.RF_Msg_Impl
  val Input_id: Art.PortId = FilterBridge.Input.id
  var Input_port: Option[DataContent] = noData

  // Output: Out EventDataPort SW.RF_Msg_Impl
  val Output_id: Art.PortId = FilterBridge.Output.id
  var Output_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!Filter_Impl_Filter_Filter_seL4Nix.Input_IsEmpty()) {
      portIds = portIds :+ Input_id
    }
    return EventTriggered(portIds)
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

    Input_port = Filter_Impl_Filter_Filter_seL4Nix.Input_Receive()
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
      Filter_Impl_Filter_Filter_seL4Nix.Output_Send(Output_port.get)
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

      HAMR.SW.Filter_Impl_Filter_Filter_Bridge.c_initialization_api.get.logInfo("")
      HAMR.SW.Filter_Impl_Filter_Filter_Bridge.c_initialization_api.get.logDebug("")
      HAMR.SW.Filter_Impl_Filter_Filter_Bridge.c_initialization_api.get.logError("")
      HAMR.SW.Filter_Impl_Filter_Filter_Bridge.c_operational_api.get.logInfo("")
      HAMR.SW.Filter_Impl_Filter_Filter_Bridge.c_operational_api.get.logDebug("")
      HAMR.SW.Filter_Impl_Filter_Filter_Bridge.c_operational_api.get.logError("")
      val apiUsage_Input: Option[SW.RF_Msg_Impl] = HAMR.SW.Filter_Impl_Filter_Filter_Bridge.c_operational_api.get.get_Input()
      HAMR.SW.Filter_Impl_Filter_Filter_Bridge.c_initialization_api.get.put_Output(SW.RF_Msg_Impl.example())
      HAMR.SW.Filter_Impl_Filter_Filter_Bridge.c_operational_api.get.put_Output(SW.RF_Msg_Impl.example())
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

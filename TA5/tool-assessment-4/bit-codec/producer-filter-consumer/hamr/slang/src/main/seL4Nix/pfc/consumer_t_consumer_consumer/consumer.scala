// #Sireum

// This file was auto-generated.  Do not edit

package pfc.consumer_t_consumer_consumer

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import pfc._
import pfc.PFC.consumer_t_consumer_consumer_seL4Nix

object consumer extends App {

  val consumerBridge : pfc.PFC.consumer_t_consumer_consumer_Bridge = {
    val from_filter = Port[Base_Types.Bits] (id = 0, name = "PFC_Sys_Impl_Instance_consumer_consumer_from_filter", mode = EventIn)

    pfc.PFC.consumer_t_consumer_consumer_Bridge(
      id = 0,
      name = "PFC_Sys_Impl_Instance_consumer_consumer",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      from_filter = from_filter
    )
  }

  val entryPoints: Bridge.EntryPoints = consumerBridge.entryPoints
  val noData: Option[DataContent] = None()

  // from_filter: In EventDataPort Base_Types.Bits
  val from_filter_id: Art.PortId = consumerBridge.from_filter.id
  var from_filter_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == from_filter_id) {
      return from_filter_port
    } else {
      halt(s"Unexpected: consumer.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    from_filter_port = consumer_t_consumer_consumer_seL4Nix.from_filter_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    halt(s"Unexpected: consumer.putValue called with: ${portId}")
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (consumerBridge),
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

      pfc.PFC.consumer_t_consumer_consumer_Bridge.c_initialization_api.get.logInfo("")
      pfc.PFC.consumer_t_consumer_consumer_Bridge.c_initialization_api.get.logDebug("")
      pfc.PFC.consumer_t_consumer_consumer_Bridge.c_initialization_api.get.logError("")
      pfc.PFC.consumer_t_consumer_consumer_Bridge.c_operational_api.get.logInfo("")
      pfc.PFC.consumer_t_consumer_consumer_Bridge.c_operational_api.get.logDebug("")
      pfc.PFC.consumer_t_consumer_consumer_Bridge.c_operational_api.get.logError("")
      val apiUsage_from_filter: Option[Base_Types.Bits] = pfc.PFC.consumer_t_consumer_consumer_Bridge.c_operational_api.get.get_from_filter()
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

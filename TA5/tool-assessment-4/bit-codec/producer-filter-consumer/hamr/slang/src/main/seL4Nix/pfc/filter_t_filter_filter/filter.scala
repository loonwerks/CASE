// #Sireum

// This file was auto-generated.  Do not edit

package pfc.filter_t_filter_filter

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import pfc._
import pfc.PFC.filter_t_filter_filter_seL4Nix

object filter extends App {

  val filterBridge : pfc.PFC.filter_t_filter_filter_Bridge = {
    val from_producer = Port[Base_Types.Bits] (id = 0, name = "PFC_Sys_Impl_Instance_filter_filter_from_producer", mode = EventIn)
    val to_consumer = Port[Base_Types.Bits] (id = 1, name = "PFC_Sys_Impl_Instance_filter_filter_to_consumer", mode = EventOut)

    pfc.PFC.filter_t_filter_filter_Bridge(
      id = 0,
      name = "PFC_Sys_Impl_Instance_filter_filter",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      from_producer = from_producer,
      to_consumer = to_consumer
    )
  }

  val entryPoints: Bridge.EntryPoints = filterBridge.entryPoints
  val noData: Option[DataContent] = None()

  // from_producer: In EventDataPort Base_Types.Bits
  val from_producer_id: Art.PortId = filterBridge.from_producer.id
  var from_producer_port: Option[DataContent] = noData

  // to_consumer: Out EventDataPort Base_Types.Bits
  val to_consumer_id: Art.PortId = filterBridge.to_consumer.id
  var to_consumer_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == from_producer_id) {
      return from_producer_port
    } else {
      halt(s"Unexpected: filter.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    from_producer_port = filter_t_filter_filter_seL4Nix.from_producer_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == to_consumer_id) {
      to_consumer_port = Some(data)
    } else {
      halt(s"Unexpected: filter.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(to_consumer_port.nonEmpty) {
      filter_t_filter_filter_seL4Nix.to_consumer_Send(to_consumer_port.get)
      to_consumer_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (filterBridge),
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

      pfc.PFC.filter_t_filter_filter_Bridge.c_initialization_api.get.logInfo("")
      pfc.PFC.filter_t_filter_filter_Bridge.c_initialization_api.get.logDebug("")
      pfc.PFC.filter_t_filter_filter_Bridge.c_initialization_api.get.logError("")
      pfc.PFC.filter_t_filter_filter_Bridge.c_operational_api.get.logInfo("")
      pfc.PFC.filter_t_filter_filter_Bridge.c_operational_api.get.logDebug("")
      pfc.PFC.filter_t_filter_filter_Bridge.c_operational_api.get.logError("")
      val apiUsage_from_producer: Option[Base_Types.Bits] = pfc.PFC.filter_t_filter_filter_Bridge.c_operational_api.get.get_from_producer()
      pfc.PFC.filter_t_filter_filter_Bridge.c_initialization_api.get.put_to_consumer(Base_Types.Bits_example())
      pfc.PFC.filter_t_filter_filter_Bridge.c_operational_api.get.put_to_consumer(Base_Types.Bits_example())
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

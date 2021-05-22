// #Sireum

// This file was auto-generated.  Do not edit

package pfc.producer_t_producer_producer

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import pfc._
import pfc.PFC.producer_t_producer_producer_seL4Nix

object producer extends App {

  val producerBridge : pfc.PFC.producer_t_producer_producer_Bridge = {
    val to_filter = Port[Base_Types.Bits] (id = 0, name = "PFC_Sys_Impl_Instance_producer_producer_to_filter", mode = EventOut)

    pfc.PFC.producer_t_producer_producer_Bridge(
      id = 0,
      name = "PFC_Sys_Impl_Instance_producer_producer",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      to_filter = to_filter
    )
  }

  val entryPoints: Bridge.EntryPoints = producerBridge.entryPoints
  val noData: Option[DataContent] = None()

  // to_filter: Out EventDataPort Base_Types.Bits
  val to_filter_id: Art.PortId = producerBridge.to_filter.id
  var to_filter_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    halt(s"Unexpected: producer.getValue called with: ${portId}")
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == to_filter_id) {
      to_filter_port = Some(data)
    } else {
      halt(s"Unexpected: producer.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(to_filter_port.nonEmpty) {
      producer_t_producer_producer_seL4Nix.to_filter_Send(to_filter_port.get)
      to_filter_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (producerBridge),
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

      pfc.PFC.producer_t_producer_producer_Bridge.c_initialization_api.get.logInfo("")
      pfc.PFC.producer_t_producer_producer_Bridge.c_initialization_api.get.logDebug("")
      pfc.PFC.producer_t_producer_producer_Bridge.c_initialization_api.get.logError("")
      pfc.PFC.producer_t_producer_producer_Bridge.c_operational_api.get.logInfo("")
      pfc.PFC.producer_t_producer_producer_Bridge.c_operational_api.get.logDebug("")
      pfc.PFC.producer_t_producer_producer_Bridge.c_operational_api.get.logError("")
      pfc.PFC.producer_t_producer_producer_Bridge.c_initialization_api.get.put_to_filter(Base_Types.Bits_example())
      pfc.PFC.producer_t_producer_producer_Bridge.c_operational_api.get.put_to_filter(Base_Types.Bits_example())
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

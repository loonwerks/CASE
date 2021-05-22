// #Sireum

// This file was auto-generated.  Do not edit

package base.producer_t_i_producer_producer

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import base._
import base.test_event_port_periodic_domains.producer_t_i_producer_producer_seL4Nix

object producer extends App {

  val producerBridge : base.test_event_port_periodic_domains.producer_t_i_producer_producer_Bridge = {
    val emit = Port[art.Empty] (id = 0, name = "top_impl_Instance_producer_producer_emit", mode = EventOut)

    base.test_event_port_periodic_domains.producer_t_i_producer_producer_Bridge(
      id = 0,
      name = "top_impl_Instance_producer_producer",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      emit = emit
    )
  }

  val entryPoints: Bridge.EntryPoints = producerBridge.entryPoints
  val noData: Option[DataContent] = None()

  // emit: Out EventPort art.Empty
  val emit_id: Art.PortId = producerBridge.emit.id
  var emit_port: Option[DataContent] = noData

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
    if(portId == emit_id) {
      emit_port = Some(data)
    } else {
      halt(s"Unexpected: producer.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(emit_port.nonEmpty) {
      producer_t_i_producer_producer_seL4Nix.emit_Send(emit_port.get)
      emit_port = noData
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

      printDataContent(art.Empty())

      base.test_event_port_periodic_domains.producer_t_i_producer_producer_Bridge.c_initialization_api.get.logInfo("")
      base.test_event_port_periodic_domains.producer_t_i_producer_producer_Bridge.c_initialization_api.get.logDebug("")
      base.test_event_port_periodic_domains.producer_t_i_producer_producer_Bridge.c_initialization_api.get.logError("")
      base.test_event_port_periodic_domains.producer_t_i_producer_producer_Bridge.c_operational_api.get.logInfo("")
      base.test_event_port_periodic_domains.producer_t_i_producer_producer_Bridge.c_operational_api.get.logDebug("")
      base.test_event_port_periodic_domains.producer_t_i_producer_producer_Bridge.c_operational_api.get.logError("")
      base.test_event_port_periodic_domains.producer_t_i_producer_producer_Bridge.c_initialization_api.get.put_emit()
      base.test_event_port_periodic_domains.producer_t_i_producer_producer_Bridge.c_operational_api.get.put_emit()
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

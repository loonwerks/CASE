// #Sireum

// This file was auto-generated.  Do not edit

package base.consumer_t_i_consumer_consumer

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import base._
import base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_seL4Nix

object consumer extends App {

  val consumerBridge : base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge = {
    val consume = Port[art.Empty] (id = 0, name = "top_impl_Instance_consumer_consumer_consume", mode = EventIn)

    base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge(
      id = 0,
      name = "top_impl_Instance_consumer_consumer",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      consume = consume
    )
  }

  val entryPoints: Bridge.EntryPoints = consumerBridge.entryPoints
  val noData: Option[DataContent] = None()

  // consume: In EventPort art.Empty
  val consume_id: Art.PortId = consumerBridge.consume.id
  var consume_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    var portIds: ISZ[Art.PortId] = ISZ()
    if(!consumer_t_i_consumer_consumer_seL4Nix.consume_IsEmpty()) {
      portIds = portIds :+ consume_id
    }
    return EventTriggered(portIds)
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == consume_id) {
      return consume_port
    } else {
      halt(s"Unexpected: consumer.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    consume_port = consumer_t_i_consumer_consumer_seL4Nix.consume_Receive()
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

      printDataContent(art.Empty())

      base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge.c_initialization_api.get.logInfo("")
      base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge.c_initialization_api.get.logDebug("")
      base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge.c_initialization_api.get.logError("")
      base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge.c_operational_api.get.logInfo("")
      base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge.c_operational_api.get.logDebug("")
      base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge.c_operational_api.get.logError("")
      val apiUsage_consume: Option[art.Empty] = base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge.c_operational_api.get.get_consume()
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

// #Sireum

// This file was auto-generated.  Do not edit

package base.producer_thread_i_producer_producer

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import base._
import base.test_data_port_periodic_domains.producer_thread_i_producer_producer_seL4Nix

object producer extends App {

  val producerBridge : base.test_data_port_periodic_domains.producer_thread_i_producer_producer_Bridge = {
    val write_port = Port[Base_Types.Bits] (id = 0, name = "top_impl_Instance_producer_producer_write_port", mode = DataOut)

    base.test_data_port_periodic_domains.producer_thread_i_producer_producer_Bridge(
      id = 0,
      name = "top_impl_Instance_producer_producer",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      write_port = write_port
    )
  }

  val entryPoints: Bridge.EntryPoints = producerBridge.entryPoints
  val noData: Option[DataContent] = None()

  // write_port: Out DataPort Base_Types.Bits
  val write_port_id: Art.PortId = producerBridge.write_port.id
  var write_port_port: Option[DataContent] = noData

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
    if(portId == write_port_id) {
      write_port_port = Some(data)
    } else {
      halt(s"Unexpected: producer.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(write_port_port.nonEmpty) {
      producer_thread_i_producer_producer_seL4Nix.write_port_Send(write_port_port.get)
      write_port_port = noData
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

      base.test_data_port_periodic_domains.producer_thread_i_producer_producer_Bridge.c_initialization_api.get.logInfo("")
      base.test_data_port_periodic_domains.producer_thread_i_producer_producer_Bridge.c_initialization_api.get.logDebug("")
      base.test_data_port_periodic_domains.producer_thread_i_producer_producer_Bridge.c_initialization_api.get.logError("")
      base.test_data_port_periodic_domains.producer_thread_i_producer_producer_Bridge.c_operational_api.get.logInfo("")
      base.test_data_port_periodic_domains.producer_thread_i_producer_producer_Bridge.c_operational_api.get.logDebug("")
      base.test_data_port_periodic_domains.producer_thread_i_producer_producer_Bridge.c_operational_api.get.logError("")
      base.test_data_port_periodic_domains.producer_thread_i_producer_producer_Bridge.c_initialization_api.get.put_write_port(Base_Types.Bits_example())
      base.test_data_port_periodic_domains.producer_thread_i_producer_producer_Bridge.c_operational_api.get.put_write_port(Base_Types.Bits_example())
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

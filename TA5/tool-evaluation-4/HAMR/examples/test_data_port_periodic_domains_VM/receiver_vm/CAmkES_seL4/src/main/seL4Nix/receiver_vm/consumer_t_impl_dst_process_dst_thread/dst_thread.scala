// #Sireum

// This file was auto-generated.  Do not edit

package receiver_vm.consumer_t_impl_dst_process_dst_thread

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import receiver_vm._
import receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_seL4Nix

object dst_thread extends App {

  val dst_threadBridge : receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge = {
    val read_port = Port[Base_Types.Integer_8] (id = 0, name = "top_impl_Instance_dst_process_dst_thread_read_port", mode = DataIn)

    receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge(
      id = 0,
      name = "top_impl_Instance_dst_process_dst_thread",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      read_port = read_port
    )
  }

  val entryPoints: Bridge.EntryPoints = dst_threadBridge.entryPoints
  val noData: Option[DataContent] = None()

  // read_port: In DataPort Base_Types.Integer_8
  val read_port_id: Art.PortId = dst_threadBridge.read_port.id
  var read_port_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == read_port_id) {
      return read_port_port
    } else {
      halt(s"Unexpected: dst_thread.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    read_port_port = consumer_t_impl_dst_process_dst_thread_seL4Nix.read_port_Receive()
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    halt(s"Unexpected: dst_thread.putValue called with: ${portId}")
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = ISZ (dst_threadBridge),
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

      printDataContent(Base_Types.Integer_8_Payload(Base_Types.Integer_8_example()))
      printDataContent(art.Empty())

      receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_initialization_api.get.logInfo("")
      receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_initialization_api.get.logDebug("")
      receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_initialization_api.get.logError("")
      receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_operational_api.get.logInfo("")
      receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_operational_api.get.logDebug("")
      receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_operational_api.get.logError("")
      val apiUsage_read_port: Option[Base_Types.Integer_8] = receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_operational_api.get.get_read_port()
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

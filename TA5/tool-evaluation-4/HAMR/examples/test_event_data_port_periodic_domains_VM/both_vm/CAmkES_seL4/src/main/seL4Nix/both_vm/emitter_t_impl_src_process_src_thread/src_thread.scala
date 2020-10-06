// #Sireum

package both_vm.emitter_t_impl_src_process_src_thread

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import both_vm._
import both_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_seL4Nix

object src_thread extends App {

  val src_threadBridge : both_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge = {
    val write_port = Port[Base_Types.Integer_8] (id = 0, name = "top_impl_Instance_src_process_src_thread_write_port", mode = EventOut)

    both_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge(
      id = 0,
      name = "top_impl_Instance_src_process_src_thread",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      write_port = write_port
    )
  }

  val entryPoints: Bridge.EntryPoints = src_threadBridge.entryPoints
  val noData: Option[DataContent] = None()

  // write_port: Out EventDataPort Base_Types.Integer_8
  val write_port_id: Art.PortId = src_threadBridge.write_port.id
  var write_port_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    halt(s"Unexpected: src_thread.getValue called with: ${portId}")
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    if(portId == write_port_id) {
      write_port_port = Some(data)
    } else {
      halt(s"Unexpected: src_thread.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(write_port_port.nonEmpty) {
      emitter_t_impl_src_process_src_thread_seL4Nix.write_port_Send(write_port_port.get)
      write_port_port = noData
    }
  }

  def initialiseArchitecture(): Unit = {
    val ad = ArchitectureDescription(
      components = MSZ (src_threadBridge),
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

      printDataContent(Base_Types.Integer_8_Payload(Base_Types.Integer_8_empty()))
      printDataContent(art.Empty())

      both_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api.get.logInfo("")
      both_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api.get.logDebug("")
      both_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api.get.logError("")
      both_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_operational_api.get.logInfo("")
      both_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_operational_api.get.logDebug("")
      both_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_operational_api.get.logError("")
      both_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api.get.sendwrite_port(Base_Types.Integer_8_empty())
      both_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_operational_api.get.sendwrite_port(Base_Types.Integer_8_empty())
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

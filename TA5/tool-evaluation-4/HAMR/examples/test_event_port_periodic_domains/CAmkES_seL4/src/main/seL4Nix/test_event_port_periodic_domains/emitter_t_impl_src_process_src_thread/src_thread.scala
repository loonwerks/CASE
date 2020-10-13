// #Sireum

package test_event_port_periodic_domains.emitter_t_impl_src_process_src_thread

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import test_event_port_periodic_domains._
import test_event_port_periodic_domains.test_event_port_periodic_domains.emitter_t_impl_src_process_src_thread_seL4Nix

object src_thread extends App {

  val src_threadBridge : test_event_port_periodic_domains.test_event_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge = {
    val emit = Port[art.Empty] (id = 0, name = "top_impl_Instance_src_process_src_thread_emit", mode = EventOut)

    test_event_port_periodic_domains.test_event_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge(
      id = 0,
      name = "top_impl_Instance_src_process_src_thread",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      emit = emit
    )
  }

  val entryPoints: Bridge.EntryPoints = src_threadBridge.entryPoints
  val noData: Option[DataContent] = None()

  // emit: Out EventPort art.Empty
  val emit_id: Art.PortId = src_threadBridge.emit.id
  var emit_port: Option[DataContent] = noData

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
    if(portId == emit_id) {
      emit_port = Some(data)
    } else {
      halt(s"Unexpected: src_thread.putValue called with: ${portId}")
    }
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    if(emit_port.nonEmpty) {
      emitter_t_impl_src_process_src_thread_seL4Nix.emit_Send(emit_port.get)
      emit_port = noData
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

      printDataContent(art.Empty())

      test_event_port_periodic_domains.test_event_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api.get.logInfo("")
      test_event_port_periodic_domains.test_event_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api.get.logDebug("")
      test_event_port_periodic_domains.test_event_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api.get.logError("")
      test_event_port_periodic_domains.test_event_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_operational_api.get.logInfo("")
      test_event_port_periodic_domains.test_event_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_operational_api.get.logDebug("")
      test_event_port_periodic_domains.test_event_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_operational_api.get.logError("")
      test_event_port_periodic_domains.test_event_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api.get.sendemit()
      test_event_port_periodic_domains.test_event_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_operational_api.get.sendemit()
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

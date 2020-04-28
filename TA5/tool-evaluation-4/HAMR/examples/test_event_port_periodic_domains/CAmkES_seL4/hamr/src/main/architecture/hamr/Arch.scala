// #Sireum

package hamr

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val top_impl_Instance_src_process_src_thread : hamr.test_event_port_periodic_domains.emitter_t_impl_Bridge = {
    val emit = Port[art.Empty] (id = 0, name = "top_impl_Instance_src_process_src_thread_emit", mode = EventOut)

    hamr.test_event_port_periodic_domains.emitter_t_impl_Bridge(
      id = 0,
      name = "top_impl_Instance_src_process_src_thread",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      emit = emit
    )
  }
  val top_impl_Instance_dst_process_dst_thread : hamr.test_event_port_periodic_domains.consumer_t_impl_Bridge = {
    val consume = Port[art.Empty] (id = 1, name = "top_impl_Instance_dst_process_dst_thread_consume", mode = EventIn)

    hamr.test_event_port_periodic_domains.consumer_t_impl_Bridge(
      id = 1,
      name = "top_impl_Instance_dst_process_dst_thread",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      consume = consume
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = MSZ (top_impl_Instance_src_process_src_thread, top_impl_Instance_dst_process_dst_thread),

      connections = ISZ (Connection(from = top_impl_Instance_src_process_src_thread.emit, to = top_impl_Instance_dst_process_dst_thread.consume))
    )
  }
}
// #Sireum

package test_event_port_periodic_domains

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val top_impl_Instance_src_process_src_thread : test_event_port_periodic_domains.test_event_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge = {
    val emit = Port[art.Empty] (id = 0, name = "top_impl_Instance_src_process_src_thread_emit", mode = EventOut)

    test_event_port_periodic_domains.test_event_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge(
      id = 0,
      name = "top_impl_Instance_src_process_src_thread",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      emit = emit
    )
  }
  val top_impl_Instance_dst_process_dst_thread : test_event_port_periodic_domains.test_event_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge = {
    val consume = Port[art.Empty] (id = 1, name = "top_impl_Instance_dst_process_dst_thread_consume", mode = EventIn)

    test_event_port_periodic_domains.test_event_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge(
      id = 1,
      name = "top_impl_Instance_dst_process_dst_thread",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      consume = consume
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = ISZ (top_impl_Instance_src_process_src_thread, top_impl_Instance_dst_process_dst_thread),

      connections = ISZ (Connection(from = top_impl_Instance_src_process_src_thread.emit, to = top_impl_Instance_dst_process_dst_thread.consume))
    )
  }
}
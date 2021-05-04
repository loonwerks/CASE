// #Sireum

package receiver_vm

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val top_impl_Instance_src_process_src_thread : receiver_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge = {
    val write_port = Port[Base_Types.Integer_8] (id = 0, name = "top_impl_Instance_src_process_src_thread_write_port", mode = EventOut)

    receiver_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge(
      id = 0,
      name = "top_impl_Instance_src_process_src_thread",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      write_port = write_port
    )
  }
  val top_impl_Instance_dst_process_dst_thread : receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge = {
    val read_port = Port[Base_Types.Integer_8] (id = 1, name = "top_impl_Instance_dst_process_dst_thread_read_port", mode = EventIn)

    receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge(
      id = 1,
      name = "top_impl_Instance_dst_process_dst_thread",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      read_port = read_port
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = ISZ (top_impl_Instance_src_process_src_thread, top_impl_Instance_dst_process_dst_thread),

      connections = ISZ (Connection(from = top_impl_Instance_src_process_src_thread.write_port, to = top_impl_Instance_dst_process_dst_thread.read_port))
    )
  }
}
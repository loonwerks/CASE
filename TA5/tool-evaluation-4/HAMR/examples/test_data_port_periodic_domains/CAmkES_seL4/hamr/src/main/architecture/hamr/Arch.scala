// #Sireum

package hamr

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val top_impl_Instance_source_process_component_source_thread_component : hamr.test_data_port_periodic_domains.source_thread_impl_Bridge = {
    val write_port = Port[S8] (id = 0, name = "top_impl_Instance_source_process_component_source_thread_component_write_port", mode = DataOut)

    hamr.test_data_port_periodic_domains.source_thread_impl_Bridge(
      id = 0,
      name = "top_impl_Instance_source_process_component_source_thread_component",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      write_port = write_port
    )
  }
  val top_impl_Instance_destination_process_component_destination_thread_component : hamr.test_data_port_periodic_domains.destination_thread_impl_Bridge = {
    val read_port = Port[S8] (id = 1, name = "top_impl_Instance_destination_process_component_destination_thread_component_read_port", mode = DataIn)

    hamr.test_data_port_periodic_domains.destination_thread_impl_Bridge(
      id = 1,
      name = "top_impl_Instance_destination_process_component_destination_thread_component",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      read_port = read_port
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = MSZ (top_impl_Instance_source_process_component_source_thread_component, top_impl_Instance_destination_process_component_destination_thread_component),

      connections = ISZ (Connection(from = top_impl_Instance_source_process_component_source_thread_component.write_port, to = top_impl_Instance_destination_process_component_destination_thread_component.read_port))
    )
  }
}
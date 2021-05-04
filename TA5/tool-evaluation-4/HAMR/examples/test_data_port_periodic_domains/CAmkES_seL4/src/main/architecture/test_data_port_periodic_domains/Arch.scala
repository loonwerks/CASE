// #Sireum

package test_data_port_periodic_domains

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val top_impl_Instance_source_process_component_source_thread_component : test_data_port_periodic_domains.test_data_port_periodic_domains.source_thread_impl_source_process_component_source_thread_component_Bridge = {
    val write_port = Port[Base_Types.Integer_8] (id = 0, name = "top_impl_Instance_source_process_component_source_thread_component_write_port", mode = DataOut)

    test_data_port_periodic_domains.test_data_port_periodic_domains.source_thread_impl_source_process_component_source_thread_component_Bridge(
      id = 0,
      name = "top_impl_Instance_source_process_component_source_thread_component",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      write_port = write_port
    )
  }
  val top_impl_Instance_destination_process_component_destination_thread_component : test_data_port_periodic_domains.test_data_port_periodic_domains.destination_thread_impl_destination_process_component_destination_thread_component_Bridge = {
    val read_port = Port[Base_Types.Integer_8] (id = 1, name = "top_impl_Instance_destination_process_component_destination_thread_component_read_port", mode = DataIn)

    test_data_port_periodic_domains.test_data_port_periodic_domains.destination_thread_impl_destination_process_component_destination_thread_component_Bridge(
      id = 1,
      name = "top_impl_Instance_destination_process_component_destination_thread_component",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      read_port = read_port
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = ISZ (top_impl_Instance_source_process_component_source_thread_component, top_impl_Instance_destination_process_component_destination_thread_component),

      connections = ISZ (Connection(from = top_impl_Instance_source_process_component_source_thread_component.write_port, to = top_impl_Instance_destination_process_component_destination_thread_component.read_port))
    )
  }
}
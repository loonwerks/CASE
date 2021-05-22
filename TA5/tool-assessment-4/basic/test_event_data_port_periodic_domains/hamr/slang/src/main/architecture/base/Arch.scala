// #Sireum

package base

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val top_impl_Instance_producer_producer : base.test_event_data_port_periodic_domains.producer_t_i_producer_producer_Bridge = {
    val write_port = Port[Base_Types.Bits] (id = 0, name = "top_impl_Instance_producer_producer_write_port", mode = EventOut)

    base.test_event_data_port_periodic_domains.producer_t_i_producer_producer_Bridge(
      id = 0,
      name = "top_impl_Instance_producer_producer",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      write_port = write_port
    )
  }
  val top_impl_Instance_consumer_consumer : base.test_event_data_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge = {
    val read_port = Port[Base_Types.Bits] (id = 1, name = "top_impl_Instance_consumer_consumer_read_port", mode = EventIn)

    base.test_event_data_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge(
      id = 1,
      name = "top_impl_Instance_consumer_consumer",
      dispatchProtocol = Sporadic(min = 1),
      dispatchTriggers = None(),

      read_port = read_port
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = ISZ (top_impl_Instance_producer_producer, top_impl_Instance_consumer_consumer),

      connections = ISZ (Connection(from = top_impl_Instance_producer_producer.write_port, to = top_impl_Instance_consumer_consumer.read_port))
    )
  }
}
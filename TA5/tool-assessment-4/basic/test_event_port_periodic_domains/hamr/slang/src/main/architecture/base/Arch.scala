// #Sireum

package base

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val top_impl_Instance_producer_producer : base.test_event_port_periodic_domains.producer_t_i_producer_producer_Bridge = {
    val emit = Port[art.Empty] (id = 0, name = "top_impl_Instance_producer_producer_emit", mode = EventOut)

    base.test_event_port_periodic_domains.producer_t_i_producer_producer_Bridge(
      id = 0,
      name = "top_impl_Instance_producer_producer",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      emit = emit
    )
  }
  val top_impl_Instance_consumer_consumer : base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge = {
    val consume = Port[art.Empty] (id = 1, name = "top_impl_Instance_consumer_consumer_consume", mode = EventIn)

    base.test_event_port_periodic_domains.consumer_t_i_consumer_consumer_Bridge(
      id = 1,
      name = "top_impl_Instance_consumer_consumer",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      consume = consume
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = ISZ (top_impl_Instance_producer_producer, top_impl_Instance_consumer_consumer),

      connections = ISZ (Connection(from = top_impl_Instance_producer_producer.emit, to = top_impl_Instance_consumer_consumer.consume))
    )
  }
}
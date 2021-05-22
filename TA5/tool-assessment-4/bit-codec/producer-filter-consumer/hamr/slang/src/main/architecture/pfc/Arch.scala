// #Sireum

package pfc

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val PFC_Sys_Impl_Instance_producer_producer : pfc.PFC.producer_t_producer_producer_Bridge = {
    val to_filter = Port[Base_Types.Bits] (id = 0, name = "PFC_Sys_Impl_Instance_producer_producer_to_filter", mode = EventOut)

    pfc.PFC.producer_t_producer_producer_Bridge(
      id = 0,
      name = "PFC_Sys_Impl_Instance_producer_producer",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      to_filter = to_filter
    )
  }
  val PFC_Sys_Impl_Instance_filter_filter : pfc.PFC.filter_t_filter_filter_Bridge = {
    val from_producer = Port[Base_Types.Bits] (id = 1, name = "PFC_Sys_Impl_Instance_filter_filter_from_producer", mode = EventIn)
    val to_consumer = Port[Base_Types.Bits] (id = 2, name = "PFC_Sys_Impl_Instance_filter_filter_to_consumer", mode = EventOut)

    pfc.PFC.filter_t_filter_filter_Bridge(
      id = 1,
      name = "PFC_Sys_Impl_Instance_filter_filter",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      from_producer = from_producer,
      to_consumer = to_consumer
    )
  }
  val PFC_Sys_Impl_Instance_consumer_consumer : pfc.PFC.consumer_t_consumer_consumer_Bridge = {
    val from_filter = Port[Base_Types.Bits] (id = 3, name = "PFC_Sys_Impl_Instance_consumer_consumer_from_filter", mode = EventIn)

    pfc.PFC.consumer_t_consumer_consumer_Bridge(
      id = 2,
      name = "PFC_Sys_Impl_Instance_consumer_consumer",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      from_filter = from_filter
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = ISZ (PFC_Sys_Impl_Instance_producer_producer, PFC_Sys_Impl_Instance_filter_filter, PFC_Sys_Impl_Instance_consumer_consumer),

      connections = ISZ (Connection(from = PFC_Sys_Impl_Instance_producer_producer.to_filter, to = PFC_Sys_Impl_Instance_filter_filter.from_producer),
                         Connection(from = PFC_Sys_Impl_Instance_filter_filter.to_consumer, to = PFC_Sys_Impl_Instance_consumer_consumer.from_filter))
    )
  }
}
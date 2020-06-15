package test_event_port_periodic_domains.test_event_port_periodic_domains

import org.sireum._
import art._

object consumer_t_impl_seL4Nix_Ext {
  def consume_IsEmpty(): B = halt("stub")

  def consume_Receive(): Option[DataContent] = halt("stub")
}

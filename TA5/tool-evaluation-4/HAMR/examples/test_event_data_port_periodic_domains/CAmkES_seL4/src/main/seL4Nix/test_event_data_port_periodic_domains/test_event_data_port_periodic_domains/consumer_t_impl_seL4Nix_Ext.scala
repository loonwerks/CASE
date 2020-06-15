package test_event_data_port_periodic_domains.test_event_data_port_periodic_domains

import org.sireum._
import art._

object consumer_t_impl_seL4Nix_Ext {
  def read_port_IsEmpty(): B = halt("stub")

  def read_port_Receive(): Option[DataContent] = halt("stub")
}

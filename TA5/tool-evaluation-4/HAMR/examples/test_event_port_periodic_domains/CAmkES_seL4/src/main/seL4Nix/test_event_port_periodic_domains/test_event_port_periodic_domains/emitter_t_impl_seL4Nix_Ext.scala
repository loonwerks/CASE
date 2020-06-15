package test_event_port_periodic_domains.test_event_port_periodic_domains

import org.sireum._
import art._

object emitter_t_impl_seL4Nix_Ext {
  def emit_Send(d: DataContent): Unit = halt("stub")
}

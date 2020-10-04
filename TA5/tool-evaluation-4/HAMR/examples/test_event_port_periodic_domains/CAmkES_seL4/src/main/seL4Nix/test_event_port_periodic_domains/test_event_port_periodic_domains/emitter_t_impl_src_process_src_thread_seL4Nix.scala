// #Sireum

package test_event_port_periodic_domains.test_event_port_periodic_domains

import org.sireum._
import art._

@ext object emitter_t_impl_src_process_src_thread_seL4Nix {
  // send payload 'd' to components connected to seL4's emit port
  def emit_Send(d: DataContent): Unit = $
}

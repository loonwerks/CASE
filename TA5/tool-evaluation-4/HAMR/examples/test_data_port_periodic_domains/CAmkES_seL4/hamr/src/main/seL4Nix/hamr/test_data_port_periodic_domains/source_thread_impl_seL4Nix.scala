// #Sireum

package hamr.test_data_port_periodic_domains

import org.sireum._
import art._

@ext object source_thread_impl_seL4Nix {
  // send payload 'd' to components connected to seL4's write_port port
  def write_port_Send(d: DataContent): Unit = $
}

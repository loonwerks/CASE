// #Sireum

// This file was auto-generated.  Do not edit

package base.test_data_port_periodic_domains

import org.sireum._
import art._

@ext object consumer_t_i_consumer_consumer_seL4Nix {
  // returns T if seL4's read_port port is empty, F otherwise 
  def read_port_IsEmpty(): B = $

  // returns result of dequeuing seL4's read_port port 
  def read_port_Receive(): Option[DataContent] = $
}

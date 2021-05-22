// #Sireum

// This file was auto-generated.  Do not edit

package pfc.PFC

import org.sireum._
import art._

@ext object filter_t_filter_filter_seL4Nix {
  // returns T if seL4's from_producer port is empty, F otherwise 
  def from_producer_IsEmpty(): B = $

  // returns result of dequeuing seL4's from_producer port 
  def from_producer_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's to_consumer port
  def to_consumer_Send(d: DataContent): Unit = $
}

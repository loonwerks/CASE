// #Sireum

// This file was auto-generated.  Do not edit

package pfc.PFC

import org.sireum._
import art._

@ext object consumer_t_consumer_consumer_seL4Nix {
  // returns T if seL4's from_filter port is empty, F otherwise 
  def from_filter_IsEmpty(): B = $

  // returns result of dequeuing seL4's from_filter port 
  def from_filter_Receive(): Option[DataContent] = $
}

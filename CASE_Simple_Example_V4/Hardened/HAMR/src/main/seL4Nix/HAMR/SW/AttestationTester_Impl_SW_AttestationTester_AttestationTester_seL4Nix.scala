// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.SW

import org.sireum._
import art._

@ext object AttestationTester_Impl_SW_AttestationTester_AttestationTester_seL4Nix {
  // returns T if seL4's AttestationRequest port is empty, F otherwise 
  def AttestationRequest_IsEmpty(): B = $

  // returns result of dequeuing seL4's AttestationRequest port 
  def AttestationRequest_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's AttestationResponse port
  def AttestationResponse_Send(d: DataContent): Unit = $
}

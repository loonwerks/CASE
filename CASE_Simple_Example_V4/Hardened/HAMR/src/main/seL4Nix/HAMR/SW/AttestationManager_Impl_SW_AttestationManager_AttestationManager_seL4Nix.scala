// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.SW

import org.sireum._
import art._

@ext object AttestationManager_Impl_SW_AttestationManager_AttestationManager_seL4Nix {
  // send payload 'd' to components connected to seL4's AttestationRequest port
  def AttestationRequest_Send(d: DataContent): Unit = $

  // returns T if seL4's AttestationResponse port is empty, F otherwise 
  def AttestationResponse_IsEmpty(): B = $

  // returns result of dequeuing seL4's AttestationResponse port 
  def AttestationResponse_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's TrustedIds port
  def TrustedIds_Send(d: DataContent): Unit = $
}

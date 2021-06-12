// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.SW

import org.sireum._
import art._

@ext object RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_seL4Nix {
  // returns T if seL4's AttestationTesterResponse port is empty, F otherwise 
  def AttestationTesterResponse_IsEmpty(): B = $

  // returns result of dequeuing seL4's AttestationTesterResponse port 
  def AttestationTesterResponse_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's AttestationTesterRequest port
  def AttestationTesterRequest_Send(d: DataContent): Unit = $

  // send payload 'd' to components connected to seL4's MissionCommand port
  def MissionCommand_Send(d: DataContent): Unit = $

  // returns T if seL4's AttestationRequest port is empty, F otherwise 
  def AttestationRequest_IsEmpty(): B = $

  // returns result of dequeuing seL4's AttestationRequest port 
  def AttestationRequest_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's AttestationResponse port
  def AttestationResponse_Send(d: DataContent): Unit = $
}

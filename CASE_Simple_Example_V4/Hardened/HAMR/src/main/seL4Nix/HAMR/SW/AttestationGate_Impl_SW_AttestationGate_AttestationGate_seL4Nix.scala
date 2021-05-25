// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.SW

import org.sireum._
import art._

@ext object AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix {
  // returns T if seL4's MissionCommand_in port is empty, F otherwise 
  def MissionCommand_in_IsEmpty(): B = $

  // returns result of dequeuing seL4's MissionCommand_in port 
  def MissionCommand_in_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's MissionCommand_out port
  def MissionCommand_out_Send(d: DataContent): Unit = $

  // returns T if seL4's TrustedIds port is empty, F otherwise 
  def TrustedIds_IsEmpty(): B = $

  // returns result of dequeuing seL4's TrustedIds port 
  def TrustedIds_Receive(): Option[DataContent] = $
}

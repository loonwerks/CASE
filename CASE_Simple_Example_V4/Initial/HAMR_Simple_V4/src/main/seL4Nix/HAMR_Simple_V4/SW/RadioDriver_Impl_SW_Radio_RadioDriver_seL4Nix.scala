// #Sireum

// This file was auto-generated.  Do not edit

package HAMR_Simple_V4.SW

import org.sireum._
import art._

@ext object RadioDriver_Impl_SW_Radio_RadioDriver_seL4Nix {
  // returns T if seL4's AttestationTesterResponse port is empty, F otherwise 
  def AttestationTesterResponse_IsEmpty(): B = $

  // returns result of dequeuing seL4's AttestationTesterResponse port 
  def AttestationTesterResponse_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's AttestationTesterRequest port
  def AttestationTesterRequest_Send(d: DataContent): Unit = $

  // send payload 'd' to components connected to seL4's MissionCommand port
  def MissionCommand_Send(d: DataContent): Unit = $
}

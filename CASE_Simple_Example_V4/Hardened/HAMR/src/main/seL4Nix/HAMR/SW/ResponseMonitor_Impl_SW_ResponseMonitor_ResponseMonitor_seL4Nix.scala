// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.SW

import org.sireum._
import art._

@ext object ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_seL4Nix {
  // returns T if seL4's FlightPlan port is empty, F otherwise 
  def FlightPlan_IsEmpty(): B = $

  // returns result of dequeuing seL4's FlightPlan port 
  def FlightPlan_Receive(): Option[DataContent] = $

  // returns T if seL4's MissionCommand port is empty, F otherwise 
  def MissionCommand_IsEmpty(): B = $

  // returns result of dequeuing seL4's MissionCommand port 
  def MissionCommand_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's Alert port
  def Alert_Send(d: DataContent): Unit = $
}

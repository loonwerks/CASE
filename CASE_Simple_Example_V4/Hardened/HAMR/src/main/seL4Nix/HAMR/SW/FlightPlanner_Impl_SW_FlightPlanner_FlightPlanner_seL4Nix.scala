// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.SW

import org.sireum._
import art._

@ext object FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_seL4Nix {
  // returns T if seL4's MissionCommand port is empty, F otherwise 
  def MissionCommand_IsEmpty(): B = $

  // returns result of dequeuing seL4's MissionCommand port 
  def MissionCommand_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's FlightPlan port
  def FlightPlan_Send(d: DataContent): Unit = $
}

// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.SW

import org.sireum._
import art._

@ext object WaypointManager_Impl_SW_WaypointManager_WaypointManager_seL4Nix {
  // returns T if seL4's FlightPlan port is empty, F otherwise 
  def FlightPlan_IsEmpty(): B = $

  // returns result of dequeuing seL4's FlightPlan port 
  def FlightPlan_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's MissionWindow port
  def MissionWindow_Send(d: DataContent): Unit = $

  // returns T if seL4's Status port is empty, F otherwise 
  def Status_IsEmpty(): B = $

  // returns result of dequeuing seL4's Status port 
  def Status_Receive(): Option[DataContent] = $

  // returns T if seL4's ReturnHome port is empty, F otherwise 
  def ReturnHome_IsEmpty(): B = $

  // returns result of dequeuing seL4's ReturnHome port 
  def ReturnHome_Receive(): Option[DataContent] = $
}

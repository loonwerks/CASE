// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.SW

import org.sireum._
import art._

@ext object GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix {
  // returns T if seL4's FlyZones port is empty, F otherwise 
  def FlyZones_IsEmpty(): B = $

  // returns result of dequeuing seL4's FlyZones port 
  def FlyZones_Receive(): Option[DataContent] = $

  // returns T if seL4's FlightPlan_In port is empty, F otherwise 
  def FlightPlan_In_IsEmpty(): B = $

  // returns result of dequeuing seL4's FlightPlan_In port 
  def FlightPlan_In_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's FlightPlan_Out port
  def FlightPlan_Out_Send(d: DataContent): Unit = $

  // send payload 'd' to components connected to seL4's Alert port
  def Alert_Send(d: DataContent): Unit = $
}

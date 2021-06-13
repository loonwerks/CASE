// #Sireum

// This file was auto-generated.  Do not edit

package HAMR.SW

import org.sireum._
import art._

@ext object FlightController_Impl_SW_FlightController_FlightController_seL4Nix {
  // returns T if seL4's FlightPlan port is empty, F otherwise 
  def FlightPlan_IsEmpty(): B = $

  // returns result of dequeuing seL4's FlightPlan port 
  def FlightPlan_Receive(): Option[DataContent] = $

  // returns T if seL4's Alert port is empty, F otherwise 
  def Alert_IsEmpty(): B = $

  // returns result of dequeuing seL4's Alert port 
  def Alert_Receive(): Option[DataContent] = $
}

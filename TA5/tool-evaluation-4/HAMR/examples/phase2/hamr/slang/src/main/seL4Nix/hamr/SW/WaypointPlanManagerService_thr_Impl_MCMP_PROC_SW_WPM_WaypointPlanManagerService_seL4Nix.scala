// #Sireum

// This file was auto-generated.  Do not edit

package hamr.SW

import org.sireum._
import art._

@ext object WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix {
  // returns T if seL4's AutomationResponse port is empty, F otherwise 
  def AutomationResponse_IsEmpty(): B = $

  // returns result of dequeuing seL4's AutomationResponse port 
  def AutomationResponse_Receive(): Option[DataContent] = $

  // returns T if seL4's AirVehicleState port is empty, F otherwise 
  def AirVehicleState_IsEmpty(): B = $

  // returns result of dequeuing seL4's AirVehicleState port 
  def AirVehicleState_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's MissionCommand port
  def MissionCommand_Send(d: DataContent): Unit = $

  // returns T if seL4's ReturnHome port is empty, F otherwise 
  def ReturnHome_IsEmpty(): B = $

  // returns result of dequeuing seL4's ReturnHome port 
  def ReturnHome_Receive(): Option[DataContent] = $
}

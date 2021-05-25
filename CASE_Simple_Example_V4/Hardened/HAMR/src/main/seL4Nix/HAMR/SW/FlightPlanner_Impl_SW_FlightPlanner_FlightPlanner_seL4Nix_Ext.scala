package HAMR.SW

import org.sireum._
import art._

object FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_seL4Nix_Ext {
  def MissionCommand_IsEmpty(): B = halt("stub")

  def MissionCommand_Receive(): Option[DataContent] = halt("stub")

  def FlightPlan_Send(d: DataContent): Unit = halt("stub")
}

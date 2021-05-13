package HAMR.SW

import org.sireum._
import art._

object ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_seL4Nix_Ext {
  def FlightPlan_IsEmpty(): B = halt("stub")

  def FlightPlan_Receive(): Option[DataContent] = halt("stub")

  def MissionCommand_IsEmpty(): B = halt("stub")

  def MissionCommand_Receive(): Option[DataContent] = halt("stub")

  def Alert_Send(d: DataContent): Unit = halt("stub")
}

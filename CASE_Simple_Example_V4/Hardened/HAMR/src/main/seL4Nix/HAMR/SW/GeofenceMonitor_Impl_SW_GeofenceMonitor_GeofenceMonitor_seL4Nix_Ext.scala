package HAMR.SW

import org.sireum._
import art._

object GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_seL4Nix_Ext {
  def FlyZones_IsEmpty(): B = halt("stub")

  def FlyZones_Receive(): Option[DataContent] = halt("stub")

  def FlightPlan_In_IsEmpty(): B = halt("stub")

  def FlightPlan_In_Receive(): Option[DataContent] = halt("stub")

  def FlightPlan_Out_Send(d: DataContent): Unit = halt("stub")

  def Alert_Send(d: DataContent): Unit = halt("stub")
}

// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor {

  def initialise(api: GeofenceMonitor_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_FlightPlan_Out(SW.Mission.example())
    api.put_Alert()
  }

  def handle_FlightPlan_In(api: GeofenceMonitor_Impl_Operational_Api, value : SW.Mission): Unit = {
    api.logInfo("example handle_FlightPlan_In implementation")
    api.logInfo(s"received ${value}")
    // example api usage

    val apiUsage_FlyZones: Option[SW.MapArray] = api.get_FlyZones()
    api.logInfo(s"Received on FlyZones: ${apiUsage_FlyZones}")
    val apiUsage_FlightPlan_In: Option[SW.Mission] = api.get_FlightPlan_In()
    api.logInfo(s"Received on FlightPlan_In: ${apiUsage_FlightPlan_In}")
  }

  def activate(api: GeofenceMonitor_Impl_Operational_Api): Unit = { }

  def deactivate(api: GeofenceMonitor_Impl_Operational_Api): Unit = { }

  def finalise(api: GeofenceMonitor_Impl_Operational_Api): Unit = { }

  def recover(api: GeofenceMonitor_Impl_Operational_Api): Unit = { }
}

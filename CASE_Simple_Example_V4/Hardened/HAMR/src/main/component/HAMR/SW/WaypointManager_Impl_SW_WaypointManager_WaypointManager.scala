// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object WaypointManager_Impl_SW_WaypointManager_WaypointManager {

  def initialise(api: WaypointManager_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_MissionWindow(SW.MissionWindow.example())
  }

  def handle_FlightPlan(api: WaypointManager_Impl_Operational_Api, value : SW.Mission): Unit = {
    api.logInfo("example handle_FlightPlan implementation")
    api.logInfo(s"received ${value}")
    // example api usage

    val apiUsage_FlightPlan: Option[SW.Mission] = api.get_FlightPlan()
    api.logInfo(s"Received on FlightPlan: ${apiUsage_FlightPlan}")
    val apiUsage_Status: Option[SW.Coordinate_Impl] = api.get_Status()
    api.logInfo(s"Received on Status: ${apiUsage_Status}")
    val apiUsage_ReturnHome: Option[art.Empty] = api.get_ReturnHome()
    api.logInfo(s"Received on ReturnHome: ${apiUsage_ReturnHome}")
  }

  def handle_Status(api: WaypointManager_Impl_Operational_Api, value : SW.Coordinate_Impl): Unit = {
    api.logInfo("example handle_Status implementation")
    api.logInfo(s"received ${value}")
  }

  def handle_ReturnHome(api: WaypointManager_Impl_Operational_Api): Unit = {
    api.logInfo("example handle_ReturnHome implementation")
    api.logInfo("received ReturnHome event")
  }

  def activate(api: WaypointManager_Impl_Operational_Api): Unit = { }

  def deactivate(api: WaypointManager_Impl_Operational_Api): Unit = { }

  def finalise(api: WaypointManager_Impl_Operational_Api): Unit = { }

  def recover(api: WaypointManager_Impl_Operational_Api): Unit = { }
}

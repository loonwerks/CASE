// #Sireum

package hamr.SW

import org.sireum._
import hamr._

// This file will not be overwritten so is safe to edit
object WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService {

  def initialise(api: WaypointPlanManagerService_thr_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_MissionCommand(Base_Types.Bits_example())
  }

  def timeTriggered(api: WaypointPlanManagerService_thr_Impl_Operational_Api): Unit = {
    // example api usage

    val apiUsage_AutomationResponse: Option[Base_Types.Bits] = api.get_AutomationResponse()
    api.logInfo(s"Received on AutomationResponse: ${apiUsage_AutomationResponse}")
    val apiUsage_AirVehicleState: Option[Base_Types.Bits] = api.get_AirVehicleState()
    api.logInfo(s"Received on AirVehicleState: ${apiUsage_AirVehicleState}")
    val apiUsage_ReturnHome: Option[art.Empty] = api.get_ReturnHome()
    api.logInfo(s"Received on ReturnHome: ${apiUsage_ReturnHome}")
  }

  def activate(api: WaypointPlanManagerService_thr_Impl_Operational_Api): Unit = { }

  def deactivate(api: WaypointPlanManagerService_thr_Impl_Operational_Api): Unit = { }

  def finalise(api: WaypointPlanManagerService_thr_Impl_Operational_Api): Unit = { }

  def recover(api: WaypointPlanManagerService_thr_Impl_Operational_Api): Unit = { }
}

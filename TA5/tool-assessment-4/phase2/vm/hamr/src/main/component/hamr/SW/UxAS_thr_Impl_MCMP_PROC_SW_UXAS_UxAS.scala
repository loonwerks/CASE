// #Sireum

package hamr.SW

import org.sireum._
import hamr._

// This file will not be overwritten so is safe to edit
object UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS {

  def initialise(api: UxAS_thr_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_AutomationResponse_MON_GEO(Base_Types.Bits_example())
    api.put_AutomationResponse_MON_REQ(Base_Types.Bits_example())
  }

  def timeTriggered(api: UxAS_thr_Impl_Operational_Api): Unit = {
    // example api usage

    val apiUsage_AutomationRequest: Option[Base_Types.Bits] = api.get_AutomationRequest()
    api.logInfo(s"Received on AutomationRequest: ${apiUsage_AutomationRequest}")
    val apiUsage_AirVehicleState: Option[Base_Types.Bits] = api.get_AirVehicleState()
    api.logInfo(s"Received on AirVehicleState: ${apiUsage_AirVehicleState}")
    val apiUsage_OperatingRegion: Option[Base_Types.Bits] = api.get_OperatingRegion()
    api.logInfo(s"Received on OperatingRegion: ${apiUsage_OperatingRegion}")
    val apiUsage_LineSearchTask: Option[Base_Types.Bits] = api.get_LineSearchTask()
    api.logInfo(s"Received on LineSearchTask: ${apiUsage_LineSearchTask}")
  }

  def activate(api: UxAS_thr_Impl_Operational_Api): Unit = { }

  def deactivate(api: UxAS_thr_Impl_Operational_Api): Unit = { }

  def finalise(api: UxAS_thr_Impl_Operational_Api): Unit = { }

  def recover(api: UxAS_thr_Impl_Operational_Api): Unit = { }
}

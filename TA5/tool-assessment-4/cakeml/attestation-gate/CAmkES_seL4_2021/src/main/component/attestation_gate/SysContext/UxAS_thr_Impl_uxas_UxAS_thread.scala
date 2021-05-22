// #Sireum

package attestation_gate.SysContext

import org.sireum._
import attestation_gate._

// This file will not be overwritten so is safe to edit
object UxAS_thr_Impl_uxas_UxAS_thread {

  def initialise(api: UxAS_thr_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

  }

  def timeTriggered(api: UxAS_thr_Impl_Operational_Api): Unit = {
    // example api usage

    val apiUsage_AutomationRequest: Option[Base_Types.Bits] = api.get_AutomationRequest()
    api.logInfo(s"Received on AutomationRequest: ${apiUsage_AutomationRequest}")
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

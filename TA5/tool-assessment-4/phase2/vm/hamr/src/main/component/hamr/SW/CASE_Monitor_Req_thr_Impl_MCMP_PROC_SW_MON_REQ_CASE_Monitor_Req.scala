// #Sireum

package hamr.SW

import org.sireum._
import hamr._

// This file will not be overwritten so is safe to edit
object CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req {

  def initialise(api: CASE_Monitor_Req_thr_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

  }

  def timeTriggered(api: CASE_Monitor_Req_thr_Impl_Operational_Api): Unit = {
    // example api usage

    val apiUsage_observed: Option[Base_Types.Bits] = api.get_observed()
    api.logInfo(s"Received on observed: ${apiUsage_observed}")
    val apiUsage_reference_1: Option[Base_Types.Bits] = api.get_reference_1()
    api.logInfo(s"Received on reference_1: ${apiUsage_reference_1}")
  }

  def activate(api: CASE_Monitor_Req_thr_Impl_Operational_Api): Unit = { }

  def deactivate(api: CASE_Monitor_Req_thr_Impl_Operational_Api): Unit = { }

  def finalise(api: CASE_Monitor_Req_thr_Impl_Operational_Api): Unit = { }

  def recover(api: CASE_Monitor_Req_thr_Impl_Operational_Api): Unit = { }
}

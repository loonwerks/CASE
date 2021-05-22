// #Sireum

package hamr.SW

import org.sireum._
import hamr._

// This file will not be overwritten so is safe to edit
object CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST {

  def initialise(api: CASE_Filter_LST_thr_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_filter_out(Base_Types.Bits_example())
  }

  def timeTriggered(api: CASE_Filter_LST_thr_Impl_Operational_Api): Unit = {
    // example api usage

    val apiUsage_filter_in: Option[Base_Types.Bits] = api.get_filter_in()
    api.logInfo(s"Received on filter_in: ${apiUsage_filter_in}")
  }

  def activate(api: CASE_Filter_LST_thr_Impl_Operational_Api): Unit = { }

  def deactivate(api: CASE_Filter_LST_thr_Impl_Operational_Api): Unit = { }

  def finalise(api: CASE_Filter_LST_thr_Impl_Operational_Api): Unit = { }

  def recover(api: CASE_Filter_LST_thr_Impl_Operational_Api): Unit = { }
}

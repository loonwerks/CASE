// #Sireum

package hamr.SW

import org.sireum._
import hamr._

// This file will not be overwritten so is safe to edit
object CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo {

  def initialise(api: CASE_Monitor_Geo_thr_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_output(Base_Types.Bits_example())
    api.put_alert()
  }

  def timeTriggered(api: CASE_Monitor_Geo_thr_Impl_Operational_Api): Unit = {
    // example api usage

    val apiUsage_keep_in_zones: Option[Base_Types.Bits] = api.get_keep_in_zones()
    api.logInfo(s"Received on keep_in_zones: ${apiUsage_keep_in_zones}")
    val apiUsage_keep_out_zones: Option[Base_Types.Bits] = api.get_keep_out_zones()
    api.logInfo(s"Received on keep_out_zones: ${apiUsage_keep_out_zones}")
    val apiUsage_observed: Option[Base_Types.Bits] = api.get_observed()
    api.logInfo(s"Received on observed: ${apiUsage_observed}")
  }

  def activate(api: CASE_Monitor_Geo_thr_Impl_Operational_Api): Unit = { }

  def deactivate(api: CASE_Monitor_Geo_thr_Impl_Operational_Api): Unit = { }

  def finalise(api: CASE_Monitor_Geo_thr_Impl_Operational_Api): Unit = { }

  def recover(api: CASE_Monitor_Geo_thr_Impl_Operational_Api): Unit = { }
}

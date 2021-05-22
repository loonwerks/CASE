// #Sireum

package hamr.SW

import org.sireum._
import hamr._

// This file will not be overwritten so is safe to edit
object FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase {

  def initialise(api: FlyZonesDatabase_thr_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_keep_in_zones(Base_Types.Bits_example())
    api.put_keep_out_zones(Base_Types.Bits_example())
  }

  def timeTriggered(api: FlyZonesDatabase_thr_Impl_Operational_Api): Unit = {
    // example api usage


  }

  def activate(api: FlyZonesDatabase_thr_Impl_Operational_Api): Unit = { }

  def deactivate(api: FlyZonesDatabase_thr_Impl_Operational_Api): Unit = { }

  def finalise(api: FlyZonesDatabase_thr_Impl_Operational_Api): Unit = { }

  def recover(api: FlyZonesDatabase_thr_Impl_Operational_Api): Unit = { }
}

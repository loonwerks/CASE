// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase {

  def initialise(api: FlyZoneDatabase_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_FlyZones(SW.MapArray.example())
  }


  def activate(api: FlyZoneDatabase_Impl_Operational_Api): Unit = { }

  def deactivate(api: FlyZoneDatabase_Impl_Operational_Api): Unit = { }

  def finalise(api: FlyZoneDatabase_Impl_Operational_Api): Unit = { }

  def recover(api: FlyZoneDatabase_Impl_Operational_Api): Unit = { }
}

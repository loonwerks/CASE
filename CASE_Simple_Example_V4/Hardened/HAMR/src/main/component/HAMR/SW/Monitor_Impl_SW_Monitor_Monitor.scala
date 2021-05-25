// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object Monitor_Impl_SW_Monitor_Monitor {

  def initialise(api: Monitor_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_FlightPlan_out(Base_Types.Bits_example())
    api.put_Alert()
  }

  def handle_FlightPlan_in(api: Monitor_Impl_Operational_Api, value : Base_Types.Bits): Unit = {
    api.logInfo("example handle_FlightPlan_in implementation")
    api.logInfo(s"received ${value}")
    // example api usage

    val apiUsage_FlightPlan_in: Option[Base_Types.Bits] = api.get_FlightPlan_in()
    api.logInfo(s"Received on FlightPlan_in: ${apiUsage_FlightPlan_in}")
  }

  def activate(api: Monitor_Impl_Operational_Api): Unit = { }

  def deactivate(api: Monitor_Impl_Operational_Api): Unit = { }

  def finalise(api: Monitor_Impl_Operational_Api): Unit = { }

  def recover(api: Monitor_Impl_Operational_Api): Unit = { }
}

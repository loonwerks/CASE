// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object FlightController_Impl_SW_FlightController_FlightController {

  def initialise(api: FlightController_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

  }

  def handle_FlightPlan(api: FlightController_Impl_Operational_Api, value : Base_Types.Bits): Unit = {
    api.logInfo("example handle_FlightPlan implementation")
    api.logInfo(s"received ${value}")
    // example api usage

    val apiUsage_FlightPlan: Option[Base_Types.Bits] = api.get_FlightPlan()
    api.logInfo(s"Received on FlightPlan: ${apiUsage_FlightPlan}")
  }

  def activate(api: FlightController_Impl_Operational_Api): Unit = { }

  def deactivate(api: FlightController_Impl_Operational_Api): Unit = { }

  def finalise(api: FlightController_Impl_Operational_Api): Unit = { }

  def recover(api: FlightController_Impl_Operational_Api): Unit = { }
}

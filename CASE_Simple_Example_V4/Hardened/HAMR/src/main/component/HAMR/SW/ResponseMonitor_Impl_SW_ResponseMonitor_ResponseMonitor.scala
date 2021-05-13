// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor {

  def initialise(api: ResponseMonitor_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_Alert()
  }

  def handle_FlightPlan(api: ResponseMonitor_Impl_Operational_Api, value : SW.Mission): Unit = {
    api.logInfo("example handle_FlightPlan implementation")
    api.logInfo(s"received ${value}")
    // example api usage

    val apiUsage_FlightPlan: Option[SW.Mission] = api.get_FlightPlan()
    api.logInfo(s"Received on FlightPlan: ${apiUsage_FlightPlan}")
    val apiUsage_MissionCommand: Option[SW.RF_Msg_Impl] = api.get_MissionCommand()
    api.logInfo(s"Received on MissionCommand: ${apiUsage_MissionCommand}")
  }

  def handle_MissionCommand(api: ResponseMonitor_Impl_Operational_Api, value : SW.RF_Msg_Impl): Unit = {
    api.logInfo("example handle_MissionCommand implementation")
    api.logInfo(s"received ${value}")
  }

  def activate(api: ResponseMonitor_Impl_Operational_Api): Unit = { }

  def deactivate(api: ResponseMonitor_Impl_Operational_Api): Unit = { }

  def finalise(api: ResponseMonitor_Impl_Operational_Api): Unit = { }

  def recover(api: ResponseMonitor_Impl_Operational_Api): Unit = { }
}

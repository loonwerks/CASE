// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file will not be overwritten so is safe to edit
object FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner {

  def initialise(api: FlightPlanner_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_FlightPlan(SW.Mission.example())
  }

  def handle_MissionCommand(api: FlightPlanner_Impl_Operational_Api, value : SW.RF_Msg_Impl): Unit = {
    api.logInfo("example handle_MissionCommand implementation")
    api.logInfo(s"received ${value}")
    // example api usage

    val apiUsage_MissionCommand: Option[SW.RF_Msg_Impl] = api.get_MissionCommand()
    api.logInfo(s"Received on MissionCommand: ${apiUsage_MissionCommand}")
  }

  def activate(api: FlightPlanner_Impl_Operational_Api): Unit = { }

  def deactivate(api: FlightPlanner_Impl_Operational_Api): Unit = { }

  def finalise(api: FlightPlanner_Impl_Operational_Api): Unit = { }

  def recover(api: FlightPlanner_Impl_Operational_Api): Unit = { }
}

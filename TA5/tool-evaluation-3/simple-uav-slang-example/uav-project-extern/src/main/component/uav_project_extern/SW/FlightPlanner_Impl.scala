// #Sireum

package uav_project_extern.SW

import org.sireum._
import uav_project_extern._

// This file was auto-generated.  Do not edit

@msig trait FlightPlanner_Impl {

  def api : FlightPlanner_Impl_Bridge.Api

  def handlemission_rcv(value : Base_Types.Boolean): Unit = {
    api.logInfo(s"received ${value}")
    api.logInfo("default handlemission_rcv implementation")
  }

  def handlerecv_map(value : SW.Command_Impl): Unit = {
    api.logInfo(s"received ${value}")
    api.logInfo("default handlerecv_map implementation")
  }

  def activate(): Unit = {}

  def deactivate(): Unit = {}

  def finalise(): Unit = {}

  def initialise(): Unit = {}

  def recover(): Unit = {}
}
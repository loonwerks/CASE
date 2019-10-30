// #Sireum

package uav_project_extern.SW

import org.sireum._
import uav_project_extern._

// This file was auto-generated.  Do not edit

@msig trait WaypointManager_Impl {

  def api : WaypointManager_Impl_Bridge.Api

  def handleflight_plan(value : SW.Mission): Unit = {
    api.logInfo(s"received ${value}")
    api.logInfo("default handleflight_plan implementation")
  }

  def handletracking_id(value : Base_Types.Integer_64): Unit = {
    api.logInfo(s"received ${value}")
    api.logInfo("default handletracking_id implementation")
  }

  def activate(): Unit = {}

  def deactivate(): Unit = {}

  def finalise(): Unit = {}

  def initialise(): Unit = {}

  def recover(): Unit = {}
}
// #Sireum

package ACT_Demo_Dec2018__camkes_X.SW

import org.sireum._
import ACT_Demo_Dec2018__camkes_X._

// This file was auto-generated.  Do not edit

@msig trait WaypointManager_Impl {

  def api : WaypointManager_Impl_Bridge.Api

  def initialise(): Unit = {}

  def finalise(): Unit = {}

  def handleflight_plan(value : SW.Mission): Unit = {
    api.logInfo(s"received ${value}")
    api.logInfo("default flight_plan implementation")
  }

  def handletracking_id(value : Base_Types.Integer_64): Unit = {
    api.logInfo(s"received ${value}")
    api.logInfo("default tracking_id implementation")
  }

  def activate(): Unit = {}

  def deactivate(): Unit = {}

  def recover(): Unit = {}
}
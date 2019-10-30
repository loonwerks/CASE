// #Sireum

package uav_project_extern.SW

import org.sireum._
import uav_project_extern._

// This file was auto-generated.  Do not edit

@msig trait UARTDriver_Impl {

  def api : UARTDriver_Impl_Bridge.Api

  def handlemission_window(value : SW.MissionWindow): Unit = {
    api.logInfo(s"received ${value}")
    api.logInfo("default handlemission_window implementation")
  }

  def activate(): Unit = {}

  def deactivate(): Unit = {}

  def finalise(): Unit = {}

  def initialise(): Unit = {}

  def recover(): Unit = {}
}
// #Sireum

package ACT_Demo_Dec2018__camkes_X.SW

import org.sireum._
import ACT_Demo_Dec2018__camkes_X._

// This file was auto-generated.  Do not edit

@msig trait UARTDriver_Impl {

  def api : UARTDriver_Impl_Bridge.Api

  def initialise(): Unit = {}

  def finalise(): Unit = {}

  def handlemission_window(value : SW.MissionWindow): Unit = {
    api.logInfo(s"received ${value}")
    api.logInfo("default mission_window implementation")
  }

  def activate(): Unit = {}

  def deactivate(): Unit = {}

  def recover(): Unit = {}
}
// #Sireum

package ACT_Demo_Dec2018__camkes_X.SW

import org.sireum._
import ACT_Demo_Dec2018__camkes_X._

// This file was auto-generated.  Do not edit

@msig trait FlightPlanner_Impl {

  def api : FlightPlanner_Impl_Bridge.Api

  def initialise(): Unit = {}

  def finalise(): Unit = {}

  def handlemission_rcv(value : Base_Types.Boolean): Unit = {
    api.logInfo(s"received ${value}")
    api.logInfo("default mission_rcv implementation")
  }

  def handlerecv_map(value : SW.Command_Impl): Unit = {
    api.logInfo(s"received ${value}")
    api.logInfo("default recv_map implementation")
  }

  def activate(): Unit = {}

  def deactivate(): Unit = {}

  def recover(): Unit = {}
}
// #Sireum

package HAMR_Simple_V4

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object IPCPorts {
  val RadioDriver_Impl_SW_Radio_App: Art.PortId = 4
  val FlightPlanner_Impl_SW_FlightPlanner_App: Art.PortId = 5
  val FlightController_Impl_SW_FlightController_App: Art.PortId = 6
  val Main: Art.PortId = 7

  def emptyReceiveOut: MBox2[Art.PortId, DataContent] = {
    return MBox2(-1, art.Empty())
  }

  def emptyReceiveAsyncOut: MBox2[Art.PortId, Option[DataContent]] = {
    return MBox2(-1, None())
  }
}

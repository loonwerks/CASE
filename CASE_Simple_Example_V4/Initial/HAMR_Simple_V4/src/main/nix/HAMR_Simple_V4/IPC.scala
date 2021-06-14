// #Sireum

package HAMR_Simple_V4

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object IPCPorts {
  val AttestationTester_Impl_SW_AttestationTester_App: Art.PortId = 9
  val RadioDriver_Impl_SW_Radio_App: Art.PortId = 10
  val FlightPlanner_Impl_SW_FlightPlanner_App: Art.PortId = 11
  val FlightController_Impl_SW_FlightController_App: Art.PortId = 12
  val Main: Art.PortId = 13

  def emptyReceiveOut: MBox2[Art.PortId, DataContent] = {
    return MBox2(-1, art.Empty())
  }

  def emptyReceiveAsyncOut: MBox2[Art.PortId, Option[DataContent]] = {
    return MBox2(-1, None())
  }
}

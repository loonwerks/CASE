// #Sireum

package uav_project_extern.SW

import org.sireum._
import uav_project_extern._

// This file was auto-generated.  Do not edit

object MissionWindow {
  def empty(): SW.MissionWindow = {
    return SW.MissionWindow(ISZ.create(4, SW.Coordinate_Impl.empty()))
  }
}

@datatype class MissionWindow(
  value : ISZ[SW.Coordinate_Impl]) {
  { assert (value.size == 4) }
}

object MissionWindow_Payload {
  def empty(): MissionWindow_Payload = {
    return MissionWindow_Payload(SW.MissionWindow.empty())
  }
}

@datatype class MissionWindow_Payload(value: SW.MissionWindow) extends art.DataContent

// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object MissionWindow {
  def example(): SW.MissionWindow = {
    return SW.MissionWindow(ISZ.create(4, SW.Coordinate_Impl.example()))
  }
}

@datatype class MissionWindow(
  value : ISZ[SW.Coordinate_Impl]) {
  //{  assert (value.size == 4) }
}

object MissionWindow_Payload {
  def example(): MissionWindow_Payload = {
    return MissionWindow_Payload(SW.MissionWindow.example())
  }
}

@datatype class MissionWindow_Payload(value: SW.MissionWindow) extends art.DataContent

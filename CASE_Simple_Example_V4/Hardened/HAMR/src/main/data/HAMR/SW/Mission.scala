// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object Mission {
  def example(): SW.Mission = {
    return SW.Mission(ISZ.create(3, SW.Coordinate_Impl.example()))
  }
}

@datatype class Mission(
  value : ISZ[SW.Coordinate_Impl]) {
  //{  assert (value.size == 3) }
}

object Mission_Payload {
  def example(): Mission_Payload = {
    return Mission_Payload(SW.Mission.example())
  }
}

@datatype class Mission_Payload(value: SW.Mission) extends art.DataContent

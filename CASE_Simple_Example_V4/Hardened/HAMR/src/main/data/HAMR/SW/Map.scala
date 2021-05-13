// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object Map {
  def example(): SW.Map = {
    return SW.Map(ISZ.create(4, SW.Coordinate_Impl.example()))
  }
}

@datatype class Map(
  value : ISZ[SW.Coordinate_Impl]) {
  //{  assert (value.size == 4) }
}

object Map_Payload {
  def example(): Map_Payload = {
    return Map_Payload(SW.Map.example())
  }
}

@datatype class Map_Payload(value: SW.Map) extends art.DataContent

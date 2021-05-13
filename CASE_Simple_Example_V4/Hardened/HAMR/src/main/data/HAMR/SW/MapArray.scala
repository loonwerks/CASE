// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object MapArray {
  def example(): SW.MapArray = {
    return SW.MapArray(ISZ.create(5, SW.Map.example()))
  }
}

@datatype class MapArray(
  value : ISZ[SW.Map]) {
  //{  assert (value.size == 5) }
}

object MapArray_Payload {
  def example(): MapArray_Payload = {
    return MapArray_Payload(SW.MapArray.example())
  }
}

@datatype class MapArray_Payload(value: SW.MapArray) extends art.DataContent

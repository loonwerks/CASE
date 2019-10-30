// #Sireum

package uav_project_extern.SW

import org.sireum._
import uav_project_extern._

// This file was auto-generated.  Do not edit

object Map {
  def empty(): SW.Map = {
    return SW.Map(ISZ.create(4, SW.Coordinate_Impl.empty()))
  }
}

@datatype class Map(
  value : ISZ[SW.Coordinate_Impl]) {
  { assert (value.size == 4) }
}

object Map_Payload {
  def empty(): Map_Payload = {
    return Map_Payload(SW.Map.empty())
  }
}

@datatype class Map_Payload(value: SW.Map) extends art.DataContent

// #Sireum

package uav_project_extern.SW

import org.sireum._
import uav_project_extern._

// This file was auto-generated.  Do not edit

object Mission {
  def empty(): SW.Mission = {
    return SW.Mission(ISZ.create(10, SW.Coordinate_Impl.empty()))
  }
}

@datatype class Mission(
  value : ISZ[SW.Coordinate_Impl]) {
  { assert (value.size == 10) }
}

object Mission_Payload {
  def empty(): Mission_Payload = {
    return Mission_Payload(SW.Mission.empty())
  }
}

@datatype class Mission_Payload(value: SW.Mission) extends art.DataContent

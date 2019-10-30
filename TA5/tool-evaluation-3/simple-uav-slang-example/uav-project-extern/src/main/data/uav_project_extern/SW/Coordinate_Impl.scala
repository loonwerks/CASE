// #Sireum

package uav_project_extern.SW

import org.sireum._
import uav_project_extern._

// This file was auto-generated.  Do not edit

object Coordinate_Impl {
  def empty(): SW.Coordinate_Impl = {
    return SW.Coordinate_Impl(Base_Types.Integer_32_empty(), Base_Types.Integer_32_empty(), Base_Types.Integer_32_empty())
  }
}

@datatype class Coordinate_Impl(
  lat : Base_Types.Integer_32,
  longitude : Base_Types.Integer_32,
  alt : Base_Types.Integer_32) {
}

object Coordinate_Impl_Payload {
  def empty(): Coordinate_Impl_Payload = {
    return Coordinate_Impl_Payload(SW.Coordinate_Impl.empty())
  }
}

@datatype class Coordinate_Impl_Payload(value: SW.Coordinate_Impl) extends art.DataContent

// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object Coordinate_Impl {
  def example(): SW.Coordinate_Impl = {
    return SW.Coordinate_Impl(Base_Types.Integer_32_example(), Base_Types.Integer_32_example(), Base_Types.Integer_32_example())
  }
}

@datatype class Coordinate_Impl(
  Latitude : S32,
  Longitude : S32,
  Altitude : S32) {
}

object Coordinate_Impl_Payload {
  def example(): Coordinate_Impl_Payload = {
    return Coordinate_Impl_Payload(SW.Coordinate_Impl.example())
  }
}

@datatype class Coordinate_Impl_Payload(value: SW.Coordinate_Impl) extends art.DataContent

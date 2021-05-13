// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object Address_Impl {
  def example(): SW.Address_Impl = {
    return SW.Address_Impl(Base_Types.Unsigned_32_example())
  }
}

@datatype class Address_Impl(
  value : U32) {
}

object Address_Impl_Payload {
  def example(): Address_Impl_Payload = {
    return Address_Impl_Payload(SW.Address_Impl.example())
  }
}

@datatype class Address_Impl_Payload(value: SW.Address_Impl) extends art.DataContent

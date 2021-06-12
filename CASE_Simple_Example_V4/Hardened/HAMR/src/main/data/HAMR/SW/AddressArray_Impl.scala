// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object AddressArray_Impl {
  def example(): SW.AddressArray_Impl = {
    return SW.AddressArray_Impl(ISZ.create(4, Base_Types.Unsigned_32_example()))
  }
}

@datatype class AddressArray_Impl(
  value : ISZ[Base_Types.Unsigned_32]) {
  //{  assert (value.size == 4) }
}

object AddressArray_Impl_Payload {
  def example(): AddressArray_Impl_Payload = {
    return AddressArray_Impl_Payload(SW.AddressArray_Impl.example())
  }
}

@datatype class AddressArray_Impl_Payload(value: SW.AddressArray_Impl) extends art.DataContent

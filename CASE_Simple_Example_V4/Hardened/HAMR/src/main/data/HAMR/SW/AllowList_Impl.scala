// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object AllowList_Impl {
  def example(): SW.AllowList_Impl = {
    return SW.AllowList_Impl(ISZ.create(4, SW.AddressArray_Impl.example()))
  }
}

@datatype class AllowList_Impl(
  value : ISZ[SW.AddressArray_Impl]) {
  //{  assert (value.size == 4) }
}

object AllowList_Impl_Payload {
  def example(): AllowList_Impl_Payload = {
    return AllowList_Impl_Payload(SW.AllowList_Impl.example())
  }
}

@datatype class AllowList_Impl_Payload(value: SW.AllowList_Impl) extends art.DataContent

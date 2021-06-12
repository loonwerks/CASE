// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object AttestationResponseMsg_Impl {
  def example(): SW.AttestationResponseMsg_Impl = {
    return SW.AttestationResponseMsg_Impl(ISZ.create(2048, Base_Types.Unsigned_8_example()))
  }
}

@datatype class AttestationResponseMsg_Impl(
  value : ISZ[Base_Types.Unsigned_8]) {
  //{  assert (value.size == 2048) }
}

object AttestationResponseMsg_Impl_Payload {
  def example(): AttestationResponseMsg_Impl_Payload = {
    return AttestationResponseMsg_Impl_Payload(SW.AttestationResponseMsg_Impl.example())
  }
}

@datatype class AttestationResponseMsg_Impl_Payload(value: SW.AttestationResponseMsg_Impl) extends art.DataContent

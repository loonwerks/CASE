// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object AttestationRequestMsg_Impl {
  def example(): SW.AttestationRequestMsg_Impl = {
    return SW.AttestationRequestMsg_Impl(ISZ.create(16, Base_Types.Unsigned_8_example()))
  }
}

@datatype class AttestationRequestMsg_Impl(
  value : ISZ[Base_Types.Unsigned_8]) {
  //{  assert (value.size == 16) }
}

object AttestationRequestMsg_Impl_Payload {
  def example(): AttestationRequestMsg_Impl_Payload = {
    return AttestationRequestMsg_Impl_Payload(SW.AttestationRequestMsg_Impl.example())
  }
}

@datatype class AttestationRequestMsg_Impl_Payload(value: SW.AttestationRequestMsg_Impl) extends art.DataContent

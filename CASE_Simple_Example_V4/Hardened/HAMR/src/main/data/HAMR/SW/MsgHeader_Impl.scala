// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object MsgHeader_Impl {
  def example(): SW.MsgHeader_Impl = {
    return SW.MsgHeader_Impl(Base_Types.Unsigned_32_example(), Base_Types.Unsigned_32_example(), Base_Types.Boolean_example(), Base_Types.Boolean_example())
  }
}

@datatype class MsgHeader_Impl(
  src : U32,
  dst : U32,
  trusted : B,
  HMAC : B) {
}

object MsgHeader_Impl_Payload {
  def example(): MsgHeader_Impl_Payload = {
    return MsgHeader_Impl_Payload(SW.MsgHeader_Impl.example())
  }
}

@datatype class MsgHeader_Impl_Payload(value: SW.MsgHeader_Impl) extends art.DataContent

// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object RF_Msg_Impl {
  def example(): SW.RF_Msg_Impl = {
    return SW.RF_Msg_Impl(SW.MsgHeader_Impl.example(), SW.Command_Impl.example())
  }
}

@datatype class RF_Msg_Impl(
  header : SW.MsgHeader_Impl,
  payload : SW.Command_Impl) {
}

object RF_Msg_Impl_Payload {
  def example(): RF_Msg_Impl_Payload = {
    return RF_Msg_Impl_Payload(SW.RF_Msg_Impl.example())
  }
}

@datatype class RF_Msg_Impl_Payload(value: SW.RF_Msg_Impl) extends art.DataContent

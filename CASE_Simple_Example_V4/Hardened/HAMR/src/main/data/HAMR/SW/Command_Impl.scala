// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object Command_Impl {
  def example(): SW.Command_Impl = {
    return SW.Command_Impl(SW.Map.example(), SW.FlightPattern.byOrdinal(0).get)
  }
}

@datatype class Command_Impl(
  Map : SW.Map,
  Pattern : SW.FlightPattern.Type) {
}

object Command_Impl_Payload {
  def example(): Command_Impl_Payload = {
    return Command_Impl_Payload(SW.Command_Impl.example())
  }
}

@datatype class Command_Impl_Payload(value: SW.Command_Impl) extends art.DataContent

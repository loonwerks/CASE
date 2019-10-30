// #Sireum

package uav_project_extern.SW

import org.sireum._
import uav_project_extern._

// This file was auto-generated.  Do not edit

object Command_Impl {
  def empty(): SW.Command_Impl = {
    return SW.Command_Impl(SW.Map.empty(), SW.FlightPattern.byOrdinal(0).get, Base_Types.Boolean_empty())
  }
}

@datatype class Command_Impl(
  Map : SW.Map,
  Pattern : SW.FlightPattern.Type,
  HMAC : Base_Types.Boolean) {
}

object Command_Impl_Payload {
  def empty(): Command_Impl_Payload = {
    return Command_Impl_Payload(SW.Command_Impl.empty())
  }
}

@datatype class Command_Impl_Payload(value: SW.Command_Impl) extends art.DataContent

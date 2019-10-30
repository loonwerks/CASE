// #Sireum

package uav_project_extern.SW

import org.sireum._
import uav_project_extern._

// This file was auto-generated.  Do not edit

@enum object FlightPattern {
  'ZigZag
  'StraightLine
  'Perimeter
}

object FlightPattern_Payload {
  def empty(): FlightPattern_Payload = {
    return FlightPattern_Payload(SW.FlightPattern.byOrdinal(0).get)
  }
}

@datatype class FlightPattern_Payload(value: SW.FlightPattern.Type) extends art.DataContent

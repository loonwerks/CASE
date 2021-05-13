// #Sireum

package HAMR.SW

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

@enum object FlightPattern {
  "ZigZag"
  "StraightLine"
  "Perimeter"
}

object FlightPattern_Payload {
  def example(): FlightPattern_Payload = {
    return FlightPattern_Payload(SW.FlightPattern.byOrdinal(0).get)
  }
}

@datatype class FlightPattern_Payload(value: SW.FlightPattern.Type) extends art.DataContent

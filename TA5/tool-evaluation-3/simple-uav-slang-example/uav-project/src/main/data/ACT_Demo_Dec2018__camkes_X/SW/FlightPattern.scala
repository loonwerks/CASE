// #Sireum

package ACT_Demo_Dec2018__camkes_X.SW

import org.sireum._

@enum object FlightPattern {
  'ZigZag
  'StraightLine
  'Perimeter
}

@datatype class FlightPattern_Payload(value: FlightPattern.Type) extends art.DataContent
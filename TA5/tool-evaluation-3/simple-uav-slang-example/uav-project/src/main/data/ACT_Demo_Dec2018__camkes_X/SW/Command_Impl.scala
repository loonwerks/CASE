// #Sireum

package ACT_Demo_Dec2018__camkes_X.SW

import org.sireum._
import ACT_Demo_Dec2018__camkes_X._

@datatype class Command_Impl(theMap: SW__Map,
                             Pattern: FlightPattern.Type,
                             HMAC: B)

@datatype class Command_Impl_Payload(value: Command_Impl) extends art.DataContent

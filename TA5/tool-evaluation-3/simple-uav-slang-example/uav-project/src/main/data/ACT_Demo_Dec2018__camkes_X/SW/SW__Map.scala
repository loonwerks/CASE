// #Sireum

package ACT_Demo_Dec2018__camkes_X.SW

import org.sireum._
import ACT_Demo_Dec2018__camkes_X._

@datatype class SW__Map(value: ISZ[Coordinate_Impl])
/*@datatype class SW__Map(c1: Coordinate_Impl,
                        c2: Coordinate_Impl,
                        c3: Coordinate_Impl,
                        c4: Coordinate_Impl)
*/

@datatype class SW__Map_Payload(value: SW__Map) extends art.DataContent
// #Sireum

package ACT_Demo_Dec2018__camkes_X.SW

import org.sireum._
import ACT_Demo_Dec2018__camkes_X._

@datatype class Coordinate_Impl(lat: Z32,
                                longitude: Z32,
                                alt: Z32)

@datatype class Coordinate_Impl_Payload(value: Coordinate_Impl) extends art.DataContent

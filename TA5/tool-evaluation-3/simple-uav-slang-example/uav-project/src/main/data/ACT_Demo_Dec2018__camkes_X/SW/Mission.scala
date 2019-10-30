// #Sireum

package ACT_Demo_Dec2018__camkes_X.SW

import org.sireum._
import ACT_Demo_Dec2018__camkes_X._

@datatype class Mission(value: ISZ[Coordinate_Impl])

@datatype class Mission_Payload(value: Mission) extends art.DataContent

// #Sireum

package ACT_Demo_Dec2018__camkes_X.Base_Types

import org.sireum._
import ACT_Demo_Dec2018__camkes_X._

@datatype class Integer_64(value: Z64)

@datatype class Integer_64_Payload(value: Integer_64) extends art.DataContent

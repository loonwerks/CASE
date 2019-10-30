// #Sireum

package ACT_Demo_Dec2018__camkes_X.Base_Types

import org.sireum._
import ACT_Demo_Dec2018__camkes_X._

@datatype class Boolean(value: B)

@datatype class Boolean_Payload(value: Boolean) extends art.DataContent

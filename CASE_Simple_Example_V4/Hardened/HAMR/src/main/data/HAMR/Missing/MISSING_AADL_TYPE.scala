// #Sireum

package HAMR.Missing

import org.sireum._
import HAMR._

object MISSING_AADL_TYPE {
  def example(): Missing.MISSING_AADL_TYPE = {
    return Missing.MISSING_AADL_TYPE()
  }
}

@datatype class MISSING_AADL_TYPE() // type skeleton

object MISSING_AADL_TYPE_Payload {
  def example(): MISSING_AADL_TYPE_Payload = {
    return MISSING_AADL_TYPE_Payload(Missing.MISSING_AADL_TYPE.example())
  }
}

@datatype class MISSING_AADL_TYPE_Payload(value: Missing.MISSING_AADL_TYPE) extends art.DataContent

// #Sireum

package HAMR.CASE_Model_Transformations

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object CASE_AttestationResponseMsg_Impl {
  def example(): CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl = {
    return CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl(CASE_Model_Transformations.CASE_MsgHeader_Impl.example(), Base_Types.Boolean_example())
  }
}

@datatype class CASE_AttestationResponseMsg_Impl(
  header : CASE_Model_Transformations.CASE_MsgHeader_Impl,
  status : B) {
}

object CASE_AttestationResponseMsg_Impl_Payload {
  def example(): CASE_AttestationResponseMsg_Impl_Payload = {
    return CASE_AttestationResponseMsg_Impl_Payload(CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl.example())
  }
}

@datatype class CASE_AttestationResponseMsg_Impl_Payload(value: CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl) extends art.DataContent

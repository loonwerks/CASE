// #Sireum

package HAMR.CASE_Model_Transformations

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object CASE_AttestationRequestMsg_Impl {
  def example(): CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl = {
    return CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl(CASE_Model_Transformations.CASE_MsgHeader_Impl.example())
  }
}

@datatype class CASE_AttestationRequestMsg_Impl(
  header : CASE_Model_Transformations.CASE_MsgHeader_Impl) {
}

object CASE_AttestationRequestMsg_Impl_Payload {
  def example(): CASE_AttestationRequestMsg_Impl_Payload = {
    return CASE_AttestationRequestMsg_Impl_Payload(CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl.example())
  }
}

@datatype class CASE_AttestationRequestMsg_Impl_Payload(value: CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl) extends art.DataContent

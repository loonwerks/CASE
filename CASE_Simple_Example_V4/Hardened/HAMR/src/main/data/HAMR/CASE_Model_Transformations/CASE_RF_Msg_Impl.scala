// #Sireum

package HAMR.CASE_Model_Transformations

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object CASE_RF_Msg_Impl {
  def example(): CASE_Model_Transformations.CASE_RF_Msg_Impl = {
    return CASE_Model_Transformations.CASE_RF_Msg_Impl(CASE_Model_Transformations.CASE_MsgHeader_Impl.example(), Missing.MISSING_AADL_TYPE.example())
  }
}

@datatype class CASE_RF_Msg_Impl(
  header : CASE_Model_Transformations.CASE_MsgHeader_Impl,
  payload : Missing.MISSING_AADL_TYPE) {
}

object CASE_RF_Msg_Impl_Payload {
  def example(): CASE_RF_Msg_Impl_Payload = {
    return CASE_RF_Msg_Impl_Payload(CASE_Model_Transformations.CASE_RF_Msg_Impl.example())
  }
}

@datatype class CASE_RF_Msg_Impl_Payload(value: CASE_Model_Transformations.CASE_RF_Msg_Impl) extends art.DataContent

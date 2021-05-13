// #Sireum

package HAMR.CASE_Model_Transformations

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object CASE_MsgHeader_Impl {
  def example(): CASE_Model_Transformations.CASE_MsgHeader_Impl = {
    return CASE_Model_Transformations.CASE_MsgHeader_Impl(Base_Types.Integer_32_example(), Base_Types.Integer_32_example(), Base_Types.Boolean_example(), Base_Types.Boolean_example())
  }
}

@datatype class CASE_MsgHeader_Impl(
  src : S32,
  dst : S32,
  trusted : B,
  HMAC : B) {
}

object CASE_MsgHeader_Impl_Payload {
  def example(): CASE_MsgHeader_Impl_Payload = {
    return CASE_MsgHeader_Impl_Payload(CASE_Model_Transformations.CASE_MsgHeader_Impl.example())
  }
}

@datatype class CASE_MsgHeader_Impl_Payload(value: CASE_Model_Transformations.CASE_MsgHeader_Impl) extends art.DataContent

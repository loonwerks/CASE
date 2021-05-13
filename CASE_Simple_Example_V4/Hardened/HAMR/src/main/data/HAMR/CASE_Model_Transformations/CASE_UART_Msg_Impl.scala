// #Sireum

package HAMR.CASE_Model_Transformations

import org.sireum._
import HAMR._

// This file was auto-generated.  Do not edit

object CASE_UART_Msg_Impl {
  def example(): CASE_Model_Transformations.CASE_UART_Msg_Impl = {
    return CASE_Model_Transformations.CASE_UART_Msg_Impl(Base_Types.Boolean_example())
  }
}

@datatype class CASE_UART_Msg_Impl(
  crc : B) {
}

object CASE_UART_Msg_Impl_Payload {
  def example(): CASE_UART_Msg_Impl_Payload = {
    return CASE_UART_Msg_Impl_Payload(CASE_Model_Transformations.CASE_UART_Msg_Impl.example())
  }
}

@datatype class CASE_UART_Msg_Impl_Payload(value: CASE_Model_Transformations.CASE_UART_Msg_Impl) extends art.DataContent

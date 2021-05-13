// #Sireum

package HAMR.SlangTypeLibrary

import org.sireum._
import art._
import HAMR._

object SlangTypeLibrary extends App {
  def main(args: ISZ[String]): Z = {

    // touch each payload/type in case some are only used as a field in a record
    def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

    printDataContent(Base_Types.Integer_32_Payload(Base_Types.Integer_32_example()))
    printDataContent(Base_Types.Boolean_Payload(Base_Types.Boolean_example()))
    printDataContent(CASE_Model_Transformations.CASE_MsgHeader_Impl_Payload(CASE_Model_Transformations.CASE_MsgHeader_Impl.example()))
    printDataContent(CASE_Model_Transformations.CASE_RF_Msg_Impl_Payload(CASE_Model_Transformations.CASE_RF_Msg_Impl.example()))
    printDataContent(CASE_Model_Transformations.CASE_UART_Msg_Impl_Payload(CASE_Model_Transformations.CASE_UART_Msg_Impl.example()))
    printDataContent(SW.Coordinate_Impl_Payload(SW.Coordinate_Impl.example()))
    printDataContent(SW.Map_Payload(SW.Map.example()))
    printDataContent(SW.MapArray_Payload(SW.MapArray.example()))
    printDataContent(Base_Types.Unsigned_32_Payload(Base_Types.Unsigned_32_example()))
    printDataContent(SW.MsgHeader_Impl_Payload(SW.MsgHeader_Impl.example()))
    printDataContent(SW.FlightPattern_Payload(SW.FlightPattern.byOrdinal(0).get))
    printDataContent(SW.Command_Impl_Payload(SW.Command_Impl.example()))
    printDataContent(SW.RF_Msg_Impl_Payload(SW.RF_Msg_Impl.example()))
    printDataContent(CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl_Payload(CASE_Model_Transformations.CASE_AttestationRequestMsg_Impl.example()))
    printDataContent(CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl_Payload(CASE_Model_Transformations.CASE_AttestationResponseMsg_Impl.example()))
    printDataContent(SW.MissionWindow_Payload(SW.MissionWindow.example()))
    printDataContent(SW.Address_Impl_Payload(SW.Address_Impl.example()))
    printDataContent(SW.Mission_Payload(SW.Mission.example()))
    printDataContent(Missing.MISSING_AADL_TYPE_Payload(Missing.MISSING_AADL_TYPE.example()))
    printDataContent(art.Empty())

    return 0
  }
}

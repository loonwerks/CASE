// #Sireum

package HAMR.SlangTypeLibrary

import org.sireum._
import art._
import HAMR._

object SlangTypeLibrary extends App {
  def main(args: ISZ[String]): Z = {

    // touch each payload/type in case some are only used as a field in a record
    def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

    printDataContent(Base_Types.Unsigned_8_Payload(Base_Types.Unsigned_8_example()))
    printDataContent(SW.AttestationRequestMsg_Impl_Payload(SW.AttestationRequestMsg_Impl.example()))
    printDataContent(SW.AttestationResponseMsg_Impl_Payload(SW.AttestationResponseMsg_Impl.example()))
    printDataContent(Base_Types.Unsigned_32_Payload(Base_Types.Unsigned_32_example()))
    printDataContent(SW.MsgHeader_Impl_Payload(SW.MsgHeader_Impl.example()))
    printDataContent(Base_Types.Integer_32_Payload(Base_Types.Integer_32_example()))
    printDataContent(SW.Coordinate_Impl_Payload(SW.Coordinate_Impl.example()))
    printDataContent(SW.Map_Payload(SW.Map.example()))
    printDataContent(SW.Command_Impl_Payload(SW.Command_Impl.example()))
    printDataContent(SW.RF_Msg_Impl_Payload(SW.RF_Msg_Impl.example()))
    printDataContent(SW.Mission_Payload(SW.Mission.example()))
    printDataContent(SW.AddressArray_Impl_Payload(SW.AddressArray_Impl.example()))
    printDataContent(SW.AllowList_Impl_Payload(SW.AllowList_Impl.example()))
    printDataContent(art.Empty())

    return 0
  }
}

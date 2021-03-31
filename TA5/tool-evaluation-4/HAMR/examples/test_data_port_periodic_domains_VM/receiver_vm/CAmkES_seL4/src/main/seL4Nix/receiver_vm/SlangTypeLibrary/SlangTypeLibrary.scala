// #Sireum

package receiver_vm.SlangTypeLibrary

import org.sireum._
import art._
import receiver_vm._

object SlangTypeLibrary extends App {
  def main(args: ISZ[String]): Z = {

    // touch each payload/type in case some are only used as a field in a record
    def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

    printDataContent(Base_Types.Integer_8_Payload(Base_Types.Integer_8_example()))
    printDataContent(art.Empty())

    return 0
  }
}

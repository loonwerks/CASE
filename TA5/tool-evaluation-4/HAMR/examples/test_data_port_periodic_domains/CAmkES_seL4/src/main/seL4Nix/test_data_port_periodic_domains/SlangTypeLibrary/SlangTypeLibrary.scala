// #Sireum

package test_data_port_periodic_domains.SlangTypeLibrary

import org.sireum._
import art._
import test_data_port_periodic_domains._

object SlangTypeLibrary extends App {
  def main(args: ISZ[String]): Z = {

    // touch each payload/type in case some are only used as a field in a record
    def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

    printDataContent(Base_Types.Integer_8_Payload(Base_Types.Integer_8_empty()))
    printDataContent(art.Empty())

    return 0
  }
}

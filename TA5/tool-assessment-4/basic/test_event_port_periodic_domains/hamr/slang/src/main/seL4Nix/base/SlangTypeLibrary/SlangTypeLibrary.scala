// #Sireum

package base.SlangTypeLibrary

import org.sireum._
import art._
import base._

object SlangTypeLibrary extends App {
  def main(args: ISZ[String]): Z = {

    // touch each payload/type in case some are only used as a field in a record
    def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

    printDataContent(art.Empty())

    return 0
  }
}

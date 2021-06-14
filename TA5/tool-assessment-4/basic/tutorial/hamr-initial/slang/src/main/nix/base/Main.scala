// #Sireum

package base

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object Main extends App {
  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    Platform.initialise(seed, None())

    val empty = art.Empty()

    Platform.sendAsync(IPCPorts.producer_t_i_producer_producer_App, IPCPorts.producer_t_i_producer_producer_App, empty)
    Platform.sendAsync(IPCPorts.consumer_t_i_consumer_consumer_App, IPCPorts.consumer_t_i_consumer_consumer_App, empty)

    Platform.finalise()
    return 0
  }
}

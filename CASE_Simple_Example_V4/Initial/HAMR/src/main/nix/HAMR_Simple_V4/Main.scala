// #Sireum

package HAMR_Simple_V4

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

    Platform.sendAsync(IPCPorts.RadioDriver_Impl_SW_Radio_App, IPCPorts.RadioDriver_Impl_SW_Radio_App, empty)
    Platform.sendAsync(IPCPorts.FlightPlanner_Impl_SW_FlightPlanner_App, IPCPorts.FlightPlanner_Impl_SW_FlightPlanner_App, empty)
    Platform.sendAsync(IPCPorts.FlightController_Impl_SW_FlightController_App, IPCPorts.FlightController_Impl_SW_FlightController_App, empty)

    Platform.finalise()
    return 0
  }
}

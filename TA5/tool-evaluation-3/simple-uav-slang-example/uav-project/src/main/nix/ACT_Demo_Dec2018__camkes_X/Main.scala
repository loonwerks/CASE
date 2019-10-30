// #Sireum

package ACT_Demo_Dec2018__camkes_X

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

    Platform.sendAsync(IPCPorts.UART_Impl_App, IPCPorts.UART_Impl_App, empty)
    Platform.sendAsync(IPCPorts.WaypointManager_Impl_App, IPCPorts.WaypointManager_Impl_App, empty)
    Platform.sendAsync(IPCPorts.Radio_Impl_App, IPCPorts.Radio_Impl_App, empty)
    Platform.sendAsync(IPCPorts.FlightPlanner_Impl_App, IPCPorts.FlightPlanner_Impl_App, empty)
    Platform.sendAsync(IPCPorts.UARTDriver_Impl_App, IPCPorts.UARTDriver_Impl_App, empty)
    Platform.sendAsync(IPCPorts.RadioDriver_Impl_App, IPCPorts.RadioDriver_Impl_App, empty)

    Platform.finalise()
    return 0
  }
}

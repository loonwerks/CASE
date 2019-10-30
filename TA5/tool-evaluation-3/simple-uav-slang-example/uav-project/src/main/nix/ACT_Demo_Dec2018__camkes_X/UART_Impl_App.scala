// #Sireum

package ACT_Demo_Dec2018__camkes_X

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object UART_Impl_App extends App {

  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    val entryPoints = Arch.UAV_Impl_Instance_MCMP_UART_HW.entryPoints

    val appPortId: Art.PortId = IPCPorts.UART_Impl_App
    val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
    Platform.initialise(seed, appPortIdOpt)

    val position_status_innPortId = Arch.UAV_Impl_Instance_MCMP_UART_HW.position_status_inn.id
    val position_status_innPortIdOpt = Some(position_status_innPortId)
    Platform.initialise(seed, position_status_innPortIdOpt)
    Art.run(Arch.ad)

    entryPoints.initialise()

    Platform.receive(appPortIdOpt)

    println("UART_Impl_App starting ...")

    ArtNix.timeDispatch()

    var terminated = F
    while (!terminated) {
      val termOpt = Platform.receiveAsync(appPortIdOpt)
      if (termOpt.isEmpty) {
        entryPoints.compute()
        Process.sleep(1)
      } else {
        terminated = T
      }
    }
    exit()

    return 0
  }

  def exit(): Unit = {
    Arch.UAV_Impl_Instance_MCMP_UART_HW.entryPoints.finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}
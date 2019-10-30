// #Sireum

package ACT_Demo_Dec2018__camkes_X

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object Radio_Impl_App extends App {

  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    val entryPoints = Arch.UAV_Impl_Instance_MCMP_RADIO_HW.entryPoints

    val appPortId: Art.PortId = IPCPorts.Radio_Impl_App
    val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
    Platform.initialise(seed, appPortIdOpt)

    val recv_map_innPortId = Arch.UAV_Impl_Instance_MCMP_RADIO_HW.recv_map_inn.id
    val recv_map_innPortIdOpt = Some(recv_map_innPortId)
    Platform.initialise(seed, recv_map_innPortIdOpt)

    val send_status_innPortId = Arch.UAV_Impl_Instance_MCMP_RADIO_HW.send_status_inn.id
    val send_status_innPortIdOpt = Some(send_status_innPortId)
    Platform.initialise(seed, send_status_innPortIdOpt)
    Art.run(Arch.ad)

    entryPoints.initialise()

    Platform.receive(appPortIdOpt)

    println("Radio_Impl_App starting ...")

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
    Arch.UAV_Impl_Instance_MCMP_RADIO_HW.entryPoints.finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}
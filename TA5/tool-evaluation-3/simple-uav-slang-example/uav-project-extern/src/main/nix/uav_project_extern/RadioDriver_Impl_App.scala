// #Sireum

package uav_project_extern

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object RadioDriver_Impl_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.UAV_Impl_Instance_MCMP_PROC_SW_RADIO.entryPoints
  val appPortId: Art.PortId = IPCPorts.RadioDriver_Impl_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)

  def initialise(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)

    Art.run(Arch.ad)
  }

  def compute(): Unit = {
    var dispatch = F
    if (dispatch) {
      entryPoints.compute()
      Process.sleep(1)
    } else {
      Process.sleep(10)
    }
  }

  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    initialise(seed)

    Platform.receive(appPortIdOpt) // pause after setting up component

    entryPoints.initialise()

    Platform.receive(appPortIdOpt) // pause after component init

    println("RadioDriver_Impl_App starting ...")

    ArtNix.eventDispatch()

    var terminated = F
    while (!terminated) {
      val termOpt = Platform.receiveAsync(appPortIdOpt)
      if (termOpt.isEmpty) {
        compute()
      } else {
        terminated = T
      }
    }
    exit()

    return 0
  }

  def exit(): Unit = {
    Arch.UAV_Impl_Instance_MCMP_PROC_SW_RADIO.entryPoints.finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}
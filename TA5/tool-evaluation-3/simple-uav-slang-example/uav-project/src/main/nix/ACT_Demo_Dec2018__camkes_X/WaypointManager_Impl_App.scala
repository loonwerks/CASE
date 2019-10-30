// #Sireum

package ACT_Demo_Dec2018__camkes_X

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object WaypointManager_Impl_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.UAV_Impl_Instance_MCMP_PROC_SW_WPM.entryPoints

  val appPortId: Art.PortId = IPCPorts.WaypointManager_Impl_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)

  val flight_planPortId: Art.PortId = Arch.UAV_Impl_Instance_MCMP_PROC_SW_WPM.flight_plan.id
  val flight_planPortIdOpt: Option[Art.PortId] = Some(flight_planPortId)

  val tracking_idPortId: Art.PortId = Arch.UAV_Impl_Instance_MCMP_PROC_SW_WPM.tracking_id.id
  val tracking_idPortIdOpt: Option[Art.PortId] = Some(tracking_idPortId)

  // needed for camkes
  val FPLN_mission_rcvPortId: Art.PortId = Arch.UAV_Impl_Instance_MCMP_PROC_SW_FPLN.mission_rcv.id
  val UART_mission_windowPortId: Art.PortId = Arch.UAV_Impl_Instance_MCMP_PROC_SW_UART.mission_window.id

  def initialise(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, flight_planPortIdOpt)
    Platform.initialise(seed, tracking_idPortIdOpt)

    val i1 = FPLN_mission_rcvPortId // camkes force usage
    val i2 = UART_mission_windowPortId // camkes force usage

    Art.run(Arch.ad)
  }

  def compute(): Unit = {
    var dispatch = F
    Platform.receiveAsync(flight_planPortIdOpt) match {
      case Some((_, v: SW.Mission_Payload)) => ArtNix.updateData(flight_planPortId, v); dispatch = T
      case Some((_, v)) => halt(s"Unexpected payload on port ${flight_planPortId}.  Expecting something of type SW.Mission_Payload but received ${v}")
      case None() => // do nothing
    }
    Platform.receiveAsync(tracking_idPortIdOpt) match {
      case Some((_, v: Base_Types.Integer_64_Payload)) => ArtNix.updateData(tracking_idPortId, v); dispatch = T
      case Some((_, v)) => halt(s"Unexpected payload on port ${tracking_idPortId}.  Expecting something of type Base_Types.Integer_64_Payload but received ${v}")
      case None() => // do nothing
    }
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

    Platform.receive(appPortIdOpt)

    entryPoints.initialise()

    Platform.receive(appPortIdOpt)

    println("WaypointManager_Impl_App starting ...")

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
    Arch.UAV_Impl_Instance_MCMP_PROC_SW_WPM.entryPoints.finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}
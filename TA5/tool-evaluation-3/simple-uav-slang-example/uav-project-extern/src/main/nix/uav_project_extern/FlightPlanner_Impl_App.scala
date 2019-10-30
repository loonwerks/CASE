// #Sireum

package uav_project_extern

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object FlightPlanner_Impl_App extends App {

  val entryPoints: Bridge.EntryPoints = Arch.UAV_Impl_Instance_MCMP_PROC_SW_FPLN.entryPoints
  val appPortId: Art.PortId = IPCPorts.FlightPlanner_Impl_App
  val appPortIdOpt: Option[Art.PortId] = Some(appPortId)
  val mission_rcvPortId: Art.PortId = Arch.UAV_Impl_Instance_MCMP_PROC_SW_FPLN.mission_rcv.id
  val mission_rcvPortIdOpt: Option[Art.PortId] = Some(mission_rcvPortId)
  val recv_mapPortId: Art.PortId = Arch.UAV_Impl_Instance_MCMP_PROC_SW_FPLN.recv_map.id
  val recv_mapPortIdOpt: Option[Art.PortId] = Some(recv_mapPortId)

  def initialise(seed: Z): Unit = {
    Platform.initialise(seed, appPortIdOpt)
    Platform.initialise(seed, mission_rcvPortIdOpt)
    Platform.initialise(seed, recv_mapPortIdOpt)

    Art.run(Arch.ad)
  }

  def compute(): Unit = {
    var dispatch = F
    Platform.receiveAsync(mission_rcvPortIdOpt) match {
      case Some((_, v: Base_Types.Boolean_Payload)) => ArtNix.updateData(mission_rcvPortId, v); dispatch = T
      case Some((_, v)) => halt(s"Unexpected payload on port ${mission_rcvPortId}.  Expecting something of type Base_Types.Boolean_Payload but received ${v}")
      case None() => // do nothing
    }
    Platform.receiveAsync(recv_mapPortIdOpt) match {
      case Some((_, v: SW.Command_Impl_Payload)) => ArtNix.updateData(recv_mapPortId, v); dispatch = T
      case Some((_, v)) => halt(s"Unexpected payload on port ${recv_mapPortId}.  Expecting something of type SW.Command_Impl_Payload but received ${v}")
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

    Platform.receive(appPortIdOpt) // pause after setting up component

    entryPoints.initialise()

    Platform.receive(appPortIdOpt) // pause after component init

    println("FlightPlanner_Impl_App starting ...")

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
    Arch.UAV_Impl_Instance_MCMP_PROC_SW_FPLN.entryPoints.finalise()
    Platform.finalise()
  }

  override def atExit(): Unit = {
    exit()
  }
}
// #Sireum

package uav_project_extern.SW

import org.sireum._
import uav_project_extern.Base_Types.Integer_64
import uav_project_extern._

@record class WaypointManager_Impl_Impl (val api : WaypointManager_Impl_Bridge.Api) extends WaypointManager_Impl {

  var _mission: Option[Mission] = None()

  override def initialise(): Unit = {

  }

  def sendWin(i: Z): Unit = {
    _mission match {
      case Some(v) =>
        val x1 = v.value

        // simulate creation of new mission windows
        val missionWindow = MissionWindow(ISZ(
          x1(i % z"10"),
          x1((i + z"1") % z"10"),
          x1((i + z"2") % z"10"),
          x1((i + z"3") % z"10")
        ))

        // send mission window to UART
        api.sendmission_window(missionWindow)

        api.logInfo("WM:> Sent mission window")
      case _ =>
        api.logError("Unexpected: trying to create mission window by never received a mission")
    }
  }

  override def handleflight_plan(mission: Mission): Unit = {

    api.logInfo("WM:< Received flight plan")

    _mission = Some(mission)

    val x1 = _mission.get.value
    api.logInfo("  Mission:")
    for(i <- z"0" until x1.size) {
      api.logInfo(s"    ${x1(i)}")
    }

    sendWin(0)

    // send receipt confirmation back to FPLN
    api.sendmission_rcv(T);
  }

  override def handletracking_id(nid: Integer_64): Unit = {
    api.logInfo(s"WM:< Received ${nid} as the next tracking id.")

    sendWin(org.sireum.conversions.S64.toZ(nid))
  }
}

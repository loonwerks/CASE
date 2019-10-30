// #Sireum

package ACT_Demo_Dec2018__camkes_X.SW

import org.sireum._
import org.sireum.Z64._
import org.sireum.Z32._
import ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64
import ACT_Demo_Dec2018__camkes_X._

@record class WaypointManager_Impl_Impl (val api : WaypointManager_Impl_Bridge.Api) extends WaypointManager_Impl {

  var _mission: Option[Mission] = None()

  def sendWin(i: Z): Unit = {
    _mission match {
      case Some(v) =>
        val x1 = v.value

        // simulate creation of new mission windows
        val missionWindow = MissionWindow(ISZ(
          x1(i % 10),
          x1((i + 1) % 10),
          x1((i + 2) % 10),
          x1((i + 3) % 10)
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
    for(i <- 0 until 9) {
      api.logInfo(s"    ${x1(i)}")
    }

    sendWin(0)

    // send receipt confirmation back to FPLN
    api.sendmission_rcv(Base_Types.Boolean(T));
  }

  override def handletracking_id(nid: Integer_64): Unit = {
    api.logInfo(s"WM:< Received ${nid.value} as the next tracking id.")

    sendWin(org.sireum.conversions.Z64.toZ(nid.value))
  }
}

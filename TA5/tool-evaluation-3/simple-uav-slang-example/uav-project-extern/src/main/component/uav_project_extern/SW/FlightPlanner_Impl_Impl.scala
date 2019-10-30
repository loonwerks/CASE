// #Sireum

package uav_project_extern.SW

import org.sireum._
import org.sireum.S32._
import uav_project_extern._

@record class FlightPlanner_Impl_Impl (val api : FlightPlanner_Impl_Bridge.Api) extends FlightPlanner_Impl {

  var missioncommand_sent: B = F

  override def initialise(): Unit = {

  }

  override def handlerecv_map(value: Command_Impl): Unit = {

    api.logInfo("FPLN:< Command.")
    api.logInfo(s"  ${value}")

    if(!missioncommand_sent){

      // simulate the creation of a new mission
      val coords: ISZ[Coordinate_Impl] = for(i <- s32"0" until s32"10") yield
        Coordinate_Impl(lat = i, longitude = i + s32"1", alt = i + s32"2")

      val mission = Mission(coords)

      api.logInfo("FPLN:> new mission notification")

      // send the flight plan to WMP
      api.sendflight_plan(mission)

      missioncommand_sent = T
    }
  }

  override def handlemission_rcv(value: Base_Types.Boolean): Unit = {
    api.logInfo(s"FPLN:< Received mission receipt confirmation: ${value}")
  }
}

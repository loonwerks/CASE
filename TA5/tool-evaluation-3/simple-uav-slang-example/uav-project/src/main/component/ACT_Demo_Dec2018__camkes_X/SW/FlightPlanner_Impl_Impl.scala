// #Sireum

package ACT_Demo_Dec2018__camkes_X.SW

import org.sireum._
import org.sireum.Z32._
import ACT_Demo_Dec2018__camkes_X._

@record class FlightPlanner_Impl_Impl (val api : FlightPlanner_Impl_Bridge.Api) extends FlightPlanner_Impl {

  var missioncommand_sent: B = F

  override def handlerecv_map(value: Command_Impl): Unit = {

    api.logInfo("FPLN:< Command.")
    api.logInfo(s"  ${value}")

    if(!missioncommand_sent){

      // simulate the creation of a new mission
      val mission = Mission(ISZ(
        Coordinate_Impl(lat = z32"0", longitude = z32"1", alt = z32"2"),
        Coordinate_Impl(lat = z32"1", longitude = z32"2", alt = z32"3"),
        Coordinate_Impl(lat = z32"2", longitude = z32"3", alt = z32"4"),
        Coordinate_Impl(lat = z32"3", longitude = z32"4", alt = z32"5"),
        Coordinate_Impl(lat = z32"4", longitude = z32"5", alt = z32"6"),
        Coordinate_Impl(lat = z32"5", longitude = z32"6", alt = z32"7"),
        Coordinate_Impl(lat = z32"6", longitude = z32"7", alt = z32"8"),
        Coordinate_Impl(lat = z32"7", longitude = z32"8", alt = z32"9"),
        Coordinate_Impl(lat = z32"8", longitude = z32"9", alt = z32"10"),
        Coordinate_Impl(lat = z32"9", longitude = z32"10", alt = z32"11")),
      )

      api.logInfo("FPLN:> new mission notification")

      // send the flight plan to WMP
      api.sendflight_plan(mission)

      missioncommand_sent = T
    }
  }

  override def handlemission_rcv(value: Base_Types.Boolean): Unit = {
    api.logInfo(s"FPLN:< Received mission receipt confirmation: ${value.value}")
  }
}

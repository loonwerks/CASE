// #Sireum

package ACT_Demo_Dec2018__camkes_X.SW

import org.sireum._
import org.sireum.Z32._
import ACT_Demo_Dec2018__camkes_X._

@record class RadioDriver_Impl_Impl (val api : RadioDriver_Impl_Bridge.Api) extends RadioDriver_Impl {

  override def initialise(): Unit = {

    api.logInfo("RDIO: initialise entry point called")

    // simulate creation of a command
    val command = Command_Impl(
      theMap = SW__Map(ISZ(
          Coordinate_Impl(lat = z32"0", longitude = z32"1", alt = z32"2"),
          Coordinate_Impl(lat = z32"1", longitude = z32"2", alt = z32"3"),
          Coordinate_Impl(lat = z32"2", longitude = z32"3", alt = z32"4"),
          Coordinate_Impl(lat = z32"3", longitude = z32"4", alt = z32"5"))),
      Pattern = FlightPattern.Perimeter,
      HMAC = T
    )

    api.logInfo("RDIO:> Sending command")

    // send command to FPLN
    api.sendrecv_map_out(command)

    api.logInfo(s"$command")

    // force ART to send the command
    art.Art.sendOutput(ISZ(Arch.UAV_Impl_Instance_MCMP_PROC_SW_RADIO.recv_map_out.id), ISZ())
  }
}

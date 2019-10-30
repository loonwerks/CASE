// #Sireum

package uav_project_extern.SW

import org.sireum._
import org.sireum.S32._
import uav_project_extern._

@record class RadioDriver_Impl_Impl (val api : RadioDriver_Impl_Bridge.Api) extends RadioDriver_Impl {

  override def initialise(): Unit = {

    api.logInfo("RDIO: initialise entry point called")


    // simulate creation of a command

    val coords: ISZ[Coordinate_Impl] = for(i <- s32"0" until s32"4") yield
      Coordinate_Impl(lat = i, longitude = i + s32"1", alt = i + s32"2")

    val command = Command_Impl(
      Map = SW.Map(coords),
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

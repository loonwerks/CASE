// #Sireum

package ACT_Demo_Dec2018__camkes_X.SW

import org.sireum._
import org.sireum.Z64._
import ACT_Demo_Dec2018__camkes_X._

@record class UARTDriver_Impl_Impl (val api : UARTDriver_Impl_Bridge.Api) extends UARTDriver_Impl {

  var i: Z64 = z64"1"

  override def handlemission_window(value: MissionWindow): Unit = {
    api.logInfo("UART:< Received mission window")
    api.logInfo(s"  ${value}")

    for (busywait <- 0 to 100000000) {}

    api.logInfo(s"UART:> Sending ${i} as the next tracking id.")

    // send tracking id to WPM
    api.sendtracking_id(Base_Types.Integer_64(i))

    i = i + z64"1"
  }
}

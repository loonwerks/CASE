// #Sireum

package uav_project_extern.SW

import org.sireum._
import org.sireum.S64._
import uav_project_extern._

@record class UARTDriver_Impl_Impl (val api : UARTDriver_Impl_Bridge.Api) extends UARTDriver_Impl {

  var i: S64 = s64"1"

  override def initialise(): Unit = {

  }

  override def handlemission_window(value: MissionWindow): Unit = {
    api.logInfo("UART:< Received mission window")
    api.logInfo(s"  ${value}")

    UARTDriver_Util.pause();

    api.logInfo(s"UART:> Sending ${i} as the next tracking id.")

    // send tracking id to WPM
    api.sendtracking_id(i)

    i = i + s64"1"
  }
}

@ext object UARTDriver_Util {
  def pause(): Unit = $
}
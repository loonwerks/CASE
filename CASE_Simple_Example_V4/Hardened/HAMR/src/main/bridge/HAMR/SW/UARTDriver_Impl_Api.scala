// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._

@sig trait UARTDriver_Impl_Api {
  def id: Art.BridgeId
  def Status_Id : Art.PortId
  def MissionWindow_Id : Art.PortId

  def put_Status(value : SW.Coordinate_Impl) : Unit = {
    Art.putValue(Status_Id, SW.Coordinate_Impl_Payload(value))
  }

  def logInfo(msg: String): Unit = {
    Art.logInfo(id, msg)
  }

  def logDebug(msg: String): Unit = {
    Art.logDebug(id, msg)
  }

  def logError(msg: String): Unit = {
    Art.logError(id, msg)
  }
}

@datatype class UARTDriver_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val Status_Id : Art.PortId,
  val MissionWindow_Id : Art.PortId) extends UARTDriver_Impl_Api

@datatype class UARTDriver_Impl_Operational_Api (
  val id: Art.BridgeId,
  val Status_Id : Art.PortId,
  val MissionWindow_Id : Art.PortId) extends UARTDriver_Impl_Api {

  def get_MissionWindow() : Option[SW.MissionWindow] = {
    val value : Option[SW.MissionWindow] = Art.getValue(MissionWindow_Id) match {
      case Some(SW.MissionWindow_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port MissionWindow.  Expecting 'SW.MissionWindow_Payload' but received ${v}")
        None[SW.MissionWindow]()
      case _ => None[SW.MissionWindow]()
    }
    return value
  }
}

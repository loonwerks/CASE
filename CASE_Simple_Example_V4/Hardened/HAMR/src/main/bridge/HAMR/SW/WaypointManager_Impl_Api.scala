// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._

@sig trait WaypointManager_Impl_Api {
  def id: Art.BridgeId
  def FlightPlan_Id : Art.PortId
  def MissionWindow_Id : Art.PortId
  def Status_Id : Art.PortId
  def ReturnHome_Id : Art.PortId

  def put_MissionWindow(value : SW.MissionWindow) : Unit = {
    Art.putValue(MissionWindow_Id, SW.MissionWindow_Payload(value))
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

@datatype class WaypointManager_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val FlightPlan_Id : Art.PortId,
  val MissionWindow_Id : Art.PortId,
  val Status_Id : Art.PortId,
  val ReturnHome_Id : Art.PortId) extends WaypointManager_Impl_Api

@datatype class WaypointManager_Impl_Operational_Api (
  val id: Art.BridgeId,
  val FlightPlan_Id : Art.PortId,
  val MissionWindow_Id : Art.PortId,
  val Status_Id : Art.PortId,
  val ReturnHome_Id : Art.PortId) extends WaypointManager_Impl_Api {

  def get_FlightPlan() : Option[SW.Mission] = {
    val value : Option[SW.Mission] = Art.getValue(FlightPlan_Id) match {
      case Some(SW.Mission_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port FlightPlan.  Expecting 'SW.Mission_Payload' but received ${v}")
        None[SW.Mission]()
      case _ => None[SW.Mission]()
    }
    return value
  }

  def get_Status() : Option[SW.Coordinate_Impl] = {
    val value : Option[SW.Coordinate_Impl] = Art.getValue(Status_Id) match {
      case Some(SW.Coordinate_Impl_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port Status.  Expecting 'SW.Coordinate_Impl_Payload' but received ${v}")
        None[SW.Coordinate_Impl]()
      case _ => None[SW.Coordinate_Impl]()
    }
    return value
  }

  def get_ReturnHome() : Option[art.Empty] = {
    val value : Option[art.Empty] = Art.getValue(ReturnHome_Id) match {
      case Some(Empty()) => Some(Empty())
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port ReturnHome.  Expecting 'Empty' but received ${v}")
        None[art.Empty]()
      case _ => None[art.Empty]()
    }
    return value
  }
}

// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._

@sig trait FlightPlanner_Impl_Api {
  def id: Art.BridgeId
  def MissionCommand_Id : Art.PortId
  def FlightPlan_Id : Art.PortId

  def put_FlightPlan(value : SW.Mission) : Unit = {
    Art.putValue(FlightPlan_Id, SW.Mission_Payload(value))
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

@datatype class FlightPlanner_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val MissionCommand_Id : Art.PortId,
  val FlightPlan_Id : Art.PortId) extends FlightPlanner_Impl_Api

@datatype class FlightPlanner_Impl_Operational_Api (
  val id: Art.BridgeId,
  val MissionCommand_Id : Art.PortId,
  val FlightPlan_Id : Art.PortId) extends FlightPlanner_Impl_Api {

  def get_MissionCommand() : Option[SW.RF_Msg_Impl] = {
    val value : Option[SW.RF_Msg_Impl] = Art.getValue(MissionCommand_Id) match {
      case Some(SW.RF_Msg_Impl_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port MissionCommand.  Expecting 'SW.RF_Msg_Impl_Payload' but received ${v}")
        None[SW.RF_Msg_Impl]()
      case _ => None[SW.RF_Msg_Impl]()
    }
    return value
  }
}

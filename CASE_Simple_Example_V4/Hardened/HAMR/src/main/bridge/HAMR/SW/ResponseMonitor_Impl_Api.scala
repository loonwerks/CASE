// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._

@sig trait ResponseMonitor_Impl_Api {
  def id: Art.BridgeId
  def FlightPlan_Id : Art.PortId
  def MissionCommand_Id : Art.PortId
  def Alert_Id : Art.PortId

  def put_Alert() : Unit = {
    Art.putValue(Alert_Id, art.Empty())
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

@datatype class ResponseMonitor_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val FlightPlan_Id : Art.PortId,
  val MissionCommand_Id : Art.PortId,
  val Alert_Id : Art.PortId) extends ResponseMonitor_Impl_Api

@datatype class ResponseMonitor_Impl_Operational_Api (
  val id: Art.BridgeId,
  val FlightPlan_Id : Art.PortId,
  val MissionCommand_Id : Art.PortId,
  val Alert_Id : Art.PortId) extends ResponseMonitor_Impl_Api {

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

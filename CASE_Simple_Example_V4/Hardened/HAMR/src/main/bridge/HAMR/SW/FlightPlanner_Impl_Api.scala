// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._

@sig trait FlightPlanner_Impl_Api {
  def id: Art.BridgeId
  def MissionCommand_Id : Art.PortId
  def FlightPlan_Id : Art.PortId

  def put_FlightPlan(value : Base_Types.Bits) : Unit = {
    Art.putValue(FlightPlan_Id, Base_Types.Bits_Payload(value))
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

  def get_MissionCommand() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(MissionCommand_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port MissionCommand.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }
}

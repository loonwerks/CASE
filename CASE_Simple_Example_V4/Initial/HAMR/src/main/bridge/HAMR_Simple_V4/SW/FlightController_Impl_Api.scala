// #Sireum

package HAMR_Simple_V4.SW

import org.sireum._
import art._
import HAMR_Simple_V4._

@sig trait FlightController_Impl_Api {
  def id: Art.BridgeId
  def FlightPlan_Id : Art.PortId


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

@datatype class FlightController_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val FlightPlan_Id : Art.PortId) extends FlightController_Impl_Api

@datatype class FlightController_Impl_Operational_Api (
  val id: Art.BridgeId,
  val FlightPlan_Id : Art.PortId) extends FlightController_Impl_Api {

  def get_FlightPlan() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(FlightPlan_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port FlightPlan.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }
}

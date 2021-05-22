// #Sireum

package pfc.PFC

import org.sireum._
import art._
import pfc._

@sig trait consumer_t_Api {
  def id: Art.BridgeId
  def from_filter_Id : Art.PortId


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

@datatype class consumer_t_Initialization_Api (
  val id: Art.BridgeId,
  val from_filter_Id : Art.PortId) extends consumer_t_Api

@datatype class consumer_t_Operational_Api (
  val id: Art.BridgeId,
  val from_filter_Id : Art.PortId) extends consumer_t_Api {

  def get_from_filter() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(from_filter_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port from_filter.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }
}

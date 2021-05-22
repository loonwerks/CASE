// #Sireum

package pfc.PFC

import org.sireum._
import art._
import pfc._

@sig trait filter_t_Api {
  def id: Art.BridgeId
  def from_producer_Id : Art.PortId
  def to_consumer_Id : Art.PortId

  def put_to_consumer(value : Base_Types.Bits) : Unit = {
    Art.putValue(to_consumer_Id, Base_Types.Bits_Payload(value))
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

@datatype class filter_t_Initialization_Api (
  val id: Art.BridgeId,
  val from_producer_Id : Art.PortId,
  val to_consumer_Id : Art.PortId) extends filter_t_Api

@datatype class filter_t_Operational_Api (
  val id: Art.BridgeId,
  val from_producer_Id : Art.PortId,
  val to_consumer_Id : Art.PortId) extends filter_t_Api {

  def get_from_producer() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(from_producer_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port from_producer.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }
}

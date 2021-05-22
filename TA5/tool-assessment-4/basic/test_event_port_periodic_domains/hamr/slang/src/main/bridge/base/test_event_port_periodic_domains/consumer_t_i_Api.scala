// #Sireum

package base.test_event_port_periodic_domains

import org.sireum._
import art._
import base._

@sig trait consumer_t_i_Api {
  def id: Art.BridgeId
  def consume_Id : Art.PortId


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

@datatype class consumer_t_i_Initialization_Api (
  val id: Art.BridgeId,
  val consume_Id : Art.PortId) extends consumer_t_i_Api

@datatype class consumer_t_i_Operational_Api (
  val id: Art.BridgeId,
  val consume_Id : Art.PortId) extends consumer_t_i_Api {

  def get_consume() : Option[art.Empty] = {
    val value : Option[art.Empty] = Art.getValue(consume_Id) match {
      case Some(Empty()) => Some(Empty())
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port consume.  Expecting 'Empty' but received ${v}")
        None[art.Empty]()
      case _ => None[art.Empty]()
    }
    return value
  }
}

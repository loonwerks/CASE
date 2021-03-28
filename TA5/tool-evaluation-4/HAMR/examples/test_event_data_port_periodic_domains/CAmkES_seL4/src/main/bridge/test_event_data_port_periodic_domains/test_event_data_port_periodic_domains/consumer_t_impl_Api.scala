// #Sireum

package test_event_data_port_periodic_domains.test_event_data_port_periodic_domains

import org.sireum._
import art._
import test_event_data_port_periodic_domains._

@sig trait consumer_t_impl_Api {
  def id: Art.BridgeId
  def read_port_Id : Art.PortId


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

@datatype class consumer_t_impl_Initialization_Api (
  val id: Art.BridgeId,
  val read_port_Id : Art.PortId) extends consumer_t_impl_Api

@datatype class consumer_t_impl_Operational_Api (
  val id: Art.BridgeId,
  val read_port_Id : Art.PortId) extends consumer_t_impl_Api {

  def get_read_port() : Option[Base_Types.Integer_8] = {
    val value : Option[Base_Types.Integer_8] = Art.getValue(read_port_Id) match {
      case Some(Base_Types.Integer_8_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port read_port.  Expecting 'Base_Types.Integer_8_Payload' but received ${v}")
        None[Base_Types.Integer_8]()
      case _ => None[Base_Types.Integer_8]()
    }
    return value
  }
}

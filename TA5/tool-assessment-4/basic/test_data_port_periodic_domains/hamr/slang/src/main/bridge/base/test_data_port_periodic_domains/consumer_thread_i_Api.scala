// #Sireum

package base.test_data_port_periodic_domains

import org.sireum._
import art._
import base._

@sig trait consumer_thread_i_Api {
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

@datatype class consumer_thread_i_Initialization_Api (
  val id: Art.BridgeId,
  val read_port_Id : Art.PortId) extends consumer_thread_i_Api

@datatype class consumer_thread_i_Operational_Api (
  val id: Art.BridgeId,
  val read_port_Id : Art.PortId) extends consumer_thread_i_Api {

  def get_read_port() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(read_port_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port read_port.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }
}

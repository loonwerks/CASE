// #Sireum

package base.test_event_port_periodic_domains

import org.sireum._
import art._
import base._

@sig trait producer_t_i_Api {
  def id: Art.BridgeId
  def emit_Id : Art.PortId

  def put_emit() : Unit = {
    Art.putValue(emit_Id, art.Empty())
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

@datatype class producer_t_i_Initialization_Api (
  val id: Art.BridgeId,
  val emit_Id : Art.PortId) extends producer_t_i_Api

@datatype class producer_t_i_Operational_Api (
  val id: Art.BridgeId,
  val emit_Id : Art.PortId) extends producer_t_i_Api {

}

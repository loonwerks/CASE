// #Sireum

package test_event_port_periodic_domains.test_event_port_periodic_domains

import org.sireum._
import art._
import test_event_port_periodic_domains._

@sig trait emitter_t_impl_Api {
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

@datatype class emitter_t_impl_Initialization_Api (
  val id: Art.BridgeId,
  val emit_Id : Art.PortId) extends emitter_t_impl_Api

@datatype class emitter_t_impl_Operational_Api (
  val id: Art.BridgeId,
  val emit_Id : Art.PortId) extends emitter_t_impl_Api {

}

// #Sireum

package test_data_port_periodic_domains.test_data_port_periodic_domains

import org.sireum._
import art._
import test_data_port_periodic_domains._

@sig trait source_thread_impl_Api {
  def id: Art.BridgeId
  def write_port_Id : Art.PortId

  def setwrite_port(value : Base_Types.Integer_8) : Unit = {
    Art.putValue(write_port_Id, Base_Types.Integer_8_Payload(value))
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

@datatype class source_thread_impl_Initialization_Api (
  val id: Art.BridgeId,
  val write_port_Id : Art.PortId) extends source_thread_impl_Api

@datatype class source_thread_impl_Operational_Api (
  val id: Art.BridgeId,
  val write_port_Id : Art.PortId) extends source_thread_impl_Api {

}

// #Sireum

package pfc.PFC

import org.sireum._
import art._
import pfc._

@sig trait producer_t_Api {
  def id: Art.BridgeId
  def to_filter_Id : Art.PortId

  def put_to_filter(value : Base_Types.Bits) : Unit = {
    Art.putValue(to_filter_Id, Base_Types.Bits_Payload(value))
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

@datatype class producer_t_Initialization_Api (
  val id: Art.BridgeId,
  val to_filter_Id : Art.PortId) extends producer_t_Api

@datatype class producer_t_Operational_Api (
  val id: Art.BridgeId,
  val to_filter_Id : Art.PortId) extends producer_t_Api {

}

// #Sireum

package CASE_MONITOR_2_TEST.VPM_TEST

import org.sireum._
import art._
import CASE_MONITOR_2_TEST._

@sig trait Input_impl_Api {
  def id: Art.BridgeId
  def Observed_Id : Art.PortId

  def put_Observed(value : Base_Types.Bits) : Unit = {
    Art.putValue(Observed_Id, Base_Types.Bits_Payload(value))
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

@datatype class Input_impl_Initialization_Api (
  val id: Art.BridgeId,
  val Observed_Id : Art.PortId) extends Input_impl_Api

@datatype class Input_impl_Operational_Api (
  val id: Art.BridgeId,
  val Observed_Id : Art.PortId) extends Input_impl_Api {

}

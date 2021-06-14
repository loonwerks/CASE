// #Sireum

package CASE_MONITOR_TEST.VPM_TEST

import org.sireum._
import art._
import CASE_MONITOR_TEST._

@sig trait Output_impl_Api {
  def id: Art.BridgeId
  def Suspect_Traffic_Out_Id : Art.PortId


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

@datatype class Output_impl_Initialization_Api (
  val id: Art.BridgeId,
  val Suspect_Traffic_Out_Id : Art.PortId) extends Output_impl_Api

@datatype class Output_impl_Operational_Api (
  val id: Art.BridgeId,
  val Suspect_Traffic_Out_Id : Art.PortId) extends Output_impl_Api {

  def get_Suspect_Traffic_Out() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(Suspect_Traffic_Out_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port Suspect_Traffic_Out.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }
}

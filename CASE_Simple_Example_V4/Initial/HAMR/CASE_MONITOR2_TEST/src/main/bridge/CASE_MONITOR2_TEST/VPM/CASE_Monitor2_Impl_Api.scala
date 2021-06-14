// #Sireum

package CASE_MONITOR2_TEST.VPM

import org.sireum._
import art._
import CASE_MONITOR2_TEST._

@sig trait CASE_Monitor2_Impl_Api {
  def id: Art.BridgeId
  def Observed_Id : Art.PortId
  def Suspect_Traffic_Out_Id : Art.PortId

  def put_Suspect_Traffic_Out(value : Base_Types.Bits) : Unit = {
    Art.putValue(Suspect_Traffic_Out_Id, Base_Types.Bits_Payload(value))
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

@datatype class CASE_Monitor2_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val Observed_Id : Art.PortId,
  val Suspect_Traffic_Out_Id : Art.PortId) extends CASE_Monitor2_Impl_Api

@datatype class CASE_Monitor2_Impl_Operational_Api (
  val id: Art.BridgeId,
  val Observed_Id : Art.PortId,
  val Suspect_Traffic_Out_Id : Art.PortId) extends CASE_Monitor2_Impl_Api {

  def get_Observed() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(Observed_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port Observed.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }
}

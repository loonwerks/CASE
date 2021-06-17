// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._

@sig trait CASE_Monitor_Req_thr_Impl_Api {
  def id: Art.BridgeId
  def observed_Id : Art.PortId
  def reference_1_Id : Art.PortId


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

@datatype class CASE_Monitor_Req_thr_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val observed_Id : Art.PortId,
  val reference_1_Id : Art.PortId) extends CASE_Monitor_Req_thr_Impl_Api

@datatype class CASE_Monitor_Req_thr_Impl_Operational_Api (
  val id: Art.BridgeId,
  val observed_Id : Art.PortId,
  val reference_1_Id : Art.PortId) extends CASE_Monitor_Req_thr_Impl_Api {

  def get_observed() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(observed_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port observed.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  def get_reference_1() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(reference_1_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port reference_1.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }
}

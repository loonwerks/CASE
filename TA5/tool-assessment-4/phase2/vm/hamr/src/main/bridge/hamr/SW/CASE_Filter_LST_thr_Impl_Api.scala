// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._

@sig trait CASE_Filter_LST_thr_Impl_Api {
  def id: Art.BridgeId
  def filter_in_Id : Art.PortId
  def filter_out_Id : Art.PortId

  def put_filter_out(value : Base_Types.Bits) : Unit = {
    Art.putValue(filter_out_Id, Base_Types.Bits_Payload(value))
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

@datatype class CASE_Filter_LST_thr_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val filter_in_Id : Art.PortId,
  val filter_out_Id : Art.PortId) extends CASE_Filter_LST_thr_Impl_Api

@datatype class CASE_Filter_LST_thr_Impl_Operational_Api (
  val id: Art.BridgeId,
  val filter_in_Id : Art.PortId,
  val filter_out_Id : Art.PortId) extends CASE_Filter_LST_thr_Impl_Api {

  def get_filter_in() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(filter_in_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port filter_in.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }
}

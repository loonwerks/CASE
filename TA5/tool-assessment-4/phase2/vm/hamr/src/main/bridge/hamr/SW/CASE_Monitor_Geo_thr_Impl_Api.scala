// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._

@sig trait CASE_Monitor_Geo_thr_Impl_Api {
  def id: Art.BridgeId
  def keep_in_zones_Id : Art.PortId
  def keep_out_zones_Id : Art.PortId
  def observed_Id : Art.PortId
  def output_Id : Art.PortId
  def alert_Id : Art.PortId

  def put_output(value : Base_Types.Bits) : Unit = {
    Art.putValue(output_Id, Base_Types.Bits_Payload(value))
  }

  def put_alert() : Unit = {
    Art.putValue(alert_Id, art.Empty())
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

@datatype class CASE_Monitor_Geo_thr_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val keep_in_zones_Id : Art.PortId,
  val keep_out_zones_Id : Art.PortId,
  val observed_Id : Art.PortId,
  val output_Id : Art.PortId,
  val alert_Id : Art.PortId) extends CASE_Monitor_Geo_thr_Impl_Api

@datatype class CASE_Monitor_Geo_thr_Impl_Operational_Api (
  val id: Art.BridgeId,
  val keep_in_zones_Id : Art.PortId,
  val keep_out_zones_Id : Art.PortId,
  val observed_Id : Art.PortId,
  val output_Id : Art.PortId,
  val alert_Id : Art.PortId) extends CASE_Monitor_Geo_thr_Impl_Api {

  def get_keep_in_zones() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(keep_in_zones_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port keep_in_zones.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  def get_keep_out_zones() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(keep_out_zones_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port keep_out_zones.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

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
}

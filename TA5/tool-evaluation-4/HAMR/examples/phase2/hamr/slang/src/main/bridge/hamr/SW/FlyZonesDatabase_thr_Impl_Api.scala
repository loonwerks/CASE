// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._

@sig trait FlyZonesDatabase_thr_Impl_Api {
  def id: Art.BridgeId
  def keep_in_zones_Id : Art.PortId
  def keep_out_zones_Id : Art.PortId

  def put_keep_in_zones(value : Base_Types.Bits) : Unit = {
    Art.putValue(keep_in_zones_Id, Base_Types.Bits_Payload(value))
  }

  def put_keep_out_zones(value : Base_Types.Bits) : Unit = {
    Art.putValue(keep_out_zones_Id, Base_Types.Bits_Payload(value))
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

@datatype class FlyZonesDatabase_thr_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val keep_in_zones_Id : Art.PortId,
  val keep_out_zones_Id : Art.PortId) extends FlyZonesDatabase_thr_Impl_Api

@datatype class FlyZonesDatabase_thr_Impl_Operational_Api (
  val id: Art.BridgeId,
  val keep_in_zones_Id : Art.PortId,
  val keep_out_zones_Id : Art.PortId) extends FlyZonesDatabase_thr_Impl_Api {

}

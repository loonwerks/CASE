// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._

@sig trait FlyZoneDatabase_Impl_Api {
  def id: Art.BridgeId
  def FlyZones_Id : Art.PortId

  def put_FlyZones(value : SW.MapArray) : Unit = {
    Art.putValue(FlyZones_Id, SW.MapArray_Payload(value))
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

@datatype class FlyZoneDatabase_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val FlyZones_Id : Art.PortId) extends FlyZoneDatabase_Impl_Api

@datatype class FlyZoneDatabase_Impl_Operational_Api (
  val id: Art.BridgeId,
  val FlyZones_Id : Art.PortId) extends FlyZoneDatabase_Impl_Api {

}

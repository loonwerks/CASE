// #Sireum

package HAMR.SW

import org.sireum._
import art._
import HAMR._

@sig trait GeofenceMonitor_Impl_Api {
  def id: Art.BridgeId
  def FlyZones_Id : Art.PortId
  def FlightPlan_In_Id : Art.PortId
  def FlightPlan_Out_Id : Art.PortId
  def Alert_Id : Art.PortId

  def put_FlightPlan_Out(value : SW.Mission) : Unit = {
    Art.putValue(FlightPlan_Out_Id, SW.Mission_Payload(value))
  }

  def put_Alert() : Unit = {
    Art.putValue(Alert_Id, art.Empty())
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

@datatype class GeofenceMonitor_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val FlyZones_Id : Art.PortId,
  val FlightPlan_In_Id : Art.PortId,
  val FlightPlan_Out_Id : Art.PortId,
  val Alert_Id : Art.PortId) extends GeofenceMonitor_Impl_Api

@datatype class GeofenceMonitor_Impl_Operational_Api (
  val id: Art.BridgeId,
  val FlyZones_Id : Art.PortId,
  val FlightPlan_In_Id : Art.PortId,
  val FlightPlan_Out_Id : Art.PortId,
  val Alert_Id : Art.PortId) extends GeofenceMonitor_Impl_Api {

  def get_FlyZones() : Option[SW.MapArray] = {
    val value : Option[SW.MapArray] = Art.getValue(FlyZones_Id) match {
      case Some(SW.MapArray_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port FlyZones.  Expecting 'SW.MapArray_Payload' but received ${v}")
        None[SW.MapArray]()
      case _ => None[SW.MapArray]()
    }
    return value
  }

  def get_FlightPlan_In() : Option[SW.Mission] = {
    val value : Option[SW.Mission] = Art.getValue(FlightPlan_In_Id) match {
      case Some(SW.Mission_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port FlightPlan_In.  Expecting 'SW.Mission_Payload' but received ${v}")
        None[SW.Mission]()
      case _ => None[SW.Mission]()
    }
    return value
  }
}

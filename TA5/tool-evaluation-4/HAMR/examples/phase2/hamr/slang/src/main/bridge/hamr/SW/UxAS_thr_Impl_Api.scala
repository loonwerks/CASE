// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._

@sig trait UxAS_thr_Impl_Api {
  def id: Art.BridgeId
  def AutomationRequest_Id : Art.PortId
  def AirVehicleState_Id : Art.PortId
  def OperatingRegion_Id : Art.PortId
  def LineSearchTask_Id : Art.PortId
  def AutomationResponse_MON_GEO_Id : Art.PortId
  def AutomationResponse_MON_REQ_Id : Art.PortId

  def put_AutomationResponse_MON_GEO(value : Base_Types.Bits) : Unit = {
    Art.putValue(AutomationResponse_MON_GEO_Id, Base_Types.Bits_Payload(value))
  }

  def put_AutomationResponse_MON_REQ(value : Base_Types.Bits) : Unit = {
    Art.putValue(AutomationResponse_MON_REQ_Id, Base_Types.Bits_Payload(value))
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

@datatype class UxAS_thr_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val AutomationRequest_Id : Art.PortId,
  val AirVehicleState_Id : Art.PortId,
  val OperatingRegion_Id : Art.PortId,
  val LineSearchTask_Id : Art.PortId,
  val AutomationResponse_MON_GEO_Id : Art.PortId,
  val AutomationResponse_MON_REQ_Id : Art.PortId) extends UxAS_thr_Impl_Api

@datatype class UxAS_thr_Impl_Operational_Api (
  val id: Art.BridgeId,
  val AutomationRequest_Id : Art.PortId,
  val AirVehicleState_Id : Art.PortId,
  val OperatingRegion_Id : Art.PortId,
  val LineSearchTask_Id : Art.PortId,
  val AutomationResponse_MON_GEO_Id : Art.PortId,
  val AutomationResponse_MON_REQ_Id : Art.PortId) extends UxAS_thr_Impl_Api {

  def get_AutomationRequest() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(AutomationRequest_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port AutomationRequest.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  def get_AirVehicleState() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(AirVehicleState_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port AirVehicleState.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  def get_OperatingRegion() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(OperatingRegion_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port OperatingRegion.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  def get_LineSearchTask() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(LineSearchTask_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port LineSearchTask.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }
}

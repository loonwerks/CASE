// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._

@sig trait WaypointPlanManagerService_thr_Impl_Api {
  def id: Art.BridgeId
  def AutomationResponse_Id : Art.PortId
  def AirVehicleState_Id : Art.PortId
  def MissionCommand_Id : Art.PortId
  def ReturnHome_Id : Art.PortId

  def put_MissionCommand(value : Base_Types.Bits) : Unit = {
    Art.putValue(MissionCommand_Id, Base_Types.Bits_Payload(value))
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

@datatype class WaypointPlanManagerService_thr_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val AutomationResponse_Id : Art.PortId,
  val AirVehicleState_Id : Art.PortId,
  val MissionCommand_Id : Art.PortId,
  val ReturnHome_Id : Art.PortId) extends WaypointPlanManagerService_thr_Impl_Api

@datatype class WaypointPlanManagerService_thr_Impl_Operational_Api (
  val id: Art.BridgeId,
  val AutomationResponse_Id : Art.PortId,
  val AirVehicleState_Id : Art.PortId,
  val MissionCommand_Id : Art.PortId,
  val ReturnHome_Id : Art.PortId) extends WaypointPlanManagerService_thr_Impl_Api {

  def get_AutomationResponse() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(AutomationResponse_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port AutomationResponse.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
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

  def get_ReturnHome() : Option[art.Empty] = {
    val value : Option[art.Empty] = Art.getValue(ReturnHome_Id) match {
      case Some(Empty()) => Some(Empty())
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port ReturnHome.  Expecting 'Empty' but received ${v}")
        None[art.Empty]()
      case _ => None[art.Empty]()
    }
    return value
  }
}

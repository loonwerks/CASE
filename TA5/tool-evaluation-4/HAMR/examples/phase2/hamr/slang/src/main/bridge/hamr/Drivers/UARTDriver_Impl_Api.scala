// #Sireum

package hamr.Drivers

import org.sireum._
import art._
import hamr._

@sig trait UARTDriver_Impl_Api {
  def id: Art.BridgeId
  def recv_data_Id : Art.PortId
  def MissionCommand_Id : Art.PortId
  def send_data_Id : Art.PortId
  def AirVehicleState_WPM_Id : Art.PortId
  def AirVehicleState_UXAS_Id : Art.PortId

  def put_send_data(value : Base_Types.Bits) : Unit = {
    Art.putValue(send_data_Id, Base_Types.Bits_Payload(value))
  }

  def put_AirVehicleState_WPM(value : Base_Types.Bits) : Unit = {
    Art.putValue(AirVehicleState_WPM_Id, Base_Types.Bits_Payload(value))
  }

  def put_AirVehicleState_UXAS(value : Base_Types.Bits) : Unit = {
    Art.putValue(AirVehicleState_UXAS_Id, Base_Types.Bits_Payload(value))
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

@datatype class UARTDriver_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val recv_data_Id : Art.PortId,
  val MissionCommand_Id : Art.PortId,
  val send_data_Id : Art.PortId,
  val AirVehicleState_WPM_Id : Art.PortId,
  val AirVehicleState_UXAS_Id : Art.PortId) extends UARTDriver_Impl_Api

@datatype class UARTDriver_Impl_Operational_Api (
  val id: Art.BridgeId,
  val recv_data_Id : Art.PortId,
  val MissionCommand_Id : Art.PortId,
  val send_data_Id : Art.PortId,
  val AirVehicleState_WPM_Id : Art.PortId,
  val AirVehicleState_UXAS_Id : Art.PortId) extends UARTDriver_Impl_Api {

  def get_recv_data() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(recv_data_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port recv_data.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  def get_MissionCommand() : Option[Base_Types.Bits] = {
    val value : Option[Base_Types.Bits] = Art.getValue(MissionCommand_Id) match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) =>
        Art.logError(id, s"Unexpected payload on port MissionCommand.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
        None[Base_Types.Bits]()
      case _ => None[Base_Types.Bits]()
    }
    return value
  }
}

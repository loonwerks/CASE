// #Sireum

package hamr.SW

import org.sireum._
import art._
import hamr._

@sig trait RadioDriver_Attestation_thr_Impl_Api {
  def id: Art.BridgeId
  def recv_data_Id : Art.PortId
  def send_data_Id : Art.PortId
  def trusted_ids_Id : Art.PortId
  def AutomationRequest_Id : Art.PortId
  def OperatingRegion_Id : Art.PortId
  def LineSearchTask_Id : Art.PortId

  def put_send_data(value : Base_Types.Bits) : Unit = {
    Art.putValue(send_data_Id, Base_Types.Bits_Payload(value))
  }

  def put_trusted_ids(value : Base_Types.Bits) : Unit = {
    Art.putValue(trusted_ids_Id, Base_Types.Bits_Payload(value))
  }

  def put_AutomationRequest(value : Base_Types.Bits) : Unit = {
    Art.putValue(AutomationRequest_Id, Base_Types.Bits_Payload(value))
  }

  def put_OperatingRegion(value : Base_Types.Bits) : Unit = {
    Art.putValue(OperatingRegion_Id, Base_Types.Bits_Payload(value))
  }

  def put_LineSearchTask(value : Base_Types.Bits) : Unit = {
    Art.putValue(LineSearchTask_Id, Base_Types.Bits_Payload(value))
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

@datatype class RadioDriver_Attestation_thr_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val recv_data_Id : Art.PortId,
  val send_data_Id : Art.PortId,
  val trusted_ids_Id : Art.PortId,
  val AutomationRequest_Id : Art.PortId,
  val OperatingRegion_Id : Art.PortId,
  val LineSearchTask_Id : Art.PortId) extends RadioDriver_Attestation_thr_Impl_Api

@datatype class RadioDriver_Attestation_thr_Impl_Operational_Api (
  val id: Art.BridgeId,
  val recv_data_Id : Art.PortId,
  val send_data_Id : Art.PortId,
  val trusted_ids_Id : Art.PortId,
  val AutomationRequest_Id : Art.PortId,
  val OperatingRegion_Id : Art.PortId,
  val LineSearchTask_Id : Art.PortId) extends RadioDriver_Attestation_thr_Impl_Api {

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
}

// #Sireum

package attestation_gate.RadioDriver

import org.sireum._
import art._
import attestation_gate._

@sig trait RadioDriver_thr_Impl_Api {
  def id: Art.BridgeId
  def trusted_ids_out_Id : Art.PortId
  def automation_request_out_Id : Art.PortId
  def operating_region_out_Id : Art.PortId
  def line_search_task_out_Id : Art.PortId

  def put_trusted_ids_out(value : Base_Types.Bits) : Unit = {
    Art.putValue(trusted_ids_out_Id, Base_Types.Bits_Payload(value))
  }

  def put_automation_request_out(value : Base_Types.Bits) : Unit = {
    Art.putValue(automation_request_out_Id, Base_Types.Bits_Payload(value))
  }

  def put_operating_region_out(value : Base_Types.Bits) : Unit = {
    Art.putValue(operating_region_out_Id, Base_Types.Bits_Payload(value))
  }

  def put_line_search_task_out(value : Base_Types.Bits) : Unit = {
    Art.putValue(line_search_task_out_Id, Base_Types.Bits_Payload(value))
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

@datatype class RadioDriver_thr_Impl_Initialization_Api (
  val id: Art.BridgeId,
  val trusted_ids_out_Id : Art.PortId,
  val automation_request_out_Id : Art.PortId,
  val operating_region_out_Id : Art.PortId,
  val line_search_task_out_Id : Art.PortId) extends RadioDriver_thr_Impl_Api

@datatype class RadioDriver_thr_Impl_Operational_Api (
  val id: Art.BridgeId,
  val trusted_ids_out_Id : Art.PortId,
  val automation_request_out_Id : Art.PortId,
  val operating_region_out_Id : Art.PortId,
  val line_search_task_out_Id : Art.PortId) extends RadioDriver_thr_Impl_Api {

}

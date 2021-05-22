package attestation_gate.CASE_AttestationGate

import art.{ArtNative_Ext, Empty}
import attestation_gate._
import org.sireum._

// This file will not be overwritten so is safe to edit
class CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Test extends BridgeTestSuite[CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge](Arch.top_Impl_Instance_am_gate_CASE_AttestationGate) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // setter for in DataPort
  def put_trusted_ids(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.trusted_ids_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_AutomationRequest_in(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.AutomationRequest_in_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_OperatingRegion_in(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.OperatingRegion_in_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_LineSearchTask_in(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.LineSearchTask_in_Id, Base_Types.Bits_Payload(value))
  }

  // getter for out EventDataPort
  def get_AutomationRequest_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_AutomationRequest_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port AutomationRequest_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_AutomationRequest_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.AutomationRequest_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_OperatingRegion_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_OperatingRegion_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port OperatingRegion_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_OperatingRegion_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.OperatingRegion_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  // getter for out EventDataPort
  def get_LineSearchTask_out(): Option[Base_Types.Bits] = {
    val value: Option[Base_Types.Bits] = get_LineSearchTask_out_payload() match {
      case Some(Base_Types.Bits_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port LineSearchTask_out.  Expecting 'Base_Types.Bits_Payload' but received ${v}")
      case _ => None[Base_Types.Bits]()
    }
    return value
  }

  // payload getter for out EventDataPort
  def get_LineSearchTask_out_payload(): Option[Base_Types.Bits_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.LineSearchTask_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

}

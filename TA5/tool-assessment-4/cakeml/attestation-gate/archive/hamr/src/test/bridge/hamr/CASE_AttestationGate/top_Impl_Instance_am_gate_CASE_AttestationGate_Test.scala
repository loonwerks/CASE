package hamr.CASE_AttestationGate

import art.{ArtNative_Ext, Empty}
import hamr._
import org.sireum._

// the contents of this file will not be overwritten
class top_Impl_Instance_am_gate_CASE_AttestationGate_Test extends BridgeTestSuite[CASE_AttestationGate_thr_Impl_Bridge](Arch.top_Impl_Instance_am_gate_CASE_AttestationGate) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // setter for in DataPort
  def put_trusted_ids(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.trusted_ids_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_AutomationRequest_in(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.AutomationRequest_in_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_OperatingRegion_in(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.OperatingRegion_in_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_LineSearchTask_in(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.LineSearchTask_in_Id, Base_Types.Bits_Payload(value))
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
    return ArtNative_Ext.observeOutPortValue(bridge.api.AutomationRequest_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
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
    return ArtNative_Ext.observeOutPortValue(bridge.api.OperatingRegion_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
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
    return ArtNative_Ext.observeOutPortValue(bridge.api.LineSearchTask_out_Id).asInstanceOf[Option[Base_Types.Bits_Payload]]
  }

  def getComponent(): CASE_AttestationGate_thr_Impl_Impl = {
    return bridge.entryPoints.asInstanceOf[CASE_AttestationGate_thr_Impl_Bridge.EntryPoints].component
  }
}

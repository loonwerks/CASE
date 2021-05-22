package attestation_gate.SysContext

import art.{ArtNative_Ext, Empty}
import attestation_gate._
import org.sireum._

// This file will not be overwritten so is safe to edit
class UxAS_thr_Impl_uxas_UxAS_thread_Test extends BridgeTestSuite[UxAS_thr_Impl_uxas_UxAS_thread_Bridge](Arch.top_Impl_Instance_uxas_UxAS_thread) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // setter for in EventDataPort
  def put_AutomationRequest(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.AutomationRequest_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_OperatingRegion(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.OperatingRegion_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_LineSearchTask(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.LineSearchTask_Id, Base_Types.Bits_Payload(value))
  }

}

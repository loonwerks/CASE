package attestation_gate.SysContext

import org.sireum._
import art.{ArtNative_Ext, Empty}
import attestation_gate._

// This file was auto-generated.  Do not edit
abstract class UxAS_thr_Impl_uxas_UxAS_thread_TestApi extends BridgeTestSuite[UxAS_thr_Impl_uxas_UxAS_thread_Bridge](Arch.top_Impl_Instance_uxas_UxAS_thread) {

  /** helper function to set the values of all input ports.
   * @param AutomationRequest payloads for event data port AutomationRequest.
   *   ART currently supports single element event data queues so
   *   only the last element of AutomationRequest will be used
   * @param OperatingRegion payloads for event data port OperatingRegion.
   *   ART currently supports single element event data queues so
   *   only the last element of OperatingRegion will be used
   * @param LineSearchTask payloads for event data port LineSearchTask.
   *   ART currently supports single element event data queues so
   *   only the last element of LineSearchTask will be used
   */
  def put_concrete_inputs(AutomationRequest : ISZ[Base_Types.Bits],
                          OperatingRegion : ISZ[Base_Types.Bits],
                          LineSearchTask : ISZ[Base_Types.Bits]): Unit = {
    for(v <- AutomationRequest){
      put_AutomationRequest(v)
    }
    for(v <- OperatingRegion){
      put_OperatingRegion(v)
    }
    for(v <- LineSearchTask){
      put_LineSearchTask(v)
    }
  }


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

package hamr.SW

import org.sireum._
import art.{ArtNative_Ext, Empty}
import hamr._

// This file was auto-generated.  Do not edit
abstract class CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_TestApi extends BridgeTestSuite[CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge](Arch.UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req) {

  /** helper function to set the values of all input ports.
   * @param observed payloads for event data port observed.
   *   ART currently supports single element event data queues so
   *   only the last element of observed will be used
   * @param reference_1 payloads for event data port reference_1.
   *   ART currently supports single element event data queues so
   *   only the last element of reference_1 will be used
   */
  def put_concrete_inputs(observed : ISZ[Base_Types.Bits],
                          reference_1 : ISZ[Base_Types.Bits]): Unit = {
    for(v <- observed){
      put_observed(v)
    }
    for(v <- reference_1){
      put_reference_1(v)
    }
  }


  // setter for in EventDataPort
  def put_observed(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.observed_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_reference_1(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.reference_1_Id, Base_Types.Bits_Payload(value))
  }

}

package CASE_MONITOR_2_TEST.VPM_TEST

import org.sireum._
import art.{ArtNative_Ext, Empty}
import CASE_MONITOR_2_TEST._

// This file was auto-generated.  Do not edit
abstract class Output_impl_Output_Output_TestApi extends BridgeTestSuite[Output_impl_Output_Output_Bridge](Arch.CASE_MONITOR_TEST_impl_1_Instance_Output_Output) {

  /** helper function to set the values of all input ports.
   * @param Suspect_Traffic_Out payloads for event data port Suspect_Traffic_Out.
   *   ART currently supports single element event data queues so
   *   only the last element of Suspect_Traffic_Out will be used
   */
  def put_concrete_inputs(Suspect_Traffic_Out : ISZ[Base_Types.Bits]): Unit = {
    for(v <- Suspect_Traffic_Out){
      put_Suspect_Traffic_Out(v)
    }
  }


  // setter for in EventDataPort
  def put_Suspect_Traffic_Out(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.Suspect_Traffic_Out_Id, Base_Types.Bits_Payload(value))
  }

}

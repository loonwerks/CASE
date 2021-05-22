package pfc.PFC

import org.sireum._
import art.{ArtNative_Ext, Empty}
import pfc._

// This file was auto-generated.  Do not edit
abstract class consumer_t_consumer_consumer_TestApi extends BridgeTestSuite[consumer_t_consumer_consumer_Bridge](Arch.PFC_Sys_Impl_Instance_consumer_consumer) {

  /** helper function to set the values of all input ports.
   * @param from_filter payloads for event data port from_filter.
   *   ART currently supports single element event data queues so
   *   only the last element of from_filter will be used
   */
  def put_concrete_inputs(from_filter : ISZ[Base_Types.Bits]): Unit = {
    for(v <- from_filter){
      put_from_filter(v)
    }
  }


  // setter for in EventDataPort
  def put_from_filter(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.from_filter_Id, Base_Types.Bits_Payload(value))
  }

}

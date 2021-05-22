package base.test_data_port_periodic_domains

import org.sireum._
import art.{ArtNative_Ext, Empty}
import base._

// This file was auto-generated.  Do not edit
abstract class consumer_thread_i_consumer_consumer_TestApi extends BridgeTestSuite[consumer_thread_i_consumer_consumer_Bridge](Arch.top_impl_Instance_consumer_consumer) {

  /** helper function to set the values of all input ports.
   * @param read_port payload for data port read_port
   */
  def put_concrete_inputs(read_port : Base_Types.Bits): Unit = {
    put_read_port(read_port)
  }


  // setter for in DataPort
  def put_read_port(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.read_port_Id, Base_Types.Bits_Payload(value))
  }

}

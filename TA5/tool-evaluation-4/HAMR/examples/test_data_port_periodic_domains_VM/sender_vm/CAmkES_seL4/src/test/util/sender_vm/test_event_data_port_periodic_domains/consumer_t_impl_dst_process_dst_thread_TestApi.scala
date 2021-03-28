package sender_vm.test_event_data_port_periodic_domains

import org.sireum._
import art.{ArtNative_Ext, Empty}
import sender_vm._

// This file was auto-generated.  Do not edit
abstract class consumer_t_impl_dst_process_dst_thread_TestApi extends BridgeTestSuite[consumer_t_impl_dst_process_dst_thread_Bridge](Arch.top_impl_Instance_dst_process_dst_thread) {

  /** helper function to set the values of all input ports.
   * @param read_port payload for data port read_port
   */
  def put_concrete_inputs(read_port : Base_Types.Integer_8): Unit = {
    put_read_port(read_port)
  }


  // setter for in DataPort
  def put_read_port(value : Base_Types.Integer_8): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.read_port_Id, Base_Types.Integer_8_Payload(value))
  }

}

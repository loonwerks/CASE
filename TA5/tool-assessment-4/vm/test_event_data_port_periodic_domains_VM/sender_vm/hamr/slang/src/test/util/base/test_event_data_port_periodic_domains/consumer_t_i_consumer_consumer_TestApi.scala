package base.test_event_data_port_periodic_domains

import org.sireum._
import art.{ArtNative_Ext, Empty}
import base._

// This file was auto-generated.  Do not edit
abstract class consumer_t_i_consumer_consumer_TestApi extends BridgeTestSuite[consumer_t_i_consumer_consumer_Bridge](Arch.top_impl_Instance_consumer_consumer) {

  /** helper function to set the values of all input ports.
   * @param read_port payloads for event data port read_port.
   *   ART currently supports single element event data queues so
   *   only the last element of read_port will be used
   */
  def put_concrete_inputs(read_port : ISZ[Base_Types.Bits]): Unit = {
    for(v <- read_port){
      put_read_port(v)
    }
  }


  // setter for in EventDataPort
  def put_read_port(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.read_port_Id, Base_Types.Bits_Payload(value))
  }

}

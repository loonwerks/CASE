package test_event_port_periodic_domains.test_event_port_periodic_domains

import org.sireum._
import art.{ArtNative_Ext, Empty}
import test_event_port_periodic_domains._

// This file was auto-generated.  Do not edit
abstract class consumer_t_impl_dst_process_dst_thread_TestApi extends BridgeTestSuite[consumer_t_impl_dst_process_dst_thread_Bridge](Arch.top_impl_Instance_dst_process_dst_thread) {

  /** helper function to set the values of all input ports.
   * @param consume the number of events to place in the consume event port queue.
   *   ART currently supports single element event queues so at most
   *   one event will be placed in the queue.
   */
  def put_concrete_inputs(consume : Z): Unit = {
    for(i <- 0 until consume) {
      put_consume()
    }
  }


  // setter for in EventPort
  def put_consume(): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.consume_Id, Empty())
  }

}

package receiver_vm.test_event_data_port_periodic_domains

import art.{ArtNative_Ext, Empty}
import receiver_vm._
import org.sireum._

// This file will not be overwritten so is safe to edit
class consumer_t_impl_dst_process_dst_thread_Test extends BridgeTestSuite[consumer_t_impl_dst_process_dst_thread_Bridge](Arch.top_impl_Instance_dst_process_dst_thread) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // setter for in DataPort
  def put_read_port(value : Base_Types.Integer_8): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.read_port_Id, Base_Types.Integer_8_Payload(value))
  }

}

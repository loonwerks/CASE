package CAmkES_seL4_VM.test_event_data_port_periodic_domains

import art.{ArtNative_Ext, Empty}
import CAmkES_seL4_VM._
import org.sireum._

// the contents of this file will not be overwritten
class top_impl_Instance_dst_process_dst_thread_Test extends BridgeTestSuite[consumer_t_impl_Bridge](Arch.top_impl_Instance_dst_process_dst_thread) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // setter for in DataPort
  def put_read_port(value : S8): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.read_port_Id, Base_Types.Integer_8_Payload(value))
  }

  def getComponent(): consumer_t_impl_Impl = {
    return bridge.entryPoints.asInstanceOf[consumer_t_impl_Bridge.EntryPoints].component
  }
}

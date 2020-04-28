package hamr.test_data_port_periodic_domains

import art.{ArtNative_Ext, Empty}
import hamr._
import org.sireum._

// the contents of this file will not be overwritten
class top_impl_Instance_destination_process_component_destination_thread_component_Test extends BridgeTestSuite[destination_thread_impl_Bridge](Arch.top_impl_Instance_destination_process_component_destination_thread_component) {
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

  def getComponent(): destination_thread_impl_Impl = {
    return bridge.entryPoints.asInstanceOf[destination_thread_impl_Bridge.EntryPoints].component
  }
}

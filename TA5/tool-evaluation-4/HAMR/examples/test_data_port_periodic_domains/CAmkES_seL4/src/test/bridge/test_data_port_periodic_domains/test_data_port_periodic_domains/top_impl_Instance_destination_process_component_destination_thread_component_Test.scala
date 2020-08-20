package test_data_port_periodic_domains.test_data_port_periodic_domains

import art.{ArtNative_Ext, Empty}
import test_data_port_periodic_domains._
import org.sireum._

// This file will not be overwritten so is safe to edit
class top_impl_Instance_destination_process_component_destination_thread_component_Test extends BridgeTestSuite[destination_thread_impl_Bridge](Arch.top_impl_Instance_destination_process_component_destination_thread_component) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // setter for in DataPort
  def put_read_port(value : Base_Types.Integer_8): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.read_port_Id, Base_Types.Integer_8_Payload(value))
  }

  def getComponent(): destination_thread_impl_Impl = {
    return bridge.entryPoints.asInstanceOf[destination_thread_impl_Bridge.EntryPoints].component
  }
}

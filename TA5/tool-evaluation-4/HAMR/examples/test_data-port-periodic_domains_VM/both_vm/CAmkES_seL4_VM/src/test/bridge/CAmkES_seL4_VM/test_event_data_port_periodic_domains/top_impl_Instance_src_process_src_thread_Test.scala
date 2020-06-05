package CAmkES_seL4_VM.test_event_data_port_periodic_domains

import art.{ArtNative_Ext, Empty}
import CAmkES_seL4_VM._
import org.sireum._

// the contents of this file will not be overwritten
class top_impl_Instance_src_process_src_thread_Test extends BridgeTestSuite[emitter_t_impl_Bridge](Arch.top_impl_Instance_src_process_src_thread) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // getter for out DataPort
  def get_write_port(): Option[S8] = {
    val value: Option[S8] = get_write_port_payload() match {
      case Some(Base_Types.Integer_8_Payload(v)) => Some(v)
      case Some(v) => fail(s"Unexpected payload on port write_port.  Expecting 'Base_Types.Integer_8_Payload' but received ${v}") 
      case _ => None[S8]()
    }
    return value
  }

  // payload getter for out DataPort
  def get_write_port_payload(): Option[Base_Types.Integer_8_Payload] = {
    return ArtNative_Ext.observeOutPortValue(bridge.api.write_port_Id).asInstanceOf[Option[Base_Types.Integer_8_Payload]]
  }

  def getComponent(): emitter_t_impl_Impl = {
    return bridge.entryPoints.asInstanceOf[emitter_t_impl_Bridge.EntryPoints].component
  }
}

package test_event_port_periodic_domains.test_event_port_periodic_domains

import art.{ArtNative_Ext, Empty}
import test_event_port_periodic_domains._
import org.sireum._

// This file will not be overwritten so is safe to edit
class emitter_t_impl_src_process_src_thread_Test extends BridgeTestSuite[emitter_t_impl_src_process_src_thread_Bridge](Arch.top_impl_Instance_src_process_src_thread) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // getter for out EventPort
  def get_emit(): Option[art.Empty] = {
    val value: Option[art.Empty] = get_emit_payload() match {
      case Some(Empty()) => Some(Empty())
      case Some(v) => fail(s"Unexpected payload on port emit.  Expecting 'Empty' but received ${v}")
      case _ => None[art.Empty]()
    }
    return value
  }

  // payload getter for out EventPort
  def get_emit_payload(): Option[Empty] = {
    return ArtNative_Ext.observeOutPortValue(bridge.initialization_api.emit_Id).asInstanceOf[Option[Empty]]
  }

}

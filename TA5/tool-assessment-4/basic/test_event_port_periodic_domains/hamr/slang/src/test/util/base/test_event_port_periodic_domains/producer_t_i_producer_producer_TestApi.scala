package base.test_event_port_periodic_domains

import org.sireum._
import art.{ArtNative_Ext, Empty}
import base._

// This file was auto-generated.  Do not edit
abstract class producer_t_i_producer_producer_TestApi extends BridgeTestSuite[producer_t_i_producer_producer_Bridge](Arch.top_impl_Instance_producer_producer) {

  /** helper function to check producer_t_i_producer_producer's
   * output ports.  Use named arguments to check subsets of the output ports.
   * @param emit method that will be called with the number of events to be sent
   *        on the outgoing event port 'emit'.
   */
  def check_concrete_output(emit: Z => B = emitParam => {T}): Unit = {
    var testFailures: ISZ[ST] = ISZ()

    // TODO: event port getter should return the number of events in
    //       the output queue when queue sizes > 1 support is added to ART
    val emitValue: Z = if(get_emit().nonEmpty) z"1" else z"0"
    if(!emit(emitValue)) {
      testFailures = testFailures :+ st"'emit' did not match expected: ${emitValue} events were in the outgoing event queue"
    }

    assert(testFailures.isEmpty, st"${(testFailures, "\n")}".render)
  }


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

// #Sireum

package CAmkES_seL4_VM.test_event_data_port_periodic_domains

import org.sireum._
import CAmkES_seL4_VM._

// the contents of this file will not be overwritten
@record class emitter_t_impl_Impl (val api : emitter_t_impl_Bridge.Api) extends emitter_t_impl {

  override def initialise(): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.sendwrite_port(Base_Types.Integer_8_empty())
  }

  override def timeTriggered(): Unit = {
    // example override of timeTriggered
  }

  override def activate(): Unit = {
    // example override of activate
  }

  override def deactivate(): Unit = {
    // example override of deactivate
  }

  override def finalise(): Unit = {
    // example override of finalise
  }

  override def recover(): Unit = {
    // example override of recover
  }
}

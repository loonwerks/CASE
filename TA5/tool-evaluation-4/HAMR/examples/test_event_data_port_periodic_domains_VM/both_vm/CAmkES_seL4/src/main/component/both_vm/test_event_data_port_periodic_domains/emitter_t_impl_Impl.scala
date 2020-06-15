// #Sireum

package both_vm.test_event_data_port_periodic_domains

import org.sireum._
import both_vm._

// This file will not be overwritten so is safe to edit
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

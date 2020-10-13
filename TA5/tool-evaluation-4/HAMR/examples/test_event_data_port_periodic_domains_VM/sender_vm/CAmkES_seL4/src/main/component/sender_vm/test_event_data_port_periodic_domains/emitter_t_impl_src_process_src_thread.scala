// #Sireum

package sender_vm.test_event_data_port_periodic_domains

import org.sireum._
import sender_vm._

// This file will not be overwritten so is safe to edit
object emitter_t_impl_src_process_src_thread {

  def initialise(api: emitter_t_impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.sendwrite_port(Base_Types.Integer_8_empty())
  }

  def timeTriggered(api: emitter_t_impl_Operational_Api): Unit = {
    // example api usage

    api.sendwrite_port(Base_Types.Integer_8_empty())
  }

  def activate(api: emitter_t_impl_Operational_Api): Unit = { }

  def deactivate(api: emitter_t_impl_Operational_Api): Unit = { }

  def finalise(api: emitter_t_impl_Operational_Api): Unit = { }

  def recover(api: emitter_t_impl_Operational_Api): Unit = { }
}

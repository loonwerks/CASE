// #Sireum

package test_data_port_periodic_domains.test_data_port_periodic_domains

import org.sireum._
import test_data_port_periodic_domains._

// This file will not be overwritten so is safe to edit
@record class destination_thread_impl_Impl (val api : destination_thread_impl_Bridge.Api) extends destination_thread_impl {

  override def initialise(): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    val apiUsage_read_port: Option[Base_Types.Integer_8] = api.getread_port()
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

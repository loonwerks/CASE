// #Sireum

package CAmkES_seL4_VM.test_event_data_port_periodic_domains

import org.sireum._
import CAmkES_seL4_VM._

// the contents of this file will not be overwritten
@record class consumer_t_impl_Impl (val api : consumer_t_impl_Bridge.Api) extends consumer_t_impl {

  override def initialise(): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    val apiUsage_read_port: Option[S8] = api.getread_port()
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

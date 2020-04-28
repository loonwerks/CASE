// #Sireum

package hamr.test_event_port_periodic_domains

import org.sireum._
import hamr._

// the contents of this file will not be overwritten
@record class consumer_t_impl_Impl (val api : consumer_t_impl_Bridge.Api) extends consumer_t_impl {

  override def initialise(): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    val apiUsage_consume: Option[art.Empty] = api.getconsume()
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

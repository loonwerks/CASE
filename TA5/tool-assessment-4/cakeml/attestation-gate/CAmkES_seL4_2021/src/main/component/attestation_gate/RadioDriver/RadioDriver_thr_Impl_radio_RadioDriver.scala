// #Sireum

package attestation_gate.RadioDriver

import org.sireum._
import attestation_gate._

// This file will not be overwritten so is safe to edit
object RadioDriver_thr_Impl_radio_RadioDriver {

  def initialise(api: RadioDriver_thr_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_trusted_ids_out(Base_Types.Bits_example())
    api.put_automation_request_out(Base_Types.Bits_example())
    api.put_operating_region_out(Base_Types.Bits_example())
    api.put_line_search_task_out(Base_Types.Bits_example())
  }

  def timeTriggered(api: RadioDriver_thr_Impl_Operational_Api): Unit = {
    // example api usage


  }

  def activate(api: RadioDriver_thr_Impl_Operational_Api): Unit = { }

  def deactivate(api: RadioDriver_thr_Impl_Operational_Api): Unit = { }

  def finalise(api: RadioDriver_thr_Impl_Operational_Api): Unit = { }

  def recover(api: RadioDriver_thr_Impl_Operational_Api): Unit = { }
}

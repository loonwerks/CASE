// #Sireum

package hamr.SW

import org.sireum._
import hamr._

// This file will not be overwritten so is safe to edit
object RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation {

  def initialise(api: RadioDriver_Attestation_thr_Impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.put_send_data(Base_Types.Bits_example())
    api.put_trusted_ids(Base_Types.Bits_example())
    api.put_AutomationRequest(Base_Types.Bits_example())
    api.put_OperatingRegion(Base_Types.Bits_example())
    api.put_LineSearchTask(Base_Types.Bits_example())
  }

  def timeTriggered(api: RadioDriver_Attestation_thr_Impl_Operational_Api): Unit = {
    // example api usage

    val apiUsage_recv_data: Option[Base_Types.Bits] = api.get_recv_data()
    api.logInfo(s"Received on recv_data: ${apiUsage_recv_data}")
  }

  def activate(api: RadioDriver_Attestation_thr_Impl_Operational_Api): Unit = { }

  def deactivate(api: RadioDriver_Attestation_thr_Impl_Operational_Api): Unit = { }

  def finalise(api: RadioDriver_Attestation_thr_Impl_Operational_Api): Unit = { }

  def recover(api: RadioDriver_Attestation_thr_Impl_Operational_Api): Unit = { }
}

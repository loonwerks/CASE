// #Sireum

package hamr

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object Main extends App {
  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    Platform.initialise(seed, None())

    val empty = art.Empty()

    Platform.sendAsync(IPCPorts.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App, IPCPorts.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App, empty)
    Platform.sendAsync(IPCPorts.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App, IPCPorts.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App, empty)
    Platform.sendAsync(IPCPorts.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App, IPCPorts.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App, empty)
    Platform.sendAsync(IPCPorts.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App, IPCPorts.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App, empty)
    Platform.sendAsync(IPCPorts.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App, IPCPorts.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App, empty)
    Platform.sendAsync(IPCPorts.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App, IPCPorts.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App, empty)
    Platform.sendAsync(IPCPorts.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App, IPCPorts.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App, empty)
    Platform.sendAsync(IPCPorts.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App, IPCPorts.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App, empty)
    Platform.sendAsync(IPCPorts.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App, IPCPorts.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App, empty)

    Platform.finalise()
    return 0
  }
}

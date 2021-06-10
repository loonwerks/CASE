// #Sireum

package hamr

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object IPCPorts {
  val UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App: Art.PortId = 40
  val RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App: Art.PortId = 41
  val FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App: Art.PortId = 42
  val UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App: Art.PortId = 43
  val WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App: Art.PortId = 44
  val CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App: Art.PortId = 45
  val CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App: Art.PortId = 46
  val CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App: Art.PortId = 47
  val CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App: Art.PortId = 48
  val Main: Art.PortId = 49

  def emptyReceiveOut: MBox2[Art.PortId, DataContent] = {
    return MBox2(-1, art.Empty())
  }

  def emptyReceiveAsyncOut: MBox2[Art.PortId, Option[DataContent]] = {
    return MBox2(-1, None())
  }
}

// #Sireum

package attestation_gate

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val top_Impl_Instance_uxas_UxAS_thread : attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge = {
    val AutomationRequest = Port[Base_Types.Bits] (id = 0, name = "top_Impl_Instance_uxas_UxAS_thread_AutomationRequest", mode = EventIn)
    val OperatingRegion = Port[Base_Types.Bits] (id = 1, name = "top_Impl_Instance_uxas_UxAS_thread_OperatingRegion", mode = EventIn)
    val LineSearchTask = Port[Base_Types.Bits] (id = 2, name = "top_Impl_Instance_uxas_UxAS_thread_LineSearchTask", mode = EventIn)

    attestation_gate.SysContext.UxAS_thr_Impl_uxas_UxAS_thread_Bridge(
      id = 0,
      name = "top_Impl_Instance_uxas_UxAS_thread",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      AutomationRequest = AutomationRequest,
      OperatingRegion = OperatingRegion,
      LineSearchTask = LineSearchTask
    )
  }
  val top_Impl_Instance_radio_RadioDriver : attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge = {
    val trusted_ids_out = Port[Base_Types.Bits] (id = 3, name = "top_Impl_Instance_radio_RadioDriver_trusted_ids_out", mode = DataOut)
    val automation_request_out = Port[Base_Types.Bits] (id = 4, name = "top_Impl_Instance_radio_RadioDriver_automation_request_out", mode = EventOut)
    val operating_region_out = Port[Base_Types.Bits] (id = 5, name = "top_Impl_Instance_radio_RadioDriver_operating_region_out", mode = EventOut)
    val line_search_task_out = Port[Base_Types.Bits] (id = 6, name = "top_Impl_Instance_radio_RadioDriver_line_search_task_out", mode = EventOut)

    attestation_gate.RadioDriver.RadioDriver_thr_Impl_radio_RadioDriver_Bridge(
      id = 1,
      name = "top_Impl_Instance_radio_RadioDriver",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      trusted_ids_out = trusted_ids_out,
      automation_request_out = automation_request_out,
      operating_region_out = operating_region_out,
      line_search_task_out = line_search_task_out
    )
  }
  val top_Impl_Instance_am_gate_CASE_AttestationGate : attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge = {
    val trusted_ids = Port[Base_Types.Bits] (id = 7, name = "top_Impl_Instance_am_gate_CASE_AttestationGate_trusted_ids", mode = DataIn)
    val AutomationRequest_in = Port[Base_Types.Bits] (id = 8, name = "top_Impl_Instance_am_gate_CASE_AttestationGate_AutomationRequest_in", mode = EventIn)
    val AutomationRequest_out = Port[Base_Types.Bits] (id = 9, name = "top_Impl_Instance_am_gate_CASE_AttestationGate_AutomationRequest_out", mode = EventOut)
    val OperatingRegion_in = Port[Base_Types.Bits] (id = 10, name = "top_Impl_Instance_am_gate_CASE_AttestationGate_OperatingRegion_in", mode = EventIn)
    val OperatingRegion_out = Port[Base_Types.Bits] (id = 11, name = "top_Impl_Instance_am_gate_CASE_AttestationGate_OperatingRegion_out", mode = EventOut)
    val LineSearchTask_in = Port[Base_Types.Bits] (id = 12, name = "top_Impl_Instance_am_gate_CASE_AttestationGate_LineSearchTask_in", mode = EventIn)
    val LineSearchTask_out = Port[Base_Types.Bits] (id = 13, name = "top_Impl_Instance_am_gate_CASE_AttestationGate_LineSearchTask_out", mode = EventOut)

    attestation_gate.CASE_AttestationGate.CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate_Bridge(
      id = 2,
      name = "top_Impl_Instance_am_gate_CASE_AttestationGate",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      trusted_ids = trusted_ids,
      AutomationRequest_in = AutomationRequest_in,
      AutomationRequest_out = AutomationRequest_out,
      OperatingRegion_in = OperatingRegion_in,
      OperatingRegion_out = OperatingRegion_out,
      LineSearchTask_in = LineSearchTask_in,
      LineSearchTask_out = LineSearchTask_out
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = ISZ (top_Impl_Instance_uxas_UxAS_thread, top_Impl_Instance_radio_RadioDriver, top_Impl_Instance_am_gate_CASE_AttestationGate),

      connections = ISZ (Connection(from = top_Impl_Instance_radio_RadioDriver.trusted_ids_out, to = top_Impl_Instance_am_gate_CASE_AttestationGate.trusted_ids),
                         Connection(from = top_Impl_Instance_radio_RadioDriver.automation_request_out, to = top_Impl_Instance_am_gate_CASE_AttestationGate.AutomationRequest_in),
                         Connection(from = top_Impl_Instance_radio_RadioDriver.operating_region_out, to = top_Impl_Instance_am_gate_CASE_AttestationGate.OperatingRegion_in),
                         Connection(from = top_Impl_Instance_radio_RadioDriver.line_search_task_out, to = top_Impl_Instance_am_gate_CASE_AttestationGate.LineSearchTask_in),
                         Connection(from = top_Impl_Instance_am_gate_CASE_AttestationGate.AutomationRequest_out, to = top_Impl_Instance_uxas_UxAS_thread.AutomationRequest),
                         Connection(from = top_Impl_Instance_am_gate_CASE_AttestationGate.OperatingRegion_out, to = top_Impl_Instance_uxas_UxAS_thread.OperatingRegion),
                         Connection(from = top_Impl_Instance_am_gate_CASE_AttestationGate.LineSearchTask_out, to = top_Impl_Instance_uxas_UxAS_thread.LineSearchTask))
    )
  }
}
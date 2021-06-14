// #Sireum

package CASE_MONITOR_TEST

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val CASE_MONITOR_TEST_impl_Instance_Input_Input : CASE_MONITOR_TEST.VPM_TEST.Input_impl_Input_Input_Bridge = {
    val Observed = Port[Base_Types.Bits] (id = 0, name = "CASE_MONITOR_TEST_impl_Instance_Input_Input_Observed", mode = EventOut)

    CASE_MONITOR_TEST.VPM_TEST.Input_impl_Input_Input_Bridge(
      id = 0,
      name = "CASE_MONITOR_TEST_impl_Instance_Input_Input",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      Observed = Observed
    )
  }
  val CASE_MONITOR_TEST_impl_Instance_Output_Output : CASE_MONITOR_TEST.VPM_TEST.Output_impl_Output_Output_Bridge = {
    val Suspect_Traffic_Out = Port[Base_Types.Bits] (id = 1, name = "CASE_MONITOR_TEST_impl_Instance_Output_Output_Suspect_Traffic_Out", mode = EventIn)

    CASE_MONITOR_TEST.VPM_TEST.Output_impl_Output_Output_Bridge(
      id = 1,
      name = "CASE_MONITOR_TEST_impl_Instance_Output_Output",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      Suspect_Traffic_Out = Suspect_Traffic_Out
    )
  }
  val CASE_MONITOR_TEST_impl_Instance_CASE_Monitor_CASE_Monitor : CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge = {
    val Observed = Port[Base_Types.Bits] (id = 2, name = "CASE_MONITOR_TEST_impl_Instance_CASE_Monitor_CASE_Monitor_Observed", mode = EventIn)
    val Suspect_Traffic_Out = Port[Base_Types.Bits] (id = 3, name = "CASE_MONITOR_TEST_impl_Instance_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out", mode = EventOut)

    CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge(
      id = 2,
      name = "CASE_MONITOR_TEST_impl_Instance_CASE_Monitor_CASE_Monitor",
      dispatchProtocol = Periodic(period = 500),
      dispatchTriggers = None(),

      Observed = Observed,
      Suspect_Traffic_Out = Suspect_Traffic_Out
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = ISZ (CASE_MONITOR_TEST_impl_Instance_Input_Input, CASE_MONITOR_TEST_impl_Instance_Output_Output, CASE_MONITOR_TEST_impl_Instance_CASE_Monitor_CASE_Monitor),

      connections = ISZ (Connection(from = CASE_MONITOR_TEST_impl_Instance_Input_Input.Observed, to = CASE_MONITOR_TEST_impl_Instance_CASE_Monitor_CASE_Monitor.Observed),
                         Connection(from = CASE_MONITOR_TEST_impl_Instance_CASE_Monitor_CASE_Monitor.Suspect_Traffic_Out, to = CASE_MONITOR_TEST_impl_Instance_Output_Output.Suspect_Traffic_Out))
    )
  }
}
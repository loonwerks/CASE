#include <all.h>

Z hamr_Main_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "Main.scala", "hamr.Main", "main", 0);

  sfUpdateLoc(13);
  Z seed;
  {
    B t_0;
    {
      Z t_1 = IS_948B60_size(SF args);
      t_0 = Z__eq(t_1, Z_C(1));
    }
    if (t_0) {

      sfUpdateLoc(14);
      Z n;
      {
        DeclNewOption_882048(t_2);
        Z_apply(&t_2, IS_948B60_at(args, Z_C(0)));
        Z t_3 = Option_882048_get_(SF (&t_2));
        n = t_3;
      }
      Z t_4;
      if (Z__eq(n, Z_C(0))) {
        t_4 = Z_C(1);
      } else {
        t_4 = n;
      }
      seed = t_4;
    } else {
      seed = Z_C(1);
    }
  }

  sfUpdateLoc(20);
  {
    DeclNewNone_76463B(t_5);
    None_76463B_apply(SF &t_5);
    hamr_PlatformNix_initialise(SF seed, (Option_882048) (&t_5));
  }

  sfUpdateLoc(22);
  art_Empty empty;
  DeclNewart_Empty(t_6);
  art_Empty_apply(SF &t_6);
  empty = (art_Empty) (&t_6);

  sfUpdateLoc(24);
  {
    B t_7 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App(SF_LAST), hamr_IPCPorts_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App(SF_LAST), (art_DataContent) empty);
  }

  sfUpdateLoc(25);
  {
    B t_8 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App(SF_LAST), hamr_IPCPorts_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App(SF_LAST), (art_DataContent) empty);
  }

  sfUpdateLoc(26);
  {
    B t_9 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App(SF_LAST), hamr_IPCPorts_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App(SF_LAST), (art_DataContent) empty);
  }

  sfUpdateLoc(27);
  {
    B t_10 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App(SF_LAST), hamr_IPCPorts_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App(SF_LAST), (art_DataContent) empty);
  }

  sfUpdateLoc(28);
  {
    B t_11 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App(SF_LAST), hamr_IPCPorts_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App(SF_LAST), (art_DataContent) empty);
  }

  sfUpdateLoc(29);
  {
    B t_12 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App(SF_LAST), hamr_IPCPorts_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App(SF_LAST), (art_DataContent) empty);
  }

  sfUpdateLoc(30);
  {
    B t_13 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App(SF_LAST), hamr_IPCPorts_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App(SF_LAST), (art_DataContent) empty);
  }

  sfUpdateLoc(31);
  {
    B t_14 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App(SF_LAST), hamr_IPCPorts_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App(SF_LAST), (art_DataContent) empty);
  }

  sfUpdateLoc(32);
  {
    B t_15 = hamr_PlatformNix_sendAsync(SF hamr_IPCPorts_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App(SF_LAST), hamr_IPCPorts_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App(SF_LAST), (art_DataContent) empty);
  }

  sfUpdateLoc(34);
  {
    hamr_PlatformNix_finalise(SF_LAST);
  }
  return Z_C(0);
}
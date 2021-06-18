#include <all.h>

B hamr_ArtNix_initialized_ = F;

Z _hamr_ArtNix_maxPortIds;
union Option_8E9F45 _hamr_ArtNix_noData;
struct MS_2590FE _hamr_ArtNix_data;
struct MS_B5E3E6 _hamr_ArtNix_connection;
struct MS_2590FE _hamr_ArtNix_frozen;
struct MS_2590FE _hamr_ArtNix_outgoing;
B _hamr_ArtNix_isTimeDispatch;

void hamr_ArtNix_init(STACK_FRAME_ONLY) {
  if (hamr_ArtNix_initialized_) return;
  hamr_ArtNix_initialized_ = T;
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "<init>", 0);
  hamr_ArtNix_init_maxPortIds(SF_LAST);
  hamr_ArtNix_init_noData(SF_LAST);
  hamr_ArtNix_init_data(SF_LAST);
  hamr_ArtNix_init_connection(SF_LAST);
  hamr_ArtNix_init_frozen(SF_LAST);
  hamr_ArtNix_init_outgoing(SF_LAST);
  hamr_ArtNix_init_isTimeDispatch(SF_LAST);
}

Z hamr_ArtNix_maxPortIds(STACK_FRAME_ONLY) {
  hamr_ArtNix_init(CALLER_LAST);
  return _hamr_ArtNix_maxPortIds;
}

Option_8E9F45 hamr_ArtNix_noData(STACK_FRAME_ONLY) {
  hamr_ArtNix_init(CALLER_LAST);
  return (Option_8E9F45) &_hamr_ArtNix_noData;
}

MS_2590FE hamr_ArtNix_data(STACK_FRAME_ONLY) {
  hamr_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_hamr_ArtNix_data;
}

MS_B5E3E6 hamr_ArtNix_connection(STACK_FRAME_ONLY) {
  hamr_ArtNix_init(CALLER_LAST);
  return (MS_B5E3E6) &_hamr_ArtNix_connection;
}

MS_2590FE hamr_ArtNix_frozen(STACK_FRAME_ONLY) {
  hamr_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_hamr_ArtNix_frozen;
}

void hamr_ArtNix_frozen_a(STACK_FRAME MS_2590FE p_frozen) {
  hamr_ArtNix_init(CALLER_LAST);
  Type_assign(&_hamr_ArtNix_frozen, p_frozen, sizeof(struct MS_2590FE));
}

MS_2590FE hamr_ArtNix_outgoing(STACK_FRAME_ONLY) {
  hamr_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_hamr_ArtNix_outgoing;
}

void hamr_ArtNix_outgoing_a(STACK_FRAME MS_2590FE p_outgoing) {
  hamr_ArtNix_init(CALLER_LAST);
  Type_assign(&_hamr_ArtNix_outgoing, p_outgoing, sizeof(struct MS_2590FE));
}

B hamr_ArtNix_isTimeDispatch(STACK_FRAME_ONLY) {
  hamr_ArtNix_init(CALLER_LAST);
  return _hamr_ArtNix_isTimeDispatch;
}

void hamr_ArtNix_isTimeDispatch_a(STACK_FRAME B p_isTimeDispatch) {
  hamr_ArtNix_init(CALLER_LAST);
  _hamr_ArtNix_isTimeDispatch = p_isTimeDispatch;
}

Unit hamr_ArtNix_timeDispatch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "timeDispatch", 0);

  sfUpdateLoc(105);
  {
    hamr_ArtNix_isTimeDispatch_a(SF (B) T);
  }
}

Unit hamr_ArtNix_updateData(STACK_FRAME Z port, art_DataContent d) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "updateData", 0);

  sfUpdateLoc(101);
  {
    DeclNewSome_D29615(t_0);
    Some_D29615_apply(SF &t_0, (art_DataContent) d);
    MS_2590FE_up(hamr_ArtNix_data(SF_LAST), port, (Option_8E9F45) (&t_0));
  }
}

Unit hamr_ArtNix_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "run", 0);
}

Unit hamr_ArtNix_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(164);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(165);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(166);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_ArtNix_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(176);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(177);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(178);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit hamr_ArtNix_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(170);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(171);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(172);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void hamr_ArtNix_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "getValue", 0);
  Type_assign(result, MS_2590FE_at(hamr_ArtNix_frozen(SF_LAST), portId), sizeof(union Option_8E9F45));
  return;
}

Unit hamr_ArtNix_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "putValue", 0);

  sfUpdateLoc(132);
  {
    DeclNewSome_D29615(t_0);
    Some_D29615_apply(SF &t_0, (art_DataContent) data);
    MS_2590FE_up(hamr_ArtNix_outgoing(SF_LAST), portId, (Option_8E9F45) (&t_0));
  }
}

static inline B hamr_ArtNix_sendOutput_extract_142_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, art_DataContent *_d_142_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_d_142_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B hamr_ArtNix_sendOutput_extract_147_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0) {
  return T;
}

static inline B hamr_ArtNix_sendOutput_extract_153_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_8, art_DataContent *_d_153_19) {
  if (!Some_D29615__is(SF t_8)) return F;
  *_d_153_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_8));
  return T;
}

static inline B hamr_ArtNix_sendOutput_extract_158_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_8) {
  return T;
}

Unit hamr_ArtNix_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "sendOutput", 0);

  sfUpdateLoc(140);
  {
    IS_82ABD8 t_5 = dataPortIds;
    int8_t t_6 = (dataPortIds)->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      Z p = t_5->value[t_7];

      sfUpdateLoc(141);
      DeclNewOption_8E9F45(t_0);
      {
        Type_assign(&t_0, MS_2590FE_at(hamr_ArtNix_outgoing(SF_LAST), p), sizeof(union Option_8E9F45));
      }
      B match_141_7 = F;
      if (!match_141_7) {
        art_DataContent d_142_19;
        match_141_7 = hamr_ArtNix_sendOutput_extract_142_14_8E9F45(SF ((Option_8E9F45) &t_0), &d_142_19);
        if (match_141_7) {

          sfUpdateLoc(143);
          {
            MS_2590FE_up(hamr_ArtNix_outgoing(SF_LAST), p, (Option_8E9F45) hamr_ArtNix_noData(SF_LAST));
          }

          sfUpdateLoc(144);
          {
            IS_AA0F82 t_2 = MS_B5E3E6_at(hamr_ArtNix_connection(SF_LAST), p);
            int8_t t_3 = (MS_B5E3E6_at(hamr_ArtNix_connection(SF_LAST), p))->size;
            for (int8_t t_4 = 0; t_4 < t_3; t_4++) {
              Tuple2_EC3B57 e = (Tuple2_EC3B57) &(t_2->value[t_4]);

              sfUpdateLoc(145);
              {
                B t_1 = hamr_PlatformNix_sendAsync(SF Tuple2_EC3B57_1(e), Tuple2_EC3B57_2(e), (art_DataContent) d_142_19);
              }
            }
          }
        }
      }
      if (!match_141_7) {
        match_141_7 = hamr_ArtNix_sendOutput_extract_147_14_8E9F45(SF ((Option_8E9F45) &t_0));
        if (match_141_7) {
        }
      }
      sfAssert(match_141_7, "Error when pattern matching.");
    }
  }

  sfUpdateLoc(151);
  {
    IS_82ABD8 t_13 = eventPortIds;
    int8_t t_14 = (eventPortIds)->size;
    for (int8_t t_15 = 0; t_15 < t_14; t_15++) {
      Z p = t_13->value[t_15];

      sfUpdateLoc(152);
      DeclNewOption_8E9F45(t_8);
      {
        Type_assign(&t_8, MS_2590FE_at(hamr_ArtNix_outgoing(SF_LAST), p), sizeof(union Option_8E9F45));
      }
      B match_152_7 = F;
      if (!match_152_7) {
        art_DataContent d_153_19;
        match_152_7 = hamr_ArtNix_sendOutput_extract_153_14_8E9F45(SF ((Option_8E9F45) &t_8), &d_153_19);
        if (match_152_7) {

          sfUpdateLoc(154);
          {
            MS_2590FE_up(hamr_ArtNix_outgoing(SF_LAST), p, (Option_8E9F45) hamr_ArtNix_noData(SF_LAST));
          }

          sfUpdateLoc(155);
          {
            IS_AA0F82 t_10 = MS_B5E3E6_at(hamr_ArtNix_connection(SF_LAST), p);
            int8_t t_11 = (MS_B5E3E6_at(hamr_ArtNix_connection(SF_LAST), p))->size;
            for (int8_t t_12 = 0; t_12 < t_11; t_12++) {
              Tuple2_EC3B57 e = (Tuple2_EC3B57) &(t_10->value[t_12]);

              sfUpdateLoc(156);
              {
                B t_9 = hamr_PlatformNix_sendAsync(SF Tuple2_EC3B57_1(e), Tuple2_EC3B57_2(e), (art_DataContent) d_153_19);
              }
            }
          }
        }
      }
      if (!match_152_7) {
        match_152_7 = hamr_ArtNix_sendOutput_extract_158_14_8E9F45(SF ((Option_8E9F45) &t_8));
        if (match_152_7) {
        }
      }
      sfAssert(match_152_7, "Error when pattern matching.");
    }
  }
}

Unit hamr_ArtNix_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "hamr.ArtNix", "receiveInput", 0);

  sfUpdateLoc(125);
  {
    hamr_ArtNix_frozen_a(SF (MS_2590FE) hamr_ArtNix_data(SF_LAST));
  }

  sfUpdateLoc(126);
  {
    IS_82ABD8 t_0 = eventPortIds;
    int8_t t_1 = (eventPortIds)->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      Z i = t_0->value[t_2];

      sfUpdateLoc(127);
      {
        MS_2590FE_up(hamr_ArtNix_data(SF_LAST), i, (Option_8E9F45) hamr_ArtNix_noData(SF_LAST));
      }
    }
  }
}

void hamr_ArtNix_init_maxPortIds(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  _hamr_ArtNix_maxPortIds = Z__add(hamr_IPCPorts_Main(SF_LAST), Z_C(1));
};

void hamr_ArtNix_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  DeclNewNone_964667(t_0);
  None_964667_apply(SF &t_0);
  Type_assign(&_hamr_ArtNix_noData, (&t_0), sizeof(struct None_964667));
};

void hamr_ArtNix_init_data(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  DeclNewMS_2590FE(t_1);
  MS_2590FE_create(SF (MS_2590FE) &t_1, hamr_ArtNix_maxPortIds(SF_LAST), (Option_8E9F45) hamr_ArtNix_noData(SF_LAST));
  Type_assign(&_hamr_ArtNix_data, ((MS_2590FE) &t_1), sizeof(struct MS_2590FE));
};

void hamr_ArtNix_init_connection(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  {

    sfUpdateLoc(17);
    DeclNewMS_B5E3E6(_r);
    MS_B5E3E6 r = (MS_B5E3E6) &_r;
    {
      STATIC_ASSERT(0 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_2);
      t_2.size = (int8_t) 0;
      DeclNewMS_B5E3E6(t_3);
      MS_B5E3E6_create(SF (MS_B5E3E6) &t_3, hamr_ArtNix_maxPortIds(SF_LAST), (IS_AA0F82) (&t_2));
      Type_assign(r, ((MS_B5E3E6) &t_3), sizeof(struct MS_B5E3E6));
    }

    sfUpdateLoc(19);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_4);
      t_4.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_5);
      Tuple2_EC3B57_apply(SF &t_5, hamr_IPCPorts_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_AirVehicleState_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF_LAST))));
      IS_AA0F82_up(&t_4, 0, (Tuple2_EC3B57) (&t_5));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_AirVehicleState_WPM_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver(SF_LAST))), (IS_AA0F82) (&t_4));
    }

    sfUpdateLoc(22);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_6);
      t_6.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_7);
      Tuple2_EC3B57_apply(SF &t_7, hamr_IPCPorts_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_AirVehicleState_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST))));
      IS_AA0F82_up(&t_6, 0, (Tuple2_EC3B57) (&t_7));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_AirVehicleState_UXAS_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver(SF_LAST))), (IS_AA0F82) (&t_6));
    }

    sfUpdateLoc(25);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_8);
      t_8.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_9);
      Tuple2_EC3B57_apply(SF &t_9, hamr_IPCPorts_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_trusted_ids_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST))));
      IS_AA0F82_up(&t_8, 0, (Tuple2_EC3B57) (&t_9));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_trusted_ids_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF_LAST))), (IS_AA0F82) (&t_8));
    }

    sfUpdateLoc(28);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_10);
      t_10.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_11);
      Tuple2_EC3B57_apply(SF &t_11, hamr_IPCPorts_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_in_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST))));
      IS_AA0F82_up(&t_10, 0, (Tuple2_EC3B57) (&t_11));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_AutomationRequest_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF_LAST))), (IS_AA0F82) (&t_10));
    }

    sfUpdateLoc(31);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_12);
      t_12.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_13);
      Tuple2_EC3B57_apply(SF &t_13, hamr_IPCPorts_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_OperatingRegion_in_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST))));
      IS_AA0F82_up(&t_12, 0, (Tuple2_EC3B57) (&t_13));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_OperatingRegion_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF_LAST))), (IS_AA0F82) (&t_12));
    }

    sfUpdateLoc(34);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_14);
      t_14.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_15);
      Tuple2_EC3B57_apply(SF &t_15, hamr_IPCPorts_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_LineSearchTask_in_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST))));
      IS_AA0F82_up(&t_14, 0, (Tuple2_EC3B57) (&t_15));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_LineSearchTask_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF_LAST))), (IS_AA0F82) (&t_14));
    }

    sfUpdateLoc(37);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_16);
      t_16.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_17);
      Tuple2_EC3B57_apply(SF &t_17, hamr_IPCPorts_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_keep_in_zones_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST))));
      IS_AA0F82_up(&t_16, 0, (Tuple2_EC3B57) (&t_17));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_keep_in_zones_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(SF_LAST))), (IS_AA0F82) (&t_16));
    }

    sfUpdateLoc(40);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_18);
      t_18.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_19);
      Tuple2_EC3B57_apply(SF &t_19, hamr_IPCPorts_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_keep_out_zones_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST))));
      IS_AA0F82_up(&t_18, 0, (Tuple2_EC3B57) (&t_19));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_keep_out_zones_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(SF_LAST))), (IS_AA0F82) (&t_18));
    }

    sfUpdateLoc(43);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_20);
      t_20.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_21);
      Tuple2_EC3B57_apply(SF &t_21, hamr_IPCPorts_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_observed_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST))));
      IS_AA0F82_up(&t_20, 0, (Tuple2_EC3B57) (&t_21));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_AutomationResponse_MON_GEO_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST))), (IS_AA0F82) (&t_20));
    }

    sfUpdateLoc(46);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_22);
      t_22.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_23);
      Tuple2_EC3B57_apply(SF &t_23, hamr_IPCPorts_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_observed_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF_LAST))));
      IS_AA0F82_up(&t_22, 0, (Tuple2_EC3B57) (&t_23));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_AutomationResponse_MON_REQ_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST))), (IS_AA0F82) (&t_22));
    }

    sfUpdateLoc(49);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_24);
      t_24.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_25);
      Tuple2_EC3B57_apply(SF &t_25, hamr_IPCPorts_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App(SF_LAST), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_MissionCommand_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver(SF_LAST))));
      IS_AA0F82_up(&t_24, 0, (Tuple2_EC3B57) (&t_25));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_MissionCommand_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF_LAST))), (IS_AA0F82) (&t_24));
    }

    sfUpdateLoc(52);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_26);
      t_26.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_27);
      Tuple2_EC3B57_apply(SF &t_27, hamr_IPCPorts_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_AutomationRequest_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST))));
      IS_AA0F82_up(&t_26, 0, (Tuple2_EC3B57) (&t_27));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_out_UXAS_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST))), (IS_AA0F82) (&t_26));
    }

    sfUpdateLoc(55);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_28);
      t_28.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_29);
      Tuple2_EC3B57_apply(SF &t_29, hamr_IPCPorts_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_reference_1_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF_LAST))));
      IS_AA0F82_up(&t_28, 0, (Tuple2_EC3B57) (&t_29));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_out_MON_REQ_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST))), (IS_AA0F82) (&t_28));
    }

    sfUpdateLoc(58);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_30);
      t_30.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_31);
      Tuple2_EC3B57_apply(SF &t_31, hamr_IPCPorts_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_OperatingRegion_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST))));
      IS_AA0F82_up(&t_30, 0, (Tuple2_EC3B57) (&t_31));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_OperatingRegion_out_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST))), (IS_AA0F82) (&t_30));
    }

    sfUpdateLoc(61);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_32);
      t_32.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_33);
      Tuple2_EC3B57_apply(SF &t_33, hamr_IPCPorts_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_filter_in_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(SF_LAST))));
      IS_AA0F82_up(&t_32, 0, (Tuple2_EC3B57) (&t_33));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_LineSearchTask_out_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST))), (IS_AA0F82) (&t_32));
    }

    sfUpdateLoc(64);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_34);
      t_34.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_35);
      Tuple2_EC3B57_apply(SF &t_35, hamr_IPCPorts_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_LineSearchTask_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST))));
      IS_AA0F82_up(&t_34, 0, (Tuple2_EC3B57) (&t_35));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_filter_out_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(SF_LAST))), (IS_AA0F82) (&t_34));
    }

    sfUpdateLoc(67);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_36);
      t_36.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_37);
      Tuple2_EC3B57_apply(SF &t_37, hamr_IPCPorts_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App(SF_LAST), art_Port_45E54D_id_(hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_AutomationResponse_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF_LAST))));
      IS_AA0F82_up(&t_36, 0, (Tuple2_EC3B57) (&t_37));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_output_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST))), (IS_AA0F82) (&t_36));
    }

    sfUpdateLoc(70);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_38);
      t_38.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_39);
      Tuple2_EC3B57_apply(SF &t_39, hamr_IPCPorts_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App(SF_LAST), art_Port_9CBF18_id_(hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_ReturnHome_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF_LAST))));
      IS_AA0F82_up(&t_38, 0, (Tuple2_EC3B57) (&t_39));
      MS_B5E3E6_up(r, art_Port_9CBF18_id_(hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_alert_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST))), (IS_AA0F82) (&t_38));
    }
    Type_assign(&_hamr_ArtNix_connection, r, sizeof(struct MS_B5E3E6));
  }
};

void hamr_ArtNix_init_frozen(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(96);
  DeclNewMS_2590FE(t_40);
  MS_2590FE_create(SF (MS_2590FE) &t_40, hamr_ArtNix_maxPortIds(SF_LAST), (Option_8E9F45) hamr_ArtNix_noData(SF_LAST));
  Type_assign(&_hamr_ArtNix_frozen, ((MS_2590FE) &t_40), sizeof(struct MS_2590FE));
};

void hamr_ArtNix_init_outgoing(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(97);
  DeclNewMS_2590FE(t_41);
  MS_2590FE_create(SF (MS_2590FE) &t_41, hamr_ArtNix_maxPortIds(SF_LAST), (Option_8E9F45) hamr_ArtNix_noData(SF_LAST));
  Type_assign(&_hamr_ArtNix_outgoing, ((MS_2590FE) &t_41), sizeof(struct MS_2590FE));
};

void hamr_ArtNix_init_isTimeDispatch(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(98);
  _hamr_ArtNix_isTimeDispatch = F;
};
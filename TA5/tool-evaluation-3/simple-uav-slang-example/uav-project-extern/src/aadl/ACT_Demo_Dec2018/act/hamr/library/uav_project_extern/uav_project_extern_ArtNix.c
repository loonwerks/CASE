#include <all.h>

B uav_project_extern_ArtNix_initialized_ = F;

Z _uav_project_extern_ArtNix_maxPortIds;
struct art_TimeTriggered _uav_project_extern_ArtNix_timeTriggered;
struct MS_2590FE _uav_project_extern_ArtNix_data;
union Option_8E9F45 _uav_project_extern_ArtNix_noData;
struct MS_B5E3E6 _uav_project_extern_ArtNix_connection;
struct MS_30A5B4 _uav_project_extern_ArtNix_eventInPorts;
struct MS_2590FE _uav_project_extern_ArtNix_frozen;
struct MS_2590FE _uav_project_extern_ArtNix_outgoing;
B _uav_project_extern_ArtNix_isTimeDispatch;

void uav_project_extern_ArtNix_init(STACK_FRAME_ONLY) {
  if (uav_project_extern_ArtNix_initialized_) return;
  uav_project_extern_ArtNix_initialized_ = T;
  DeclNewStackFrame(caller, "ArtNix.scala", "uav_project_extern.ArtNix", "<init>", 0);
  _uav_project_extern_ArtNix_maxPortIds = Z__add(uav_project_extern_IPCPorts_Main(SF_LAST), Z_C(1));
  DeclNewart_TimeTriggered(t_0);
  art_TimeTriggered_apply(SF &t_0);
  Type_assign(&_uav_project_extern_ArtNix_timeTriggered, (&t_0), sizeof(struct art_TimeTriggered));
  DeclNewNone_964667(t_1);
  None_964667_apply(SF &t_1);
  DeclNewMS_2590FE(t_2);
  MS_2590FE_create(SF (MS_2590FE) &t_2, uav_project_extern_ArtNix_maxPortIds(SF_LAST), (Option_8E9F45) (&t_1));
  Type_assign(&_uav_project_extern_ArtNix_data, ((MS_2590FE) &t_2), sizeof(struct MS_2590FE));
  DeclNewNone_964667(t_3);
  None_964667_apply(SF &t_3);
  Type_assign(&_uav_project_extern_ArtNix_noData, (&t_3), sizeof(struct None_964667));

  sfUpdateLoc(17);
  DeclNewMS_B5E3E6(_r);
  MS_B5E3E6 r;
  STATIC_ASSERT(0 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_4);
  t_4.size = (int8_t) 0;
  DeclNewMS_B5E3E6(t_5);
  MS_B5E3E6_create(SF (MS_B5E3E6) &t_5, uav_project_extern_ArtNix_maxPortIds(SF_LAST), (IS_AA0F82) (&t_4));
  r = (MS_B5E3E6) &_r;
  Type_assign(r, ((MS_B5E3E6) &t_5), sizeof(struct MS_B5E3E6));

  sfUpdateLoc(19);
  STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_6);
  t_6.size = (int8_t) 1;
  DeclNewTuple2_EC3B57(t_7);
  Tuple2_EC3B57_apply(SF &t_7, uav_project_extern_IPCPorts_FlightPlanner_Impl_App(SF_LAST), art_Port_311EA2_id_(uav_project_extern_SW_FlightPlanner_Impl_Bridge_recv_map_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST))));
  IS_AA0F82_up(&t_6, 0, (Tuple2_EC3B57) (&t_7));
  MS_B5E3E6_up(r, art_Port_311EA2_id_(uav_project_extern_SW_RadioDriver_Impl_Bridge_recv_map_out_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO(SF_LAST))), (IS_AA0F82) (&t_6));

  sfUpdateLoc(22);
  STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_8);
  t_8.size = (int8_t) 1;
  DeclNewTuple2_EC3B57(t_9);
  Tuple2_EC3B57_apply(SF &t_9, uav_project_extern_IPCPorts_WaypointManager_Impl_App(SF_LAST), art_Port_97EF76_id_(uav_project_extern_SW_WaypointManager_Impl_Bridge_flight_plan_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST))));
  IS_AA0F82_up(&t_8, 0, (Tuple2_EC3B57) (&t_9));
  MS_B5E3E6_up(r, art_Port_97EF76_id_(uav_project_extern_SW_FlightPlanner_Impl_Bridge_flight_plan_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST))), (IS_AA0F82) (&t_8));

  sfUpdateLoc(25);
  STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_10);
  t_10.size = (int8_t) 1;
  DeclNewTuple2_EC3B57(t_11);
  Tuple2_EC3B57_apply(SF &t_11, uav_project_extern_IPCPorts_FlightPlanner_Impl_App(SF_LAST), art_Port_C0524D_id_(uav_project_extern_SW_FlightPlanner_Impl_Bridge_mission_rcv_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST))));
  IS_AA0F82_up(&t_10, 0, (Tuple2_EC3B57) (&t_11));
  MS_B5E3E6_up(r, art_Port_C0524D_id_(uav_project_extern_SW_WaypointManager_Impl_Bridge_mission_rcv_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST))), (IS_AA0F82) (&t_10));

  sfUpdateLoc(28);
  STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_12);
  t_12.size = (int8_t) 1;
  DeclNewTuple2_EC3B57(t_13);
  Tuple2_EC3B57_apply(SF &t_13, uav_project_extern_IPCPorts_UARTDriver_Impl_App(SF_LAST), art_Port_65F60A_id_(uav_project_extern_SW_UARTDriver_Impl_Bridge_mission_window_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST))));
  IS_AA0F82_up(&t_12, 0, (Tuple2_EC3B57) (&t_13));
  MS_B5E3E6_up(r, art_Port_65F60A_id_(uav_project_extern_SW_WaypointManager_Impl_Bridge_mission_window_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST))), (IS_AA0F82) (&t_12));

  sfUpdateLoc(31);
  STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_14);
  t_14.size = (int8_t) 1;
  DeclNewTuple2_EC3B57(t_15);
  Tuple2_EC3B57_apply(SF &t_15, uav_project_extern_IPCPorts_WaypointManager_Impl_App(SF_LAST), art_Port_CBF210_id_(uav_project_extern_SW_WaypointManager_Impl_Bridge_tracking_id_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST))));
  IS_AA0F82_up(&t_14, 0, (Tuple2_EC3B57) (&t_15));
  MS_B5E3E6_up(r, art_Port_CBF210_id_(uav_project_extern_SW_UARTDriver_Impl_Bridge_tracking_id_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST))), (IS_AA0F82) (&t_14));
  Type_assign(&_uav_project_extern_ArtNix_connection, r, sizeof(struct MS_B5E3E6));
  STATIC_ASSERT(5 <= MaxMS_30A5B4, "Insufficient maximum for MS[Z, Z] elements.");
  DeclNewMS_30A5B4(t_16);
  t_16.size = (int8_t) 5;
  MS_30A5B4_up(&t_16, 0, (Z) art_Port_97EF76_id_(uav_project_extern_SW_WaypointManager_Impl_Bridge_flight_plan_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST))));
  MS_30A5B4_up(&t_16, 1, (Z) art_Port_CBF210_id_(uav_project_extern_SW_WaypointManager_Impl_Bridge_tracking_id_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST))));
  MS_30A5B4_up(&t_16, 2, (Z) art_Port_C0524D_id_(uav_project_extern_SW_FlightPlanner_Impl_Bridge_mission_rcv_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST))));
  MS_30A5B4_up(&t_16, 3, (Z) art_Port_311EA2_id_(uav_project_extern_SW_FlightPlanner_Impl_Bridge_recv_map_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST))));
  MS_30A5B4_up(&t_16, 4, (Z) art_Port_65F60A_id_(uav_project_extern_SW_UARTDriver_Impl_Bridge_mission_window_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST))));
  Type_assign(&_uav_project_extern_ArtNix_eventInPorts, (&t_16), sizeof(struct MS_30A5B4));
  STATIC_ASSERT(0 <= MaxMS_2590FE, "Insufficient maximum for MS[Z, Option[art.DataContent]] elements.");
  DeclNewMS_2590FE(t_17);
  t_17.size = (int8_t) 0;
  Type_assign(&_uav_project_extern_ArtNix_frozen, (&t_17), sizeof(struct MS_2590FE));
  DeclNewNone_964667(t_18);
  None_964667_apply(SF &t_18);
  DeclNewMS_2590FE(t_19);
  MS_2590FE_create(SF (MS_2590FE) &t_19, uav_project_extern_ArtNix_maxPortIds(SF_LAST), (Option_8E9F45) (&t_18));
  Type_assign(&_uav_project_extern_ArtNix_outgoing, ((MS_2590FE) &t_19), sizeof(struct MS_2590FE));
  _uav_project_extern_ArtNix_isTimeDispatch = F;
}

Z uav_project_extern_ArtNix_maxPortIds(STACK_FRAME_ONLY) {
  uav_project_extern_ArtNix_init(CALLER_LAST);
  return _uav_project_extern_ArtNix_maxPortIds;
}

art_TimeTriggered uav_project_extern_ArtNix_timeTriggered(STACK_FRAME_ONLY) {
  uav_project_extern_ArtNix_init(CALLER_LAST);
  return (art_TimeTriggered) &_uav_project_extern_ArtNix_timeTriggered;
}

MS_2590FE uav_project_extern_ArtNix_data(STACK_FRAME_ONLY) {
  uav_project_extern_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_uav_project_extern_ArtNix_data;
}

Option_8E9F45 uav_project_extern_ArtNix_noData(STACK_FRAME_ONLY) {
  uav_project_extern_ArtNix_init(CALLER_LAST);
  return (Option_8E9F45) &_uav_project_extern_ArtNix_noData;
}

MS_B5E3E6 uav_project_extern_ArtNix_connection(STACK_FRAME_ONLY) {
  uav_project_extern_ArtNix_init(CALLER_LAST);
  return (MS_B5E3E6) &_uav_project_extern_ArtNix_connection;
}

MS_30A5B4 uav_project_extern_ArtNix_eventInPorts(STACK_FRAME_ONLY) {
  uav_project_extern_ArtNix_init(CALLER_LAST);
  return (MS_30A5B4) &_uav_project_extern_ArtNix_eventInPorts;
}

MS_2590FE uav_project_extern_ArtNix_frozen(STACK_FRAME_ONLY) {
  uav_project_extern_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_uav_project_extern_ArtNix_frozen;
}

void uav_project_extern_ArtNix_frozen_a(STACK_FRAME MS_2590FE p_frozen) {
  uav_project_extern_ArtNix_init(CALLER_LAST);
  Type_assign(&_uav_project_extern_ArtNix_frozen, p_frozen, sizeof(struct MS_2590FE));
}

MS_2590FE uav_project_extern_ArtNix_outgoing(STACK_FRAME_ONLY) {
  uav_project_extern_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_uav_project_extern_ArtNix_outgoing;
}

void uav_project_extern_ArtNix_outgoing_a(STACK_FRAME MS_2590FE p_outgoing) {
  uav_project_extern_ArtNix_init(CALLER_LAST);
  Type_assign(&_uav_project_extern_ArtNix_outgoing, p_outgoing, sizeof(struct MS_2590FE));
}

B uav_project_extern_ArtNix_isTimeDispatch(STACK_FRAME_ONLY) {
  uav_project_extern_ArtNix_init(CALLER_LAST);
  return _uav_project_extern_ArtNix_isTimeDispatch;
}

void uav_project_extern_ArtNix_isTimeDispatch_a(STACK_FRAME B p_isTimeDispatch) {
  uav_project_extern_ArtNix_init(CALLER_LAST);
  _uav_project_extern_ArtNix_isTimeDispatch = p_isTimeDispatch;
}

Unit uav_project_extern_ArtNix_eventDispatch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNix.scala", "uav_project_extern.ArtNix", "eventDispatch", 0);

  sfUpdateLoc(57);
  uav_project_extern_ArtNix_isTimeDispatch_a(SF (B) F);
}

Unit uav_project_extern_ArtNix_updateData(STACK_FRAME Z port, art_DataContent d) {
  DeclNewStackFrame(caller, "ArtNix.scala", "uav_project_extern.ArtNix", "updateData", 0);

  sfUpdateLoc(49);
  DeclNewSome_D29615(t_0);
  Some_D29615_apply(SF &t_0, (art_DataContent) d);
  MS_2590FE_up(uav_project_extern_ArtNix_data(SF_LAST), port, (Option_8E9F45) (&t_0));
}

Unit uav_project_extern_ArtNix_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNix.scala", "uav_project_extern.ArtNix", "run", 0);
}

static inline B uav_project_extern_ArtNix_sendOutput_extract_90_14_8E9F45(STACK_FRAME Option_8E9F45 t_0, art_DataContent *_d_90_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_d_90_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B uav_project_extern_ArtNix_sendOutput_extract_95_14_8E9F45(STACK_FRAME Option_8E9F45 t_0) {
  return T;
}

static inline B uav_project_extern_ArtNix_sendOutput_extract_101_14_8E9F45(STACK_FRAME Option_8E9F45 t_8, art_DataContent *_d_101_19) {
  if (!Some_D29615__is(SF t_8)) return F;
  *_d_101_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_8));
  return T;
}

static inline B uav_project_extern_ArtNix_sendOutput_extract_106_14_8E9F45(STACK_FRAME Option_8E9F45 t_8) {
  return T;
}

Unit uav_project_extern_ArtNix_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "uav_project_extern.ArtNix", "sendOutput", 0);

  sfUpdateLoc(88);
  {
    IS_82ABD8 t_5 = dataPortIds;
    int8_t t_6 = (dataPortIds)->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      Z p = t_5->value[t_7];

      sfUpdateLoc(89);
      DeclNewOption_8E9F45(t_0);
      Type_assign(&t_0, MS_2590FE_at(uav_project_extern_ArtNix_outgoing(SF_LAST), p), sizeof(union Option_8E9F45));
      B match_89_7 = F;
      if (!match_89_7) {
        art_DataContent d_90_19;
        match_89_7 = uav_project_extern_ArtNix_sendOutput_extract_90_14_8E9F45(SF ((Option_8E9F45) &t_0), &d_90_19);
        if (match_89_7) {

          sfUpdateLoc(91);
          MS_2590FE_up(uav_project_extern_ArtNix_outgoing(SF_LAST), p, (Option_8E9F45) uav_project_extern_ArtNix_noData(SF_LAST));

          sfUpdateLoc(92);
          {
            IS_AA0F82 t_2 = MS_B5E3E6_at(uav_project_extern_ArtNix_connection(SF_LAST), p);
            int8_t t_3 = (MS_B5E3E6_at(uav_project_extern_ArtNix_connection(SF_LAST), p))->size;
            for (int8_t t_4 = 0; t_4 < t_3; t_4++) {
              Tuple2_EC3B57 e = (Tuple2_EC3B57) &(t_2->value[t_4]);

              sfUpdateLoc(93);
              B t_1 = uav_project_extern_PlatformNix_sendAsync(SF Tuple2_EC3B57_1(e), Tuple2_EC3B57_2(e), (art_DataContent) d_90_19);                
            }
          }
        }
      }
      if (!match_89_7) {
        match_89_7 = uav_project_extern_ArtNix_sendOutput_extract_95_14_8E9F45(SF ((Option_8E9F45) &t_0));
        if (match_89_7) {
        }
      }
      sfAssert(match_89_7, "Error when pattern matching.");
    }
  }

  sfUpdateLoc(99);
  {
    IS_82ABD8 t_13 = eventPortIds;
    int8_t t_14 = (eventPortIds)->size;
    for (int8_t t_15 = 0; t_15 < t_14; t_15++) {
      Z p = t_13->value[t_15];

      sfUpdateLoc(100);
      DeclNewOption_8E9F45(t_8);
      Type_assign(&t_8, MS_2590FE_at(uav_project_extern_ArtNix_outgoing(SF_LAST), p), sizeof(union Option_8E9F45));
      B match_100_7 = F;
      if (!match_100_7) {
        art_DataContent d_101_19;
        match_100_7 = uav_project_extern_ArtNix_sendOutput_extract_101_14_8E9F45(SF ((Option_8E9F45) &t_8), &d_101_19);
        if (match_100_7) {

          sfUpdateLoc(102);
          MS_2590FE_up(uav_project_extern_ArtNix_outgoing(SF_LAST), p, (Option_8E9F45) uav_project_extern_ArtNix_noData(SF_LAST));

          sfUpdateLoc(103);
          {
            IS_AA0F82 t_10 = MS_B5E3E6_at(uav_project_extern_ArtNix_connection(SF_LAST), p);
            int8_t t_11 = (MS_B5E3E6_at(uav_project_extern_ArtNix_connection(SF_LAST), p))->size;
            for (int8_t t_12 = 0; t_12 < t_11; t_12++) {
              Tuple2_EC3B57 e = (Tuple2_EC3B57) &(t_10->value[t_12]);

              sfUpdateLoc(104);
              B t_9 = uav_project_extern_PlatformNix_sendAsync(SF Tuple2_EC3B57_1(e), Tuple2_EC3B57_2(e), (art_DataContent) d_101_19);                
            }
          }
        }
      }
      if (!match_100_7) {
        match_100_7 = uav_project_extern_ArtNix_sendOutput_extract_106_14_8E9F45(SF ((Option_8E9F45) &t_8));
        if (match_100_7) {
        }
      }
      sfAssert(match_100_7, "Error when pattern matching.");
    }
  }
}

Unit uav_project_extern_ArtNix_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNix.scala", "uav_project_extern.ArtNix", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(112);
  String_cprint(title, T);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(113);
  String_cprint(string(": "), T);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(114);
  String_cprint(msg, T);
  cprintln(T);
  cflush(T);

  #endif
}

void uav_project_extern_ArtNix_dispatchStatus(STACK_FRAME art_DispatchStatus result, Z bridgeId) {
  DeclNewStackFrame(caller, "ArtNix.scala", "uav_project_extern.ArtNix", "dispatchStatus", 0);

  sfUpdateLoc(61);
  if (uav_project_extern_ArtNix_isTimeDispatch(SF_LAST)) {
    Type_assign(result, uav_project_extern_ArtNix_timeTriggered(SF_LAST), sizeof(struct art_TimeTriggered));
  } else {

    sfUpdateLoc(64);
    DeclNewIS_82ABD8(_r);
    IS_82ABD8 r;
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 0;
    r = (IS_82ABD8) (&t_0);

    sfUpdateLoc(65);
    {
      MS_30A5B4 t_2 = uav_project_extern_ArtNix_eventInPorts(SF_LAST);
      int8_t t_3 = (uav_project_extern_ArtNix_eventInPorts(SF_LAST))->size;
      for (int8_t t_4 = 0; t_4 < t_3; t_4++) {
        Z i = t_2->value[t_4];
        if (Option_8E9F45_nonEmpty_(SF MS_2590FE_at(uav_project_extern_ArtNix_data(SF_LAST), i))) {

          sfUpdateLoc(66);
          DeclNewIS_82ABD8(t_1);
          IS_82ABD8__append(SF (IS_82ABD8) &t_1, r, i);
          r = &_r;
          Type_assign(r, ((IS_82ABD8) &t_1), sizeof(struct IS_82ABD8));
        }
      }
    }
    DeclNewart_EventTriggered(t_5);
    art_EventTriggered_apply(SF &t_5, (IS_82ABD8) r);
    Type_assign(result, (&t_5), sizeof(struct art_EventTriggered));
  }
}

Unit uav_project_extern_ArtNix_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "uav_project_extern.ArtNix", "receiveInput", 0);

  sfUpdateLoc(73);
  uav_project_extern_ArtNix_frozen_a(SF (MS_2590FE) uav_project_extern_ArtNix_data(SF_LAST));

  sfUpdateLoc(74);
  {
    IS_82ABD8 t_0 = eventPortIds;
    int8_t t_1 = (eventPortIds)->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      Z i = t_0->value[t_2];

      sfUpdateLoc(75);
      MS_2590FE_up(uav_project_extern_ArtNix_data(SF_LAST), i, (Option_8E9F45) uav_project_extern_ArtNix_noData(SF_LAST));
    }
  }
}

void uav_project_extern_ArtNix_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "ArtNix.scala", "uav_project_extern.ArtNix", "getValue", 0);
  Type_assign(result, MS_2590FE_at(uav_project_extern_ArtNix_frozen(SF_LAST), portId), sizeof(union Option_8E9F45));
}

Unit uav_project_extern_ArtNix_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "ArtNix.scala", "uav_project_extern.ArtNix", "putValue", 0);

  sfUpdateLoc(80);
  DeclNewSome_D29615(t_0);
  Some_D29615_apply(SF &t_0, (art_DataContent) data);
  MS_2590FE_up(uav_project_extern_ArtNix_outgoing(SF_LAST), portId, (Option_8E9F45) (&t_0));
}

Unit uav_project_extern_ArtNix_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNix.scala", "uav_project_extern.ArtNix", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(118);
  String_cprint(title, F);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(119);
  String_cprint(string(": "), F);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(120);
  String_cprint(msg, F);
  cprintln(F);
  cflush(F);

  #endif
}
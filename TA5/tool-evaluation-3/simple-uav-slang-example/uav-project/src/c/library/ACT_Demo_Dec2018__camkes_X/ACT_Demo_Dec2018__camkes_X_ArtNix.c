#include <all.h>

B ACT_Demo_Dec2018__camkes_X_ArtNix_initialized_ = F;

Z _ACT_Demo_Dec2018__camkes_X_ArtNix_maxPortIds;
struct art_TimeTriggered _ACT_Demo_Dec2018__camkes_X_ArtNix_timeTriggered;
struct MS_2590FE _ACT_Demo_Dec2018__camkes_X_ArtNix_data;
union Option_8E9F45 _ACT_Demo_Dec2018__camkes_X_ArtNix_noData;
struct MS_B5E3E6 _ACT_Demo_Dec2018__camkes_X_ArtNix_connection;
struct MS_30A5B4 _ACT_Demo_Dec2018__camkes_X_ArtNix_eventInPorts;
struct MS_2590FE _ACT_Demo_Dec2018__camkes_X_ArtNix_frozen;
struct MS_2590FE _ACT_Demo_Dec2018__camkes_X_ArtNix_outgoing;
B _ACT_Demo_Dec2018__camkes_X_ArtNix_isTimeDispatch;

void ACT_Demo_Dec2018__camkes_X_ArtNix_init(STACK_FRAME_LAST) {
  if (ACT_Demo_Dec2018__camkes_X_ArtNix_initialized_) return;
  ACT_Demo_Dec2018__camkes_X_ArtNix_initialized_ = T;
  DeclNewStackFrame(caller, "ArtNix.scala", "ACT_Demo_Dec2018__camkes_X.ArtNix", "<init>", 0);
  _ACT_Demo_Dec2018__camkes_X_ArtNix_maxPortIds = Z__add(ACT_Demo_Dec2018__camkes_X_IPCPorts_Main(SF_LAST), Z_C(1));
  DeclNewart_TimeTriggered(t_0);
  art_TimeTriggered_apply(SF &t_0);
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_ArtNix_timeTriggered, (&t_0), sizeof(struct art_TimeTriggered));
  DeclNewNone_964667(t_1);
  None_964667_apply(SF &t_1);
  DeclNewMS_2590FE(t_2);
  MS_2590FE_create(SF (MS_2590FE) &t_2, ACT_Demo_Dec2018__camkes_X_ArtNix_maxPortIds(SF_LAST), (Option_8E9F45) (&t_1));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_ArtNix_data, ((MS_2590FE) &t_2), sizeof(struct MS_2590FE));
  DeclNewNone_964667(t_3);
  None_964667_apply(SF &t_3);
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_ArtNix_noData, (&t_3), sizeof(struct None_964667));

  sfUpdateLoc(17);
  DeclNewMS_B5E3E6(_r);
  MS_B5E3E6 r = (MS_B5E3E6) &_r;
  STATIC_ASSERT(0 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_4);
  t_4.size = (int8_t) 0;
  DeclNewMS_B5E3E6(t_5);
  MS_B5E3E6_create(SF (MS_B5E3E6) &t_5, ACT_Demo_Dec2018__camkes_X_ArtNix_maxPortIds(SF_LAST), (IS_AA0F82) (&t_4));
  Type_assign(r, ((MS_B5E3E6) &t_5), sizeof(struct MS_B5E3E6));

  sfUpdateLoc(19);
  STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_6);
  t_6.size = (int8_t) 1;
  DeclNewTuple2_EC3B57(t_7);
  Tuple2_EC3B57_apply(SF &t_7, ACT_Demo_Dec2018__camkes_X_IPCPorts_FlightPlanner_Impl_App(SF_LAST), art_Port_695448_id_(ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_recv_map_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST))));
  Type_assign(&t_6.value[0], (&t_7), sizeof(struct Tuple2_EC3B57));
  Type_assign(MS_B5E3E6_at(r, art_Port_695448_id_(ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_recv_map_out_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO(SF_LAST)))), (&t_6), sizeof(struct IS_AA0F82));

  sfUpdateLoc(22);
  STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_8);
  t_8.size = (int8_t) 1;
  DeclNewTuple2_EC3B57(t_9);
  Tuple2_EC3B57_apply(SF &t_9, ACT_Demo_Dec2018__camkes_X_IPCPorts_WaypointManager_Impl_App(SF_LAST), art_Port_D7D05E_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_flight_plan_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST))));
  Type_assign(&t_8.value[0], (&t_9), sizeof(struct Tuple2_EC3B57));
  Type_assign(MS_B5E3E6_at(r, art_Port_D7D05E_id_(ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_flight_plan_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST)))), (&t_8), sizeof(struct IS_AA0F82));

  sfUpdateLoc(25);
  STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_10);
  t_10.size = (int8_t) 1;
  DeclNewTuple2_EC3B57(t_11);
  Tuple2_EC3B57_apply(SF &t_11, ACT_Demo_Dec2018__camkes_X_IPCPorts_FlightPlanner_Impl_App(SF_LAST), art_Port_9D6F5D_id_(ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_mission_rcv_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST))));
  Type_assign(&t_10.value[0], (&t_11), sizeof(struct Tuple2_EC3B57));
  Type_assign(MS_B5E3E6_at(r, art_Port_9D6F5D_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_mission_rcv_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)))), (&t_10), sizeof(struct IS_AA0F82));

  sfUpdateLoc(28);
  STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_12);
  t_12.size = (int8_t) 1;
  DeclNewTuple2_EC3B57(t_13);
  Tuple2_EC3B57_apply(SF &t_13, ACT_Demo_Dec2018__camkes_X_IPCPorts_UARTDriver_Impl_App(SF_LAST), art_Port_2D3735_id_(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_mission_window_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST))));
  Type_assign(&t_12.value[0], (&t_13), sizeof(struct Tuple2_EC3B57));
  Type_assign(MS_B5E3E6_at(r, art_Port_2D3735_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_mission_window_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)))), (&t_12), sizeof(struct IS_AA0F82));

  sfUpdateLoc(31);
  STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  DeclNewIS_AA0F82(t_14);
  t_14.size = (int8_t) 1;
  DeclNewTuple2_EC3B57(t_15);
  Tuple2_EC3B57_apply(SF &t_15, ACT_Demo_Dec2018__camkes_X_IPCPorts_WaypointManager_Impl_App(SF_LAST), art_Port_446859_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_tracking_id_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST))));
  Type_assign(&t_14.value[0], (&t_15), sizeof(struct Tuple2_EC3B57));
  Type_assign(MS_B5E3E6_at(r, art_Port_446859_id_(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_tracking_id_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST)))), (&t_14), sizeof(struct IS_AA0F82));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_ArtNix_connection, r, sizeof(struct MS_B5E3E6));
  STATIC_ASSERT(8 <= MaxMS_30A5B4, "Insufficient maximum for MS[Z, Z] elements.");
  DeclNewMS_30A5B4(t_16);
  t_16.size = (int8_t) 8;
  t_16.value[0] = art_Port_2C63FD_id_(ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_position_status_inn_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_UART_HW(SF_LAST)));
  t_16.value[1] = art_Port_D7D05E_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_flight_plan_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)));
  t_16.value[2] = art_Port_446859_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_tracking_id_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)));
  t_16.value[3] = art_Port_2C63FD_id_(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_recv_map_inn_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_RADIO_HW(SF_LAST)));
  t_16.value[4] = art_Port_FD6239_id_(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_send_status_inn_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_RADIO_HW(SF_LAST)));
  t_16.value[5] = art_Port_9D6F5D_id_(ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_mission_rcv_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST)));
  t_16.value[6] = art_Port_695448_id_(ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_recv_map_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST)));
  t_16.value[7] = art_Port_2D3735_id_(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_mission_window_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST)));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_ArtNix_eventInPorts, (&t_16), sizeof(struct MS_30A5B4));
  STATIC_ASSERT(0 <= MaxMS_2590FE, "Insufficient maximum for MS[Z, Option[art.DataContent]] elements.");
  DeclNewMS_2590FE(t_17);
  t_17.size = (int8_t) 0;
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_ArtNix_frozen, (&t_17), sizeof(struct MS_2590FE));
  DeclNewNone_964667(t_18);
  None_964667_apply(SF &t_18);
  DeclNewMS_2590FE(t_19);
  MS_2590FE_create(SF (MS_2590FE) &t_19, ACT_Demo_Dec2018__camkes_X_ArtNix_maxPortIds(SF_LAST), (Option_8E9F45) (&t_18));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_ArtNix_outgoing, ((MS_2590FE) &t_19), sizeof(struct MS_2590FE));
  _ACT_Demo_Dec2018__camkes_X_ArtNix_isTimeDispatch = F;
}

Z ACT_Demo_Dec2018__camkes_X_ArtNix_maxPortIds(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_ArtNix_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_ArtNix_maxPortIds;
}

art_TimeTriggered ACT_Demo_Dec2018__camkes_X_ArtNix_timeTriggered(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_ArtNix_init(CALLER_LAST);
  return (art_TimeTriggered) &_ACT_Demo_Dec2018__camkes_X_ArtNix_timeTriggered;
}

MS_2590FE ACT_Demo_Dec2018__camkes_X_ArtNix_data(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_ACT_Demo_Dec2018__camkes_X_ArtNix_data;
}

Option_8E9F45 ACT_Demo_Dec2018__camkes_X_ArtNix_noData(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_ArtNix_init(CALLER_LAST);
  return (Option_8E9F45) &_ACT_Demo_Dec2018__camkes_X_ArtNix_noData;
}

MS_B5E3E6 ACT_Demo_Dec2018__camkes_X_ArtNix_connection(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_ArtNix_init(CALLER_LAST);
  return (MS_B5E3E6) &_ACT_Demo_Dec2018__camkes_X_ArtNix_connection;
}

MS_30A5B4 ACT_Demo_Dec2018__camkes_X_ArtNix_eventInPorts(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_ArtNix_init(CALLER_LAST);
  return (MS_30A5B4) &_ACT_Demo_Dec2018__camkes_X_ArtNix_eventInPorts;
}

MS_2590FE ACT_Demo_Dec2018__camkes_X_ArtNix_frozen(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_ACT_Demo_Dec2018__camkes_X_ArtNix_frozen;
}

void ACT_Demo_Dec2018__camkes_X_ArtNix_frozen_a(STACK_FRAME MS_2590FE p_frozen) {
  ACT_Demo_Dec2018__camkes_X_ArtNix_init(CALLER_LAST);
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_ArtNix_frozen, p_frozen, sizeof(struct MS_2590FE));
}

MS_2590FE ACT_Demo_Dec2018__camkes_X_ArtNix_outgoing(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_ACT_Demo_Dec2018__camkes_X_ArtNix_outgoing;
}

void ACT_Demo_Dec2018__camkes_X_ArtNix_outgoing_a(STACK_FRAME MS_2590FE p_outgoing) {
  ACT_Demo_Dec2018__camkes_X_ArtNix_init(CALLER_LAST);
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_ArtNix_outgoing, p_outgoing, sizeof(struct MS_2590FE));
}

B ACT_Demo_Dec2018__camkes_X_ArtNix_isTimeDispatch(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_ArtNix_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_ArtNix_isTimeDispatch;
}

void ACT_Demo_Dec2018__camkes_X_ArtNix_isTimeDispatch_a(STACK_FRAME B p_isTimeDispatch) {
  ACT_Demo_Dec2018__camkes_X_ArtNix_init(CALLER_LAST);
  _ACT_Demo_Dec2018__camkes_X_ArtNix_isTimeDispatch = p_isTimeDispatch;
}

Unit ACT_Demo_Dec2018__camkes_X_ArtNix_timeDispatch(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "ArtNix.scala", "ACT_Demo_Dec2018__camkes_X.ArtNix", "timeDispatch", 0);

  sfUpdateLoc(56);
  ACT_Demo_Dec2018__camkes_X_ArtNix_isTimeDispatch_a(SF (B) T);
}

Unit ACT_Demo_Dec2018__camkes_X_ArtNix_eventDispatch(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "ArtNix.scala", "ACT_Demo_Dec2018__camkes_X.ArtNix", "eventDispatch", 0);

  sfUpdateLoc(60);
  ACT_Demo_Dec2018__camkes_X_ArtNix_isTimeDispatch_a(SF (B) F);
}

Unit ACT_Demo_Dec2018__camkes_X_ArtNix_run(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "ArtNix.scala", "ACT_Demo_Dec2018__camkes_X.ArtNix", "run", 0);
}

Unit ACT_Demo_Dec2018__camkes_X_ArtNix_updateData(STACK_FRAME Z port, art_DataContent d) {
  DeclNewStackFrame(caller, "ArtNix.scala", "ACT_Demo_Dec2018__camkes_X.ArtNix", "updateData", 0);

  sfUpdateLoc(52);
  DeclNewSome_D29615(t_0);
  Some_D29615_apply(SF &t_0, (art_DataContent) d);
  Type_assign(MS_2590FE_at(ACT_Demo_Dec2018__camkes_X_ArtNix_data(SF_LAST), port), (&t_0), sizeof(union Option_8E9F45));
}

Unit ACT_Demo_Dec2018__camkes_X_ArtNix_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNix.scala", "ACT_Demo_Dec2018__camkes_X.ArtNix", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(115);
  String_cprint(title, T);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(116);
  String_cprint(string(": "), T);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(117);
  String_cprint(msg, T);
  cprintln(T);
  cflush(T);

  #endif
}

void ACT_Demo_Dec2018__camkes_X_ArtNix_dispatchStatus(STACK_FRAME art_DispatchStatus result, Z bridgeId) {
  DeclNewStackFrame(caller, "ArtNix.scala", "ACT_Demo_Dec2018__camkes_X.ArtNix", "dispatchStatus", 0);

  sfUpdateLoc(64);
  if (ACT_Demo_Dec2018__camkes_X_ArtNix_isTimeDispatch(SF_LAST)) {
    Type_assign(result, ACT_Demo_Dec2018__camkes_X_ArtNix_timeTriggered(SF_LAST), sizeof(struct art_TimeTriggered));
  } else {

    sfUpdateLoc(67);
    DeclNewIS_82ABD8(_r);
    IS_82ABD8 r = (IS_82ABD8) &_r;
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(r, (&t_0), sizeof(struct IS_82ABD8));

    sfUpdateLoc(68);
    {
      MS_30A5B4 t_2 = ACT_Demo_Dec2018__camkes_X_ArtNix_eventInPorts(SF_LAST);
      int8_t t_3 = (ACT_Demo_Dec2018__camkes_X_ArtNix_eventInPorts(SF_LAST))->size;
      for (int8_t t_4 = 0; t_4 < t_3; t_4++) {
        Z i = t_2->value[t_4];
        if (Option_8E9F45_nonEmpty_(SF MS_2590FE_at(ACT_Demo_Dec2018__camkes_X_ArtNix_data(SF_LAST), i))) {

          sfUpdateLoc(69);
          r = &_r;
          DeclNewIS_82ABD8(t_1);
          IS_82ABD8__append(SF (IS_82ABD8) &t_1, r, i);
          Type_assign(r, ((IS_82ABD8) &t_1), sizeof(struct IS_82ABD8));
        }
      }
    }
    DeclNewart_EventTriggered(t_5);
    art_EventTriggered_apply(SF &t_5, (IS_82ABD8) r);
    Type_assign(result, (&t_5), sizeof(struct art_EventTriggered));
  }
}

Unit ACT_Demo_Dec2018__camkes_X_ArtNix_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "ACT_Demo_Dec2018__camkes_X.ArtNix", "receiveInput", 0);

  sfUpdateLoc(76);
  ACT_Demo_Dec2018__camkes_X_ArtNix_frozen_a(SF (MS_2590FE) ACT_Demo_Dec2018__camkes_X_ArtNix_data(SF_LAST));

  sfUpdateLoc(77);
  {
    IS_82ABD8 t_0 = eventPortIds;
    int8_t t_1 = (eventPortIds)->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      Z i = t_0->value[t_2];

      sfUpdateLoc(78);
      Type_assign(MS_2590FE_at(ACT_Demo_Dec2018__camkes_X_ArtNix_data(SF_LAST), i), ACT_Demo_Dec2018__camkes_X_ArtNix_noData(SF_LAST), sizeof(union Option_8E9F45));
    }
  }
}

void ACT_Demo_Dec2018__camkes_X_ArtNix_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "ArtNix.scala", "ACT_Demo_Dec2018__camkes_X.ArtNix", "getValue", 0);
  Type_assign(result, MS_2590FE_at(ACT_Demo_Dec2018__camkes_X_ArtNix_frozen(SF_LAST), portId), sizeof(union Option_8E9F45));
}

Unit ACT_Demo_Dec2018__camkes_X_ArtNix_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "ACT_Demo_Dec2018__camkes_X.ArtNix", "sendOutput", 0);

  sfUpdateLoc(91);
  {
    IS_82ABD8 t_5 = dataPortIds;
    int8_t t_6 = (dataPortIds)->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      Z p = t_5->value[t_7];

      sfUpdateLoc(92);
      DeclNewOption_8E9F45(t_0);
      Type_assign(&t_0, MS_2590FE_at(ACT_Demo_Dec2018__camkes_X_ArtNix_outgoing(SF_LAST), p), sizeof(union Option_8E9F45));
      B match_92 = F;
      if (!match_92) {
        match_92 = T;
        art_DataContent d_93_19;
        match_92 = match_92 && Some_D29615__is(SF &t_0);
        if (match_92) {
          d_93_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF &t_0));
        }
        if (match_92) {

          sfUpdateLoc(94);
          Type_assign(MS_2590FE_at(ACT_Demo_Dec2018__camkes_X_ArtNix_outgoing(SF_LAST), p), ACT_Demo_Dec2018__camkes_X_ArtNix_noData(SF_LAST), sizeof(union Option_8E9F45));

          sfUpdateLoc(95);
          {
            IS_AA0F82 t_2 = MS_B5E3E6_at(ACT_Demo_Dec2018__camkes_X_ArtNix_connection(SF_LAST), p);
            int8_t t_3 = (MS_B5E3E6_at(ACT_Demo_Dec2018__camkes_X_ArtNix_connection(SF_LAST), p))->size;
            for (int8_t t_4 = 0; t_4 < t_3; t_4++) {
              Tuple2_EC3B57 e = (Tuple2_EC3B57) &(t_2->value[t_4]);

              sfUpdateLoc(96);
              B t_1 = ACT_Demo_Dec2018__camkes_X_PlatformNix_sendAsync(SF Tuple2_EC3B57_1(e), Tuple2_EC3B57_2(e), (art_DataContent) d_93_19);                
            }
          }
        }
      }
      if (!match_92) {
        match_92 = T;
        if (match_92) {
        }
      }
      sfAssert(match_92, "Error when pattern matching.");
    }
  }

  sfUpdateLoc(102);
  {
    IS_82ABD8 t_13 = eventPortIds;
    int8_t t_14 = (eventPortIds)->size;
    for (int8_t t_15 = 0; t_15 < t_14; t_15++) {
      Z p = t_13->value[t_15];

      sfUpdateLoc(103);
      DeclNewOption_8E9F45(t_8);
      Type_assign(&t_8, MS_2590FE_at(ACT_Demo_Dec2018__camkes_X_ArtNix_outgoing(SF_LAST), p), sizeof(union Option_8E9F45));
      B match_103 = F;
      if (!match_103) {
        match_103 = T;
        art_DataContent d_104_19;
        match_103 = match_103 && Some_D29615__is(SF &t_8);
        if (match_103) {
          d_104_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF &t_8));
        }
        if (match_103) {

          sfUpdateLoc(105);
          Type_assign(MS_2590FE_at(ACT_Demo_Dec2018__camkes_X_ArtNix_outgoing(SF_LAST), p), ACT_Demo_Dec2018__camkes_X_ArtNix_noData(SF_LAST), sizeof(union Option_8E9F45));

          sfUpdateLoc(106);
          {
            IS_AA0F82 t_10 = MS_B5E3E6_at(ACT_Demo_Dec2018__camkes_X_ArtNix_connection(SF_LAST), p);
            int8_t t_11 = (MS_B5E3E6_at(ACT_Demo_Dec2018__camkes_X_ArtNix_connection(SF_LAST), p))->size;
            for (int8_t t_12 = 0; t_12 < t_11; t_12++) {
              Tuple2_EC3B57 e = (Tuple2_EC3B57) &(t_10->value[t_12]);

              sfUpdateLoc(107);
              B t_9 = ACT_Demo_Dec2018__camkes_X_PlatformNix_sendAsync(SF Tuple2_EC3B57_1(e), Tuple2_EC3B57_2(e), (art_DataContent) d_104_19);                
            }
          }
        }
      }
      if (!match_103) {
        match_103 = T;
        if (match_103) {
        }
      }
      sfAssert(match_103, "Error when pattern matching.");
    }
  }
}

Unit ACT_Demo_Dec2018__camkes_X_ArtNix_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "ArtNix.scala", "ACT_Demo_Dec2018__camkes_X.ArtNix", "putValue", 0);

  sfUpdateLoc(83);
  DeclNewSome_D29615(t_0);
  Some_D29615_apply(SF &t_0, (art_DataContent) data);
  Type_assign(MS_2590FE_at(ACT_Demo_Dec2018__camkes_X_ArtNix_outgoing(SF_LAST), portId), (&t_0), sizeof(union Option_8E9F45));
}

Unit ACT_Demo_Dec2018__camkes_X_ArtNix_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNix.scala", "ACT_Demo_Dec2018__camkes_X.ArtNix", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(121);
  String_cprint(title, F);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(122);
  String_cprint(string(": "), F);

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(123);
  String_cprint(msg, F);
  cprintln(F);
  cflush(F);

  #endif
}
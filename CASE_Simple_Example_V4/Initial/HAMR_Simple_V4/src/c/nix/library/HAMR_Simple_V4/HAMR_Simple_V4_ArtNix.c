#include <all.h>

B HAMR_Simple_V4_ArtNix_initialized_ = F;

Z _HAMR_Simple_V4_ArtNix_maxPortIds;
struct art_TimeTriggered _HAMR_Simple_V4_ArtNix_timeTriggered;
union Option_8E9F45 _HAMR_Simple_V4_ArtNix_noData;
struct MS_2590FE _HAMR_Simple_V4_ArtNix_data;
struct MS_B5E3E6 _HAMR_Simple_V4_ArtNix_connection;
struct MS_30A5B4 _HAMR_Simple_V4_ArtNix_eventInPorts;
struct MS_2590FE _HAMR_Simple_V4_ArtNix_frozen;
struct MS_2590FE _HAMR_Simple_V4_ArtNix_outgoing;
B _HAMR_Simple_V4_ArtNix_isTimeDispatch;

void HAMR_Simple_V4_ArtNix_init(STACK_FRAME_ONLY) {
  if (HAMR_Simple_V4_ArtNix_initialized_) return;
  HAMR_Simple_V4_ArtNix_initialized_ = T;
  DeclNewStackFrame(caller, "ArtNix.scala", "HAMR_Simple_V4.ArtNix", "<init>", 0);
  HAMR_Simple_V4_ArtNix_init_maxPortIds(SF_LAST);
  HAMR_Simple_V4_ArtNix_init_timeTriggered(SF_LAST);
  HAMR_Simple_V4_ArtNix_init_noData(SF_LAST);
  HAMR_Simple_V4_ArtNix_init_data(SF_LAST);
  HAMR_Simple_V4_ArtNix_init_connection(SF_LAST);
  HAMR_Simple_V4_ArtNix_init_eventInPorts(SF_LAST);
  HAMR_Simple_V4_ArtNix_init_frozen(SF_LAST);
  HAMR_Simple_V4_ArtNix_init_outgoing(SF_LAST);
  HAMR_Simple_V4_ArtNix_init_isTimeDispatch(SF_LAST);
}

Z HAMR_Simple_V4_ArtNix_maxPortIds(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_ArtNix_init(CALLER_LAST);
  return _HAMR_Simple_V4_ArtNix_maxPortIds;
}

art_TimeTriggered HAMR_Simple_V4_ArtNix_timeTriggered(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_ArtNix_init(CALLER_LAST);
  return (art_TimeTriggered) &_HAMR_Simple_V4_ArtNix_timeTriggered;
}

Option_8E9F45 HAMR_Simple_V4_ArtNix_noData(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_ArtNix_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_Simple_V4_ArtNix_noData;
}

MS_2590FE HAMR_Simple_V4_ArtNix_data(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_HAMR_Simple_V4_ArtNix_data;
}

MS_B5E3E6 HAMR_Simple_V4_ArtNix_connection(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_ArtNix_init(CALLER_LAST);
  return (MS_B5E3E6) &_HAMR_Simple_V4_ArtNix_connection;
}

MS_30A5B4 HAMR_Simple_V4_ArtNix_eventInPorts(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_ArtNix_init(CALLER_LAST);
  return (MS_30A5B4) &_HAMR_Simple_V4_ArtNix_eventInPorts;
}

MS_2590FE HAMR_Simple_V4_ArtNix_frozen(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_HAMR_Simple_V4_ArtNix_frozen;
}

void HAMR_Simple_V4_ArtNix_frozen_a(STACK_FRAME MS_2590FE p_frozen) {
  HAMR_Simple_V4_ArtNix_init(CALLER_LAST);
  Type_assign(&_HAMR_Simple_V4_ArtNix_frozen, p_frozen, sizeof(struct MS_2590FE));
}

MS_2590FE HAMR_Simple_V4_ArtNix_outgoing(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_ArtNix_init(CALLER_LAST);
  return (MS_2590FE) &_HAMR_Simple_V4_ArtNix_outgoing;
}

void HAMR_Simple_V4_ArtNix_outgoing_a(STACK_FRAME MS_2590FE p_outgoing) {
  HAMR_Simple_V4_ArtNix_init(CALLER_LAST);
  Type_assign(&_HAMR_Simple_V4_ArtNix_outgoing, p_outgoing, sizeof(struct MS_2590FE));
}

B HAMR_Simple_V4_ArtNix_isTimeDispatch(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_ArtNix_init(CALLER_LAST);
  return _HAMR_Simple_V4_ArtNix_isTimeDispatch;
}

void HAMR_Simple_V4_ArtNix_isTimeDispatch_a(STACK_FRAME B p_isTimeDispatch) {
  HAMR_Simple_V4_ArtNix_init(CALLER_LAST);
  _HAMR_Simple_V4_ArtNix_isTimeDispatch = p_isTimeDispatch;
}

Unit HAMR_Simple_V4_ArtNix_eventDispatch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNix.scala", "HAMR_Simple_V4.ArtNix", "eventDispatch", 0);

  sfUpdateLoc(54);
  {
    HAMR_Simple_V4_ArtNix_isTimeDispatch_a(SF (B) F);
  }
}

Unit HAMR_Simple_V4_ArtNix_updateData(STACK_FRAME Z port, art_DataContent d) {
  DeclNewStackFrame(caller, "ArtNix.scala", "HAMR_Simple_V4.ArtNix", "updateData", 0);

  sfUpdateLoc(46);
  {
    DeclNewSome_D29615(t_0);
    Some_D29615_apply(SF &t_0, (art_DataContent) d);
    MS_2590FE_up(HAMR_Simple_V4_ArtNix_data(SF_LAST), port, (Option_8E9F45) (&t_0));
  }
}

Unit HAMR_Simple_V4_ArtNix_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ArtNix.scala", "HAMR_Simple_V4.ArtNix", "run", 0);
}

Unit HAMR_Simple_V4_ArtNix_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNix.scala", "HAMR_Simple_V4.ArtNix", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(109);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(110);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(111);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_Simple_V4_ArtNix_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNix.scala", "HAMR_Simple_V4.ArtNix", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(121);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(122);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(123);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_Simple_V4_ArtNix_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "ArtNix.scala", "HAMR_Simple_V4.ArtNix", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(115);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(116);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(117);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void HAMR_Simple_V4_ArtNix_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "ArtNix.scala", "HAMR_Simple_V4.ArtNix", "getValue", 0);
  Type_assign(result, MS_2590FE_at(HAMR_Simple_V4_ArtNix_frozen(SF_LAST), portId), sizeof(union Option_8E9F45));
  return;
}

Unit HAMR_Simple_V4_ArtNix_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "ArtNix.scala", "HAMR_Simple_V4.ArtNix", "putValue", 0);

  sfUpdateLoc(77);
  {
    DeclNewSome_D29615(t_0);
    Some_D29615_apply(SF &t_0, (art_DataContent) data);
    MS_2590FE_up(HAMR_Simple_V4_ArtNix_outgoing(SF_LAST), portId, (Option_8E9F45) (&t_0));
  }
}

static inline B HAMR_Simple_V4_ArtNix_sendOutput_extract_87_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, art_DataContent *_d_87_19) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_d_87_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

static inline B HAMR_Simple_V4_ArtNix_sendOutput_extract_92_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0) {
  return T;
}

static inline B HAMR_Simple_V4_ArtNix_sendOutput_extract_98_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_8, art_DataContent *_d_98_19) {
  if (!Some_D29615__is(SF t_8)) return F;
  *_d_98_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_8));
  return T;
}

static inline B HAMR_Simple_V4_ArtNix_sendOutput_extract_103_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_8) {
  return T;
}

Unit HAMR_Simple_V4_ArtNix_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "HAMR_Simple_V4.ArtNix", "sendOutput", 0);

  sfUpdateLoc(85);
  {
    IS_82ABD8 t_5 = dataPortIds;
    int8_t t_6 = (dataPortIds)->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      Z p = t_5->value[t_7];

      sfUpdateLoc(86);
      DeclNewOption_8E9F45(t_0);
      {
        Type_assign(&t_0, MS_2590FE_at(HAMR_Simple_V4_ArtNix_outgoing(SF_LAST), p), sizeof(union Option_8E9F45));
      }
      B match_86_7 = F;
      if (!match_86_7) {
        art_DataContent d_87_19;
        match_86_7 = HAMR_Simple_V4_ArtNix_sendOutput_extract_87_14_8E9F45(SF ((Option_8E9F45) &t_0), &d_87_19);
        if (match_86_7) {

          sfUpdateLoc(88);
          {
            MS_2590FE_up(HAMR_Simple_V4_ArtNix_outgoing(SF_LAST), p, (Option_8E9F45) HAMR_Simple_V4_ArtNix_noData(SF_LAST));
          }

          sfUpdateLoc(89);
          {
            IS_AA0F82 t_2 = MS_B5E3E6_at(HAMR_Simple_V4_ArtNix_connection(SF_LAST), p);
            int8_t t_3 = (MS_B5E3E6_at(HAMR_Simple_V4_ArtNix_connection(SF_LAST), p))->size;
            for (int8_t t_4 = 0; t_4 < t_3; t_4++) {
              Tuple2_EC3B57 e = (Tuple2_EC3B57) &(t_2->value[t_4]);

              sfUpdateLoc(90);
              {
                B t_1 = HAMR_Simple_V4_PlatformNix_sendAsync(SF Tuple2_EC3B57_1(e), Tuple2_EC3B57_2(e), (art_DataContent) d_87_19);
              }
            }
          }
        }
      }
      if (!match_86_7) {
        match_86_7 = HAMR_Simple_V4_ArtNix_sendOutput_extract_92_14_8E9F45(SF ((Option_8E9F45) &t_0));
        if (match_86_7) {
        }
      }
      sfAssert(match_86_7, "Error when pattern matching.");
    }
  }

  sfUpdateLoc(96);
  {
    IS_82ABD8 t_13 = eventPortIds;
    int8_t t_14 = (eventPortIds)->size;
    for (int8_t t_15 = 0; t_15 < t_14; t_15++) {
      Z p = t_13->value[t_15];

      sfUpdateLoc(97);
      DeclNewOption_8E9F45(t_8);
      {
        Type_assign(&t_8, MS_2590FE_at(HAMR_Simple_V4_ArtNix_outgoing(SF_LAST), p), sizeof(union Option_8E9F45));
      }
      B match_97_7 = F;
      if (!match_97_7) {
        art_DataContent d_98_19;
        match_97_7 = HAMR_Simple_V4_ArtNix_sendOutput_extract_98_14_8E9F45(SF ((Option_8E9F45) &t_8), &d_98_19);
        if (match_97_7) {

          sfUpdateLoc(99);
          {
            MS_2590FE_up(HAMR_Simple_V4_ArtNix_outgoing(SF_LAST), p, (Option_8E9F45) HAMR_Simple_V4_ArtNix_noData(SF_LAST));
          }

          sfUpdateLoc(100);
          {
            IS_AA0F82 t_10 = MS_B5E3E6_at(HAMR_Simple_V4_ArtNix_connection(SF_LAST), p);
            int8_t t_11 = (MS_B5E3E6_at(HAMR_Simple_V4_ArtNix_connection(SF_LAST), p))->size;
            for (int8_t t_12 = 0; t_12 < t_11; t_12++) {
              Tuple2_EC3B57 e = (Tuple2_EC3B57) &(t_10->value[t_12]);

              sfUpdateLoc(101);
              {
                B t_9 = HAMR_Simple_V4_PlatformNix_sendAsync(SF Tuple2_EC3B57_1(e), Tuple2_EC3B57_2(e), (art_DataContent) d_98_19);
              }
            }
          }
        }
      }
      if (!match_97_7) {
        match_97_7 = HAMR_Simple_V4_ArtNix_sendOutput_extract_103_14_8E9F45(SF ((Option_8E9F45) &t_8));
        if (match_97_7) {
        }
      }
      sfAssert(match_97_7, "Error when pattern matching.");
    }
  }
}

void HAMR_Simple_V4_ArtNix_dispatchStatus(STACK_FRAME art_DispatchStatus result, Z bridgeId) {
  DeclNewStackFrame(caller, "ArtNix.scala", "HAMR_Simple_V4.ArtNix", "dispatchStatus", 0);

  sfUpdateLoc(58);
  B t_0;
  {
    t_0 = HAMR_Simple_V4_ArtNix_isTimeDispatch(SF_LAST);
  }
  if (t_0) {
    Type_assign(result, HAMR_Simple_V4_ArtNix_timeTriggered(SF_LAST), sizeof(struct art_TimeTriggered));
    return;
  } else {

    sfUpdateLoc(61);
    DeclNewIS_82ABD8(_r);
    IS_82ABD8 r = (IS_82ABD8) &_r;
    {
      STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
      DeclNewIS_82ABD8(t_1);
      t_1.size = (int8_t) 0;
      Type_assign(r, (&t_1), sizeof(struct IS_82ABD8));
    }

    sfUpdateLoc(62);
    {
      MS_30A5B4 t_4 = HAMR_Simple_V4_ArtNix_eventInPorts(SF_LAST);
      int8_t t_5 = (HAMR_Simple_V4_ArtNix_eventInPorts(SF_LAST))->size;
      for (int8_t t_6 = 0; t_6 < t_5; t_6++) {
        Z i = t_4->value[t_6];
        B t_3 = Option_8E9F45_nonEmpty_(SF MS_2590FE_at(HAMR_Simple_V4_ArtNix_data(SF_LAST), i));
        if (t_3) {

          sfUpdateLoc(63);
          {
            DeclNewIS_82ABD8(t_2);
            IS_82ABD8__append(SF (IS_82ABD8) &t_2, r, i);
            Type_assign(r, ((IS_82ABD8) &t_2), sizeof(struct IS_82ABD8));
          }
        }
      }
    }
    DeclNewart_EventTriggered(t_7);
    art_EventTriggered_apply(SF &t_7, (IS_82ABD8) r);
    Type_assign(result, (&t_7), sizeof(struct art_EventTriggered));
    return;
  }
}

Unit HAMR_Simple_V4_ArtNix_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "ArtNix.scala", "HAMR_Simple_V4.ArtNix", "receiveInput", 0);

  sfUpdateLoc(70);
  {
    HAMR_Simple_V4_ArtNix_frozen_a(SF (MS_2590FE) HAMR_Simple_V4_ArtNix_data(SF_LAST));
  }

  sfUpdateLoc(71);
  {
    IS_82ABD8 t_0 = eventPortIds;
    int8_t t_1 = (eventPortIds)->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      Z i = t_0->value[t_2];

      sfUpdateLoc(72);
      {
        MS_2590FE_up(HAMR_Simple_V4_ArtNix_data(SF_LAST), i, (Option_8E9F45) HAMR_Simple_V4_ArtNix_noData(SF_LAST));
      }
    }
  }
}

void HAMR_Simple_V4_ArtNix_init_maxPortIds(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  _HAMR_Simple_V4_ArtNix_maxPortIds = Z__add(HAMR_Simple_V4_IPCPorts_Main(SF_LAST), Z_C(1));
};

void HAMR_Simple_V4_ArtNix_init_timeTriggered(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  DeclNewart_TimeTriggered(t_0);
  art_TimeTriggered_apply(SF &t_0);
  Type_assign(&_HAMR_Simple_V4_ArtNix_timeTriggered, (&t_0), sizeof(struct art_TimeTriggered));
};

void HAMR_Simple_V4_ArtNix_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  DeclNewNone_964667(t_1);
  None_964667_apply(SF &t_1);
  Type_assign(&_HAMR_Simple_V4_ArtNix_noData, (&t_1), sizeof(struct None_964667));
};

void HAMR_Simple_V4_ArtNix_init_data(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  DeclNewMS_2590FE(t_2);
  MS_2590FE_create(SF (MS_2590FE) &t_2, HAMR_Simple_V4_ArtNix_maxPortIds(SF_LAST), (Option_8E9F45) HAMR_Simple_V4_ArtNix_noData(SF_LAST));
  Type_assign(&_HAMR_Simple_V4_ArtNix_data, ((MS_2590FE) &t_2), sizeof(struct MS_2590FE));
};

void HAMR_Simple_V4_ArtNix_init_connection(STACK_FRAME_ONLY) {
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
      DeclNewIS_AA0F82(t_3);
      t_3.size = (int8_t) 0;
      DeclNewMS_B5E3E6(t_4);
      MS_B5E3E6_create(SF (MS_B5E3E6) &t_4, HAMR_Simple_V4_ArtNix_maxPortIds(SF_LAST), (IS_AA0F82) (&t_3));
      Type_assign(r, ((MS_B5E3E6) &t_4), sizeof(struct MS_B5E3E6));
    }

    sfUpdateLoc(19);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_5);
      t_5.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_6);
      Tuple2_EC3B57_apply(SF &t_6, HAMR_Simple_V4_IPCPorts_RadioDriver_Impl_SW_Radio_App(SF_LAST), art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_AttestationTesterResponse_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio(SF_LAST))));
      IS_AA0F82_up(&t_5, 0, (Tuple2_EC3B57) (&t_6));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_AttestationResponse_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_AttestationTester(SF_LAST))), (IS_AA0F82) (&t_5));
    }

    sfUpdateLoc(22);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_7);
      t_7.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_8);
      Tuple2_EC3B57_apply(SF &t_8, HAMR_Simple_V4_IPCPorts_AttestationTester_Impl_SW_AttestationTester_App(SF_LAST), art_Port_45E54D_id_(HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_AttestationRequest_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_AttestationTester(SF_LAST))));
      IS_AA0F82_up(&t_7, 0, (Tuple2_EC3B57) (&t_8));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_AttestationTesterRequest_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio(SF_LAST))), (IS_AA0F82) (&t_7));
    }

    sfUpdateLoc(25);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_9);
      t_9.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_10);
      Tuple2_EC3B57_apply(SF &t_10, HAMR_Simple_V4_IPCPorts_FlightPlanner_Impl_SW_FlightPlanner_App(SF_LAST), art_Port_45E54D_id_(HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_MissionCommand_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightPlanner(SF_LAST))));
      IS_AA0F82_up(&t_9, 0, (Tuple2_EC3B57) (&t_10));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_MissionCommand_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio(SF_LAST))), (IS_AA0F82) (&t_9));
    }

    sfUpdateLoc(28);
    {
      STATIC_ASSERT(1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
      DeclNewIS_AA0F82(t_11);
      t_11.size = (int8_t) 1;
      DeclNewTuple2_EC3B57(t_12);
      Tuple2_EC3B57_apply(SF &t_12, HAMR_Simple_V4_IPCPorts_FlightController_Impl_SW_FlightController_App(SF_LAST), art_Port_45E54D_id_(HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_FlightPlan_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightController(SF_LAST))));
      IS_AA0F82_up(&t_11, 0, (Tuple2_EC3B57) (&t_12));
      MS_B5E3E6_up(r, art_Port_45E54D_id_(HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_FlightPlan_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightPlanner(SF_LAST))), (IS_AA0F82) (&t_11));
    }
    Type_assign(&_HAMR_Simple_V4_ArtNix_connection, r, sizeof(struct MS_B5E3E6));
  }
};

void HAMR_Simple_V4_ArtNix_init_eventInPorts(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(34);
  STATIC_ASSERT(5 <= MaxMS_30A5B4, "Insufficient maximum for MS[Z, Z] elements.");
  DeclNewMS_30A5B4(t_13);
  t_13.size = (int8_t) 5;
  MS_30A5B4_up(&t_13, 0, (Z) art_Port_45E54D_id_(HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_AttestationRequest_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_AttestationTester(SF_LAST))));
  MS_30A5B4_up(&t_13, 1, (Z) art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_AttestationTesterResponse_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio(SF_LAST))));
  MS_30A5B4_up(&t_13, 2, (Z) art_Port_45E54D_id_(HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_MissionCommand_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightPlanner(SF_LAST))));
  MS_30A5B4_up(&t_13, 3, (Z) art_Port_45E54D_id_(HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_FlightPlan_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightController(SF_LAST))));
  MS_30A5B4_up(&t_13, 4, (Z) art_Port_9CBF18_id_(HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_Alert_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightController(SF_LAST))));
  Type_assign(&_HAMR_Simple_V4_ArtNix_eventInPorts, (&t_13), sizeof(struct MS_30A5B4));
};

void HAMR_Simple_V4_ArtNix_init_frozen(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(41);
  DeclNewMS_2590FE(t_14);
  MS_2590FE_create(SF (MS_2590FE) &t_14, HAMR_Simple_V4_ArtNix_maxPortIds(SF_LAST), (Option_8E9F45) HAMR_Simple_V4_ArtNix_noData(SF_LAST));
  Type_assign(&_HAMR_Simple_V4_ArtNix_frozen, ((MS_2590FE) &t_14), sizeof(struct MS_2590FE));
};

void HAMR_Simple_V4_ArtNix_init_outgoing(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(42);
  DeclNewMS_2590FE(t_15);
  MS_2590FE_create(SF (MS_2590FE) &t_15, HAMR_Simple_V4_ArtNix_maxPortIds(SF_LAST), (Option_8E9F45) HAMR_Simple_V4_ArtNix_noData(SF_LAST));
  Type_assign(&_HAMR_Simple_V4_ArtNix_outgoing, ((MS_2590FE) &t_15), sizeof(struct MS_2590FE));
};

void HAMR_Simple_V4_ArtNix_init_isTimeDispatch(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(43);
  _HAMR_Simple_V4_ArtNix_isTimeDispatch = F;
};
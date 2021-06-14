#include <all.h>

B HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_initialized_ = F;

union art_Bridge_EntryPoints _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_entryPoints;
Z _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_appPortId;
union Option_882048 _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_appPortIdOpt;
Z _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_FlightPlanPortId;
union Option_882048 _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_FlightPlanPortIdOpt;
Z _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_AlertPortId;
union Option_882048 _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_AlertPortIdOpt;

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init(STACK_FRAME_ONLY) {
  if (HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_initialized_) return;
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_initialized_ = T;
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_App.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_App", "<init>", 0);
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init_entryPoints(SF_LAST);
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init_appPortId(SF_LAST);
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init_appPortIdOpt(SF_LAST);
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init_FlightPlanPortId(SF_LAST);
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init_FlightPlanPortIdOpt(SF_LAST);
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init_AlertPortId(SF_LAST);
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init_AlertPortIdOpt(SF_LAST);
}

art_Bridge_EntryPoints HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_entryPoints(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_entryPoints;
}

Z HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_appPortId(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init(CALLER_LAST);
  return _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_appPortId;
}

Option_882048 HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_appPortIdOpt(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init(CALLER_LAST);
  return (Option_882048) &_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_appPortIdOpt;
}

Z HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_FlightPlanPortId(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init(CALLER_LAST);
  return _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_FlightPlanPortId;
}

Option_882048 HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_FlightPlanPortIdOpt(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init(CALLER_LAST);
  return (Option_882048) &_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_FlightPlanPortIdOpt;
}

Z HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_AlertPortId(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init(CALLER_LAST);
  return _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_AlertPortId;
}

Option_882048 HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_AlertPortIdOpt(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init(CALLER_LAST);
  return (Option_882048) &_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_AlertPortIdOpt;
}

Z HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_App.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_App", "main", 0);

  sfUpdateLoc(67);
  Z seed;
  {
    B t_0;
    {
      Z t_1 = IS_948B60_size(SF args);
      t_0 = Z__eq(t_1, Z_C(1));
    }
    if (t_0) {

      sfUpdateLoc(68);
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

  sfUpdateLoc(74);
  {
    HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_initialiseArchitecture(SF seed);
  }

  sfUpdateLoc(76);
  {
    DeclNewMBox2_1CBFC4(t_5);
    HAMR_Simple_V4_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_5);
    HAMR_Simple_V4_PlatformNix_receive(SF (Option_882048) HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_5));
  }

  sfUpdateLoc(78);
  {
    HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_initialise(SF_LAST);
  }

  sfUpdateLoc(80);
  {
    DeclNewMBox2_1CBFC4(t_6);
    HAMR_Simple_V4_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_6);
    HAMR_Simple_V4_PlatformNix_receive(SF (Option_882048) HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_6));
  }

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(82);
  {
    String_cprint(string("FlightController_Impl_SW_FlightController_App starting ..."), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  sfUpdateLoc(84);
  {
    HAMR_Simple_V4_ArtNix_eventDispatch(SF_LAST);
  }

  sfUpdateLoc(86);
  B terminated;
  {
    terminated = F;
  }

  sfUpdateLoc(87);
  B t_87_5;
  {
    t_87_5 = (!terminated);
  }
  while(t_87_5) {

    sfUpdateLoc(88);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_7);
      HAMR_Simple_V4_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_7);
      Type_assign(out, ((MBox2_1029D1) &t_7), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(89);
    {
      HAMR_Simple_V4_PlatformNix_receiveAsync(SF (Option_882048) HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_appPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(90);
    B t_8;
    {
      B t_9 = Option_8E9F45_isEmpty_(SF MBox2_1029D1_value2_(out));
      t_8 = t_9;
    }
    if (t_8) {

      sfUpdateLoc(91);
      {
        HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_compute(SF_LAST);
      }
    } else {

      sfUpdateLoc(93);
      {
        terminated = T;
      }
    }

    sfUpdateLoc(87);
    t_87_5 = (!terminated);
  }

  sfUpdateLoc(96);
  {
    HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_exit(SF_LAST);
  }

  sfUpdateLoc(98);
  {
    HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_App.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_App", "atExit", 0);

  sfUpdateLoc(130);
  {
    HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_exit(SF_LAST);
  }
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_App.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_App", "initialiseArchitecture", 0);

  sfUpdateLoc(21);
  {
    HAMR_Simple_V4_PlatformNix_initialise(SF seed, (Option_882048) HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_appPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(22);
  {
    HAMR_Simple_V4_PlatformNix_initialise(SF seed, (Option_882048) HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_FlightPlanPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(23);
  {
    HAMR_Simple_V4_PlatformNix_initialise(SF seed, (Option_882048) HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_AlertPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(25);
  {
    art_Art_run(SF (art_ArchitectureDescription) HAMR_Simple_V4_Arch_ad(SF_LAST));
  }
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_App.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_App", "initialise", 0);

  sfUpdateLoc(29);
  {
    art_Bridge_EntryPoints_initialise_(SF HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_entryPoints(SF_LAST));
  }
}

static inline B HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_compute_extract_39_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, HAMR_Simple_V4_Base_Types_Bits_Payload *_v_39_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  if (!HAMR_Simple_V4_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_1)))) return F;
  *_v_39_19 = (HAMR_Simple_V4_Base_Types_Bits_Payload) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

static inline B HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_compute_extract_40_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, art_DataContent *_v_40_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  *_v_40_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

static inline B HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_compute_extract_41_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1) {
  if (!None_964667__is(SF t_1)) return F;
  return T;
}

static inline B HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_compute_extract_48_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6, art_Empty *_v_48_19) {
  if (!Some_D29615__is(SF t_6)) return F;
  if (!art_Empty__is(SF Some_D29615_value_(Some_D29615__as(SF t_6)))) return F;
  *_v_48_19 = (art_Empty) Some_D29615_value_(Some_D29615__as(SF t_6));
  return T;
}

static inline B HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_compute_extract_49_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6, art_DataContent *_v_49_19) {
  if (!Some_D29615__is(SF t_6)) return F;
  *_v_49_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_6));
  return T;
}

static inline B HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_compute_extract_50_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6) {
  if (!None_964667__is(SF t_6)) return F;
  return T;
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_App.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_App", "compute", 0);

  sfUpdateLoc(33);
  B dispatch;
  {
    dispatch = F;
  }
  {

    sfUpdateLoc(36);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_0);
      HAMR_Simple_V4_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_0);
      Type_assign(out, ((MBox2_1029D1) &t_0), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(37);
    {
      HAMR_Simple_V4_PlatformNix_receiveAsync(SF (Option_882048) HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_FlightPlanPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(38);
    Option_8E9F45 t_1 = MBox2_1029D1_value2_(out);
    B match_38_11 = F;
    if (!match_38_11) {
      HAMR_Simple_V4_Base_Types_Bits_Payload v_39_19;
      match_38_11 = HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_compute_extract_39_14_8E9F45(SF t_1, &v_39_19);
      if (match_38_11) {

        sfUpdateLoc(39);
        {
          HAMR_Simple_V4_ArtNix_updateData(SF HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_FlightPlanPortId(SF_LAST), (art_DataContent) v_39_19);
        }

        sfUpdateLoc(39);
        {
          dispatch = T;
        }
      }
    }
    if (!match_38_11) {
      art_DataContent v_40_19;
      match_38_11 = HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_compute_extract_40_14_8E9F45(SF t_1, &v_40_19);
      if (match_38_11) {

        sfUpdateLoc(40);
        {
          DeclNewString(t_2);
          String t_3 = (String) &t_2;
          DeclNewString(t_4);
          String_string_(SF (String) &t_4, string("Unexpected payload on port FlightPlan.  Expecting something of type Base_Types.Bits_Payload but received "));
          art_DataContent_string_(SF (String) &t_4, v_40_19);
          String_string_(SF (String) &t_4, string(""));
          String_string_(SF t_3, ((String) &t_4));
          sfAbort(t_3->value);
          abort();
        }
      }
    }
    if (!match_38_11) {
      match_38_11 = HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_compute_extract_41_14_8E9F45(SF t_1);
      if (match_38_11) {
      }
    }
    sfAssert(match_38_11, "Error when pattern matching.");
  }
  {

    sfUpdateLoc(45);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_5);
      HAMR_Simple_V4_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_5);
      Type_assign(out, ((MBox2_1029D1) &t_5), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(46);
    {
      HAMR_Simple_V4_PlatformNix_receiveAsync(SF (Option_882048) HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_AlertPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(47);
    Option_8E9F45 t_6 = MBox2_1029D1_value2_(out);
    B match_47_11 = F;
    if (!match_47_11) {
      art_Empty v_48_19;
      match_47_11 = HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_compute_extract_48_14_8E9F45(SF t_6, &v_48_19);
      if (match_47_11) {

        sfUpdateLoc(48);
        {
          HAMR_Simple_V4_ArtNix_updateData(SF HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_AlertPortId(SF_LAST), (art_DataContent) v_48_19);
        }

        sfUpdateLoc(48);
        {
          dispatch = T;
        }
      }
    }
    if (!match_47_11) {
      art_DataContent v_49_19;
      match_47_11 = HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_compute_extract_49_14_8E9F45(SF t_6, &v_49_19);
      if (match_47_11) {

        sfUpdateLoc(49);
        {
          DeclNewString(t_7);
          String t_8 = (String) &t_7;
          DeclNewString(t_9);
          String_string_(SF (String) &t_9, string("Unexpected payload on port Alert.  Expecting something of type art.Empty but received "));
          art_DataContent_string_(SF (String) &t_9, v_49_19);
          String_string_(SF (String) &t_9, string(""));
          String_string_(SF t_8, ((String) &t_9));
          sfAbort(t_8->value);
          abort();
        }
      }
    }
    if (!match_47_11) {
      match_47_11 = HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_compute_extract_50_14_8E9F45(SF t_6);
      if (match_47_11) {
      }
    }
    sfAssert(match_47_11, "Error when pattern matching.");
  }

  sfUpdateLoc(53);
  B t_10;
  {
    t_10 = dispatch;
  }
  if (t_10) {

    sfUpdateLoc(54);
    {
      art_Bridge_EntryPoints_compute_(SF HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_entryPoints(SF_LAST));
    }

    sfUpdateLoc(55);
    {
      HAMR_Simple_V4_Process_sleep(SF Z_C(500));
    }
  } else {

    sfUpdateLoc(57);
    {
      HAMR_Simple_V4_Process_sleep(SF Z_C(10));
    }
  }
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_App.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_App", "exit", 0);

  sfUpdateLoc(125);
  {
    HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_finalise(SF_LAST);
  }

  sfUpdateLoc(126);
  {
    HAMR_Simple_V4_PlatformNix_finalise(SF_LAST);
  }
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_App.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_App.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(108);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string(""));
    art_DataContent_string_(SF (String) &t_0, a);
    String_string_(SF (String) &t_0, string(""));
    String_cprint(((String) &t_0), T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_App.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_App", "touch", 0);

  sfUpdateLoc(104);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(105);
    {
      HAMR_Simple_V4_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(110);
    {
      DeclNewIS_C4F575(t_2);
      HAMR_Simple_V4_Base_Types_Bits_example(SF (IS_C4F575) &t_2);
      DeclNewHAMR_Simple_V4_Base_Types_Bits_Payload(t_1);
      HAMR_Simple_V4_Base_Types_Bits_Payload_apply(SF &t_1, (IS_C4F575) ((IS_C4F575) &t_2));
      HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_touch_printDataContent(SF (art_DataContent) (&t_1));
    }

    sfUpdateLoc(111);
    {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_touch_printDataContent(SF (art_DataContent) (&t_3));
    }

    sfUpdateLoc(113);
    {
      DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api(t_4);
      Option_6F9BAD_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &t_4, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_initialization_api(SF_LAST));
      HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api_logInfo_(SF ((HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &t_4), (String) string(""));
    }

    sfUpdateLoc(114);
    {
      DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api(t_5);
      Option_6F9BAD_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &t_5, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_initialization_api(SF_LAST));
      HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api_logDebug_(SF ((HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &t_5), (String) string(""));
    }

    sfUpdateLoc(115);
    {
      DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api(t_6);
      Option_6F9BAD_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &t_6, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_initialization_api(SF_LAST));
      HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api_logError_(SF ((HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &t_6), (String) string(""));
    }

    sfUpdateLoc(116);
    {
      DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Operational_Api(t_7);
      Option_3A1F68_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_7, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_operational_api(SF_LAST));
      HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_logInfo_(SF ((HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_7), (String) string(""));
    }

    sfUpdateLoc(117);
    {
      DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Operational_Api(t_8);
      Option_3A1F68_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_8, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_operational_api(SF_LAST));
      HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_logDebug_(SF ((HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(118);
    {
      DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Operational_Api(t_9);
      Option_3A1F68_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_9, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_operational_api(SF_LAST));
      HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_logError_(SF ((HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(119);
    Option_30119F apiUsage_FlightPlan;
    DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Operational_Api(t_10);
    Option_3A1F68_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_10, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_11);
    HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_FlightPlan_(SF (Option_30119F) &t_11, ((HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_10));
    apiUsage_FlightPlan = (Option_30119F) ((Option_30119F) &t_11);

    sfUpdateLoc(120);
    Option_C622DB apiUsage_Alert;
    DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Operational_Api(t_12);
    Option_3A1F68_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_12, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_C622DB(t_13);
    HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_Alert_(SF (Option_C622DB) &t_13, ((HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_12));
    apiUsage_Alert = (Option_C622DB) ((Option_C622DB) &t_13);
  }
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_App.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_App", "finalise", 0);

  sfUpdateLoc(62);
  {
    art_Bridge_EntryPoints_finalise_(SF HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_entryPoints(SF_LAST));
  }
}

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  Type_assign(&_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_entryPoints, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_entryPoints_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightController(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init_appPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_appPortId = HAMR_Simple_V4_IPCPorts_FlightController_Impl_SW_FlightController_App(SF_LAST);
};

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init_appPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_appPortId(SF_LAST));
  Type_assign(&_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
};

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init_FlightPlanPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_FlightPlanPortId = art_Port_45E54D_id_(HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_FlightPlan_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightController(SF_LAST)));
};

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init_FlightPlanPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_FlightPlanPortId(SF_LAST));
  Type_assign(&_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_FlightPlanPortIdOpt, (&t_1), sizeof(struct Some_488F47));
};

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init_AlertPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(17);
  _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_AlertPortId = art_Port_9CBF18_id_(HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_Alert_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightController(SF_LAST)));
};

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_init_AlertPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_AlertPortId(SF_LAST));
  Type_assign(&_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_App_AlertPortIdOpt, (&t_2), sizeof(struct Some_488F47));
};
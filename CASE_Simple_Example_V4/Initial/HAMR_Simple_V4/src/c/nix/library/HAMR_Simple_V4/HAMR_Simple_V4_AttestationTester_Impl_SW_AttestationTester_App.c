#include <all.h>

B HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_initialized_ = F;

union art_Bridge_EntryPoints _HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_entryPoints;
Z _HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_appPortId;
union Option_882048 _HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_appPortIdOpt;
Z _HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_AttestationRequestPortId;
union Option_882048 _HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_AttestationRequestPortIdOpt;

void HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_init(STACK_FRAME_ONLY) {
  if (HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_initialized_) return;
  HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_initialized_ = T;
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_App.scala", "HAMR_Simple_V4.AttestationTester_Impl_SW_AttestationTester_App", "<init>", 0);
  HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_init_entryPoints(SF_LAST);
  HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_init_appPortId(SF_LAST);
  HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_init_appPortIdOpt(SF_LAST);
  HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_init_AttestationRequestPortId(SF_LAST);
  HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_init_AttestationRequestPortIdOpt(SF_LAST);
}

art_Bridge_EntryPoints HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_entryPoints(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_entryPoints;
}

Z HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_appPortId(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_init(CALLER_LAST);
  return _HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_appPortId;
}

Option_882048 HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_appPortIdOpt(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_init(CALLER_LAST);
  return (Option_882048) &_HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_appPortIdOpt;
}

Z HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_AttestationRequestPortId(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_init(CALLER_LAST);
  return _HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_AttestationRequestPortId;
}

Option_882048 HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_AttestationRequestPortIdOpt(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_init(CALLER_LAST);
  return (Option_882048) &_HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_AttestationRequestPortIdOpt;
}

Z HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_App.scala", "HAMR_Simple_V4.AttestationTester_Impl_SW_AttestationTester_App", "main", 0);

  sfUpdateLoc(55);
  Z seed;
  {
    B t_0;
    {
      Z t_1 = IS_948B60_size(SF args);
      t_0 = Z__eq(t_1, Z_C(1));
    }
    if (t_0) {

      sfUpdateLoc(56);
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

  sfUpdateLoc(62);
  {
    HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_initialiseArchitecture(SF seed);
  }

  sfUpdateLoc(64);
  {
    DeclNewMBox2_1CBFC4(t_5);
    HAMR_Simple_V4_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_5);
    HAMR_Simple_V4_PlatformNix_receive(SF (Option_882048) HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_5));
  }

  sfUpdateLoc(66);
  {
    HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_initialise(SF_LAST);
  }

  sfUpdateLoc(68);
  {
    DeclNewMBox2_1CBFC4(t_6);
    HAMR_Simple_V4_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_6);
    HAMR_Simple_V4_PlatformNix_receive(SF (Option_882048) HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_6));
  }

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(70);
  {
    String_cprint(string("AttestationTester_Impl_SW_AttestationTester_App starting ..."), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  sfUpdateLoc(72);
  {
    HAMR_Simple_V4_ArtNix_eventDispatch(SF_LAST);
  }

  sfUpdateLoc(74);
  B terminated;
  {
    terminated = F;
  }

  sfUpdateLoc(75);
  B t_75_5;
  {
    t_75_5 = (!terminated);
  }
  while(t_75_5) {

    sfUpdateLoc(76);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_7);
      HAMR_Simple_V4_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_7);
      Type_assign(out, ((MBox2_1029D1) &t_7), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(77);
    {
      HAMR_Simple_V4_PlatformNix_receiveAsync(SF (Option_882048) HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_appPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(78);
    B t_8;
    {
      B t_9 = Option_8E9F45_isEmpty_(SF MBox2_1029D1_value2_(out));
      t_8 = t_9;
    }
    if (t_8) {

      sfUpdateLoc(79);
      {
        HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_compute(SF_LAST);
      }
    } else {

      sfUpdateLoc(81);
      {
        terminated = T;
      }
    }

    sfUpdateLoc(75);
    t_75_5 = (!terminated);
  }

  sfUpdateLoc(84);
  {
    HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_exit(SF_LAST);
  }

  sfUpdateLoc(86);
  {
    HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_App.scala", "HAMR_Simple_V4.AttestationTester_Impl_SW_AttestationTester_App", "atExit", 0);

  sfUpdateLoc(119);
  {
    HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_exit(SF_LAST);
  }
}

Unit HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_App.scala", "HAMR_Simple_V4.AttestationTester_Impl_SW_AttestationTester_App", "initialiseArchitecture", 0);

  sfUpdateLoc(19);
  {
    HAMR_Simple_V4_PlatformNix_initialise(SF seed, (Option_882048) HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_appPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(20);
  {
    HAMR_Simple_V4_PlatformNix_initialise(SF seed, (Option_882048) HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_AttestationRequestPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(22);
  {
    art_Art_run(SF (art_ArchitectureDescription) HAMR_Simple_V4_Arch_ad(SF_LAST));
  }
}

Unit HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_App.scala", "HAMR_Simple_V4.AttestationTester_Impl_SW_AttestationTester_App", "initialise", 0);

  sfUpdateLoc(26);
  {
    art_Bridge_EntryPoints_initialise_(SF HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_entryPoints(SF_LAST));
  }
}

static inline B HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_compute_extract_36_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, HAMR_Simple_V4_Base_Types_Bits_Payload *_v_36_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  if (!HAMR_Simple_V4_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_1)))) return F;
  *_v_36_19 = (HAMR_Simple_V4_Base_Types_Bits_Payload) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

static inline B HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_compute_extract_37_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, art_DataContent *_v_37_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  *_v_37_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

static inline B HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_compute_extract_38_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1) {
  if (!None_964667__is(SF t_1)) return F;
  return T;
}

Unit HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_App.scala", "HAMR_Simple_V4.AttestationTester_Impl_SW_AttestationTester_App", "compute", 0);

  sfUpdateLoc(30);
  B dispatch;
  {
    dispatch = F;
  }
  {

    sfUpdateLoc(33);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_0);
      HAMR_Simple_V4_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_0);
      Type_assign(out, ((MBox2_1029D1) &t_0), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(34);
    {
      HAMR_Simple_V4_PlatformNix_receiveAsync(SF (Option_882048) HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_AttestationRequestPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(35);
    Option_8E9F45 t_1 = MBox2_1029D1_value2_(out);
    B match_35_11 = F;
    if (!match_35_11) {
      HAMR_Simple_V4_Base_Types_Bits_Payload v_36_19;
      match_35_11 = HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_compute_extract_36_14_8E9F45(SF t_1, &v_36_19);
      if (match_35_11) {

        sfUpdateLoc(36);
        {
          HAMR_Simple_V4_ArtNix_updateData(SF HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_AttestationRequestPortId(SF_LAST), (art_DataContent) v_36_19);
        }

        sfUpdateLoc(36);
        {
          dispatch = T;
        }
      }
    }
    if (!match_35_11) {
      art_DataContent v_37_19;
      match_35_11 = HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_compute_extract_37_14_8E9F45(SF t_1, &v_37_19);
      if (match_35_11) {

        sfUpdateLoc(37);
        {
          DeclNewString(t_2);
          String t_3 = (String) &t_2;
          DeclNewString(t_4);
          String_string_(SF (String) &t_4, string("Unexpected payload on port AttestationRequest.  Expecting something of type Base_Types.Bits_Payload but received "));
          art_DataContent_string_(SF (String) &t_4, v_37_19);
          String_string_(SF (String) &t_4, string(""));
          String_string_(SF t_3, ((String) &t_4));
          sfAbort(t_3->value);
          abort();
        }
      }
    }
    if (!match_35_11) {
      match_35_11 = HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_compute_extract_38_14_8E9F45(SF t_1);
      if (match_35_11) {
      }
    }
    sfAssert(match_35_11, "Error when pattern matching.");
  }

  sfUpdateLoc(41);
  B t_5;
  {
    t_5 = dispatch;
  }
  if (t_5) {

    sfUpdateLoc(42);
    {
      art_Bridge_EntryPoints_compute_(SF HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_entryPoints(SF_LAST));
    }

    sfUpdateLoc(43);
    {
      HAMR_Simple_V4_Process_sleep(SF Z_C(500));
    }
  } else {

    sfUpdateLoc(45);
    {
      HAMR_Simple_V4_Process_sleep(SF Z_C(10));
    }
  }
}

Unit HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_App.scala", "HAMR_Simple_V4.AttestationTester_Impl_SW_AttestationTester_App", "exit", 0);

  sfUpdateLoc(114);
  {
    HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_finalise(SF_LAST);
  }

  sfUpdateLoc(115);
  {
    HAMR_Simple_V4_PlatformNix_finalise(SF_LAST);
  }
}

Unit HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_App.scala", "HAMR_Simple_V4.AttestationTester_Impl_SW_AttestationTester_App.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(96);
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

Unit HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_App.scala", "HAMR_Simple_V4.AttestationTester_Impl_SW_AttestationTester_App", "touch", 0);

  sfUpdateLoc(92);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(93);
    {
      HAMR_Simple_V4_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(98);
    {
      DeclNewIS_C4F575(t_2);
      HAMR_Simple_V4_Base_Types_Bits_example(SF (IS_C4F575) &t_2);
      DeclNewHAMR_Simple_V4_Base_Types_Bits_Payload(t_1);
      HAMR_Simple_V4_Base_Types_Bits_Payload_apply(SF &t_1, (IS_C4F575) ((IS_C4F575) &t_2));
      HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_touch_printDataContent(SF (art_DataContent) (&t_1));
    }

    sfUpdateLoc(99);
    {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_touch_printDataContent(SF (art_DataContent) (&t_3));
    }

    sfUpdateLoc(101);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api(t_4);
      Option_680CAA_get_(SF (HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &t_4, HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_c_initialization_api(SF_LAST));
      HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api_logInfo_(SF ((HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &t_4), (String) string(""));
    }

    sfUpdateLoc(102);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api(t_5);
      Option_680CAA_get_(SF (HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &t_5, HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_c_initialization_api(SF_LAST));
      HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api_logDebug_(SF ((HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &t_5), (String) string(""));
    }

    sfUpdateLoc(103);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api(t_6);
      Option_680CAA_get_(SF (HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &t_6, HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_c_initialization_api(SF_LAST));
      HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api_logError_(SF ((HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &t_6), (String) string(""));
    }

    sfUpdateLoc(104);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api(t_7);
      Option_089975_get_(SF (HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) &t_7, HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_c_operational_api(SF_LAST));
      HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_logInfo_(SF ((HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) &t_7), (String) string(""));
    }

    sfUpdateLoc(105);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api(t_8);
      Option_089975_get_(SF (HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) &t_8, HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_c_operational_api(SF_LAST));
      HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_logDebug_(SF ((HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(106);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api(t_9);
      Option_089975_get_(SF (HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) &t_9, HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_c_operational_api(SF_LAST));
      HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_logError_(SF ((HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(107);
    Option_30119F apiUsage_AttestationRequest;
    DeclNewHAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api(t_10);
    Option_089975_get_(SF (HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) &t_10, HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_11);
    HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_get_AttestationRequest_(SF (Option_30119F) &t_11, ((HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) &t_10));
    apiUsage_AttestationRequest = (Option_30119F) ((Option_30119F) &t_11);

    sfUpdateLoc(108);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api(t_12);
      Option_680CAA_get_(SF (HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &t_12, HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_13);
      HAMR_Simple_V4_Base_Types_Bits_example(SF (IS_C4F575) &t_13);
      HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api_put_AttestationResponse_(SF ((HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &t_12), (IS_C4F575) ((IS_C4F575) &t_13));
    }

    sfUpdateLoc(109);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api(t_14);
      Option_089975_get_(SF (HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) &t_14, HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_15);
      HAMR_Simple_V4_Base_Types_Bits_example(SF (IS_C4F575) &t_15);
      HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_put_AttestationResponse_(SF ((HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) &t_14), (IS_C4F575) ((IS_C4F575) &t_15));
    }
  }
}

Unit HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_App.scala", "HAMR_Simple_V4.AttestationTester_Impl_SW_AttestationTester_App", "finalise", 0);

  sfUpdateLoc(50);
  {
    art_Bridge_EntryPoints_finalise_(SF HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_entryPoints(SF_LAST));
  }
}

void HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  Type_assign(&_HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_entryPoints, HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_entryPoints_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_AttestationTester(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_init_appPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  _HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_appPortId = HAMR_Simple_V4_IPCPorts_AttestationTester_Impl_SW_AttestationTester_App(SF_LAST);
};

void HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_init_appPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_appPortId(SF_LAST));
  Type_assign(&_HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
};

void HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_init_AttestationRequestPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  _HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_AttestationRequestPortId = art_Port_45E54D_id_(HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_AttestationRequest_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_AttestationTester(SF_LAST)));
};

void HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_init_AttestationRequestPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_AttestationRequestPortId(SF_LAST));
  Type_assign(&_HAMR_Simple_V4_AttestationTester_Impl_SW_AttestationTester_App_AttestationRequestPortIdOpt, (&t_1), sizeof(struct Some_488F47));
};
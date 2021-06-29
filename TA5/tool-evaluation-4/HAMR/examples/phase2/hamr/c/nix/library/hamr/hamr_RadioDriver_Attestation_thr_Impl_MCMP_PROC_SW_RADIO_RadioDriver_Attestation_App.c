#include <all.h>

B hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_initialized_ = F;

union art_Bridge_EntryPoints _hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_entryPoints;
Z _hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_appPortId;
union Option_882048 _hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_appPortIdOpt;
Z _hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_recv_dataPortId;
union Option_882048 _hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_recv_dataPortIdOpt;

void hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_init(STACK_FRAME_ONLY) {
  if (hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_initialized_) return;
  hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_initialized_ = T;
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App.scala", "hamr.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App", "<init>", 0);
  hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_init_entryPoints(SF_LAST);
  hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_init_appPortId(SF_LAST);
  hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_init_appPortIdOpt(SF_LAST);
  hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_init_recv_dataPortId(SF_LAST);
  hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_init_recv_dataPortIdOpt(SF_LAST);
}

art_Bridge_EntryPoints hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_entryPoints(STACK_FRAME_ONLY) {
  hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_entryPoints;
}

Z hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_appPortId(STACK_FRAME_ONLY) {
  hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_init(CALLER_LAST);
  return _hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_appPortId;
}

Option_882048 hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_appPortIdOpt(STACK_FRAME_ONLY) {
  hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_appPortIdOpt;
}

Z hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_recv_dataPortId(STACK_FRAME_ONLY) {
  hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_init(CALLER_LAST);
  return _hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_recv_dataPortId;
}

Option_882048 hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_recv_dataPortIdOpt(STACK_FRAME_ONLY) {
  hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_recv_dataPortIdOpt;
}

Z hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App.scala", "hamr.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App", "main", 0);

  sfUpdateLoc(50);
  Z seed;
  {
    B t_0;
    {
      Z t_1 = IS_948B60_size(SF args);
      t_0 = Z__eq(t_1, Z_C(1));
    }
    if (t_0) {

      sfUpdateLoc(51);
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

  sfUpdateLoc(57);
  {
    hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_initialiseArchitecture(SF seed);
  }

  sfUpdateLoc(59);
  {
    DeclNewMBox2_1CBFC4(t_5);
    hamr_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_5);
    hamr_PlatformNix_receive(SF (Option_882048) hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_5));
  }

  sfUpdateLoc(61);
  {
    hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_initialise(SF_LAST);
  }

  sfUpdateLoc(63);
  {
    DeclNewMBox2_1CBFC4(t_6);
    hamr_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_6);
    hamr_PlatformNix_receive(SF (Option_882048) hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_6));
  }

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(65);
  {
    String_cprint(string("RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App starting ..."), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  sfUpdateLoc(67);
  {
    hamr_ArtNix_timeDispatch(SF_LAST);
  }

  sfUpdateLoc(69);
  B terminated;
  {
    terminated = F;
  }

  sfUpdateLoc(70);
  B t_70_5;
  {
    t_70_5 = (!terminated);
  }
  while(t_70_5) {

    sfUpdateLoc(71);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_7);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_7);
      Type_assign(out, ((MBox2_1029D1) &t_7), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(72);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_appPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(73);
    B t_8;
    {
      B t_9 = Option_8E9F45_isEmpty_(SF MBox2_1029D1_value2_(out));
      t_8 = t_9;
    }
    if (t_8) {

      sfUpdateLoc(74);
      {
        hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_compute(SF_LAST);
      }
    } else {

      sfUpdateLoc(76);
      {
        terminated = T;
      }
    }

    sfUpdateLoc(70);
    t_70_5 = (!terminated);
  }

  sfUpdateLoc(79);
  {
    hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_exit(SF_LAST);
  }

  sfUpdateLoc(81);
  {
    hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App.scala", "hamr.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App", "atExit", 0);

  sfUpdateLoc(122);
  {
    hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_exit(SF_LAST);
  }
}

Unit hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App.scala", "hamr.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App", "initialiseArchitecture", 0);

  sfUpdateLoc(19);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_appPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(20);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_recv_dataPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(22);
  {
    art_Art_run(SF (art_ArchitectureDescription) hamr_Arch_ad(SF_LAST));
  }
}

Unit hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App.scala", "hamr.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App", "initialise", 0);

  sfUpdateLoc(26);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_entryPoints(SF_LAST));
  }
}

static inline B hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_compute_extract_35_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, hamr_Base_Types_Bits_Payload *_v_35_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_1)))) return F;
  *_v_35_19 = (hamr_Base_Types_Bits_Payload) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

static inline B hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_compute_extract_36_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, art_DataContent *_v_36_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  *_v_36_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

static inline B hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_compute_extract_37_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1) {
  if (!None_964667__is(SF t_1)) return F;
  return T;
}

Unit hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App.scala", "hamr.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App", "compute", 0);
  {

    sfUpdateLoc(32);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_0);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_0);
      Type_assign(out, ((MBox2_1029D1) &t_0), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(33);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_recv_dataPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(34);
    Option_8E9F45 t_1 = MBox2_1029D1_value2_(out);
    B match_34_11 = F;
    if (!match_34_11) {
      hamr_Base_Types_Bits_Payload v_35_19;
      match_34_11 = hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_compute_extract_35_14_8E9F45(SF t_1, &v_35_19);
      if (match_34_11) {

        sfUpdateLoc(35);
        {
          hamr_ArtNix_updateData(SF hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_recv_dataPortId(SF_LAST), (art_DataContent) v_35_19);
        }
      }
    }
    if (!match_34_11) {
      art_DataContent v_36_19;
      match_34_11 = hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_compute_extract_36_14_8E9F45(SF t_1, &v_36_19);
      if (match_34_11) {

        sfUpdateLoc(36);
        {
          DeclNewString(t_2);
          String t_3 = (String) &t_2;
          DeclNewString(t_4);
          String_string_(SF (String) &t_4, string("Unexpected payload on port recv_data.  Expecting something of type Base_Types.Bits_Payload but received "));
          art_DataContent_string_(SF (String) &t_4, v_36_19);
          String_string_(SF (String) &t_4, string(""));
          String_string_(SF t_3, ((String) &t_4));
          sfAbort(t_3->value);
          abort();
        }
      }
    }
    if (!match_34_11) {
      match_34_11 = hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_compute_extract_37_14_8E9F45(SF t_1);
      if (match_34_11) {
      }
    }
    sfAssert(match_34_11, "Error when pattern matching.");
  }

  sfUpdateLoc(40);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_entryPoints(SF_LAST));
  }

  sfUpdateLoc(41);
  {
    hamr_Process_sleep(SF Z_C(500));
  }
}

Unit hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App.scala", "hamr.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App", "exit", 0);

  sfUpdateLoc(117);
  {
    hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_finalise(SF_LAST);
  }

  sfUpdateLoc(118);
  {
    hamr_PlatformNix_finalise(SF_LAST);
  }
}

Unit hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App.scala", "hamr.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(91);
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

Unit hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App.scala", "hamr.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App", "touch", 0);

  sfUpdateLoc(87);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(88);
    {
      hamr_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(93);
    {
      DeclNewIS_C4F575(t_2);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_2);
      DeclNewhamr_Base_Types_Bits_Payload(t_1);
      hamr_Base_Types_Bits_Payload_apply(SF &t_1, (IS_C4F575) ((IS_C4F575) &t_2));
      hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_touch_printDataContent(SF (art_DataContent) (&t_1));
    }

    sfUpdateLoc(94);
    {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_touch_printDataContent(SF (art_DataContent) (&t_3));
    }

    sfUpdateLoc(96);
    {
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(t_4);
      Option_9CA19A_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &t_4, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));
      hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_logInfo_(SF ((hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &t_4), (String) string(""));
    }

    sfUpdateLoc(97);
    {
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(t_5);
      Option_9CA19A_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &t_5, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));
      hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_logDebug_(SF ((hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &t_5), (String) string(""));
    }

    sfUpdateLoc(98);
    {
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(t_6);
      Option_9CA19A_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &t_6, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));
      hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_logError_(SF ((hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &t_6), (String) string(""));
    }

    sfUpdateLoc(99);
    {
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api(t_7);
      Option_B4EF66_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_7, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api(SF_LAST));
      hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_logInfo_(SF ((hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_7), (String) string(""));
    }

    sfUpdateLoc(100);
    {
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api(t_8);
      Option_B4EF66_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_8, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api(SF_LAST));
      hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_logDebug_(SF ((hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(101);
    {
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api(t_9);
      Option_B4EF66_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_9, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api(SF_LAST));
      hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_logError_(SF ((hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(102);
    Option_30119F apiUsage_recv_data;
    DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api(t_10);
    Option_B4EF66_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_10, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_11);
    hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_get_recv_data_(SF (Option_30119F) &t_11, ((hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_10));
    apiUsage_recv_data = (Option_30119F) ((Option_30119F) &t_11);

    sfUpdateLoc(103);
    {
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(t_12);
      Option_9CA19A_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &t_12, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_13);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_13);
      hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_put_send_data_(SF ((hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &t_12), (IS_C4F575) ((IS_C4F575) &t_13));
    }

    sfUpdateLoc(104);
    {
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api(t_14);
      Option_B4EF66_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_14, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_15);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_15);
      hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_put_send_data_(SF ((hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_14), (IS_C4F575) ((IS_C4F575) &t_15));
    }

    sfUpdateLoc(105);
    {
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(t_16);
      Option_9CA19A_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &t_16, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_17);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_17);
      hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_put_trusted_ids_(SF ((hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &t_16), (IS_C4F575) ((IS_C4F575) &t_17));
    }

    sfUpdateLoc(106);
    {
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api(t_18);
      Option_B4EF66_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_18, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_19);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_19);
      hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_put_trusted_ids_(SF ((hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_18), (IS_C4F575) ((IS_C4F575) &t_19));
    }

    sfUpdateLoc(107);
    {
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(t_20);
      Option_9CA19A_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &t_20, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_21);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_21);
      hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_put_AutomationRequest_(SF ((hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &t_20), (IS_C4F575) ((IS_C4F575) &t_21));
    }

    sfUpdateLoc(108);
    {
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api(t_22);
      Option_B4EF66_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_22, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_23);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_23);
      hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_put_AutomationRequest_(SF ((hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_22), (IS_C4F575) ((IS_C4F575) &t_23));
    }

    sfUpdateLoc(109);
    {
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(t_24);
      Option_9CA19A_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &t_24, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_25);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_25);
      hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_put_OperatingRegion_(SF ((hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &t_24), (IS_C4F575) ((IS_C4F575) &t_25));
    }

    sfUpdateLoc(110);
    {
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api(t_26);
      Option_B4EF66_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_26, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_27);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_27);
      hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_put_OperatingRegion_(SF ((hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_26), (IS_C4F575) ((IS_C4F575) &t_27));
    }

    sfUpdateLoc(111);
    {
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(t_28);
      Option_9CA19A_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &t_28, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_29);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_29);
      hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_put_LineSearchTask_(SF ((hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &t_28), (IS_C4F575) ((IS_C4F575) &t_29));
    }

    sfUpdateLoc(112);
    {
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api(t_30);
      Option_B4EF66_get_(SF (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_30, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_31);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_31);
      hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_put_LineSearchTask_(SF ((hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &t_30), (IS_C4F575) ((IS_C4F575) &t_31));
    }
  }
}

Unit hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App.scala", "hamr.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App", "finalise", 0);

  sfUpdateLoc(45);
  {
    art_Bridge_EntryPoints_finalise_(SF hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_entryPoints(SF_LAST));
  }
}

void hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  Type_assign(&_hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_entryPoints, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_entryPoints_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_init_appPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  _hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_appPortId = hamr_IPCPorts_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App(SF_LAST);
};

void hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_init_appPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_appPortId(SF_LAST));
  Type_assign(&_hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
};

void hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_init_recv_dataPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  _hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_recv_dataPortId = art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_recv_data_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF_LAST)));
};

void hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_init_recv_dataPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_recv_dataPortId(SF_LAST));
  Type_assign(&_hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App_recv_dataPortIdOpt, (&t_1), sizeof(struct Some_488F47));
};
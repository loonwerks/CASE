#include <all.h>

B HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_initialized_ = F;

union art_Bridge_EntryPoints _HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_entryPoints;
Z _HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_appPortId;
union Option_882048 _HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_appPortIdOpt;

void HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_init(STACK_FRAME_ONLY) {
  if (HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_initialized_) return;
  HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_initialized_ = T;
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_App.scala", "HAMR_Simple_V4.RadioDriver_Impl_SW_Radio_App", "<init>", 0);
  HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_init_entryPoints(SF_LAST);
  HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_init_appPortId(SF_LAST);
  HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_init_appPortIdOpt(SF_LAST);
}

art_Bridge_EntryPoints HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_entryPoints(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_entryPoints;
}

Z HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_appPortId(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_init(CALLER_LAST);
  return _HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_appPortId;
}

Option_882048 HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_appPortIdOpt(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_init(CALLER_LAST);
  return (Option_882048) &_HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_appPortIdOpt;
}

Z HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_App.scala", "HAMR_Simple_V4.RadioDriver_Impl_SW_Radio_App", "main", 0);

  sfUpdateLoc(43);
  Z seed;
  {
    B t_0;
    {
      Z t_1 = IS_948B60_size(SF args);
      t_0 = Z__eq(t_1, Z_C(1));
    }
    if (t_0) {

      sfUpdateLoc(44);
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

  sfUpdateLoc(50);
  {
    HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_initialiseArchitecture(SF seed);
  }

  sfUpdateLoc(52);
  {
    DeclNewMBox2_1CBFC4(t_5);
    HAMR_Simple_V4_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_5);
    HAMR_Simple_V4_PlatformNix_receive(SF (Option_882048) HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_5));
  }

  sfUpdateLoc(54);
  {
    HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_initialise(SF_LAST);
  }

  sfUpdateLoc(56);
  {
    DeclNewMBox2_1CBFC4(t_6);
    HAMR_Simple_V4_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_6);
    HAMR_Simple_V4_PlatformNix_receive(SF (Option_882048) HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_6));
  }

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(58);
  {
    String_cprint(string("RadioDriver_Impl_SW_Radio_App starting ..."), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  sfUpdateLoc(60);
  {
    HAMR_Simple_V4_ArtNix_eventDispatch(SF_LAST);
  }

  sfUpdateLoc(62);
  B terminated;
  {
    terminated = F;
  }

  sfUpdateLoc(63);
  B t_63_5;
  {
    t_63_5 = (!terminated);
  }
  while(t_63_5) {

    sfUpdateLoc(64);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_7);
      HAMR_Simple_V4_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_7);
      Type_assign(out, ((MBox2_1029D1) &t_7), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(65);
    {
      HAMR_Simple_V4_PlatformNix_receiveAsync(SF (Option_882048) HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_appPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(66);
    B t_8;
    {
      B t_9 = Option_8E9F45_isEmpty_(SF MBox2_1029D1_value2_(out));
      t_8 = t_9;
    }
    if (t_8) {

      sfUpdateLoc(67);
      {
        HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_compute(SF_LAST);
      }
    } else {

      sfUpdateLoc(69);
      {
        terminated = T;
      }
    }

    sfUpdateLoc(63);
    t_63_5 = (!terminated);
  }

  sfUpdateLoc(72);
  {
    HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_exit(SF_LAST);
  }

  sfUpdateLoc(74);
  {
    HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_App.scala", "HAMR_Simple_V4.RadioDriver_Impl_SW_Radio_App", "atExit", 0);

  sfUpdateLoc(106);
  {
    HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_exit(SF_LAST);
  }
}

Unit HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_App.scala", "HAMR_Simple_V4.RadioDriver_Impl_SW_Radio_App", "initialiseArchitecture", 0);

  sfUpdateLoc(17);
  {
    HAMR_Simple_V4_PlatformNix_initialise(SF seed, (Option_882048) HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_appPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(19);
  {
    art_Art_run(SF (art_ArchitectureDescription) HAMR_Simple_V4_Arch_ad(SF_LAST));
  }
}

Unit HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_App.scala", "HAMR_Simple_V4.RadioDriver_Impl_SW_Radio_App", "initialise", 0);

  sfUpdateLoc(23);
  {
    art_Bridge_EntryPoints_initialise_(SF HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_entryPoints(SF_LAST));
  }
}

Unit HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_App.scala", "HAMR_Simple_V4.RadioDriver_Impl_SW_Radio_App", "compute", 0);

  sfUpdateLoc(27);
  B dispatch;
  {
    dispatch = F;
  }

  sfUpdateLoc(29);
  B t_0;
  {
    t_0 = dispatch;
  }
  if (t_0) {

    sfUpdateLoc(30);
    {
      art_Bridge_EntryPoints_compute_(SF HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_entryPoints(SF_LAST));
    }

    sfUpdateLoc(31);
    {
      HAMR_Simple_V4_Process_sleep(SF Z_C(1));
    }
  } else {

    sfUpdateLoc(33);
    {
      HAMR_Simple_V4_Process_sleep(SF Z_C(10));
    }
  }
}

Unit HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_App.scala", "HAMR_Simple_V4.RadioDriver_Impl_SW_Radio_App", "exit", 0);

  sfUpdateLoc(101);
  {
    HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_finalise(SF_LAST);
  }

  sfUpdateLoc(102);
  {
    HAMR_Simple_V4_PlatformNix_finalise(SF_LAST);
  }
}

Unit HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_App.scala", "HAMR_Simple_V4.RadioDriver_Impl_SW_Radio_App.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(84);
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

Unit HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_App.scala", "HAMR_Simple_V4.RadioDriver_Impl_SW_Radio_App", "touch", 0);

  sfUpdateLoc(80);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(81);
    {
      HAMR_Simple_V4_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(86);
    {
      DeclNewIS_C4F575(t_2);
      HAMR_Simple_V4_Base_Types_Bits_example(SF (IS_C4F575) &t_2);
      DeclNewHAMR_Simple_V4_Base_Types_Bits_Payload(t_1);
      HAMR_Simple_V4_Base_Types_Bits_Payload_apply(SF &t_1, (IS_C4F575) ((IS_C4F575) &t_2));
      HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_touch_printDataContent(SF (art_DataContent) (&t_1));
    }

    sfUpdateLoc(87);
    {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_touch_printDataContent(SF (art_DataContent) (&t_3));
    }

    sfUpdateLoc(89);
    {
      DeclNewHAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api(t_4);
      Option_7C94AD_get_(SF (HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &t_4, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_c_initialization_api(SF_LAST));
      HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_logInfo_(SF ((HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &t_4), (String) string(""));
    }

    sfUpdateLoc(90);
    {
      DeclNewHAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api(t_5);
      Option_7C94AD_get_(SF (HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &t_5, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_c_initialization_api(SF_LAST));
      HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_logDebug_(SF ((HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &t_5), (String) string(""));
    }

    sfUpdateLoc(91);
    {
      DeclNewHAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api(t_6);
      Option_7C94AD_get_(SF (HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &t_6, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_c_initialization_api(SF_LAST));
      HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_logError_(SF ((HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &t_6), (String) string(""));
    }

    sfUpdateLoc(92);
    {
      DeclNewHAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api(t_7);
      Option_994630_get_(SF (HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &t_7, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_c_operational_api(SF_LAST));
      HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_logInfo_(SF ((HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &t_7), (String) string(""));
    }

    sfUpdateLoc(93);
    {
      DeclNewHAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api(t_8);
      Option_994630_get_(SF (HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &t_8, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_c_operational_api(SF_LAST));
      HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_logDebug_(SF ((HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(94);
    {
      DeclNewHAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api(t_9);
      Option_994630_get_(SF (HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &t_9, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_c_operational_api(SF_LAST));
      HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_logError_(SF ((HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(95);
    {
      DeclNewHAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api(t_10);
      Option_7C94AD_get_(SF (HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &t_10, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_11);
      HAMR_Simple_V4_Base_Types_Bits_example(SF (IS_C4F575) &t_11);
      HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_put_MissionCommand_(SF ((HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &t_10), (IS_C4F575) ((IS_C4F575) &t_11));
    }

    sfUpdateLoc(96);
    {
      DeclNewHAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api(t_12);
      Option_994630_get_(SF (HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &t_12, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_13);
      HAMR_Simple_V4_Base_Types_Bits_example(SF (IS_C4F575) &t_13);
      HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_put_MissionCommand_(SF ((HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &t_12), (IS_C4F575) ((IS_C4F575) &t_13));
    }
  }
}

Unit HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_App.scala", "HAMR_Simple_V4.RadioDriver_Impl_SW_Radio_App", "finalise", 0);

  sfUpdateLoc(38);
  {
    art_Bridge_EntryPoints_finalise_(SF HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_entryPoints(SF_LAST));
  }
}

void HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  Type_assign(&_HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_entryPoints, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_entryPoints_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_init_appPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  _HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_appPortId = HAMR_Simple_V4_IPCPorts_RadioDriver_Impl_SW_Radio_App(SF_LAST);
};

void HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_init_appPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_appPortId(SF_LAST));
  Type_assign(&_HAMR_Simple_V4_RadioDriver_Impl_SW_Radio_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
};
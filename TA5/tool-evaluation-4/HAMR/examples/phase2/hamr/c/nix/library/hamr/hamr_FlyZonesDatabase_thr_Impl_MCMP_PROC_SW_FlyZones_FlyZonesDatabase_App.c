#include <all.h>

B hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_initialized_ = F;

union art_Bridge_EntryPoints _hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_entryPoints;
Z _hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_appPortId;
union Option_882048 _hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_appPortIdOpt;

void hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_init(STACK_FRAME_ONLY) {
  if (hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_initialized_) return;
  hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_initialized_ = T;
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App.scala", "hamr.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App", "<init>", 0);
  hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_init_entryPoints(SF_LAST);
  hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_init_appPortId(SF_LAST);
  hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_init_appPortIdOpt(SF_LAST);
}

art_Bridge_EntryPoints hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_entryPoints(STACK_FRAME_ONLY) {
  hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_entryPoints;
}

Z hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_appPortId(STACK_FRAME_ONLY) {
  hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_init(CALLER_LAST);
  return _hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_appPortId;
}

Option_882048 hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_appPortIdOpt(STACK_FRAME_ONLY) {
  hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_appPortIdOpt;
}

Z hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App.scala", "hamr.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App", "main", 0);

  sfUpdateLoc(38);
  Z seed;
  {
    B t_0;
    {
      Z t_1 = IS_948B60_size(SF args);
      t_0 = Z__eq(t_1, Z_C(1));
    }
    if (t_0) {

      sfUpdateLoc(39);
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

  sfUpdateLoc(45);
  {
    hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_initialiseArchitecture(SF seed);
  }

  sfUpdateLoc(47);
  {
    DeclNewMBox2_1CBFC4(t_5);
    hamr_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_5);
    hamr_PlatformNix_receive(SF (Option_882048) hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_5));
  }

  sfUpdateLoc(49);
  {
    hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_initialise(SF_LAST);
  }

  sfUpdateLoc(51);
  {
    DeclNewMBox2_1CBFC4(t_6);
    hamr_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_6);
    hamr_PlatformNix_receive(SF (Option_882048) hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_6));
  }

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(53);
  {
    String_cprint(string("FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App starting ..."), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  sfUpdateLoc(55);
  {
    hamr_ArtNix_timeDispatch(SF_LAST);
  }

  sfUpdateLoc(57);
  B terminated;
  {
    terminated = F;
  }

  sfUpdateLoc(58);
  B t_58_5;
  {
    t_58_5 = (!terminated);
  }
  while(t_58_5) {

    sfUpdateLoc(59);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_7);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_7);
      Type_assign(out, ((MBox2_1029D1) &t_7), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(60);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_appPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(61);
    B t_8;
    {
      B t_9 = Option_8E9F45_isEmpty_(SF MBox2_1029D1_value2_(out));
      t_8 = t_9;
    }
    if (t_8) {

      sfUpdateLoc(62);
      {
        hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_compute(SF_LAST);
      }
    } else {

      sfUpdateLoc(64);
      {
        terminated = T;
      }
    }

    sfUpdateLoc(58);
    t_58_5 = (!terminated);
  }

  sfUpdateLoc(67);
  {
    hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_exit(SF_LAST);
  }

  sfUpdateLoc(69);
  {
    hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App.scala", "hamr.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App", "atExit", 0);

  sfUpdateLoc(103);
  {
    hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_exit(SF_LAST);
  }
}

Unit hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App.scala", "hamr.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App", "initialiseArchitecture", 0);

  sfUpdateLoc(17);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_appPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(19);
  {
    art_Art_run(SF (art_ArchitectureDescription) hamr_Arch_ad(SF_LAST));
  }
}

Unit hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App.scala", "hamr.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App", "initialise", 0);

  sfUpdateLoc(23);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_entryPoints(SF_LAST));
  }
}

Unit hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App.scala", "hamr.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App", "compute", 0);

  sfUpdateLoc(28);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_entryPoints(SF_LAST));
  }

  sfUpdateLoc(29);
  {
    hamr_Process_sleep(SF Z_C(500));
  }
}

Unit hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App.scala", "hamr.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App", "exit", 0);

  sfUpdateLoc(98);
  {
    hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_finalise(SF_LAST);
  }

  sfUpdateLoc(99);
  {
    hamr_PlatformNix_finalise(SF_LAST);
  }
}

Unit hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App.scala", "hamr.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(79);
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

Unit hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App.scala", "hamr.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App", "touch", 0);

  sfUpdateLoc(75);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(76);
    {
      hamr_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(81);
    {
      DeclNewIS_C4F575(t_2);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_2);
      DeclNewhamr_Base_Types_Bits_Payload(t_1);
      hamr_Base_Types_Bits_Payload_apply(SF &t_1, (IS_C4F575) ((IS_C4F575) &t_2));
      hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_touch_printDataContent(SF (art_DataContent) (&t_1));
    }

    sfUpdateLoc(82);
    {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_touch_printDataContent(SF (art_DataContent) (&t_3));
    }

    sfUpdateLoc(84);
    {
      DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api(t_4);
      Option_C04856_get_(SF (hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) &t_4, hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_c_initialization_api(SF_LAST));
      hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api_logInfo_(SF ((hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) &t_4), (String) string(""));
    }

    sfUpdateLoc(85);
    {
      DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api(t_5);
      Option_C04856_get_(SF (hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) &t_5, hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_c_initialization_api(SF_LAST));
      hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api_logDebug_(SF ((hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) &t_5), (String) string(""));
    }

    sfUpdateLoc(86);
    {
      DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api(t_6);
      Option_C04856_get_(SF (hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) &t_6, hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_c_initialization_api(SF_LAST));
      hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api_logError_(SF ((hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) &t_6), (String) string(""));
    }

    sfUpdateLoc(87);
    {
      DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api(t_7);
      Option_F010C8_get_(SF (hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) &t_7, hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_c_operational_api(SF_LAST));
      hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api_logInfo_(SF ((hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) &t_7), (String) string(""));
    }

    sfUpdateLoc(88);
    {
      DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api(t_8);
      Option_F010C8_get_(SF (hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) &t_8, hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_c_operational_api(SF_LAST));
      hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api_logDebug_(SF ((hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(89);
    {
      DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api(t_9);
      Option_F010C8_get_(SF (hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) &t_9, hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_c_operational_api(SF_LAST));
      hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api_logError_(SF ((hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(90);
    {
      DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api(t_10);
      Option_C04856_get_(SF (hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) &t_10, hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_11);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_11);
      hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api_put_keep_in_zones_(SF ((hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) &t_10), (IS_C4F575) ((IS_C4F575) &t_11));
    }

    sfUpdateLoc(91);
    {
      DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api(t_12);
      Option_F010C8_get_(SF (hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) &t_12, hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_13);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_13);
      hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api_put_keep_in_zones_(SF ((hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) &t_12), (IS_C4F575) ((IS_C4F575) &t_13));
    }

    sfUpdateLoc(92);
    {
      DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api(t_14);
      Option_C04856_get_(SF (hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) &t_14, hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_15);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_15);
      hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api_put_keep_out_zones_(SF ((hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) &t_14), (IS_C4F575) ((IS_C4F575) &t_15));
    }

    sfUpdateLoc(93);
    {
      DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api(t_16);
      Option_F010C8_get_(SF (hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) &t_16, hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_17);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_17);
      hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api_put_keep_out_zones_(SF ((hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) &t_16), (IS_C4F575) ((IS_C4F575) &t_17));
    }
  }
}

Unit hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App.scala", "hamr.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App", "finalise", 0);

  sfUpdateLoc(33);
  {
    art_Bridge_EntryPoints_finalise_(SF hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_entryPoints(SF_LAST));
  }
}

void hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  Type_assign(&_hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_entryPoints, hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_entryPoints_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_init_appPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  _hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_appPortId = hamr_IPCPorts_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App(SF_LAST);
};

void hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_init_appPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_appPortId(SF_LAST));
  Type_assign(&_hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
};
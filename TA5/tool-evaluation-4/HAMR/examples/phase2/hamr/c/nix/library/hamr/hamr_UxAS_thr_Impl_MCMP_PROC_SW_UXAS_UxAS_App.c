#include <all.h>

B hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_initialized_ = F;

union art_Bridge_EntryPoints _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_entryPoints;
Z _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_appPortId;
union Option_882048 _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_appPortIdOpt;
Z _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AutomationRequestPortId;
union Option_882048 _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AutomationRequestPortIdOpt;
Z _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AirVehicleStatePortId;
union Option_882048 _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AirVehicleStatePortIdOpt;
Z _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_OperatingRegionPortId;
union Option_882048 _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_OperatingRegionPortIdOpt;
Z _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_LineSearchTaskPortId;
union Option_882048 _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_LineSearchTaskPortIdOpt;

void hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init(STACK_FRAME_ONLY) {
  if (hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_initialized_) return;
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_initialized_ = T;
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App.scala", "hamr.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App", "<init>", 0);
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_entryPoints(SF_LAST);
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_appPortId(SF_LAST);
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_appPortIdOpt(SF_LAST);
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_AutomationRequestPortId(SF_LAST);
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_AutomationRequestPortIdOpt(SF_LAST);
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_AirVehicleStatePortId(SF_LAST);
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_AirVehicleStatePortIdOpt(SF_LAST);
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_OperatingRegionPortId(SF_LAST);
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_OperatingRegionPortIdOpt(SF_LAST);
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_LineSearchTaskPortId(SF_LAST);
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_LineSearchTaskPortIdOpt(SF_LAST);
}

art_Bridge_EntryPoints hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_entryPoints(STACK_FRAME_ONLY) {
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_entryPoints;
}

Z hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_appPortId(STACK_FRAME_ONLY) {
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init(CALLER_LAST);
  return _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_appPortId;
}

Option_882048 hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_appPortIdOpt(STACK_FRAME_ONLY) {
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_appPortIdOpt;
}

Z hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AutomationRequestPortId(STACK_FRAME_ONLY) {
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init(CALLER_LAST);
  return _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AutomationRequestPortId;
}

Option_882048 hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AutomationRequestPortIdOpt(STACK_FRAME_ONLY) {
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AutomationRequestPortIdOpt;
}

Z hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AirVehicleStatePortId(STACK_FRAME_ONLY) {
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init(CALLER_LAST);
  return _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AirVehicleStatePortId;
}

Option_882048 hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AirVehicleStatePortIdOpt(STACK_FRAME_ONLY) {
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AirVehicleStatePortIdOpt;
}

Z hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_OperatingRegionPortId(STACK_FRAME_ONLY) {
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init(CALLER_LAST);
  return _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_OperatingRegionPortId;
}

Option_882048 hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_OperatingRegionPortIdOpt(STACK_FRAME_ONLY) {
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_OperatingRegionPortIdOpt;
}

Z hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_LineSearchTaskPortId(STACK_FRAME_ONLY) {
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init(CALLER_LAST);
  return _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_LineSearchTaskPortId;
}

Option_882048 hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_LineSearchTaskPortIdOpt(STACK_FRAME_ONLY) {
  hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_LineSearchTaskPortIdOpt;
}

Z hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App.scala", "hamr.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App", "main", 0);

  sfUpdateLoc(86);
  Z seed;
  {
    B t_0;
    {
      Z t_1 = IS_948B60_size(SF args);
      t_0 = Z__eq(t_1, Z_C(1));
    }
    if (t_0) {

      sfUpdateLoc(87);
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

  sfUpdateLoc(93);
  {
    hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_initialiseArchitecture(SF seed);
  }

  sfUpdateLoc(95);
  {
    DeclNewMBox2_1CBFC4(t_5);
    hamr_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_5);
    hamr_PlatformNix_receive(SF (Option_882048) hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_5));
  }

  sfUpdateLoc(97);
  {
    hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_initialise(SF_LAST);
  }

  sfUpdateLoc(99);
  {
    DeclNewMBox2_1CBFC4(t_6);
    hamr_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_6);
    hamr_PlatformNix_receive(SF (Option_882048) hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_6));
  }

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(101);
  {
    String_cprint(string("UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App starting ..."), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  sfUpdateLoc(103);
  {
    hamr_ArtNix_timeDispatch(SF_LAST);
  }

  sfUpdateLoc(105);
  B terminated;
  {
    terminated = F;
  }

  sfUpdateLoc(106);
  B t_106_5;
  {
    t_106_5 = (!terminated);
  }
  while(t_106_5) {

    sfUpdateLoc(107);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_7);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_7);
      Type_assign(out, ((MBox2_1029D1) &t_7), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(108);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_appPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(109);
    B t_8;
    {
      B t_9 = Option_8E9F45_isEmpty_(SF MBox2_1029D1_value2_(out));
      t_8 = t_9;
    }
    if (t_8) {

      sfUpdateLoc(110);
      {
        hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute(SF_LAST);
      }
    } else {

      sfUpdateLoc(112);
      {
        terminated = T;
      }
    }

    sfUpdateLoc(106);
    t_106_5 = (!terminated);
  }

  sfUpdateLoc(115);
  {
    hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_exit(SF_LAST);
  }

  sfUpdateLoc(117);
  {
    hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App.scala", "hamr.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App", "atExit", 0);

  sfUpdateLoc(155);
  {
    hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_exit(SF_LAST);
  }
}

Unit hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App.scala", "hamr.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App", "initialiseArchitecture", 0);

  sfUpdateLoc(25);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_appPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(26);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AutomationRequestPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(27);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AirVehicleStatePortIdOpt(SF_LAST));
  }

  sfUpdateLoc(28);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_OperatingRegionPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(29);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_LineSearchTaskPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(31);
  {
    art_Art_run(SF (art_ArchitectureDescription) hamr_Arch_ad(SF_LAST));
  }
}

Unit hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App.scala", "hamr.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App", "initialise", 0);

  sfUpdateLoc(35);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_entryPoints(SF_LAST));
  }
}

static inline B hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_44_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, hamr_Base_Types_Bits_Payload *_v_44_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_1)))) return F;
  *_v_44_19 = (hamr_Base_Types_Bits_Payload) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

static inline B hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_45_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, art_DataContent *_v_45_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  *_v_45_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

static inline B hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_46_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1) {
  if (!None_964667__is(SF t_1)) return F;
  return T;
}

static inline B hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_53_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6, hamr_Base_Types_Bits_Payload *_v_53_19) {
  if (!Some_D29615__is(SF t_6)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_6)))) return F;
  *_v_53_19 = (hamr_Base_Types_Bits_Payload) Some_D29615_value_(Some_D29615__as(SF t_6));
  return T;
}

static inline B hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_54_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6, art_DataContent *_v_54_19) {
  if (!Some_D29615__is(SF t_6)) return F;
  *_v_54_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_6));
  return T;
}

static inline B hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_55_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6) {
  if (!None_964667__is(SF t_6)) return F;
  return T;
}

static inline B hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_62_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_11, hamr_Base_Types_Bits_Payload *_v_62_19) {
  if (!Some_D29615__is(SF t_11)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_11)))) return F;
  *_v_62_19 = (hamr_Base_Types_Bits_Payload) Some_D29615_value_(Some_D29615__as(SF t_11));
  return T;
}

static inline B hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_63_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_11, art_DataContent *_v_63_19) {
  if (!Some_D29615__is(SF t_11)) return F;
  *_v_63_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_11));
  return T;
}

static inline B hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_64_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_11) {
  if (!None_964667__is(SF t_11)) return F;
  return T;
}

static inline B hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_71_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_16, hamr_Base_Types_Bits_Payload *_v_71_19) {
  if (!Some_D29615__is(SF t_16)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_16)))) return F;
  *_v_71_19 = (hamr_Base_Types_Bits_Payload) Some_D29615_value_(Some_D29615__as(SF t_16));
  return T;
}

static inline B hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_72_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_16, art_DataContent *_v_72_19) {
  if (!Some_D29615__is(SF t_16)) return F;
  *_v_72_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_16));
  return T;
}

static inline B hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_73_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_16) {
  if (!None_964667__is(SF t_16)) return F;
  return T;
}

Unit hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App.scala", "hamr.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App", "compute", 0);
  {

    sfUpdateLoc(41);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_0);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_0);
      Type_assign(out, ((MBox2_1029D1) &t_0), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(42);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AutomationRequestPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(43);
    Option_8E9F45 t_1 = MBox2_1029D1_value2_(out);
    B match_43_11 = F;
    if (!match_43_11) {
      hamr_Base_Types_Bits_Payload v_44_19;
      match_43_11 = hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_44_14_8E9F45(SF t_1, &v_44_19);
      if (match_43_11) {

        sfUpdateLoc(44);
        {
          hamr_ArtNix_updateData(SF hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AutomationRequestPortId(SF_LAST), (art_DataContent) v_44_19);
        }
      }
    }
    if (!match_43_11) {
      art_DataContent v_45_19;
      match_43_11 = hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_45_14_8E9F45(SF t_1, &v_45_19);
      if (match_43_11) {

        sfUpdateLoc(45);
        {
          DeclNewString(t_2);
          String t_3 = (String) &t_2;
          DeclNewString(t_4);
          String_string_(SF (String) &t_4, string("Unexpected payload on port AutomationRequest.  Expecting something of type Base_Types.Bits_Payload but received "));
          art_DataContent_string_(SF (String) &t_4, v_45_19);
          String_string_(SF (String) &t_4, string(""));
          String_string_(SF t_3, ((String) &t_4));
          sfAbort(t_3->value);
          abort();
        }
      }
    }
    if (!match_43_11) {
      match_43_11 = hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_46_14_8E9F45(SF t_1);
      if (match_43_11) {
      }
    }
    sfAssert(match_43_11, "Error when pattern matching.");
  }
  {

    sfUpdateLoc(50);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_5);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_5);
      Type_assign(out, ((MBox2_1029D1) &t_5), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(51);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AirVehicleStatePortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(52);
    Option_8E9F45 t_6 = MBox2_1029D1_value2_(out);
    B match_52_11 = F;
    if (!match_52_11) {
      hamr_Base_Types_Bits_Payload v_53_19;
      match_52_11 = hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_53_14_8E9F45(SF t_6, &v_53_19);
      if (match_52_11) {

        sfUpdateLoc(53);
        {
          hamr_ArtNix_updateData(SF hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AirVehicleStatePortId(SF_LAST), (art_DataContent) v_53_19);
        }
      }
    }
    if (!match_52_11) {
      art_DataContent v_54_19;
      match_52_11 = hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_54_14_8E9F45(SF t_6, &v_54_19);
      if (match_52_11) {

        sfUpdateLoc(54);
        {
          DeclNewString(t_7);
          String t_8 = (String) &t_7;
          DeclNewString(t_9);
          String_string_(SF (String) &t_9, string("Unexpected payload on port AirVehicleState.  Expecting something of type Base_Types.Bits_Payload but received "));
          art_DataContent_string_(SF (String) &t_9, v_54_19);
          String_string_(SF (String) &t_9, string(""));
          String_string_(SF t_8, ((String) &t_9));
          sfAbort(t_8->value);
          abort();
        }
      }
    }
    if (!match_52_11) {
      match_52_11 = hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_55_14_8E9F45(SF t_6);
      if (match_52_11) {
      }
    }
    sfAssert(match_52_11, "Error when pattern matching.");
  }
  {

    sfUpdateLoc(59);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_10);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_10);
      Type_assign(out, ((MBox2_1029D1) &t_10), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(60);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_OperatingRegionPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(61);
    Option_8E9F45 t_11 = MBox2_1029D1_value2_(out);
    B match_61_11 = F;
    if (!match_61_11) {
      hamr_Base_Types_Bits_Payload v_62_19;
      match_61_11 = hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_62_14_8E9F45(SF t_11, &v_62_19);
      if (match_61_11) {

        sfUpdateLoc(62);
        {
          hamr_ArtNix_updateData(SF hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_OperatingRegionPortId(SF_LAST), (art_DataContent) v_62_19);
        }
      }
    }
    if (!match_61_11) {
      art_DataContent v_63_19;
      match_61_11 = hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_63_14_8E9F45(SF t_11, &v_63_19);
      if (match_61_11) {

        sfUpdateLoc(63);
        {
          DeclNewString(t_12);
          String t_13 = (String) &t_12;
          DeclNewString(t_14);
          String_string_(SF (String) &t_14, string("Unexpected payload on port OperatingRegion.  Expecting something of type Base_Types.Bits_Payload but received "));
          art_DataContent_string_(SF (String) &t_14, v_63_19);
          String_string_(SF (String) &t_14, string(""));
          String_string_(SF t_13, ((String) &t_14));
          sfAbort(t_13->value);
          abort();
        }
      }
    }
    if (!match_61_11) {
      match_61_11 = hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_64_14_8E9F45(SF t_11);
      if (match_61_11) {
      }
    }
    sfAssert(match_61_11, "Error when pattern matching.");
  }
  {

    sfUpdateLoc(68);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_15);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_15);
      Type_assign(out, ((MBox2_1029D1) &t_15), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(69);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_LineSearchTaskPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(70);
    Option_8E9F45 t_16 = MBox2_1029D1_value2_(out);
    B match_70_11 = F;
    if (!match_70_11) {
      hamr_Base_Types_Bits_Payload v_71_19;
      match_70_11 = hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_71_14_8E9F45(SF t_16, &v_71_19);
      if (match_70_11) {

        sfUpdateLoc(71);
        {
          hamr_ArtNix_updateData(SF hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_LineSearchTaskPortId(SF_LAST), (art_DataContent) v_71_19);
        }
      }
    }
    if (!match_70_11) {
      art_DataContent v_72_19;
      match_70_11 = hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_72_14_8E9F45(SF t_16, &v_72_19);
      if (match_70_11) {

        sfUpdateLoc(72);
        {
          DeclNewString(t_17);
          String t_18 = (String) &t_17;
          DeclNewString(t_19);
          String_string_(SF (String) &t_19, string("Unexpected payload on port LineSearchTask.  Expecting something of type Base_Types.Bits_Payload but received "));
          art_DataContent_string_(SF (String) &t_19, v_72_19);
          String_string_(SF (String) &t_19, string(""));
          String_string_(SF t_18, ((String) &t_19));
          sfAbort(t_18->value);
          abort();
        }
      }
    }
    if (!match_70_11) {
      match_70_11 = hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_compute_extract_73_14_8E9F45(SF t_16);
      if (match_70_11) {
      }
    }
    sfAssert(match_70_11, "Error when pattern matching.");
  }

  sfUpdateLoc(76);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_entryPoints(SF_LAST));
  }

  sfUpdateLoc(77);
  {
    hamr_Process_sleep(SF Z_C(500));
  }
}

Unit hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App.scala", "hamr.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App", "exit", 0);

  sfUpdateLoc(150);
  {
    hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_finalise(SF_LAST);
  }

  sfUpdateLoc(151);
  {
    hamr_PlatformNix_finalise(SF_LAST);
  }
}

Unit hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App.scala", "hamr.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(127);
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

Unit hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App.scala", "hamr.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App", "touch", 0);

  sfUpdateLoc(123);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(124);
    {
      hamr_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(129);
    {
      DeclNewIS_C4F575(t_2);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_2);
      DeclNewhamr_Base_Types_Bits_Payload(t_1);
      hamr_Base_Types_Bits_Payload_apply(SF &t_1, (IS_C4F575) ((IS_C4F575) &t_2));
      hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_touch_printDataContent(SF (art_DataContent) (&t_1));
    }

    sfUpdateLoc(130);
    {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_touch_printDataContent(SF (art_DataContent) (&t_3));
    }

    sfUpdateLoc(132);
    {
      DeclNewhamr_SW_UxAS_thr_Impl_Initialization_Api(t_4);
      Option_9AD908_get_(SF (hamr_SW_UxAS_thr_Impl_Initialization_Api) &t_4, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_c_initialization_api(SF_LAST));
      hamr_SW_UxAS_thr_Impl_Initialization_Api_logInfo_(SF ((hamr_SW_UxAS_thr_Impl_Initialization_Api) &t_4), (String) string(""));
    }

    sfUpdateLoc(133);
    {
      DeclNewhamr_SW_UxAS_thr_Impl_Initialization_Api(t_5);
      Option_9AD908_get_(SF (hamr_SW_UxAS_thr_Impl_Initialization_Api) &t_5, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_c_initialization_api(SF_LAST));
      hamr_SW_UxAS_thr_Impl_Initialization_Api_logDebug_(SF ((hamr_SW_UxAS_thr_Impl_Initialization_Api) &t_5), (String) string(""));
    }

    sfUpdateLoc(134);
    {
      DeclNewhamr_SW_UxAS_thr_Impl_Initialization_Api(t_6);
      Option_9AD908_get_(SF (hamr_SW_UxAS_thr_Impl_Initialization_Api) &t_6, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_c_initialization_api(SF_LAST));
      hamr_SW_UxAS_thr_Impl_Initialization_Api_logError_(SF ((hamr_SW_UxAS_thr_Impl_Initialization_Api) &t_6), (String) string(""));
    }

    sfUpdateLoc(135);
    {
      DeclNewhamr_SW_UxAS_thr_Impl_Operational_Api(t_7);
      Option_73B21F_get_(SF (hamr_SW_UxAS_thr_Impl_Operational_Api) &t_7, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_c_operational_api(SF_LAST));
      hamr_SW_UxAS_thr_Impl_Operational_Api_logInfo_(SF ((hamr_SW_UxAS_thr_Impl_Operational_Api) &t_7), (String) string(""));
    }

    sfUpdateLoc(136);
    {
      DeclNewhamr_SW_UxAS_thr_Impl_Operational_Api(t_8);
      Option_73B21F_get_(SF (hamr_SW_UxAS_thr_Impl_Operational_Api) &t_8, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_c_operational_api(SF_LAST));
      hamr_SW_UxAS_thr_Impl_Operational_Api_logDebug_(SF ((hamr_SW_UxAS_thr_Impl_Operational_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(137);
    {
      DeclNewhamr_SW_UxAS_thr_Impl_Operational_Api(t_9);
      Option_73B21F_get_(SF (hamr_SW_UxAS_thr_Impl_Operational_Api) &t_9, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_c_operational_api(SF_LAST));
      hamr_SW_UxAS_thr_Impl_Operational_Api_logError_(SF ((hamr_SW_UxAS_thr_Impl_Operational_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(138);
    Option_30119F apiUsage_AutomationRequest;
    DeclNewhamr_SW_UxAS_thr_Impl_Operational_Api(t_10);
    Option_73B21F_get_(SF (hamr_SW_UxAS_thr_Impl_Operational_Api) &t_10, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_11);
    hamr_SW_UxAS_thr_Impl_Operational_Api_get_AutomationRequest_(SF (Option_30119F) &t_11, ((hamr_SW_UxAS_thr_Impl_Operational_Api) &t_10));
    apiUsage_AutomationRequest = (Option_30119F) ((Option_30119F) &t_11);

    sfUpdateLoc(139);
    Option_30119F apiUsage_AirVehicleState;
    DeclNewhamr_SW_UxAS_thr_Impl_Operational_Api(t_12);
    Option_73B21F_get_(SF (hamr_SW_UxAS_thr_Impl_Operational_Api) &t_12, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_13);
    hamr_SW_UxAS_thr_Impl_Operational_Api_get_AirVehicleState_(SF (Option_30119F) &t_13, ((hamr_SW_UxAS_thr_Impl_Operational_Api) &t_12));
    apiUsage_AirVehicleState = (Option_30119F) ((Option_30119F) &t_13);

    sfUpdateLoc(140);
    Option_30119F apiUsage_OperatingRegion;
    DeclNewhamr_SW_UxAS_thr_Impl_Operational_Api(t_14);
    Option_73B21F_get_(SF (hamr_SW_UxAS_thr_Impl_Operational_Api) &t_14, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_15);
    hamr_SW_UxAS_thr_Impl_Operational_Api_get_OperatingRegion_(SF (Option_30119F) &t_15, ((hamr_SW_UxAS_thr_Impl_Operational_Api) &t_14));
    apiUsage_OperatingRegion = (Option_30119F) ((Option_30119F) &t_15);

    sfUpdateLoc(141);
    Option_30119F apiUsage_LineSearchTask;
    DeclNewhamr_SW_UxAS_thr_Impl_Operational_Api(t_16);
    Option_73B21F_get_(SF (hamr_SW_UxAS_thr_Impl_Operational_Api) &t_16, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_17);
    hamr_SW_UxAS_thr_Impl_Operational_Api_get_LineSearchTask_(SF (Option_30119F) &t_17, ((hamr_SW_UxAS_thr_Impl_Operational_Api) &t_16));
    apiUsage_LineSearchTask = (Option_30119F) ((Option_30119F) &t_17);

    sfUpdateLoc(142);
    {
      DeclNewhamr_SW_UxAS_thr_Impl_Initialization_Api(t_18);
      Option_9AD908_get_(SF (hamr_SW_UxAS_thr_Impl_Initialization_Api) &t_18, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_19);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_19);
      hamr_SW_UxAS_thr_Impl_Initialization_Api_put_AutomationResponse_MON_GEO_(SF ((hamr_SW_UxAS_thr_Impl_Initialization_Api) &t_18), (IS_C4F575) ((IS_C4F575) &t_19));
    }

    sfUpdateLoc(143);
    {
      DeclNewhamr_SW_UxAS_thr_Impl_Operational_Api(t_20);
      Option_73B21F_get_(SF (hamr_SW_UxAS_thr_Impl_Operational_Api) &t_20, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_21);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_21);
      hamr_SW_UxAS_thr_Impl_Operational_Api_put_AutomationResponse_MON_GEO_(SF ((hamr_SW_UxAS_thr_Impl_Operational_Api) &t_20), (IS_C4F575) ((IS_C4F575) &t_21));
    }

    sfUpdateLoc(144);
    {
      DeclNewhamr_SW_UxAS_thr_Impl_Initialization_Api(t_22);
      Option_9AD908_get_(SF (hamr_SW_UxAS_thr_Impl_Initialization_Api) &t_22, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_23);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_23);
      hamr_SW_UxAS_thr_Impl_Initialization_Api_put_AutomationResponse_MON_REQ_(SF ((hamr_SW_UxAS_thr_Impl_Initialization_Api) &t_22), (IS_C4F575) ((IS_C4F575) &t_23));
    }

    sfUpdateLoc(145);
    {
      DeclNewhamr_SW_UxAS_thr_Impl_Operational_Api(t_24);
      Option_73B21F_get_(SF (hamr_SW_UxAS_thr_Impl_Operational_Api) &t_24, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_25);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_25);
      hamr_SW_UxAS_thr_Impl_Operational_Api_put_AutomationResponse_MON_REQ_(SF ((hamr_SW_UxAS_thr_Impl_Operational_Api) &t_24), (IS_C4F575) ((IS_C4F575) &t_25));
    }
  }
}

Unit hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App.scala", "hamr.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App", "finalise", 0);

  sfUpdateLoc(81);
  {
    art_Bridge_EntryPoints_finalise_(SF hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_entryPoints(SF_LAST));
  }
}

void hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  Type_assign(&_hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_entryPoints, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_entryPoints_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_appPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_appPortId = hamr_IPCPorts_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App(SF_LAST);
};

void hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_appPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_appPortId(SF_LAST));
  Type_assign(&_hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
};

void hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_AutomationRequestPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AutomationRequestPortId = art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_AutomationRequest_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST)));
};

void hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_AutomationRequestPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AutomationRequestPortId(SF_LAST));
  Type_assign(&_hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AutomationRequestPortIdOpt, (&t_1), sizeof(struct Some_488F47));
};

void hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_AirVehicleStatePortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(17);
  _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AirVehicleStatePortId = art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_AirVehicleState_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST)));
};

void hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_AirVehicleStatePortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AirVehicleStatePortId(SF_LAST));
  Type_assign(&_hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_AirVehicleStatePortIdOpt, (&t_2), sizeof(struct Some_488F47));
};

void hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_OperatingRegionPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(19);
  _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_OperatingRegionPortId = art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_OperatingRegion_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST)));
};

void hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_OperatingRegionPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(20);
  DeclNewSome_488F47(t_3);
  Some_488F47_apply(SF &t_3, hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_OperatingRegionPortId(SF_LAST));
  Type_assign(&_hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_OperatingRegionPortIdOpt, (&t_3), sizeof(struct Some_488F47));
};

void hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_LineSearchTaskPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(21);
  _hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_LineSearchTaskPortId = art_Port_45E54D_id_(hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_LineSearchTask_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST)));
};

void hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_init_LineSearchTaskPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(22);
  DeclNewSome_488F47(t_4);
  Some_488F47_apply(SF &t_4, hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_LineSearchTaskPortId(SF_LAST));
  Type_assign(&_hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App_LineSearchTaskPortIdOpt, (&t_4), sizeof(struct Some_488F47));
};
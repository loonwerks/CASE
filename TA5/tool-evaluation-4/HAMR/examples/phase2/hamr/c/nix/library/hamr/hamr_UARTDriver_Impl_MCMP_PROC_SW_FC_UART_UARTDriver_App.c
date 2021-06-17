#include <all.h>

B hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_initialized_ = F;

union art_Bridge_EntryPoints _hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_entryPoints;
Z _hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_appPortId;
union Option_882048 _hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_appPortIdOpt;
Z _hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_recv_dataPortId;
union Option_882048 _hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_recv_dataPortIdOpt;
Z _hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_MissionCommandPortId;
union Option_882048 _hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_MissionCommandPortIdOpt;

void hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init(STACK_FRAME_ONLY) {
  if (hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_initialized_) return;
  hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_initialized_ = T;
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App.scala", "hamr.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App", "<init>", 0);
  hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init_entryPoints(SF_LAST);
  hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init_appPortId(SF_LAST);
  hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init_appPortIdOpt(SF_LAST);
  hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init_recv_dataPortId(SF_LAST);
  hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init_recv_dataPortIdOpt(SF_LAST);
  hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init_MissionCommandPortId(SF_LAST);
  hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init_MissionCommandPortIdOpt(SF_LAST);
}

art_Bridge_EntryPoints hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_entryPoints(STACK_FRAME_ONLY) {
  hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_entryPoints;
}

Z hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_appPortId(STACK_FRAME_ONLY) {
  hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init(CALLER_LAST);
  return _hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_appPortId;
}

Option_882048 hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_appPortIdOpt(STACK_FRAME_ONLY) {
  hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_appPortIdOpt;
}

Z hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_recv_dataPortId(STACK_FRAME_ONLY) {
  hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init(CALLER_LAST);
  return _hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_recv_dataPortId;
}

Option_882048 hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_recv_dataPortIdOpt(STACK_FRAME_ONLY) {
  hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_recv_dataPortIdOpt;
}

Z hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_MissionCommandPortId(STACK_FRAME_ONLY) {
  hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init(CALLER_LAST);
  return _hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_MissionCommandPortId;
}

Option_882048 hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_MissionCommandPortIdOpt(STACK_FRAME_ONLY) {
  hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init(CALLER_LAST);
  return (Option_882048) &_hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_MissionCommandPortIdOpt;
}

Z hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App.scala", "hamr.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App", "main", 0);

  sfUpdateLoc(62);
  Z seed;
  {
    B t_0;
    {
      Z t_1 = IS_948B60_size(SF args);
      t_0 = Z__eq(t_1, Z_C(1));
    }
    if (t_0) {

      sfUpdateLoc(63);
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

  sfUpdateLoc(69);
  {
    hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_initialiseArchitecture(SF seed);
  }

  sfUpdateLoc(71);
  {
    DeclNewMBox2_1CBFC4(t_5);
    hamr_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_5);
    hamr_PlatformNix_receive(SF (Option_882048) hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_5));
  }

  sfUpdateLoc(73);
  {
    hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_initialise(SF_LAST);
  }

  sfUpdateLoc(75);
  {
    DeclNewMBox2_1CBFC4(t_6);
    hamr_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_6);
    hamr_PlatformNix_receive(SF (Option_882048) hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_6));
  }

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(77);
  {
    String_cprint(string("UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App starting ..."), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  sfUpdateLoc(79);
  {
    hamr_ArtNix_timeDispatch(SF_LAST);
  }

  sfUpdateLoc(81);
  B terminated;
  {
    terminated = F;
  }

  sfUpdateLoc(82);
  B t_82_5;
  {
    t_82_5 = (!terminated);
  }
  while(t_82_5) {

    sfUpdateLoc(83);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_7);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_7);
      Type_assign(out, ((MBox2_1029D1) &t_7), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(84);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_appPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(85);
    B t_8;
    {
      B t_9 = Option_8E9F45_isEmpty_(SF MBox2_1029D1_value2_(out));
      t_8 = t_9;
    }
    if (t_8) {

      sfUpdateLoc(86);
      {
        hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_compute(SF_LAST);
      }
    } else {

      sfUpdateLoc(88);
      {
        terminated = T;
      }
    }

    sfUpdateLoc(82);
    t_82_5 = (!terminated);
  }

  sfUpdateLoc(91);
  {
    hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_exit(SF_LAST);
  }

  sfUpdateLoc(93);
  {
    hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App.scala", "hamr.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App", "atExit", 0);

  sfUpdateLoc(131);
  {
    hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_exit(SF_LAST);
  }
}

Unit hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App.scala", "hamr.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App", "initialiseArchitecture", 0);

  sfUpdateLoc(21);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_appPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(22);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_recv_dataPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(23);
  {
    hamr_PlatformNix_initialise(SF seed, (Option_882048) hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_MissionCommandPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(25);
  {
    art_Art_run(SF (art_ArchitectureDescription) hamr_Arch_ad(SF_LAST));
  }
}

Unit hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App.scala", "hamr.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App", "initialise", 0);

  sfUpdateLoc(29);
  {
    art_Bridge_EntryPoints_initialise_(SF hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_entryPoints(SF_LAST));
  }
}

static inline B hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_compute_extract_38_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, hamr_Base_Types_Bits_Payload *_v_38_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_1)))) return F;
  *_v_38_19 = (hamr_Base_Types_Bits_Payload) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

static inline B hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_compute_extract_39_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, art_DataContent *_v_39_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  *_v_39_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

static inline B hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_compute_extract_40_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1) {
  if (!None_964667__is(SF t_1)) return F;
  return T;
}

static inline B hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_compute_extract_47_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6, hamr_Base_Types_Bits_Payload *_v_47_19) {
  if (!Some_D29615__is(SF t_6)) return F;
  if (!hamr_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_6)))) return F;
  *_v_47_19 = (hamr_Base_Types_Bits_Payload) Some_D29615_value_(Some_D29615__as(SF t_6));
  return T;
}

static inline B hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_compute_extract_48_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6, art_DataContent *_v_48_19) {
  if (!Some_D29615__is(SF t_6)) return F;
  *_v_48_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_6));
  return T;
}

static inline B hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_compute_extract_49_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6) {
  if (!None_964667__is(SF t_6)) return F;
  return T;
}

Unit hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App.scala", "hamr.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App", "compute", 0);
  {

    sfUpdateLoc(35);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_0);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_0);
      Type_assign(out, ((MBox2_1029D1) &t_0), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(36);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_recv_dataPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(37);
    Option_8E9F45 t_1 = MBox2_1029D1_value2_(out);
    B match_37_11 = F;
    if (!match_37_11) {
      hamr_Base_Types_Bits_Payload v_38_19;
      match_37_11 = hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_compute_extract_38_14_8E9F45(SF t_1, &v_38_19);
      if (match_37_11) {

        sfUpdateLoc(38);
        {
          hamr_ArtNix_updateData(SF hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_recv_dataPortId(SF_LAST), (art_DataContent) v_38_19);
        }
      }
    }
    if (!match_37_11) {
      art_DataContent v_39_19;
      match_37_11 = hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_compute_extract_39_14_8E9F45(SF t_1, &v_39_19);
      if (match_37_11) {

        sfUpdateLoc(39);
        {
          DeclNewString(t_2);
          String t_3 = (String) &t_2;
          DeclNewString(t_4);
          String_string_(SF (String) &t_4, string("Unexpected payload on port recv_data.  Expecting something of type Base_Types.Bits_Payload but received "));
          art_DataContent_string_(SF (String) &t_4, v_39_19);
          String_string_(SF (String) &t_4, string(""));
          String_string_(SF t_3, ((String) &t_4));
          sfAbort(t_3->value);
          abort();
        }
      }
    }
    if (!match_37_11) {
      match_37_11 = hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_compute_extract_40_14_8E9F45(SF t_1);
      if (match_37_11) {
      }
    }
    sfAssert(match_37_11, "Error when pattern matching.");
  }
  {

    sfUpdateLoc(44);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_5);
      hamr_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_5);
      Type_assign(out, ((MBox2_1029D1) &t_5), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(45);
    {
      hamr_PlatformNix_receiveAsync(SF (Option_882048) hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_MissionCommandPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(46);
    Option_8E9F45 t_6 = MBox2_1029D1_value2_(out);
    B match_46_11 = F;
    if (!match_46_11) {
      hamr_Base_Types_Bits_Payload v_47_19;
      match_46_11 = hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_compute_extract_47_14_8E9F45(SF t_6, &v_47_19);
      if (match_46_11) {

        sfUpdateLoc(47);
        {
          hamr_ArtNix_updateData(SF hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_MissionCommandPortId(SF_LAST), (art_DataContent) v_47_19);
        }
      }
    }
    if (!match_46_11) {
      art_DataContent v_48_19;
      match_46_11 = hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_compute_extract_48_14_8E9F45(SF t_6, &v_48_19);
      if (match_46_11) {

        sfUpdateLoc(48);
        {
          DeclNewString(t_7);
          String t_8 = (String) &t_7;
          DeclNewString(t_9);
          String_string_(SF (String) &t_9, string("Unexpected payload on port MissionCommand.  Expecting something of type Base_Types.Bits_Payload but received "));
          art_DataContent_string_(SF (String) &t_9, v_48_19);
          String_string_(SF (String) &t_9, string(""));
          String_string_(SF t_8, ((String) &t_9));
          sfAbort(t_8->value);
          abort();
        }
      }
    }
    if (!match_46_11) {
      match_46_11 = hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_compute_extract_49_14_8E9F45(SF t_6);
      if (match_46_11) {
      }
    }
    sfAssert(match_46_11, "Error when pattern matching.");
  }

  sfUpdateLoc(52);
  {
    art_Bridge_EntryPoints_compute_(SF hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_entryPoints(SF_LAST));
  }

  sfUpdateLoc(53);
  {
    hamr_Process_sleep(SF Z_C(500));
  }
}

Unit hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App.scala", "hamr.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App", "exit", 0);

  sfUpdateLoc(126);
  {
    hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_finalise(SF_LAST);
  }

  sfUpdateLoc(127);
  {
    hamr_PlatformNix_finalise(SF_LAST);
  }
}

Unit hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App.scala", "hamr.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(103);
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

Unit hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App.scala", "hamr.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App", "touch", 0);

  sfUpdateLoc(99);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(100);
    {
      hamr_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(105);
    {
      DeclNewIS_C4F575(t_2);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_2);
      DeclNewhamr_Base_Types_Bits_Payload(t_1);
      hamr_Base_Types_Bits_Payload_apply(SF &t_1, (IS_C4F575) ((IS_C4F575) &t_2));
      hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_touch_printDataContent(SF (art_DataContent) (&t_1));
    }

    sfUpdateLoc(106);
    {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_touch_printDataContent(SF (art_DataContent) (&t_3));
    }

    sfUpdateLoc(108);
    {
      DeclNewhamr_Drivers_UARTDriver_Impl_Initialization_Api(t_4);
      Option_21F455_get_(SF (hamr_Drivers_UARTDriver_Impl_Initialization_Api) &t_4, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api(SF_LAST));
      hamr_Drivers_UARTDriver_Impl_Initialization_Api_logInfo_(SF ((hamr_Drivers_UARTDriver_Impl_Initialization_Api) &t_4), (String) string(""));
    }

    sfUpdateLoc(109);
    {
      DeclNewhamr_Drivers_UARTDriver_Impl_Initialization_Api(t_5);
      Option_21F455_get_(SF (hamr_Drivers_UARTDriver_Impl_Initialization_Api) &t_5, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api(SF_LAST));
      hamr_Drivers_UARTDriver_Impl_Initialization_Api_logDebug_(SF ((hamr_Drivers_UARTDriver_Impl_Initialization_Api) &t_5), (String) string(""));
    }

    sfUpdateLoc(110);
    {
      DeclNewhamr_Drivers_UARTDriver_Impl_Initialization_Api(t_6);
      Option_21F455_get_(SF (hamr_Drivers_UARTDriver_Impl_Initialization_Api) &t_6, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api(SF_LAST));
      hamr_Drivers_UARTDriver_Impl_Initialization_Api_logError_(SF ((hamr_Drivers_UARTDriver_Impl_Initialization_Api) &t_6), (String) string(""));
    }

    sfUpdateLoc(111);
    {
      DeclNewhamr_Drivers_UARTDriver_Impl_Operational_Api(t_7);
      Option_AE3831_get_(SF (hamr_Drivers_UARTDriver_Impl_Operational_Api) &t_7, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api(SF_LAST));
      hamr_Drivers_UARTDriver_Impl_Operational_Api_logInfo_(SF ((hamr_Drivers_UARTDriver_Impl_Operational_Api) &t_7), (String) string(""));
    }

    sfUpdateLoc(112);
    {
      DeclNewhamr_Drivers_UARTDriver_Impl_Operational_Api(t_8);
      Option_AE3831_get_(SF (hamr_Drivers_UARTDriver_Impl_Operational_Api) &t_8, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api(SF_LAST));
      hamr_Drivers_UARTDriver_Impl_Operational_Api_logDebug_(SF ((hamr_Drivers_UARTDriver_Impl_Operational_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(113);
    {
      DeclNewhamr_Drivers_UARTDriver_Impl_Operational_Api(t_9);
      Option_AE3831_get_(SF (hamr_Drivers_UARTDriver_Impl_Operational_Api) &t_9, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api(SF_LAST));
      hamr_Drivers_UARTDriver_Impl_Operational_Api_logError_(SF ((hamr_Drivers_UARTDriver_Impl_Operational_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(114);
    Option_30119F apiUsage_recv_data;
    DeclNewhamr_Drivers_UARTDriver_Impl_Operational_Api(t_10);
    Option_AE3831_get_(SF (hamr_Drivers_UARTDriver_Impl_Operational_Api) &t_10, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_11);
    hamr_Drivers_UARTDriver_Impl_Operational_Api_get_recv_data_(SF (Option_30119F) &t_11, ((hamr_Drivers_UARTDriver_Impl_Operational_Api) &t_10));
    apiUsage_recv_data = (Option_30119F) ((Option_30119F) &t_11);

    sfUpdateLoc(115);
    Option_30119F apiUsage_MissionCommand;
    DeclNewhamr_Drivers_UARTDriver_Impl_Operational_Api(t_12);
    Option_AE3831_get_(SF (hamr_Drivers_UARTDriver_Impl_Operational_Api) &t_12, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_13);
    hamr_Drivers_UARTDriver_Impl_Operational_Api_get_MissionCommand_(SF (Option_30119F) &t_13, ((hamr_Drivers_UARTDriver_Impl_Operational_Api) &t_12));
    apiUsage_MissionCommand = (Option_30119F) ((Option_30119F) &t_13);

    sfUpdateLoc(116);
    {
      DeclNewhamr_Drivers_UARTDriver_Impl_Initialization_Api(t_14);
      Option_21F455_get_(SF (hamr_Drivers_UARTDriver_Impl_Initialization_Api) &t_14, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_15);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_15);
      hamr_Drivers_UARTDriver_Impl_Initialization_Api_put_send_data_(SF ((hamr_Drivers_UARTDriver_Impl_Initialization_Api) &t_14), (IS_C4F575) ((IS_C4F575) &t_15));
    }

    sfUpdateLoc(117);
    {
      DeclNewhamr_Drivers_UARTDriver_Impl_Operational_Api(t_16);
      Option_AE3831_get_(SF (hamr_Drivers_UARTDriver_Impl_Operational_Api) &t_16, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_17);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_17);
      hamr_Drivers_UARTDriver_Impl_Operational_Api_put_send_data_(SF ((hamr_Drivers_UARTDriver_Impl_Operational_Api) &t_16), (IS_C4F575) ((IS_C4F575) &t_17));
    }

    sfUpdateLoc(118);
    {
      DeclNewhamr_Drivers_UARTDriver_Impl_Initialization_Api(t_18);
      Option_21F455_get_(SF (hamr_Drivers_UARTDriver_Impl_Initialization_Api) &t_18, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_19);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_19);
      hamr_Drivers_UARTDriver_Impl_Initialization_Api_put_AirVehicleState_WPM_(SF ((hamr_Drivers_UARTDriver_Impl_Initialization_Api) &t_18), (IS_C4F575) ((IS_C4F575) &t_19));
    }

    sfUpdateLoc(119);
    {
      DeclNewhamr_Drivers_UARTDriver_Impl_Operational_Api(t_20);
      Option_AE3831_get_(SF (hamr_Drivers_UARTDriver_Impl_Operational_Api) &t_20, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_21);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_21);
      hamr_Drivers_UARTDriver_Impl_Operational_Api_put_AirVehicleState_WPM_(SF ((hamr_Drivers_UARTDriver_Impl_Operational_Api) &t_20), (IS_C4F575) ((IS_C4F575) &t_21));
    }

    sfUpdateLoc(120);
    {
      DeclNewhamr_Drivers_UARTDriver_Impl_Initialization_Api(t_22);
      Option_21F455_get_(SF (hamr_Drivers_UARTDriver_Impl_Initialization_Api) &t_22, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_23);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_23);
      hamr_Drivers_UARTDriver_Impl_Initialization_Api_put_AirVehicleState_UXAS_(SF ((hamr_Drivers_UARTDriver_Impl_Initialization_Api) &t_22), (IS_C4F575) ((IS_C4F575) &t_23));
    }

    sfUpdateLoc(121);
    {
      DeclNewhamr_Drivers_UARTDriver_Impl_Operational_Api(t_24);
      Option_AE3831_get_(SF (hamr_Drivers_UARTDriver_Impl_Operational_Api) &t_24, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_25);
      hamr_Base_Types_Bits_example(SF (IS_C4F575) &t_25);
      hamr_Drivers_UARTDriver_Impl_Operational_Api_put_AirVehicleState_UXAS_(SF ((hamr_Drivers_UARTDriver_Impl_Operational_Api) &t_24), (IS_C4F575) ((IS_C4F575) &t_25));
    }
  }
}

Unit hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App.scala", "hamr.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App", "finalise", 0);

  sfUpdateLoc(57);
  {
    art_Bridge_EntryPoints_finalise_(SF hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_entryPoints(SF_LAST));
  }
}

void hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  Type_assign(&_hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_entryPoints, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_entryPoints_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init_appPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  _hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_appPortId = hamr_IPCPorts_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App(SF_LAST);
};

void hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init_appPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_appPortId(SF_LAST));
  Type_assign(&_hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
};

void hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init_recv_dataPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  _hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_recv_dataPortId = art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_recv_data_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver(SF_LAST)));
};

void hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init_recv_dataPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_recv_dataPortId(SF_LAST));
  Type_assign(&_hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_recv_dataPortIdOpt, (&t_1), sizeof(struct Some_488F47));
};

void hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init_MissionCommandPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(17);
  _hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_MissionCommandPortId = art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_MissionCommand_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver(SF_LAST)));
};

void hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_init_MissionCommandPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_MissionCommandPortId(SF_LAST));
  Type_assign(&_hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App_MissionCommandPortIdOpt, (&t_2), sizeof(struct Some_488F47));
};
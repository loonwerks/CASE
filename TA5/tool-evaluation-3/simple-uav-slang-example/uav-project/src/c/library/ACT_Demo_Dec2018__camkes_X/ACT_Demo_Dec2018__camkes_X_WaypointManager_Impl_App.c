#include <all.h>

B ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_initialized_ = F;

union art_Bridge_EntryPoints _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_entryPoints;
Z _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_appPortId;
union Option_882048 _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_appPortIdOpt;
Z _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_flight_planPortId;
union Option_882048 _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_flight_planPortIdOpt;
Z _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_tracking_idPortId;
union Option_882048 _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_tracking_idPortIdOpt;
Z _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_FPLN_mission_rcvPortId;
Z _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_UART_mission_windowPortId;

void ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_init(STACK_FRAME_LAST) {
  if (ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_initialized_) return;
  ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_initialized_ = T;
  DeclNewStackFrame(caller, "WaypointManager_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.WaypointManager_Impl_App", "<init>", 0);
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_entryPoints, ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_entryPoints_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
  _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_appPortId = ACT_Demo_Dec2018__camkes_X_IPCPorts_WaypointManager_Impl_App(SF_LAST);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_appPortId(SF_LAST));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
  _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_flight_planPortId = art_Port_D7D05E_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_flight_plan_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)));
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_flight_planPortId(SF_LAST));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_flight_planPortIdOpt, (&t_1), sizeof(struct Some_488F47));
  _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_tracking_idPortId = art_Port_446859_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_tracking_id_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)));
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_tracking_idPortId(SF_LAST));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_tracking_idPortIdOpt, (&t_2), sizeof(struct Some_488F47));
  _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_FPLN_mission_rcvPortId = art_Port_9D6F5D_id_(ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_mission_rcv_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST)));
  _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_UART_mission_windowPortId = art_Port_2D3735_id_(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_mission_window_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST)));
}

art_Bridge_EntryPoints ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_entryPoints(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_entryPoints;
}

Z ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_appPortId(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_appPortId;
}

Option_882048 ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_appPortIdOpt(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_init(CALLER_LAST);
  return (Option_882048) &_ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_appPortIdOpt;
}

Z ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_flight_planPortId(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_flight_planPortId;
}

Option_882048 ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_flight_planPortIdOpt(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_init(CALLER_LAST);
  return (Option_882048) &_ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_flight_planPortIdOpt;
}

Z ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_tracking_idPortId(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_tracking_idPortId;
}

Option_882048 ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_tracking_idPortIdOpt(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_init(CALLER_LAST);
  return (Option_882048) &_ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_tracking_idPortIdOpt;
}

Z ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_FPLN_mission_rcvPortId(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_FPLN_mission_rcvPortId;
}

Z ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_UART_mission_windowPortId(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_UART_mission_windowPortId;
}

Z ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.WaypointManager_Impl_App", "main", 0);

  sfUpdateLoc(60);
  Z seed;
  if (Z__eq(IS_948B60_size(SF args), Z_C(1))) {

    sfUpdateLoc(61);
    DeclNewOption_882048(t_0);
    Z_apply(&t_0, IS_948B60_at(args, Z_C(0)));
    Z n = Option_882048_get_(SF (&t_0));
    Z t_1;
    if (Z__eq(n, Z_C(0))) {
      t_1 = Z_C(1);
    } else {
      t_1 = n;
    }
    seed = t_1;
  } else {
    seed = Z_C(1);
  }

  sfUpdateLoc(67);
  ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_initialise(SF seed);

  sfUpdateLoc(69);
  DeclNewTuple2_D0E3BB(t_2);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_2, (Option_882048) ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_3 = ((Tuple2_D0E3BB) &t_2);

  sfUpdateLoc(71);
  art_Bridge_EntryPoints_initialise_(SF ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_entryPoints(SF_LAST));

  sfUpdateLoc(73);
  DeclNewTuple2_D0E3BB(t_4);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_4, (Option_882048) ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_5 = ((Tuple2_D0E3BB) &t_4);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(75);
  String_cprint(string("WaypointManager_Impl_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(77);
  ACT_Demo_Dec2018__camkes_X_ArtNix_eventDispatch(SF_LAST);

  sfUpdateLoc(79);
  B terminated = F;

  sfUpdateLoc(80);
  B t_80_5 = (!terminated);
  while(t_80_5) {

    sfUpdateLoc(81);
    DeclNewOption_02FA6D(t_6);
    ACT_Demo_Dec2018__camkes_X_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_6, (Option_882048) ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_appPortIdOpt(SF_LAST));
    Option_02FA6D termOpt = (Option_02FA6D) ((Option_02FA6D) &t_6);

    sfUpdateLoc(82);
    if (Option_02FA6D_isEmpty_(SF termOpt)) {

      sfUpdateLoc(84);
      ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_compute(SF_LAST);
    } else {

      sfUpdateLoc(87);
      terminated = T;
    }

    sfUpdateLoc(80);
    t_80_5 = (!terminated);
  }

  sfUpdateLoc(90);
  ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_exit(SF_LAST);
  return Z_C(0);
}

Unit ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_atExit(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.WaypointManager_Impl_App", "atExit", 0);

  sfUpdateLoc(101);
  ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_exit(SF_LAST);
}

Unit ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_initialise(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.WaypointManager_Impl_App", "initialise", 0);

  sfUpdateLoc(28);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_initialise(SF seed, (Option_882048) ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_appPortIdOpt(SF_LAST));

  sfUpdateLoc(29);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_initialise(SF seed, (Option_882048) ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_flight_planPortIdOpt(SF_LAST));

  sfUpdateLoc(30);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_initialise(SF seed, (Option_882048) ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_tracking_idPortIdOpt(SF_LAST));

  sfUpdateLoc(32);
  Z i1 = ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_FPLN_mission_rcvPortId(SF_LAST);

  sfUpdateLoc(33);
  Z i2 = ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_UART_mission_windowPortId(SF_LAST);

  sfUpdateLoc(35);
  art_Art_run(SF (art_ArchitectureDescription) ACT_Demo_Dec2018__camkes_X_Arch_ad(SF_LAST));
}

Unit ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_compute(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.WaypointManager_Impl_App", "compute", 0);

  sfUpdateLoc(39);
  B dispatch = F;

  sfUpdateLoc(40);
  DeclNewOption_02FA6D(t_0);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_0, (Option_882048) ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_flight_planPortIdOpt(SF_LAST));
  DeclNewOption_02FA6D(t_1);
  Type_assign(&t_1, ((Option_02FA6D) &t_0), sizeof(union Option_02FA6D));
  B match_40 = F;
  if (!match_40) {
    match_40 = T;
    ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload v_41_21;
    match_40 = match_40 && Some_E9D1E5__is(SF &t_1);
    if (match_40) {
      if (match_40) {
        match_40 = match_40 && ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF &t_1))));
        if (match_40) { v_41_21 = (ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF &t_1))); }
      }
    }
    if (match_40) {

      sfUpdateLoc(41);
      ACT_Demo_Dec2018__camkes_X_ArtNix_updateData(SF ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_flight_planPortId(SF_LAST), (art_DataContent) v_41_21);

      sfUpdateLoc(41);
      dispatch = T;
    }
  }
  if (!match_40) {
    match_40 = T;
    art_DataContent v_42_21;
    match_40 = match_40 && Some_E9D1E5__is(SF &t_1);
    if (match_40) {
      if (match_40) {
        v_42_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF &t_1)));
      }
    }
    if (match_40) {

      sfUpdateLoc(42);
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string(SF (String) &t_4, string("Unexpected payload on port "));
      Z_string(SF (String) &t_4, ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_flight_planPortId(SF_LAST));
      String_string(SF (String) &t_4, string(".  Expecting something of type SW.Mission_Payload but received "));
      art_DataContent_string(SF (String) &t_4, v_42_21);
      String_string(SF (String) &t_4, string(""));
      String_string(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
  if (!match_40) {
    match_40 = T;
    match_40 = match_40 && None_93AA2B__is(SF &t_1);
    if (match_40) {
    }
    if (match_40) {
    }
  }
  sfAssert(match_40, "Error when pattern matching.");

  sfUpdateLoc(45);
  DeclNewOption_02FA6D(t_5);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_5, (Option_882048) ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_tracking_idPortIdOpt(SF_LAST));
  DeclNewOption_02FA6D(t_6);
  Type_assign(&t_6, ((Option_02FA6D) &t_5), sizeof(union Option_02FA6D));
  B match_45 = F;
  if (!match_45) {
    match_45 = T;
    ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload v_46_21;
    match_45 = match_45 && Some_E9D1E5__is(SF &t_6);
    if (match_45) {
      if (match_45) {
        match_45 = match_45 && ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF &t_6))));
        if (match_45) { v_46_21 = (ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF &t_6))); }
      }
    }
    if (match_45) {

      sfUpdateLoc(46);
      ACT_Demo_Dec2018__camkes_X_ArtNix_updateData(SF ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_tracking_idPortId(SF_LAST), (art_DataContent) v_46_21);

      sfUpdateLoc(46);
      dispatch = T;
    }
  }
  if (!match_45) {
    match_45 = T;
    art_DataContent v_47_21;
    match_45 = match_45 && Some_E9D1E5__is(SF &t_6);
    if (match_45) {
      if (match_45) {
        v_47_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF &t_6)));
      }
    }
    if (match_45) {

      sfUpdateLoc(47);
      DeclNewString(t_7);
      String t_8 = (String) &t_7;
      DeclNewString(t_9);
      String_string(SF (String) &t_9, string("Unexpected payload on port "));
      Z_string(SF (String) &t_9, ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_tracking_idPortId(SF_LAST));
      String_string(SF (String) &t_9, string(".  Expecting something of type Base_Types.Integer_64_Payload but received "));
      art_DataContent_string(SF (String) &t_9, v_47_21);
      String_string(SF (String) &t_9, string(""));
      String_string(SF t_8, ((String) &t_9));
      sfAbort(t_8->value);
      abort();
    }
  }
  if (!match_45) {
    match_45 = T;
    match_45 = match_45 && None_93AA2B__is(SF &t_6);
    if (match_45) {
    }
    if (match_45) {
    }
  }
  sfAssert(match_45, "Error when pattern matching.");

  sfUpdateLoc(50);
  if (dispatch) {

    sfUpdateLoc(51);
    art_Bridge_EntryPoints_compute_(SF ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_entryPoints(SF_LAST));

    sfUpdateLoc(52);
    ACT_Demo_Dec2018__camkes_X_Process_sleep(SF Z_C(1));
  } else {

    sfUpdateLoc(54);
    ACT_Demo_Dec2018__camkes_X_Process_sleep(SF Z_C(10));
  }
}

Unit ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App_exit(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.WaypointManager_Impl_App", "exit", 0);

  sfUpdateLoc(96);
  art_Bridge_EntryPoints_finalise_(SF ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_entryPoints_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)));

  sfUpdateLoc(97);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_finalise(SF_LAST);
}
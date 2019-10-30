#include <all.h>

B ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_initialized_ = F;

union art_Bridge_EntryPoints _ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_entryPoints;
Z _ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_appPortId;
union Option_882048 _ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_appPortIdOpt;
Z _ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_mission_rcvPortId;
union Option_882048 _ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_mission_rcvPortIdOpt;
Z _ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_recv_mapPortId;
union Option_882048 _ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_recv_mapPortIdOpt;
Z _ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_WPM_flight_plan;

void ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_init(STACK_FRAME_LAST) {
  if (ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_initialized_) return;
  ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_initialized_ = T;
  DeclNewStackFrame(caller, "FlightPlanner_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.FlightPlanner_Impl_App", "<init>", 0);
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_entryPoints, ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_entryPoints_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
  _ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_appPortId = ACT_Demo_Dec2018__camkes_X_IPCPorts_FlightPlanner_Impl_App(SF_LAST);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_appPortId(SF_LAST));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
  _ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_mission_rcvPortId = art_Port_9D6F5D_id_(ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_mission_rcv_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST)));
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_mission_rcvPortId(SF_LAST));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_mission_rcvPortIdOpt, (&t_1), sizeof(struct Some_488F47));
  _ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_recv_mapPortId = art_Port_695448_id_(ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_recv_map_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST)));
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_recv_mapPortId(SF_LAST));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_recv_mapPortIdOpt, (&t_2), sizeof(struct Some_488F47));
  _ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_WPM_flight_plan = art_Port_D7D05E_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_flight_plan_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)));
}

art_Bridge_EntryPoints ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_entryPoints(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_entryPoints;
}

Z ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_appPortId(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_appPortId;
}

Option_882048 ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_appPortIdOpt(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_init(CALLER_LAST);
  return (Option_882048) &_ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_appPortIdOpt;
}

Z ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_mission_rcvPortId(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_mission_rcvPortId;
}

Option_882048 ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_mission_rcvPortIdOpt(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_init(CALLER_LAST);
  return (Option_882048) &_ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_mission_rcvPortIdOpt;
}

Z ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_recv_mapPortId(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_recv_mapPortId;
}

Option_882048 ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_recv_mapPortIdOpt(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_init(CALLER_LAST);
  return (Option_882048) &_ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_recv_mapPortIdOpt;
}

Z ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_WPM_flight_plan(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_WPM_flight_plan;
}

Z ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.FlightPlanner_Impl_App", "main", 0);

  sfUpdateLoc(56);
  Z seed;
  if (Z__eq(IS_948B60_size(SF args), Z_C(1))) {

    sfUpdateLoc(57);
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

  sfUpdateLoc(63);
  ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_initialise(SF seed);

  sfUpdateLoc(65);
  DeclNewTuple2_D0E3BB(t_2);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_2, (Option_882048) ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_3 = ((Tuple2_D0E3BB) &t_2);

  sfUpdateLoc(67);
  art_Bridge_EntryPoints_initialise_(SF ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_entryPoints(SF_LAST));

  sfUpdateLoc(69);
  DeclNewTuple2_D0E3BB(t_4);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_4, (Option_882048) ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_5 = ((Tuple2_D0E3BB) &t_4);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(71);
  String_cprint(string("FlightPlanner_Impl_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(73);
  ACT_Demo_Dec2018__camkes_X_ArtNix_eventDispatch(SF_LAST);

  sfUpdateLoc(75);
  B terminated = F;

  sfUpdateLoc(76);
  B t_76_5 = (!terminated);
  while(t_76_5) {

    sfUpdateLoc(77);
    DeclNewOption_02FA6D(t_6);
    ACT_Demo_Dec2018__camkes_X_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_6, (Option_882048) ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_appPortIdOpt(SF_LAST));
    Option_02FA6D termOpt = (Option_02FA6D) ((Option_02FA6D) &t_6);

    sfUpdateLoc(78);
    if (Option_02FA6D_isEmpty_(SF termOpt)) {

      sfUpdateLoc(80);
      ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_compute(SF_LAST);
    } else {

      sfUpdateLoc(83);
      terminated = T;
    }

    sfUpdateLoc(76);
    t_76_5 = (!terminated);
  }

  sfUpdateLoc(86);
  ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_exit(SF_LAST);
  return Z_C(0);
}

Unit ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_atExit(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.FlightPlanner_Impl_App", "atExit", 0);

  sfUpdateLoc(97);
  ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_exit(SF_LAST);
}

Unit ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_initialise(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.FlightPlanner_Impl_App", "initialise", 0);

  sfUpdateLoc(25);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_initialise(SF seed, (Option_882048) ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_appPortIdOpt(SF_LAST));

  sfUpdateLoc(26);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_initialise(SF seed, (Option_882048) ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_mission_rcvPortIdOpt(SF_LAST));

  sfUpdateLoc(27);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_initialise(SF seed, (Option_882048) ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_recv_mapPortIdOpt(SF_LAST));

  sfUpdateLoc(29);
  Z i0 = ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_WPM_flight_plan(SF_LAST);

  sfUpdateLoc(31);
  art_Art_run(SF (art_ArchitectureDescription) ACT_Demo_Dec2018__camkes_X_Arch_ad(SF_LAST));
}

Unit ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_compute(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.FlightPlanner_Impl_App", "compute", 0);

  sfUpdateLoc(35);
  B dispatch = F;

  sfUpdateLoc(36);
  DeclNewOption_02FA6D(t_0);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_0, (Option_882048) ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_mission_rcvPortIdOpt(SF_LAST));
  DeclNewOption_02FA6D(t_1);
  Type_assign(&t_1, ((Option_02FA6D) &t_0), sizeof(union Option_02FA6D));
  B match_36 = F;
  if (!match_36) {
    match_36 = T;
    ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload v_37_21;
    match_36 = match_36 && Some_E9D1E5__is(SF &t_1);
    if (match_36) {
      if (match_36) {
        match_36 = match_36 && ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF &t_1))));
        if (match_36) { v_37_21 = (ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF &t_1))); }
      }
    }
    if (match_36) {

      sfUpdateLoc(37);
      ACT_Demo_Dec2018__camkes_X_ArtNix_updateData(SF ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_mission_rcvPortId(SF_LAST), (art_DataContent) v_37_21);

      sfUpdateLoc(37);
      dispatch = T;
    }
  }
  if (!match_36) {
    match_36 = T;
    art_DataContent v_38_21;
    match_36 = match_36 && Some_E9D1E5__is(SF &t_1);
    if (match_36) {
      if (match_36) {
        v_38_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF &t_1)));
      }
    }
    if (match_36) {

      sfUpdateLoc(38);
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string(SF (String) &t_4, string("Unexpected payload on port "));
      Z_string(SF (String) &t_4, ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_mission_rcvPortId(SF_LAST));
      String_string(SF (String) &t_4, string(".  Expecting something of type Base_Types.Boolean_Payload but received "));
      art_DataContent_string(SF (String) &t_4, v_38_21);
      String_string(SF (String) &t_4, string(""));
      String_string(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
  if (!match_36) {
    match_36 = T;
    match_36 = match_36 && None_93AA2B__is(SF &t_1);
    if (match_36) {
    }
    if (match_36) {
    }
  }
  sfAssert(match_36, "Error when pattern matching.");

  sfUpdateLoc(41);
  DeclNewOption_02FA6D(t_5);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_5, (Option_882048) ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_recv_mapPortIdOpt(SF_LAST));
  DeclNewOption_02FA6D(t_6);
  Type_assign(&t_6, ((Option_02FA6D) &t_5), sizeof(union Option_02FA6D));
  B match_41 = F;
  if (!match_41) {
    match_41 = T;
    ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload v_42_21;
    match_41 = match_41 && Some_E9D1E5__is(SF &t_6);
    if (match_41) {
      if (match_41) {
        match_41 = match_41 && ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF &t_6))));
        if (match_41) { v_42_21 = (ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF &t_6))); }
      }
    }
    if (match_41) {

      sfUpdateLoc(42);
      ACT_Demo_Dec2018__camkes_X_ArtNix_updateData(SF ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_recv_mapPortId(SF_LAST), (art_DataContent) v_42_21);

      sfUpdateLoc(42);
      dispatch = T;
    }
  }
  if (!match_41) {
    match_41 = T;
    art_DataContent v_43_21;
    match_41 = match_41 && Some_E9D1E5__is(SF &t_6);
    if (match_41) {
      if (match_41) {
        v_43_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF &t_6)));
      }
    }
    if (match_41) {

      sfUpdateLoc(43);
      DeclNewString(t_7);
      String t_8 = (String) &t_7;
      DeclNewString(t_9);
      String_string(SF (String) &t_9, string("Unexpected payload on port "));
      Z_string(SF (String) &t_9, ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_recv_mapPortId(SF_LAST));
      String_string(SF (String) &t_9, string(".  Expecting something of type SW.Command_Impl_Payload but received "));
      art_DataContent_string(SF (String) &t_9, v_43_21);
      String_string(SF (String) &t_9, string(""));
      String_string(SF t_8, ((String) &t_9));
      sfAbort(t_8->value);
      abort();
    }
  }
  if (!match_41) {
    match_41 = T;
    match_41 = match_41 && None_93AA2B__is(SF &t_6);
    if (match_41) {
    }
    if (match_41) {
    }
  }
  sfAssert(match_41, "Error when pattern matching.");

  sfUpdateLoc(46);
  if (dispatch) {

    sfUpdateLoc(47);
    art_Bridge_EntryPoints_compute_(SF ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_entryPoints(SF_LAST));

    sfUpdateLoc(48);
    ACT_Demo_Dec2018__camkes_X_Process_sleep(SF Z_C(1));
  } else {

    sfUpdateLoc(50);
    ACT_Demo_Dec2018__camkes_X_Process_sleep(SF Z_C(10));
  }
}

Unit ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App_exit(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.FlightPlanner_Impl_App", "exit", 0);

  sfUpdateLoc(92);
  art_Bridge_EntryPoints_finalise_(SF ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_entryPoints_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST)));

  sfUpdateLoc(93);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_finalise(SF_LAST);
}
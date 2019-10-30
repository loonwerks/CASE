#include <all.h>

B uav_project_extern_WaypointManager_Impl_App_initialized_ = F;

union art_Bridge_EntryPoints _uav_project_extern_WaypointManager_Impl_App_entryPoints;
Z _uav_project_extern_WaypointManager_Impl_App_appPortId;
union Option_882048 _uav_project_extern_WaypointManager_Impl_App_appPortIdOpt;
Z _uav_project_extern_WaypointManager_Impl_App_flight_planPortId;
union Option_882048 _uav_project_extern_WaypointManager_Impl_App_flight_planPortIdOpt;
Z _uav_project_extern_WaypointManager_Impl_App_tracking_idPortId;
union Option_882048 _uav_project_extern_WaypointManager_Impl_App_tracking_idPortIdOpt;

void uav_project_extern_WaypointManager_Impl_App_init(STACK_FRAME_ONLY) {
  if (uav_project_extern_WaypointManager_Impl_App_initialized_) return;
  uav_project_extern_WaypointManager_Impl_App_initialized_ = T;
  DeclNewStackFrame(caller, "WaypointManager_Impl_App.scala", "uav_project_extern.WaypointManager_Impl_App", "<init>", 0);
  Type_assign(&_uav_project_extern_WaypointManager_Impl_App_entryPoints, uav_project_extern_SW_WaypointManager_Impl_Bridge_entryPoints_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
  _uav_project_extern_WaypointManager_Impl_App_appPortId = uav_project_extern_IPCPorts_WaypointManager_Impl_App(SF_LAST);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, uav_project_extern_WaypointManager_Impl_App_appPortId(SF_LAST));
  Type_assign(&_uav_project_extern_WaypointManager_Impl_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
  _uav_project_extern_WaypointManager_Impl_App_flight_planPortId = art_Port_97EF76_id_(uav_project_extern_SW_WaypointManager_Impl_Bridge_flight_plan_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)));
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, uav_project_extern_WaypointManager_Impl_App_flight_planPortId(SF_LAST));
  Type_assign(&_uav_project_extern_WaypointManager_Impl_App_flight_planPortIdOpt, (&t_1), sizeof(struct Some_488F47));
  _uav_project_extern_WaypointManager_Impl_App_tracking_idPortId = art_Port_CBF210_id_(uav_project_extern_SW_WaypointManager_Impl_Bridge_tracking_id_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)));
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, uav_project_extern_WaypointManager_Impl_App_tracking_idPortId(SF_LAST));
  Type_assign(&_uav_project_extern_WaypointManager_Impl_App_tracking_idPortIdOpt, (&t_2), sizeof(struct Some_488F47));
}

art_Bridge_EntryPoints uav_project_extern_WaypointManager_Impl_App_entryPoints(STACK_FRAME_ONLY) {
  uav_project_extern_WaypointManager_Impl_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_uav_project_extern_WaypointManager_Impl_App_entryPoints;
}

Z uav_project_extern_WaypointManager_Impl_App_appPortId(STACK_FRAME_ONLY) {
  uav_project_extern_WaypointManager_Impl_App_init(CALLER_LAST);
  return _uav_project_extern_WaypointManager_Impl_App_appPortId;
}

Option_882048 uav_project_extern_WaypointManager_Impl_App_appPortIdOpt(STACK_FRAME_ONLY) {
  uav_project_extern_WaypointManager_Impl_App_init(CALLER_LAST);
  return (Option_882048) &_uav_project_extern_WaypointManager_Impl_App_appPortIdOpt;
}

Z uav_project_extern_WaypointManager_Impl_App_flight_planPortId(STACK_FRAME_ONLY) {
  uav_project_extern_WaypointManager_Impl_App_init(CALLER_LAST);
  return _uav_project_extern_WaypointManager_Impl_App_flight_planPortId;
}

Option_882048 uav_project_extern_WaypointManager_Impl_App_flight_planPortIdOpt(STACK_FRAME_ONLY) {
  uav_project_extern_WaypointManager_Impl_App_init(CALLER_LAST);
  return (Option_882048) &_uav_project_extern_WaypointManager_Impl_App_flight_planPortIdOpt;
}

Z uav_project_extern_WaypointManager_Impl_App_tracking_idPortId(STACK_FRAME_ONLY) {
  uav_project_extern_WaypointManager_Impl_App_init(CALLER_LAST);
  return _uav_project_extern_WaypointManager_Impl_App_tracking_idPortId;
}

Option_882048 uav_project_extern_WaypointManager_Impl_App_tracking_idPortIdOpt(STACK_FRAME_ONLY) {
  uav_project_extern_WaypointManager_Impl_App_init(CALLER_LAST);
  return (Option_882048) &_uav_project_extern_WaypointManager_Impl_App_tracking_idPortIdOpt;
}

Z uav_project_extern_WaypointManager_Impl_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_App.scala", "uav_project_extern.WaypointManager_Impl_App", "main", 0);

  sfUpdateLoc(50);
  Z seed;
  if (Z__eq(IS_948B60_size(SF args), Z_C(1))) {

    sfUpdateLoc(51);
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

  sfUpdateLoc(57);
  uav_project_extern_WaypointManager_Impl_App_initialise(SF seed);

  sfUpdateLoc(59);
  DeclNewTuple2_D0E3BB(t_2);
  uav_project_extern_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_2, (Option_882048) uav_project_extern_WaypointManager_Impl_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_3 = ((Tuple2_D0E3BB) &t_2);

  sfUpdateLoc(61);
  art_Bridge_EntryPoints_initialise_(SF uav_project_extern_WaypointManager_Impl_App_entryPoints(SF_LAST));

  sfUpdateLoc(63);
  DeclNewTuple2_D0E3BB(t_4);
  uav_project_extern_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_4, (Option_882048) uav_project_extern_WaypointManager_Impl_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_5 = ((Tuple2_D0E3BB) &t_4);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(65);
  String_cprint(string("WaypointManager_Impl_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(67);
  uav_project_extern_ArtNix_eventDispatch(SF_LAST);

  sfUpdateLoc(69);
  B terminated = F;

  sfUpdateLoc(70);
  B t_70_5 = (!terminated);
  while(t_70_5) {

    sfUpdateLoc(71);
    DeclNewOption_02FA6D(_termOpt);
    Option_02FA6D termOpt;
    DeclNewOption_02FA6D(t_6);
    uav_project_extern_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_6, (Option_882048) uav_project_extern_WaypointManager_Impl_App_appPortIdOpt(SF_LAST));
    termOpt = (Option_02FA6D) ((Option_02FA6D) &t_6);

    sfUpdateLoc(72);
    if (Option_02FA6D_isEmpty_(SF termOpt)) {

      sfUpdateLoc(73);
      uav_project_extern_WaypointManager_Impl_App_compute(SF_LAST);
    } else {

      sfUpdateLoc(75);
      terminated = T;
    }

    sfUpdateLoc(70);
    t_70_5 = (!terminated);
  }

  sfUpdateLoc(78);
  uav_project_extern_WaypointManager_Impl_App_exit(SF_LAST);
  return Z_C(0);
}

Unit uav_project_extern_WaypointManager_Impl_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_App.scala", "uav_project_extern.WaypointManager_Impl_App", "atExit", 0);

  sfUpdateLoc(89);
  uav_project_extern_WaypointManager_Impl_App_exit(SF_LAST);
}

Unit uav_project_extern_WaypointManager_Impl_App_initialise(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_App.scala", "uav_project_extern.WaypointManager_Impl_App", "initialise", 0);

  sfUpdateLoc(21);
  uav_project_extern_PlatformNix_initialise(SF seed, (Option_882048) uav_project_extern_WaypointManager_Impl_App_appPortIdOpt(SF_LAST));

  sfUpdateLoc(22);
  uav_project_extern_PlatformNix_initialise(SF seed, (Option_882048) uav_project_extern_WaypointManager_Impl_App_flight_planPortIdOpt(SF_LAST));

  sfUpdateLoc(23);
  uav_project_extern_PlatformNix_initialise(SF seed, (Option_882048) uav_project_extern_WaypointManager_Impl_App_tracking_idPortIdOpt(SF_LAST));

  sfUpdateLoc(25);
  art_Art_run(SF (art_ArchitectureDescription) uav_project_extern_Arch_ad(SF_LAST));
}

static inline B uav_project_extern_WaypointManager_Impl_App_compute_extract_31_12_02FA6D(STACK_FRAME Option_02FA6D t_0, uav_project_extern_SW_Mission_Payload *_v_31_21) {
  if (!Some_E9D1E5__is(SF t_0)) return F;
  if (!uav_project_extern_SW_Mission_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0))))) return F;
  *_v_31_21 = (uav_project_extern_SW_Mission_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0)));
  return T;
}

static inline B uav_project_extern_WaypointManager_Impl_App_compute_extract_32_12_02FA6D(STACK_FRAME Option_02FA6D t_0, art_DataContent *_v_32_21) {
  if (!Some_E9D1E5__is(SF t_0)) return F;
  *_v_32_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0)));
  return T;
}

static inline B uav_project_extern_WaypointManager_Impl_App_compute_extract_33_12_02FA6D(STACK_FRAME Option_02FA6D t_0) {
  if (!None_93AA2B__is(SF t_0)) return F;
  return T;
}

static inline B uav_project_extern_WaypointManager_Impl_App_compute_extract_36_12_02FA6D(STACK_FRAME Option_02FA6D t_5, uav_project_extern_Base_Types_Integer_64_Payload *_v_36_21) {
  if (!Some_E9D1E5__is(SF t_5)) return F;
  if (!uav_project_extern_Base_Types_Integer_64_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_5))))) return F;
  *_v_36_21 = (uav_project_extern_Base_Types_Integer_64_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_5)));
  return T;
}

static inline B uav_project_extern_WaypointManager_Impl_App_compute_extract_37_12_02FA6D(STACK_FRAME Option_02FA6D t_5, art_DataContent *_v_37_21) {
  if (!Some_E9D1E5__is(SF t_5)) return F;
  *_v_37_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_5)));
  return T;
}

static inline B uav_project_extern_WaypointManager_Impl_App_compute_extract_38_12_02FA6D(STACK_FRAME Option_02FA6D t_5) {
  if (!None_93AA2B__is(SF t_5)) return F;
  return T;
}

Unit uav_project_extern_WaypointManager_Impl_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_App.scala", "uav_project_extern.WaypointManager_Impl_App", "compute", 0);

  sfUpdateLoc(29);
  B dispatch = F;

  sfUpdateLoc(30);
  DeclNewOption_02FA6D(t_1);
  uav_project_extern_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_1, (Option_882048) uav_project_extern_WaypointManager_Impl_App_flight_planPortIdOpt(SF_LAST));
  Option_02FA6D t_0 = ((Option_02FA6D) &t_1);
  B match_30_14 = F;
  if (!match_30_14) {
    uav_project_extern_SW_Mission_Payload v_31_21;
    match_30_14 = uav_project_extern_WaypointManager_Impl_App_compute_extract_31_12_02FA6D(SF t_0, &v_31_21);
    if (match_30_14) {

      sfUpdateLoc(31);
      uav_project_extern_ArtNix_updateData(SF uav_project_extern_WaypointManager_Impl_App_flight_planPortId(SF_LAST), (art_DataContent) v_31_21);

      sfUpdateLoc(31);
      dispatch = T;
    }
  }
  if (!match_30_14) {
    art_DataContent v_32_21;
    match_30_14 = uav_project_extern_WaypointManager_Impl_App_compute_extract_32_12_02FA6D(SF t_0, &v_32_21);
    if (match_30_14) {

      sfUpdateLoc(32);
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected payload on port "));
      Z_string_(SF (String) &t_4, uav_project_extern_WaypointManager_Impl_App_flight_planPortId(SF_LAST));
      String_string_(SF (String) &t_4, string(".  Expecting something of type SW.Mission_Payload but received "));
      art_DataContent_string_(SF (String) &t_4, v_32_21);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
  if (!match_30_14) {
    match_30_14 = uav_project_extern_WaypointManager_Impl_App_compute_extract_33_12_02FA6D(SF t_0);
    if (match_30_14) {
    }
  }
  sfAssert(match_30_14, "Error when pattern matching.");

  sfUpdateLoc(35);
  DeclNewOption_02FA6D(t_6);
  uav_project_extern_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_6, (Option_882048) uav_project_extern_WaypointManager_Impl_App_tracking_idPortIdOpt(SF_LAST));
  Option_02FA6D t_5 = ((Option_02FA6D) &t_6);
  B match_35_14 = F;
  if (!match_35_14) {
    uav_project_extern_Base_Types_Integer_64_Payload v_36_21;
    match_35_14 = uav_project_extern_WaypointManager_Impl_App_compute_extract_36_12_02FA6D(SF t_5, &v_36_21);
    if (match_35_14) {

      sfUpdateLoc(36);
      uav_project_extern_ArtNix_updateData(SF uav_project_extern_WaypointManager_Impl_App_tracking_idPortId(SF_LAST), (art_DataContent) v_36_21);

      sfUpdateLoc(36);
      dispatch = T;
    }
  }
  if (!match_35_14) {
    art_DataContent v_37_21;
    match_35_14 = uav_project_extern_WaypointManager_Impl_App_compute_extract_37_12_02FA6D(SF t_5, &v_37_21);
    if (match_35_14) {

      sfUpdateLoc(37);
      DeclNewString(t_7);
      String t_8 = (String) &t_7;
      DeclNewString(t_9);
      String_string_(SF (String) &t_9, string("Unexpected payload on port "));
      Z_string_(SF (String) &t_9, uav_project_extern_WaypointManager_Impl_App_tracking_idPortId(SF_LAST));
      String_string_(SF (String) &t_9, string(".  Expecting something of type Base_Types.Integer_64_Payload but received "));
      art_DataContent_string_(SF (String) &t_9, v_37_21);
      String_string_(SF (String) &t_9, string(""));
      String_string_(SF t_8, ((String) &t_9));
      sfAbort(t_8->value);
      abort();
    }
  }
  if (!match_35_14) {
    match_35_14 = uav_project_extern_WaypointManager_Impl_App_compute_extract_38_12_02FA6D(SF t_5);
    if (match_35_14) {
    }
  }
  sfAssert(match_35_14, "Error when pattern matching.");

  sfUpdateLoc(40);
  if (dispatch) {

    sfUpdateLoc(41);
    art_Bridge_EntryPoints_compute_(SF uav_project_extern_WaypointManager_Impl_App_entryPoints(SF_LAST));

    sfUpdateLoc(42);
    uav_project_extern_Process_sleep(SF Z_C(1));
  } else {

    sfUpdateLoc(44);
    uav_project_extern_Process_sleep(SF Z_C(10));
  }
}

Unit uav_project_extern_WaypointManager_Impl_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_App.scala", "uav_project_extern.WaypointManager_Impl_App", "exit", 0);

  sfUpdateLoc(84);
  art_Bridge_EntryPoints_finalise_(SF uav_project_extern_SW_WaypointManager_Impl_Bridge_entryPoints_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)));

  sfUpdateLoc(85);
  uav_project_extern_PlatformNix_finalise(SF_LAST);
}
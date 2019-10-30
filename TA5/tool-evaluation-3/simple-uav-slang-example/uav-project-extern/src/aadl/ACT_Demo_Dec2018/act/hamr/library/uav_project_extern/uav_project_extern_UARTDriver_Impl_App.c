#include <all.h>

B uav_project_extern_UARTDriver_Impl_App_initialized_ = F;

union art_Bridge_EntryPoints _uav_project_extern_UARTDriver_Impl_App_entryPoints;
Z _uav_project_extern_UARTDriver_Impl_App_appPortId;
union Option_882048 _uav_project_extern_UARTDriver_Impl_App_appPortIdOpt;
Z _uav_project_extern_UARTDriver_Impl_App_mission_windowPortId;
union Option_882048 _uav_project_extern_UARTDriver_Impl_App_mission_windowPortIdOpt;

void uav_project_extern_UARTDriver_Impl_App_init(STACK_FRAME_ONLY) {
  if (uav_project_extern_UARTDriver_Impl_App_initialized_) return;
  uav_project_extern_UARTDriver_Impl_App_initialized_ = T;
  DeclNewStackFrame(caller, "UARTDriver_Impl_App.scala", "uav_project_extern.UARTDriver_Impl_App", "<init>", 0);
  Type_assign(&_uav_project_extern_UARTDriver_Impl_App_entryPoints, uav_project_extern_SW_UARTDriver_Impl_Bridge_entryPoints_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
  _uav_project_extern_UARTDriver_Impl_App_appPortId = uav_project_extern_IPCPorts_UARTDriver_Impl_App(SF_LAST);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, uav_project_extern_UARTDriver_Impl_App_appPortId(SF_LAST));
  Type_assign(&_uav_project_extern_UARTDriver_Impl_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
  _uav_project_extern_UARTDriver_Impl_App_mission_windowPortId = art_Port_65F60A_id_(uav_project_extern_SW_UARTDriver_Impl_Bridge_mission_window_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST)));
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, uav_project_extern_UARTDriver_Impl_App_mission_windowPortId(SF_LAST));
  Type_assign(&_uav_project_extern_UARTDriver_Impl_App_mission_windowPortIdOpt, (&t_1), sizeof(struct Some_488F47));
}

art_Bridge_EntryPoints uav_project_extern_UARTDriver_Impl_App_entryPoints(STACK_FRAME_ONLY) {
  uav_project_extern_UARTDriver_Impl_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_uav_project_extern_UARTDriver_Impl_App_entryPoints;
}

Z uav_project_extern_UARTDriver_Impl_App_appPortId(STACK_FRAME_ONLY) {
  uav_project_extern_UARTDriver_Impl_App_init(CALLER_LAST);
  return _uav_project_extern_UARTDriver_Impl_App_appPortId;
}

Option_882048 uav_project_extern_UARTDriver_Impl_App_appPortIdOpt(STACK_FRAME_ONLY) {
  uav_project_extern_UARTDriver_Impl_App_init(CALLER_LAST);
  return (Option_882048) &_uav_project_extern_UARTDriver_Impl_App_appPortIdOpt;
}

Z uav_project_extern_UARTDriver_Impl_App_mission_windowPortId(STACK_FRAME_ONLY) {
  uav_project_extern_UARTDriver_Impl_App_init(CALLER_LAST);
  return _uav_project_extern_UARTDriver_Impl_App_mission_windowPortId;
}

Option_882048 uav_project_extern_UARTDriver_Impl_App_mission_windowPortIdOpt(STACK_FRAME_ONLY) {
  uav_project_extern_UARTDriver_Impl_App_init(CALLER_LAST);
  return (Option_882048) &_uav_project_extern_UARTDriver_Impl_App_mission_windowPortIdOpt;
}

Z uav_project_extern_UARTDriver_Impl_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_App.scala", "uav_project_extern.UARTDriver_Impl_App", "main", 0);

  sfUpdateLoc(42);
  Z seed;
  if (Z__eq(IS_948B60_size(SF args), Z_C(1))) {

    sfUpdateLoc(43);
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

  sfUpdateLoc(49);
  uav_project_extern_UARTDriver_Impl_App_initialise(SF seed);

  sfUpdateLoc(51);
  DeclNewTuple2_D0E3BB(t_2);
  uav_project_extern_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_2, (Option_882048) uav_project_extern_UARTDriver_Impl_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_3 = ((Tuple2_D0E3BB) &t_2);

  sfUpdateLoc(53);
  art_Bridge_EntryPoints_initialise_(SF uav_project_extern_UARTDriver_Impl_App_entryPoints(SF_LAST));

  sfUpdateLoc(55);
  DeclNewTuple2_D0E3BB(t_4);
  uav_project_extern_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_4, (Option_882048) uav_project_extern_UARTDriver_Impl_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_5 = ((Tuple2_D0E3BB) &t_4);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(57);
  String_cprint(string("UARTDriver_Impl_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(59);
  uav_project_extern_ArtNix_eventDispatch(SF_LAST);

  sfUpdateLoc(61);
  B terminated = F;

  sfUpdateLoc(62);
  B t_62_5 = (!terminated);
  while(t_62_5) {

    sfUpdateLoc(63);
    DeclNewOption_02FA6D(_termOpt);
    Option_02FA6D termOpt;
    DeclNewOption_02FA6D(t_6);
    uav_project_extern_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_6, (Option_882048) uav_project_extern_UARTDriver_Impl_App_appPortIdOpt(SF_LAST));
    termOpt = (Option_02FA6D) ((Option_02FA6D) &t_6);

    sfUpdateLoc(64);
    if (Option_02FA6D_isEmpty_(SF termOpt)) {

      sfUpdateLoc(65);
      uav_project_extern_UARTDriver_Impl_App_compute(SF_LAST);
    } else {

      sfUpdateLoc(67);
      terminated = T;
    }

    sfUpdateLoc(62);
    t_62_5 = (!terminated);
  }

  sfUpdateLoc(70);
  uav_project_extern_UARTDriver_Impl_App_exit(SF_LAST);
  return Z_C(0);
}

Unit uav_project_extern_UARTDriver_Impl_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_App.scala", "uav_project_extern.UARTDriver_Impl_App", "atExit", 0);

  sfUpdateLoc(81);
  uav_project_extern_UARTDriver_Impl_App_exit(SF_LAST);
}

Unit uav_project_extern_UARTDriver_Impl_App_initialise(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_App.scala", "uav_project_extern.UARTDriver_Impl_App", "initialise", 0);

  sfUpdateLoc(19);
  uav_project_extern_PlatformNix_initialise(SF seed, (Option_882048) uav_project_extern_UARTDriver_Impl_App_appPortIdOpt(SF_LAST));

  sfUpdateLoc(20);
  uav_project_extern_PlatformNix_initialise(SF seed, (Option_882048) uav_project_extern_UARTDriver_Impl_App_mission_windowPortIdOpt(SF_LAST));

  sfUpdateLoc(22);
  art_Art_run(SF (art_ArchitectureDescription) uav_project_extern_Arch_ad(SF_LAST));
}

static inline B uav_project_extern_UARTDriver_Impl_App_compute_extract_28_12_02FA6D(STACK_FRAME Option_02FA6D t_0, uav_project_extern_SW_MissionWindow_Payload *_v_28_21) {
  if (!Some_E9D1E5__is(SF t_0)) return F;
  if (!uav_project_extern_SW_MissionWindow_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0))))) return F;
  *_v_28_21 = (uav_project_extern_SW_MissionWindow_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0)));
  return T;
}

static inline B uav_project_extern_UARTDriver_Impl_App_compute_extract_29_12_02FA6D(STACK_FRAME Option_02FA6D t_0, art_DataContent *_v_29_21) {
  if (!Some_E9D1E5__is(SF t_0)) return F;
  *_v_29_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF t_0)));
  return T;
}

static inline B uav_project_extern_UARTDriver_Impl_App_compute_extract_30_12_02FA6D(STACK_FRAME Option_02FA6D t_0) {
  if (!None_93AA2B__is(SF t_0)) return F;
  return T;
}

Unit uav_project_extern_UARTDriver_Impl_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_App.scala", "uav_project_extern.UARTDriver_Impl_App", "compute", 0);

  sfUpdateLoc(26);
  B dispatch = F;

  sfUpdateLoc(27);
  DeclNewOption_02FA6D(t_1);
  uav_project_extern_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_1, (Option_882048) uav_project_extern_UARTDriver_Impl_App_mission_windowPortIdOpt(SF_LAST));
  Option_02FA6D t_0 = ((Option_02FA6D) &t_1);
  B match_27_14 = F;
  if (!match_27_14) {
    uav_project_extern_SW_MissionWindow_Payload v_28_21;
    match_27_14 = uav_project_extern_UARTDriver_Impl_App_compute_extract_28_12_02FA6D(SF t_0, &v_28_21);
    if (match_27_14) {

      sfUpdateLoc(28);
      uav_project_extern_ArtNix_updateData(SF uav_project_extern_UARTDriver_Impl_App_mission_windowPortId(SF_LAST), (art_DataContent) v_28_21);

      sfUpdateLoc(28);
      dispatch = T;
    }
  }
  if (!match_27_14) {
    art_DataContent v_29_21;
    match_27_14 = uav_project_extern_UARTDriver_Impl_App_compute_extract_29_12_02FA6D(SF t_0, &v_29_21);
    if (match_27_14) {

      sfUpdateLoc(29);
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected payload on port "));
      Z_string_(SF (String) &t_4, uav_project_extern_UARTDriver_Impl_App_mission_windowPortId(SF_LAST));
      String_string_(SF (String) &t_4, string(".  Expecting something of type SW.MissionWindow_Payload but received "));
      art_DataContent_string_(SF (String) &t_4, v_29_21);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
  if (!match_27_14) {
    match_27_14 = uav_project_extern_UARTDriver_Impl_App_compute_extract_30_12_02FA6D(SF t_0);
    if (match_27_14) {
    }
  }
  sfAssert(match_27_14, "Error when pattern matching.");

  sfUpdateLoc(32);
  if (dispatch) {

    sfUpdateLoc(33);
    art_Bridge_EntryPoints_compute_(SF uav_project_extern_UARTDriver_Impl_App_entryPoints(SF_LAST));

    sfUpdateLoc(34);
    uav_project_extern_Process_sleep(SF Z_C(1));
  } else {

    sfUpdateLoc(36);
    uav_project_extern_Process_sleep(SF Z_C(10));
  }
}

Unit uav_project_extern_UARTDriver_Impl_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_App.scala", "uav_project_extern.UARTDriver_Impl_App", "exit", 0);

  sfUpdateLoc(76);
  art_Bridge_EntryPoints_finalise_(SF uav_project_extern_SW_UARTDriver_Impl_Bridge_entryPoints_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST)));

  sfUpdateLoc(77);
  uav_project_extern_PlatformNix_finalise(SF_LAST);
}
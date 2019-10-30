#include <all.h>

B ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_initialized_ = F;

union art_Bridge_EntryPoints _ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_entryPoints;
Z _ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_appPortId;
union Option_882048 _ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_appPortIdOpt;
Z _ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_mission_windowPortId;
union Option_882048 _ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_mission_windowPortIdOpt;
Z _ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_WPM_tracking_idPortId;

void ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_init(STACK_FRAME_LAST) {
  if (ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_initialized_) return;
  ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_initialized_ = T;
  DeclNewStackFrame(caller, "UARTDriver_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.UARTDriver_Impl_App", "<init>", 0);
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_entryPoints, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_entryPoints_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
  _ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_appPortId = ACT_Demo_Dec2018__camkes_X_IPCPorts_UARTDriver_Impl_App(SF_LAST);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_appPortId(SF_LAST));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
  _ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_mission_windowPortId = art_Port_2D3735_id_(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_mission_window_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST)));
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_mission_windowPortId(SF_LAST));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_mission_windowPortIdOpt, (&t_1), sizeof(struct Some_488F47));
  _ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_WPM_tracking_idPortId = art_Port_446859_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_tracking_id_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)));
}

art_Bridge_EntryPoints ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_entryPoints(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_entryPoints;
}

Z ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_appPortId(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_appPortId;
}

Option_882048 ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_appPortIdOpt(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_init(CALLER_LAST);
  return (Option_882048) &_ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_appPortIdOpt;
}

Z ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_mission_windowPortId(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_mission_windowPortId;
}

Option_882048 ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_mission_windowPortIdOpt(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_init(CALLER_LAST);
  return (Option_882048) &_ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_mission_windowPortIdOpt;
}

Z ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_WPM_tracking_idPortId(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_WPM_tracking_idPortId;
}

Z ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.UARTDriver_Impl_App", "main", 0);

  sfUpdateLoc(48);
  Z seed;
  if (Z__eq(IS_948B60_size(SF args), Z_C(1))) {

    sfUpdateLoc(49);
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

  sfUpdateLoc(55);
  ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_initialise(SF seed);

  sfUpdateLoc(57);
  DeclNewTuple2_D0E3BB(t_2);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_2, (Option_882048) ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_3 = ((Tuple2_D0E3BB) &t_2);

  sfUpdateLoc(59);
  art_Bridge_EntryPoints_initialise_(SF ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_entryPoints(SF_LAST));

  sfUpdateLoc(61);
  DeclNewTuple2_D0E3BB(t_4);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_4, (Option_882048) ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_5 = ((Tuple2_D0E3BB) &t_4);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(63);
  String_cprint(string("UARTDriver_Impl_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(65);
  ACT_Demo_Dec2018__camkes_X_ArtNix_eventDispatch(SF_LAST);

  sfUpdateLoc(67);
  B terminated = F;

  sfUpdateLoc(68);
  B t_68_5 = (!terminated);
  while(t_68_5) {

    sfUpdateLoc(70);
    DeclNewOption_02FA6D(t_6);
    ACT_Demo_Dec2018__camkes_X_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_6, (Option_882048) ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_appPortIdOpt(SF_LAST));
    Option_02FA6D termOpt = (Option_02FA6D) ((Option_02FA6D) &t_6);

    sfUpdateLoc(71);
    if (Option_02FA6D_isEmpty_(SF termOpt)) {

      sfUpdateLoc(73);
      ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_compute(SF_LAST);
    } else {

      sfUpdateLoc(76);
      terminated = T;
    }

    sfUpdateLoc(68);
    t_68_5 = (!terminated);
  }

  sfUpdateLoc(79);
  ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_exit(SF_LAST);
  return Z_C(0);
}

Unit ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_atExit(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.UARTDriver_Impl_App", "atExit", 0);

  sfUpdateLoc(90);
  ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_exit(SF_LAST);
}

Unit ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_initialise(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.UARTDriver_Impl_App", "initialise", 0);

  sfUpdateLoc(23);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_initialise(SF seed, (Option_882048) ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_appPortIdOpt(SF_LAST));

  sfUpdateLoc(24);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_initialise(SF seed, (Option_882048) ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_mission_windowPortIdOpt(SF_LAST));

  sfUpdateLoc(26);
  Z i = ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_WPM_tracking_idPortId(SF_LAST);

  sfUpdateLoc(28);
  art_Art_run(SF (art_ArchitectureDescription) ACT_Demo_Dec2018__camkes_X_Arch_ad(SF_LAST));
}

Unit ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_compute(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.UARTDriver_Impl_App", "compute", 0);

  sfUpdateLoc(32);
  B dispatch = F;

  sfUpdateLoc(33);
  DeclNewOption_02FA6D(t_0);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_0, (Option_882048) ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_mission_windowPortIdOpt(SF_LAST));
  DeclNewOption_02FA6D(t_1);
  Type_assign(&t_1, ((Option_02FA6D) &t_0), sizeof(union Option_02FA6D));
  B match_33 = F;
  if (!match_33) {
    match_33 = T;
    ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload v_34_21;
    match_33 = match_33 && Some_E9D1E5__is(SF &t_1);
    if (match_33) {
      if (match_33) {
        match_33 = match_33 && ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload__is(SF Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF &t_1))));
        if (match_33) { v_34_21 = (ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF &t_1))); }
      }
    }
    if (match_33) {

      sfUpdateLoc(34);
      ACT_Demo_Dec2018__camkes_X_ArtNix_updateData(SF ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_mission_windowPortId(SF_LAST), (art_DataContent) v_34_21);

      sfUpdateLoc(34);
      dispatch = T;
    }
  }
  if (!match_33) {
    match_33 = T;
    art_DataContent v_35_21;
    match_33 = match_33 && Some_E9D1E5__is(SF &t_1);
    if (match_33) {
      if (match_33) {
        v_35_21 = (art_DataContent) Tuple2_D0E3BB_2(Some_E9D1E5_value_(Some_E9D1E5__as(SF &t_1)));
      }
    }
    if (match_33) {

      sfUpdateLoc(35);
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string(SF (String) &t_4, string("Unexpected payload on port "));
      Z_string(SF (String) &t_4, ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_mission_windowPortId(SF_LAST));
      String_string(SF (String) &t_4, string(".  Expecting something of type SW.MissionWindow_Payload but received "));
      art_DataContent_string(SF (String) &t_4, v_35_21);
      String_string(SF (String) &t_4, string(""));
      String_string(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
  if (!match_33) {
    match_33 = T;
    match_33 = match_33 && None_93AA2B__is(SF &t_1);
    if (match_33) {
    }
    if (match_33) {
    }
  }
  sfAssert(match_33, "Error when pattern matching.");

  sfUpdateLoc(38);
  if (dispatch) {

    sfUpdateLoc(39);
    art_Bridge_EntryPoints_compute_(SF ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_entryPoints(SF_LAST));

    sfUpdateLoc(40);
    ACT_Demo_Dec2018__camkes_X_Process_sleep(SF Z_C(1));
  } else {

    sfUpdateLoc(42);
    ACT_Demo_Dec2018__camkes_X_Process_sleep(SF Z_C(10));
  }
}

Unit ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App_exit(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.UARTDriver_Impl_App", "exit", 0);

  sfUpdateLoc(85);
  art_Bridge_EntryPoints_finalise_(SF ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_entryPoints_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST)));

  sfUpdateLoc(86);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_finalise(SF_LAST);
}
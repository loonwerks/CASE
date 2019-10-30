#include <all.h>

B uav_project_extern_RadioDriver_Impl_App_initialized_ = F;

union art_Bridge_EntryPoints _uav_project_extern_RadioDriver_Impl_App_entryPoints;
Z _uav_project_extern_RadioDriver_Impl_App_appPortId;
union Option_882048 _uav_project_extern_RadioDriver_Impl_App_appPortIdOpt;

void uav_project_extern_RadioDriver_Impl_App_init(STACK_FRAME_ONLY) {
  if (uav_project_extern_RadioDriver_Impl_App_initialized_) return;
  uav_project_extern_RadioDriver_Impl_App_initialized_ = T;
  DeclNewStackFrame(caller, "RadioDriver_Impl_App.scala", "uav_project_extern.RadioDriver_Impl_App", "<init>", 0);
  Type_assign(&_uav_project_extern_RadioDriver_Impl_App_entryPoints, uav_project_extern_SW_RadioDriver_Impl_Bridge_entryPoints_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
  _uav_project_extern_RadioDriver_Impl_App_appPortId = uav_project_extern_IPCPorts_RadioDriver_Impl_App(SF_LAST);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, uav_project_extern_RadioDriver_Impl_App_appPortId(SF_LAST));
  Type_assign(&_uav_project_extern_RadioDriver_Impl_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
}

art_Bridge_EntryPoints uav_project_extern_RadioDriver_Impl_App_entryPoints(STACK_FRAME_ONLY) {
  uav_project_extern_RadioDriver_Impl_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_uav_project_extern_RadioDriver_Impl_App_entryPoints;
}

Z uav_project_extern_RadioDriver_Impl_App_appPortId(STACK_FRAME_ONLY) {
  uav_project_extern_RadioDriver_Impl_App_init(CALLER_LAST);
  return _uav_project_extern_RadioDriver_Impl_App_appPortId;
}

Option_882048 uav_project_extern_RadioDriver_Impl_App_appPortIdOpt(STACK_FRAME_ONLY) {
  uav_project_extern_RadioDriver_Impl_App_init(CALLER_LAST);
  return (Option_882048) &_uav_project_extern_RadioDriver_Impl_App_appPortIdOpt;
}

Z uav_project_extern_RadioDriver_Impl_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_App.scala", "uav_project_extern.RadioDriver_Impl_App", "main", 0);

  sfUpdateLoc(34);
  Z seed;
  if (Z__eq(IS_948B60_size(SF args), Z_C(1))) {

    sfUpdateLoc(35);
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

  sfUpdateLoc(41);
  uav_project_extern_RadioDriver_Impl_App_initialise(SF seed);

  sfUpdateLoc(43);
  DeclNewTuple2_D0E3BB(t_2);
  uav_project_extern_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_2, (Option_882048) uav_project_extern_RadioDriver_Impl_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_3 = ((Tuple2_D0E3BB) &t_2);

  sfUpdateLoc(45);
  art_Bridge_EntryPoints_initialise_(SF uav_project_extern_RadioDriver_Impl_App_entryPoints(SF_LAST));

  sfUpdateLoc(47);
  DeclNewTuple2_D0E3BB(t_4);
  uav_project_extern_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_4, (Option_882048) uav_project_extern_RadioDriver_Impl_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_5 = ((Tuple2_D0E3BB) &t_4);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(49);
  String_cprint(string("RadioDriver_Impl_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(51);
  uav_project_extern_ArtNix_eventDispatch(SF_LAST);

  sfUpdateLoc(53);
  B terminated = F;

  sfUpdateLoc(54);
  B t_54_5 = (!terminated);
  while(t_54_5) {

    sfUpdateLoc(55);
    DeclNewOption_02FA6D(_termOpt);
    Option_02FA6D termOpt;
    DeclNewOption_02FA6D(t_6);
    uav_project_extern_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_6, (Option_882048) uav_project_extern_RadioDriver_Impl_App_appPortIdOpt(SF_LAST));
    termOpt = (Option_02FA6D) ((Option_02FA6D) &t_6);

    sfUpdateLoc(56);
    if (Option_02FA6D_isEmpty_(SF termOpt)) {

      sfUpdateLoc(57);
      uav_project_extern_RadioDriver_Impl_App_compute(SF_LAST);
    } else {

      sfUpdateLoc(59);
      terminated = T;
    }

    sfUpdateLoc(54);
    t_54_5 = (!terminated);
  }

  sfUpdateLoc(62);
  uav_project_extern_RadioDriver_Impl_App_exit(SF_LAST);
  return Z_C(0);
}

Unit uav_project_extern_RadioDriver_Impl_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_App.scala", "uav_project_extern.RadioDriver_Impl_App", "atExit", 0);

  sfUpdateLoc(73);
  uav_project_extern_RadioDriver_Impl_App_exit(SF_LAST);
}

Unit uav_project_extern_RadioDriver_Impl_App_initialise(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_App.scala", "uav_project_extern.RadioDriver_Impl_App", "initialise", 0);

  sfUpdateLoc(17);
  uav_project_extern_PlatformNix_initialise(SF seed, (Option_882048) uav_project_extern_RadioDriver_Impl_App_appPortIdOpt(SF_LAST));

  sfUpdateLoc(19);
  art_Art_run(SF (art_ArchitectureDescription) uav_project_extern_Arch_ad(SF_LAST));
}

Unit uav_project_extern_RadioDriver_Impl_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_App.scala", "uav_project_extern.RadioDriver_Impl_App", "compute", 0);

  sfUpdateLoc(23);
  B dispatch = F;

  sfUpdateLoc(24);
  if (dispatch) {

    sfUpdateLoc(25);
    art_Bridge_EntryPoints_compute_(SF uav_project_extern_RadioDriver_Impl_App_entryPoints(SF_LAST));

    sfUpdateLoc(26);
    uav_project_extern_Process_sleep(SF Z_C(1));
  } else {

    sfUpdateLoc(28);
    uav_project_extern_Process_sleep(SF Z_C(10));
  }
}

Unit uav_project_extern_RadioDriver_Impl_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_App.scala", "uav_project_extern.RadioDriver_Impl_App", "exit", 0);

  sfUpdateLoc(68);
  art_Bridge_EntryPoints_finalise_(SF uav_project_extern_SW_RadioDriver_Impl_Bridge_entryPoints_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO(SF_LAST)));

  sfUpdateLoc(69);
  uav_project_extern_PlatformNix_finalise(SF_LAST);
}
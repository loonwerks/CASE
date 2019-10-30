#include <all.h>

B ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_initialized_ = F;

union art_Bridge_EntryPoints _ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_entryPoints;
Z _ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_appPortId;
union Option_882048 _ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_appPortIdOpt;
Z _ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_FPLN_receive_map;

void ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_init(STACK_FRAME_LAST) {
  if (ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_initialized_) return;
  ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_initialized_ = T;
  DeclNewStackFrame(caller, "RadioDriver_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.RadioDriver_Impl_App", "<init>", 0);
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_entryPoints, ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_entryPoints_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
  _ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_appPortId = ACT_Demo_Dec2018__camkes_X_IPCPorts_RadioDriver_Impl_App(SF_LAST);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_appPortId(SF_LAST));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
  _ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_FPLN_receive_map = art_Port_695448_id_(ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_recv_map_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST)));
}

art_Bridge_EntryPoints ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_entryPoints(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_entryPoints;
}

Z ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_appPortId(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_appPortId;
}

Option_882048 ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_appPortIdOpt(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_init(CALLER_LAST);
  return (Option_882048) &_ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_appPortIdOpt;
}

Z ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_FPLN_receive_map(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_FPLN_receive_map;
}

Z ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.RadioDriver_Impl_App", "main", 0);

  sfUpdateLoc(40);
  Z seed;
  if (Z__eq(IS_948B60_size(SF args), Z_C(1))) {

    sfUpdateLoc(41);
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

  sfUpdateLoc(47);
  ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_initialise(SF seed);

  sfUpdateLoc(49);
  DeclNewTuple2_D0E3BB(t_2);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_2, (Option_882048) ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_3 = ((Tuple2_D0E3BB) &t_2);

  sfUpdateLoc(51);
  art_Bridge_EntryPoints_initialise_(SF ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_entryPoints(SF_LAST));

  sfUpdateLoc(53);
  DeclNewTuple2_D0E3BB(t_4);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_4, (Option_882048) ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_appPortIdOpt(SF_LAST));
  Tuple2_D0E3BB t_5 = ((Tuple2_D0E3BB) &t_4);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(55);
  String_cprint(string("RadioDriver_Impl_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(57);
  ACT_Demo_Dec2018__camkes_X_ArtNix_eventDispatch(SF_LAST);

  sfUpdateLoc(59);
  B terminated = F;

  sfUpdateLoc(60);
  B t_60_5 = (!terminated);
  while(t_60_5) {

    sfUpdateLoc(61);
    DeclNewOption_02FA6D(t_6);
    ACT_Demo_Dec2018__camkes_X_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_6, (Option_882048) ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_appPortIdOpt(SF_LAST));
    Option_02FA6D termOpt = (Option_02FA6D) ((Option_02FA6D) &t_6);

    sfUpdateLoc(62);
    if (Option_02FA6D_isEmpty_(SF termOpt)) {

      sfUpdateLoc(64);
      ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_compute(SF_LAST);
    } else {

      sfUpdateLoc(67);
      terminated = T;
    }

    sfUpdateLoc(60);
    t_60_5 = (!terminated);
  }

  sfUpdateLoc(70);
  ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_exit(SF_LAST);
  return Z_C(0);
}

Unit ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_atExit(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.RadioDriver_Impl_App", "atExit", 0);

  sfUpdateLoc(81);
  ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_exit(SF_LAST);
}

Unit ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_initialise(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.RadioDriver_Impl_App", "initialise", 0);

  sfUpdateLoc(21);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_initialise(SF seed, (Option_882048) ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_appPortIdOpt(SF_LAST));

  sfUpdateLoc(23);
  Z i0 = ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_FPLN_receive_map(SF_LAST);

  sfUpdateLoc(25);
  art_Art_run(SF (art_ArchitectureDescription) ACT_Demo_Dec2018__camkes_X_Arch_ad(SF_LAST));
}

Unit ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_compute(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.RadioDriver_Impl_App", "compute", 0);

  sfUpdateLoc(29);
  B dispatch = F;

  sfUpdateLoc(30);
  if (dispatch) {

    sfUpdateLoc(31);
    art_Bridge_EntryPoints_compute_(SF ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_entryPoints(SF_LAST));

    sfUpdateLoc(32);
    ACT_Demo_Dec2018__camkes_X_Process_sleep(SF Z_C(1));
  } else {

    sfUpdateLoc(34);
    ACT_Demo_Dec2018__camkes_X_Process_sleep(SF Z_C(10));
  }
}

Unit ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App_exit(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.RadioDriver_Impl_App", "exit", 0);

  sfUpdateLoc(76);
  art_Bridge_EntryPoints_finalise_(SF ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_entryPoints_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO(SF_LAST)));

  sfUpdateLoc(77);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_finalise(SF_LAST);
}
#include <all.h>

Z ACT_Demo_Dec2018__camkes_X_Radio_Impl_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "Radio_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.Radio_Impl_App", "main", 0);

  sfUpdateLoc(14);
  Z seed;
  if (Z__eq(IS_948B60_size(SF args), Z_C(1))) {

    sfUpdateLoc(15);
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

  sfUpdateLoc(21);
  DeclNewart_Bridge_EntryPoints(_entryPoints);
  art_Bridge_EntryPoints entryPoints = (art_Bridge_EntryPoints) &_entryPoints;
  Type_assign(entryPoints, ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_entryPoints_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_RADIO_HW(SF_LAST)), sizeof(union art_Bridge_EntryPoints));

  sfUpdateLoc(23);
  Z appPortId = ACT_Demo_Dec2018__camkes_X_IPCPorts_Radio_Impl_App(SF_LAST);

  sfUpdateLoc(24);
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, appPortId);
  Option_882048 appPortIdOpt = (Option_882048) (&t_2);

  sfUpdateLoc(25);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_initialise(SF seed, (Option_882048) appPortIdOpt);

  sfUpdateLoc(27);
  Z recv_map_innPortId = art_Port_2C63FD_id_(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_recv_map_inn_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_RADIO_HW(SF_LAST)));

  sfUpdateLoc(28);
  DeclNewSome_488F47(t_3);
  Some_488F47_apply(SF &t_3, recv_map_innPortId);
  Some_488F47 recv_map_innPortIdOpt = (Some_488F47) (&t_3);

  sfUpdateLoc(29);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_initialise(SF seed, (Option_882048) recv_map_innPortIdOpt);

  sfUpdateLoc(31);
  Z send_status_innPortId = art_Port_FD6239_id_(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_send_status_inn_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_RADIO_HW(SF_LAST)));

  sfUpdateLoc(32);
  DeclNewSome_488F47(t_4);
  Some_488F47_apply(SF &t_4, send_status_innPortId);
  Some_488F47 send_status_innPortIdOpt = (Some_488F47) (&t_4);

  sfUpdateLoc(33);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_initialise(SF seed, (Option_882048) send_status_innPortIdOpt);

  sfUpdateLoc(34);
  art_Art_run(SF (art_ArchitectureDescription) ACT_Demo_Dec2018__camkes_X_Arch_ad(SF_LAST));

  sfUpdateLoc(36);
  art_Bridge_EntryPoints_initialise_(SF entryPoints);

  sfUpdateLoc(38);
  DeclNewTuple2_D0E3BB(t_5);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_5, (Option_882048) appPortIdOpt);
  Tuple2_D0E3BB t_6 = ((Tuple2_D0E3BB) &t_5);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(40);
  String_cprint(string("Radio_Impl_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(42);
  ACT_Demo_Dec2018__camkes_X_ArtNix_timeDispatch(SF_LAST);

  sfUpdateLoc(44);
  B terminated = F;

  sfUpdateLoc(45);
  B t_45_5 = (!terminated);
  while(t_45_5) {

    sfUpdateLoc(46);
    DeclNewOption_02FA6D(t_7);
    ACT_Demo_Dec2018__camkes_X_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_7, (Option_882048) appPortIdOpt);
    Option_02FA6D termOpt = (Option_02FA6D) ((Option_02FA6D) &t_7);

    sfUpdateLoc(47);
    if (Option_02FA6D_isEmpty_(SF termOpt)) {

      sfUpdateLoc(48);
      art_Bridge_EntryPoints_compute_(SF entryPoints);

      sfUpdateLoc(49);
      ACT_Demo_Dec2018__camkes_X_Process_sleep(SF Z_C(1));
    } else {

      sfUpdateLoc(51);
      terminated = T;
    }

    sfUpdateLoc(45);
    t_45_5 = (!terminated);
  }

  sfUpdateLoc(54);
  ACT_Demo_Dec2018__camkes_X_Radio_Impl_App_exit(SF_LAST);
  return Z_C(0);
}

Unit ACT_Demo_Dec2018__camkes_X_Radio_Impl_App_atExit(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "Radio_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.Radio_Impl_App", "atExit", 0);

  sfUpdateLoc(65);
  ACT_Demo_Dec2018__camkes_X_Radio_Impl_App_exit(SF_LAST);
}

Unit ACT_Demo_Dec2018__camkes_X_Radio_Impl_App_exit(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "Radio_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.Radio_Impl_App", "exit", 0);

  sfUpdateLoc(60);
  art_Bridge_EntryPoints_finalise_(SF ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_entryPoints_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_RADIO_HW(SF_LAST)));

  sfUpdateLoc(61);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_finalise(SF_LAST);
}
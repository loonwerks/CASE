#include <all.h>

Z ACT_Demo_Dec2018__camkes_X_UART_Impl_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "UART_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.UART_Impl_App", "main", 0);

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
  Type_assign(entryPoints, ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_entryPoints_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_UART_HW(SF_LAST)), sizeof(union art_Bridge_EntryPoints));

  sfUpdateLoc(23);
  Z appPortId = ACT_Demo_Dec2018__camkes_X_IPCPorts_UART_Impl_App(SF_LAST);

  sfUpdateLoc(24);
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, appPortId);
  Option_882048 appPortIdOpt = (Option_882048) (&t_2);

  sfUpdateLoc(25);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_initialise(SF seed, (Option_882048) appPortIdOpt);

  sfUpdateLoc(27);
  Z position_status_innPortId = art_Port_2C63FD_id_(ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_position_status_inn_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_UART_HW(SF_LAST)));

  sfUpdateLoc(28);
  DeclNewSome_488F47(t_3);
  Some_488F47_apply(SF &t_3, position_status_innPortId);
  Some_488F47 position_status_innPortIdOpt = (Some_488F47) (&t_3);

  sfUpdateLoc(29);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_initialise(SF seed, (Option_882048) position_status_innPortIdOpt);

  sfUpdateLoc(30);
  art_Art_run(SF (art_ArchitectureDescription) ACT_Demo_Dec2018__camkes_X_Arch_ad(SF_LAST));

  sfUpdateLoc(32);
  art_Bridge_EntryPoints_initialise_(SF entryPoints);

  sfUpdateLoc(34);
  DeclNewTuple2_D0E3BB(t_4);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_receive(SF (Tuple2_D0E3BB) &t_4, (Option_882048) appPortIdOpt);
  Tuple2_D0E3BB t_5 = ((Tuple2_D0E3BB) &t_4);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(36);
  String_cprint(string("UART_Impl_App starting ..."), T);
  cprintln(T);
  cflush(T);

  #endif

  sfUpdateLoc(38);
  ACT_Demo_Dec2018__camkes_X_ArtNix_timeDispatch(SF_LAST);

  sfUpdateLoc(40);
  B terminated = F;

  sfUpdateLoc(41);
  B t_41_5 = (!terminated);
  while(t_41_5) {

    sfUpdateLoc(42);
    DeclNewOption_02FA6D(t_6);
    ACT_Demo_Dec2018__camkes_X_PlatformNix_receiveAsync(SF (Option_02FA6D) &t_6, (Option_882048) appPortIdOpt);
    Option_02FA6D termOpt = (Option_02FA6D) ((Option_02FA6D) &t_6);

    sfUpdateLoc(43);
    if (Option_02FA6D_isEmpty_(SF termOpt)) {

      sfUpdateLoc(44);
      art_Bridge_EntryPoints_compute_(SF entryPoints);

      sfUpdateLoc(45);
      ACT_Demo_Dec2018__camkes_X_Process_sleep(SF Z_C(1));
    } else {

      sfUpdateLoc(47);
      terminated = T;
    }

    sfUpdateLoc(41);
    t_41_5 = (!terminated);
  }

  sfUpdateLoc(50);
  ACT_Demo_Dec2018__camkes_X_UART_Impl_App_exit(SF_LAST);
  return Z_C(0);
}

Unit ACT_Demo_Dec2018__camkes_X_UART_Impl_App_atExit(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "UART_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.UART_Impl_App", "atExit", 0);

  sfUpdateLoc(61);
  ACT_Demo_Dec2018__camkes_X_UART_Impl_App_exit(SF_LAST);
}

Unit ACT_Demo_Dec2018__camkes_X_UART_Impl_App_exit(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "UART_Impl_App.scala", "ACT_Demo_Dec2018__camkes_X.UART_Impl_App", "exit", 0);

  sfUpdateLoc(56);
  art_Bridge_EntryPoints_finalise_(SF ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_entryPoints_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_UART_HW(SF_LAST)));

  sfUpdateLoc(57);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_finalise(SF_LAST);
}
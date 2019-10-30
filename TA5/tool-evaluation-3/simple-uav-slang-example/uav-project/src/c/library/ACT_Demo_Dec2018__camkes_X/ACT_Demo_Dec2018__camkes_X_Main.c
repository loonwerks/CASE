#include <all.h>

Z ACT_Demo_Dec2018__camkes_X_Main_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "Main.scala", "ACT_Demo_Dec2018__camkes_X.Main", "main", 0);

  sfUpdateLoc(13);
  Z seed;
  if (Z__eq(IS_948B60_size(SF args), Z_C(1))) {

    sfUpdateLoc(14);
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

  sfUpdateLoc(20);
  DeclNewNone_76463B(t_2);
  None_76463B_apply(SF &t_2);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_initialise(SF seed, (Option_882048) (&t_2));

  sfUpdateLoc(22);
  DeclNewart_Empty(t_3);
  art_Empty_apply(SF &t_3);
  art_Empty empty = (art_Empty) (&t_3);

  sfUpdateLoc(24);
  B t_4 = ACT_Demo_Dec2018__camkes_X_PlatformNix_sendAsync(SF ACT_Demo_Dec2018__camkes_X_IPCPorts_UART_Impl_App(SF_LAST), ACT_Demo_Dec2018__camkes_X_IPCPorts_UART_Impl_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(25);
  B t_5 = ACT_Demo_Dec2018__camkes_X_PlatformNix_sendAsync(SF ACT_Demo_Dec2018__camkes_X_IPCPorts_WaypointManager_Impl_App(SF_LAST), ACT_Demo_Dec2018__camkes_X_IPCPorts_WaypointManager_Impl_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(26);
  B t_6 = ACT_Demo_Dec2018__camkes_X_PlatformNix_sendAsync(SF ACT_Demo_Dec2018__camkes_X_IPCPorts_Radio_Impl_App(SF_LAST), ACT_Demo_Dec2018__camkes_X_IPCPorts_Radio_Impl_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(27);
  B t_7 = ACT_Demo_Dec2018__camkes_X_PlatformNix_sendAsync(SF ACT_Demo_Dec2018__camkes_X_IPCPorts_FlightPlanner_Impl_App(SF_LAST), ACT_Demo_Dec2018__camkes_X_IPCPorts_FlightPlanner_Impl_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(28);
  B t_8 = ACT_Demo_Dec2018__camkes_X_PlatformNix_sendAsync(SF ACT_Demo_Dec2018__camkes_X_IPCPorts_UARTDriver_Impl_App(SF_LAST), ACT_Demo_Dec2018__camkes_X_IPCPorts_UARTDriver_Impl_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(29);
  B t_9 = ACT_Demo_Dec2018__camkes_X_PlatformNix_sendAsync(SF ACT_Demo_Dec2018__camkes_X_IPCPorts_RadioDriver_Impl_App(SF_LAST), ACT_Demo_Dec2018__camkes_X_IPCPorts_RadioDriver_Impl_App(SF_LAST), (art_DataContent) empty);

  sfUpdateLoc(31);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_finalise(SF_LAST);
  return Z_C(0);
}
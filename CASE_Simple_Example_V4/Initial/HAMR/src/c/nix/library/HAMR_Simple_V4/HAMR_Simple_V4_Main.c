#include <all.h>

Z HAMR_Simple_V4_Main_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "Main.scala", "HAMR_Simple_V4.Main", "main", 0);

  sfUpdateLoc(13);
  Z seed;
  {
    B t_0;
    {
      Z t_1 = IS_948B60_size(SF args);
      t_0 = Z__eq(t_1, Z_C(1));
    }
    if (t_0) {

      sfUpdateLoc(14);
      Z n;
      {
        DeclNewOption_882048(t_2);
        Z_apply(&t_2, IS_948B60_at(args, Z_C(0)));
        Z t_3 = Option_882048_get_(SF (&t_2));
        n = t_3;
      }
      Z t_4;
      if (Z__eq(n, Z_C(0))) {
        t_4 = Z_C(1);
      } else {
        t_4 = n;
      }
      seed = t_4;
    } else {
      seed = Z_C(1);
    }
  }

  sfUpdateLoc(20);
  {
    DeclNewNone_76463B(t_5);
    None_76463B_apply(SF &t_5);
    HAMR_Simple_V4_PlatformNix_initialise(SF seed, (Option_882048) (&t_5));
  }

  sfUpdateLoc(22);
  art_Empty empty;
  DeclNewart_Empty(t_6);
  art_Empty_apply(SF &t_6);
  empty = (art_Empty) (&t_6);

  sfUpdateLoc(24);
  {
    B t_7 = HAMR_Simple_V4_PlatformNix_sendAsync(SF HAMR_Simple_V4_IPCPorts_RadioDriver_Impl_SW_Radio_App(SF_LAST), HAMR_Simple_V4_IPCPorts_RadioDriver_Impl_SW_Radio_App(SF_LAST), (art_DataContent) empty);
  }

  sfUpdateLoc(25);
  {
    B t_8 = HAMR_Simple_V4_PlatformNix_sendAsync(SF HAMR_Simple_V4_IPCPorts_FlightPlanner_Impl_SW_FlightPlanner_App(SF_LAST), HAMR_Simple_V4_IPCPorts_FlightPlanner_Impl_SW_FlightPlanner_App(SF_LAST), (art_DataContent) empty);
  }

  sfUpdateLoc(26);
  {
    B t_9 = HAMR_Simple_V4_PlatformNix_sendAsync(SF HAMR_Simple_V4_IPCPorts_FlightController_Impl_SW_FlightController_App(SF_LAST), HAMR_Simple_V4_IPCPorts_FlightController_Impl_SW_FlightController_App(SF_LAST), (art_DataContent) empty);
  }

  sfUpdateLoc(28);
  {
    HAMR_Simple_V4_PlatformNix_finalise(SF_LAST);
  }
  return Z_C(0);
}
#include <all.h>

B HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_initialized_ = F;

struct HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge;
union art_Bridge_EntryPoints _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_entryPoints;
union Option_8E9F45 _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_noData;
Z _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_id;
union Option_8E9F45 _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_port;
Z _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_id;
union Option_8E9F45 _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_port;

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(STACK_FRAME_ONLY) {
  if (HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_initialized_) return;
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_initialized_ = T;
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_FlightController.FlightController", "<init>", 0);
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_FlightControllerBridge(SF_LAST);
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_entryPoints(SF_LAST);
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_noData(SF_LAST);
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_FlightPlan_id(SF_LAST);
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_FlightPlan_port(SF_LAST);
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_Alert_id(SF_LAST);
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_Alert_port(SF_LAST);
}

HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  return (HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge) &_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge;
}

art_Bridge_EntryPoints HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_entryPoints(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_entryPoints;
}

Option_8E9F45 HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_noData(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_noData;
}

Z HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_id(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  return _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_id;
}

Option_8E9F45 HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_port(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_port;
}

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_port_a(STACK_FRAME Option_8E9F45 p_FlightPlan_port) {
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  Type_assign(&_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_port, p_FlightPlan_port, sizeof(union Option_8E9F45));
}

Z HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_id(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  return _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_id;
}

Option_8E9F45 HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_port(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_port;
}

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_port_a(STACK_FRAME Option_8E9F45 p_Alert_port) {
  HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  Type_assign(&_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_port, p_Alert_port, sizeof(union Option_8E9F45));
}

Z HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_FlightController.FlightController", "main", 0);

  sfUpdateLoc(91);
  {
    HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(92);
  {
    HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(93);
  {
    HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(94);
  {
    HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(96);
  {
    HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_FlightController.FlightController", "initialiseArchitecture", 0);

  sfUpdateLoc(75);
  art_ArchitectureDescription ad;
  STATIC_ASSERT(1 <= MaxIS_7E8796, "Insufficient maximum for IS[Z, art.Bridge] elements.");
  DeclNewIS_7E8796(t_1);
  t_1.size = (int8_t) 1;
  IS_7E8796_up(&t_1, 0, (art_Bridge) HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge(SF_LAST));
  STATIC_ASSERT(0 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  DeclNewIS_08117A(t_2);
  t_2.size = (int8_t) 0;
  DeclNewart_ArchitectureDescription(t_0);
  art_ArchitectureDescription_apply(SF &t_0, (IS_7E8796) (&t_1), (IS_08117A) (&t_2));
  ad = (art_ArchitectureDescription) (&t_0);

  sfUpdateLoc(79);
  {
    art_Art_run(SF (art_ArchitectureDescription) ad);
  }
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_FlightController.FlightController", "initialiseEntryPoint", 0);

  sfUpdateLoc(82);
  {
    art_Bridge_EntryPoints_initialise_(SF HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_entryPoints(SF_LAST));
  }
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_FlightController.FlightController", "computeEntryPoint", 0);

  sfUpdateLoc(84);
  {
    art_Bridge_EntryPoints_compute_(SF HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_entryPoints(SF_LAST));
  }
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_FlightController.FlightController", "finaliseEntryPoint", 0);

  sfUpdateLoc(86);
  {
    art_Bridge_EntryPoints_finalise_(SF HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_entryPoints(SF_LAST));
  }
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_FlightController.FlightController.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(106);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string(""));
    art_DataContent_string_(SF (String) &t_0, a);
    String_string_(SF (String) &t_0, string(""));
    String_cprint(((String) &t_0), T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_FlightController.FlightController", "touch", 0);

  sfUpdateLoc(102);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(103);
    {
      HAMR_Simple_V4_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(108);
    {
      DeclNewIS_C4F575(t_2);
      HAMR_Simple_V4_Base_Types_Bits_example(SF (IS_C4F575) &t_2);
      DeclNewHAMR_Simple_V4_Base_Types_Bits_Payload(t_1);
      HAMR_Simple_V4_Base_Types_Bits_Payload_apply(SF &t_1, (IS_C4F575) ((IS_C4F575) &t_2));
      HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_touch_printDataContent(SF (art_DataContent) (&t_1));
    }

    sfUpdateLoc(109);
    {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_touch_printDataContent(SF (art_DataContent) (&t_3));
    }

    sfUpdateLoc(111);
    {
      DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api(t_4);
      Option_6F9BAD_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &t_4, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_initialization_api(SF_LAST));
      HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api_logInfo_(SF ((HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &t_4), (String) string(""));
    }

    sfUpdateLoc(112);
    {
      DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api(t_5);
      Option_6F9BAD_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &t_5, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_initialization_api(SF_LAST));
      HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api_logDebug_(SF ((HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &t_5), (String) string(""));
    }

    sfUpdateLoc(113);
    {
      DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api(t_6);
      Option_6F9BAD_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &t_6, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_initialization_api(SF_LAST));
      HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api_logError_(SF ((HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &t_6), (String) string(""));
    }

    sfUpdateLoc(114);
    {
      DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Operational_Api(t_7);
      Option_3A1F68_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_7, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_operational_api(SF_LAST));
      HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_logInfo_(SF ((HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_7), (String) string(""));
    }

    sfUpdateLoc(115);
    {
      DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Operational_Api(t_8);
      Option_3A1F68_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_8, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_operational_api(SF_LAST));
      HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_logDebug_(SF ((HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(116);
    {
      DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Operational_Api(t_9);
      Option_3A1F68_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_9, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_operational_api(SF_LAST));
      HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_logError_(SF ((HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(117);
    Option_30119F apiUsage_FlightPlan;
    DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Operational_Api(t_10);
    Option_3A1F68_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_10, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_11);
    HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_FlightPlan_(SF (Option_30119F) &t_11, ((HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_10));
    apiUsage_FlightPlan = (Option_30119F) ((Option_30119F) &t_11);

    sfUpdateLoc(118);
    Option_C622DB apiUsage_Alert;
    DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Operational_Api(t_12);
    Option_3A1F68_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_12, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_C622DB(t_13);
    HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_Alert_(SF (Option_C622DB) &t_13, ((HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &t_12));
    apiUsage_Alert = (Option_C622DB) ((Option_C622DB) &t_13);
  }
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_FlightController.FlightController", "run", 0);
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_FlightController.FlightController", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(123);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(124);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(125);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_FlightController.FlightController", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(135);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(136);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(137);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_FlightController.FlightController", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(129);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(130);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(131);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_FlightController.FlightController", "getValue", 0);

  sfUpdateLoc(47);
  B t_0;
  {
    t_0 = Z__eq(portId, HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(49);
    B t_1;
    {
      t_1 = Z__eq(portId, HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_id(SF_LAST));
    }
    if (t_1) {
      Type_assign(result, HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_port(SF_LAST), sizeof(union Option_8E9F45));
      return;
    } else {

      sfUpdateLoc(52);
      {
        DeclNewString(t_2);
        String t_3 = (String) &t_2;
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("Unexpected: FlightController.getValue called with: "));
        Z_string_(SF (String) &t_4, portId);
        String_string_(SF (String) &t_4, string(""));
        String_string_(SF t_3, ((String) &t_4));
        sfAbort(t_3->value);
        abort();
      }
    }
  }
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_FlightController.FlightController", "sendOutput", 0);
}

Unit HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR_Simple_V4.FlightController_Impl_SW_FlightController_FlightController.FlightController", "receiveInput", 0);

  sfUpdateLoc(59);
  {
    DeclNewOption_8E9F45(t_0);
    HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_seL4Nix_FlightPlan_Receive(SF (Option_8E9F45) &t_0);
    HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }

  sfUpdateLoc(61);
  {
    DeclNewOption_8E9F45(t_1);
    HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_seL4Nix_Alert_Receive(SF (Option_8E9F45) &t_1);
    HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_1));
  }
}

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_FlightControllerBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  {

    sfUpdateLoc(17);
    art_Port_45E54D FlightPlan;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_FlightController_FlightController_FlightPlan"), art_PortMode_Type_EventIn);
    FlightPlan = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(18);
    art_Port_9CBF18 Alert;
    DeclNewart_Port_9CBF18(t_1);
    art_Port_9CBF18_apply(SF &t_1, Z_C(1), (String) string("MissionComputer_Impl_Instance_SW_FlightController_FlightController_Alert"), art_PortMode_Type_EventIn);
    Alert = (art_Port_9CBF18) (&t_1);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_3);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_3, Z_C(500));
    DeclNewNone_5C1355(t_4);
    None_5C1355_apply(SF &t_4);
    DeclNewHAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge(t_2);
    HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_apply(SF &t_2, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_FlightController_FlightController"), (art_DispatchPropertyProtocol) (&t_3), (Option_9AF35E) (&t_4), (art_Port_45E54D) FlightPlan, (art_Port_9CBF18) Alert);
    Type_assign(&_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge, (&t_2), sizeof(struct HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge));
  }
};

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(31);
  Type_assign(&_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_entryPoints, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_entryPoints_(HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(32);
  DeclNewNone_964667(t_5);
  None_964667_apply(SF &t_5);
  Type_assign(&_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_noData, (&t_5), sizeof(struct None_964667));
};

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_FlightPlan_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(35);
  _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_id = art_Port_45E54D_id_(HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_FlightPlan_(HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge(SF_LAST)));
};

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_FlightPlan_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(36);
  Type_assign(&_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_port, HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_Alert_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(39);
  _HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_id = art_Port_9CBF18_id_(HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_Alert_(HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge(SF_LAST)));
};

void HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_Alert_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(40);
  Type_assign(&_HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_port, HAMR_Simple_V4_FlightController_Impl_SW_FlightController_FlightController_FlightController_noData(SF_LAST), sizeof(union Option_8E9F45));
};
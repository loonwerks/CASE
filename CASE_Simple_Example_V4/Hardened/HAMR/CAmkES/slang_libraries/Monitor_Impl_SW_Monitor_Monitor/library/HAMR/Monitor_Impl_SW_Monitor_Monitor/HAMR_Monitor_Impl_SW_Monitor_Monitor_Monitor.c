#include <all.h>

B HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_initialized_ = F;

struct HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge _HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_MonitorBridge;
union art_Bridge_EntryPoints _HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_entryPoints;
union Option_8E9F45 _HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_noData;
Z _HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_in_id;
union Option_8E9F45 _HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_in_port;
Z _HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_out_id;
union Option_8E9F45 _HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_out_port;
Z _HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_Alert_id;
union Option_8E9F45 _HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_Alert_port;

void HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init(STACK_FRAME_ONLY) {
  if (HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_initialized_) return;
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_initialized_ = T;
  DeclNewStackFrame(caller, "Monitor.scala", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor", "<init>", 0);
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_MonitorBridge(SF_LAST);
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_entryPoints(SF_LAST);
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_noData(SF_LAST);
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_FlightPlan_in_id(SF_LAST);
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_FlightPlan_in_port(SF_LAST);
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_FlightPlan_out_id(SF_LAST);
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_FlightPlan_out_port(SF_LAST);
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_Alert_id(SF_LAST);
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_Alert_port(SF_LAST);
}

HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_MonitorBridge(STACK_FRAME_ONLY) {
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init(CALLER_LAST);
  return (HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge) &_HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_MonitorBridge;
}

art_Bridge_EntryPoints HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_entryPoints(STACK_FRAME_ONLY) {
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_entryPoints;
}

Option_8E9F45 HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_noData(STACK_FRAME_ONLY) {
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_noData;
}

Z HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_in_id(STACK_FRAME_ONLY) {
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init(CALLER_LAST);
  return _HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_in_id;
}

Option_8E9F45 HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_in_port(STACK_FRAME_ONLY) {
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_in_port;
}

void HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_in_port_a(STACK_FRAME Option_8E9F45 p_FlightPlan_in_port) {
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init(CALLER_LAST);
  Type_assign(&_HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_in_port, p_FlightPlan_in_port, sizeof(union Option_8E9F45));
}

Z HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_out_id(STACK_FRAME_ONLY) {
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init(CALLER_LAST);
  return _HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_out_id;
}

Option_8E9F45 HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_out_port(STACK_FRAME_ONLY) {
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_out_port;
}

void HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_out_port_a(STACK_FRAME Option_8E9F45 p_FlightPlan_out_port) {
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init(CALLER_LAST);
  Type_assign(&_HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_out_port, p_FlightPlan_out_port, sizeof(union Option_8E9F45));
}

Z HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_Alert_id(STACK_FRAME_ONLY) {
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init(CALLER_LAST);
  return _HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_Alert_id;
}

Option_8E9F45 HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_Alert_port(STACK_FRAME_ONLY) {
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_Alert_port;
}

void HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_Alert_port_a(STACK_FRAME Option_8E9F45 p_Alert_port) {
  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init(CALLER_LAST);
  Type_assign(&_HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_Alert_port, p_Alert_port, sizeof(union Option_8E9F45));
}

Z HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "Monitor.scala", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor", "main", 0);

  sfUpdateLoc(107);
  {
    HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(108);
  {
    HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(109);
  {
    HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(110);
  {
    HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(112);
  {
    HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Monitor.scala", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor", "initialiseArchitecture", 0);

  sfUpdateLoc(91);
  art_ArchitectureDescription ad;
  STATIC_ASSERT(1 <= MaxIS_7E8796, "Insufficient maximum for IS[Z, art.Bridge] elements.");
  DeclNewIS_7E8796(t_1);
  t_1.size = (int8_t) 1;
  IS_7E8796_up(&t_1, 0, (art_Bridge) HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_MonitorBridge(SF_LAST));
  STATIC_ASSERT(0 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  DeclNewIS_08117A(t_2);
  t_2.size = (int8_t) 0;
  DeclNewart_ArchitectureDescription(t_0);
  art_ArchitectureDescription_apply(SF &t_0, (IS_7E8796) (&t_1), (IS_08117A) (&t_2));
  ad = (art_ArchitectureDescription) (&t_0);

  sfUpdateLoc(95);
  {
    art_Art_run(SF (art_ArchitectureDescription) ad);
  }
}

Unit HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Monitor.scala", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor", "initialiseEntryPoint", 0);

  sfUpdateLoc(98);
  {
    art_Bridge_EntryPoints_initialise_(SF HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_entryPoints(SF_LAST));
  }
}

Unit HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Monitor.scala", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor", "computeEntryPoint", 0);

  sfUpdateLoc(100);
  {
    art_Bridge_EntryPoints_compute_(SF HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_entryPoints(SF_LAST));
  }
}

Unit HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Monitor.scala", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor", "finaliseEntryPoint", 0);

  sfUpdateLoc(102);
  {
    art_Bridge_EntryPoints_finalise_(SF HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_entryPoints(SF_LAST));
  }
}

Unit HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "Monitor.scala", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(122);
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

Unit HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Monitor.scala", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor", "touch", 0);

  sfUpdateLoc(118);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(119);
    {
      HAMR_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(124);
    {
      DeclNewIS_C4F575(t_2);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_2);
      DeclNewHAMR_Base_Types_Bits_Payload(t_1);
      HAMR_Base_Types_Bits_Payload_apply(SF &t_1, (IS_C4F575) ((IS_C4F575) &t_2));
      HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_touch_printDataContent(SF (art_DataContent) (&t_1));
    }

    sfUpdateLoc(125);
    {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_touch_printDataContent(SF (art_DataContent) (&t_3));
    }

    sfUpdateLoc(127);
    {
      DeclNewHAMR_SW_Monitor_Impl_Initialization_Api(t_4);
      Option_27551F_get_(SF (HAMR_SW_Monitor_Impl_Initialization_Api) &t_4, HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_Monitor_Impl_Initialization_Api_logInfo_(SF ((HAMR_SW_Monitor_Impl_Initialization_Api) &t_4), (String) string(""));
    }

    sfUpdateLoc(128);
    {
      DeclNewHAMR_SW_Monitor_Impl_Initialization_Api(t_5);
      Option_27551F_get_(SF (HAMR_SW_Monitor_Impl_Initialization_Api) &t_5, HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_Monitor_Impl_Initialization_Api_logDebug_(SF ((HAMR_SW_Monitor_Impl_Initialization_Api) &t_5), (String) string(""));
    }

    sfUpdateLoc(129);
    {
      DeclNewHAMR_SW_Monitor_Impl_Initialization_Api(t_6);
      Option_27551F_get_(SF (HAMR_SW_Monitor_Impl_Initialization_Api) &t_6, HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_Monitor_Impl_Initialization_Api_logError_(SF ((HAMR_SW_Monitor_Impl_Initialization_Api) &t_6), (String) string(""));
    }

    sfUpdateLoc(130);
    {
      DeclNewHAMR_SW_Monitor_Impl_Operational_Api(t_7);
      Option_E8C05C_get_(SF (HAMR_SW_Monitor_Impl_Operational_Api) &t_7, HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_Monitor_Impl_Operational_Api_logInfo_(SF ((HAMR_SW_Monitor_Impl_Operational_Api) &t_7), (String) string(""));
    }

    sfUpdateLoc(131);
    {
      DeclNewHAMR_SW_Monitor_Impl_Operational_Api(t_8);
      Option_E8C05C_get_(SF (HAMR_SW_Monitor_Impl_Operational_Api) &t_8, HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_Monitor_Impl_Operational_Api_logDebug_(SF ((HAMR_SW_Monitor_Impl_Operational_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(132);
    {
      DeclNewHAMR_SW_Monitor_Impl_Operational_Api(t_9);
      Option_E8C05C_get_(SF (HAMR_SW_Monitor_Impl_Operational_Api) &t_9, HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_Monitor_Impl_Operational_Api_logError_(SF ((HAMR_SW_Monitor_Impl_Operational_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(133);
    Option_30119F apiUsage_FlightPlan_in;
    DeclNewHAMR_SW_Monitor_Impl_Operational_Api(t_10);
    Option_E8C05C_get_(SF (HAMR_SW_Monitor_Impl_Operational_Api) &t_10, HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_11);
    HAMR_SW_Monitor_Impl_Operational_Api_get_FlightPlan_in_(SF (Option_30119F) &t_11, ((HAMR_SW_Monitor_Impl_Operational_Api) &t_10));
    apiUsage_FlightPlan_in = (Option_30119F) ((Option_30119F) &t_11);

    sfUpdateLoc(134);
    {
      DeclNewHAMR_SW_Monitor_Impl_Initialization_Api(t_12);
      Option_27551F_get_(SF (HAMR_SW_Monitor_Impl_Initialization_Api) &t_12, HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_13);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_13);
      HAMR_SW_Monitor_Impl_Initialization_Api_put_FlightPlan_out_(SF ((HAMR_SW_Monitor_Impl_Initialization_Api) &t_12), (IS_C4F575) ((IS_C4F575) &t_13));
    }

    sfUpdateLoc(135);
    {
      DeclNewHAMR_SW_Monitor_Impl_Operational_Api(t_14);
      Option_E8C05C_get_(SF (HAMR_SW_Monitor_Impl_Operational_Api) &t_14, HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_15);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_15);
      HAMR_SW_Monitor_Impl_Operational_Api_put_FlightPlan_out_(SF ((HAMR_SW_Monitor_Impl_Operational_Api) &t_14), (IS_C4F575) ((IS_C4F575) &t_15));
    }

    sfUpdateLoc(136);
    {
      DeclNewHAMR_SW_Monitor_Impl_Initialization_Api(t_16);
      Option_27551F_get_(SF (HAMR_SW_Monitor_Impl_Initialization_Api) &t_16, HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_Monitor_Impl_Initialization_Api_put_Alert_(SF ((HAMR_SW_Monitor_Impl_Initialization_Api) &t_16));
    }

    sfUpdateLoc(137);
    {
      DeclNewHAMR_SW_Monitor_Impl_Operational_Api(t_17);
      Option_E8C05C_get_(SF (HAMR_SW_Monitor_Impl_Operational_Api) &t_17, HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_Monitor_Impl_Operational_Api_put_Alert_(SF ((HAMR_SW_Monitor_Impl_Operational_Api) &t_17));
    }
  }
}

Unit HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Monitor.scala", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor", "run", 0);
}

Unit HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "Monitor.scala", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(142);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(143);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(144);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "Monitor.scala", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(154);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(155);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(156);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "Monitor.scala", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(148);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(149);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(150);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "Monitor.scala", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor", "getValue", 0);

  sfUpdateLoc(53);
  B t_0;
  {
    t_0 = Z__eq(portId, HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_in_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_in_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(56);
    {
      DeclNewString(t_1);
      String t_2 = (String) &t_1;
      DeclNewString(t_3);
      String_string_(SF (String) &t_3, string("Unexpected: Monitor.getValue called with: "));
      Z_string_(SF (String) &t_3, portId);
      String_string_(SF (String) &t_3, string(""));
      String_string_(SF t_2, ((String) &t_3));
      sfAbort(t_2->value);
      abort();
    }
  }
}

Unit HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "Monitor.scala", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor", "putValue", 0);

  sfUpdateLoc(67);
  B t_0;
  {
    t_0 = Z__eq(portId, HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_out_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(68);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_out_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(69);
    B t_2;
    {
      t_2 = Z__eq(portId, HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_Alert_id(SF_LAST));
    }
    if (t_2) {

      sfUpdateLoc(70);
      {
        DeclNewSome_D29615(t_3);
        Some_D29615_apply(SF &t_3, (art_DataContent) data);
        HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_Alert_port_a(SF (Option_8E9F45) (&t_3));
      }
    } else {

      sfUpdateLoc(72);
      {
        DeclNewString(t_4);
        String t_5 = (String) &t_4;
        DeclNewString(t_6);
        String_string_(SF (String) &t_6, string("Unexpected: Monitor.putValue called with: "));
        Z_string_(SF (String) &t_6, portId);
        String_string_(SF (String) &t_6, string(""));
        String_string_(SF t_5, ((String) &t_6));
        sfAbort(t_5->value);
        abort();
      }
    }
  }
}

Unit HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Monitor.scala", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor", "sendOutput", 0);

  sfUpdateLoc(79);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_out_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(80);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_out_port(SF_LAST));
      HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_seL4Nix_FlightPlan_out_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(81);
    {
      HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_out_port_a(SF (Option_8E9F45) HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_noData(SF_LAST));
    }
  }

  sfUpdateLoc(84);
  B t_3;
  {
    B t_4 = Option_8E9F45_nonEmpty_(SF HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_Alert_port(SF_LAST));
    t_3 = t_4;
  }
  if (t_3) {

    sfUpdateLoc(85);
    {
      DeclNewart_DataContent(t_5);
      Option_8E9F45_get_(SF (art_DataContent) &t_5, HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_Alert_port(SF_LAST));
      HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_seL4Nix_Alert_Send(SF (art_DataContent) ((art_DataContent) &t_5));
    }

    sfUpdateLoc(86);
    {
      HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_Alert_port_a(SF (Option_8E9F45) HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_noData(SF_LAST));
    }
  }
}

Unit HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Monitor.scala", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor", "receiveInput", 0);

  sfUpdateLoc(63);
  {
    DeclNewOption_8E9F45(t_0);
    HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_seL4Nix_FlightPlan_in_Receive(SF (Option_8E9F45) &t_0);
    HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_in_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }
}

void HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_MonitorBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  {

    sfUpdateLoc(17);
    art_Port_45E54D FlightPlan_in;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_Monitor_Monitor_FlightPlan_in"), art_PortMode_Type_EventIn);
    FlightPlan_in = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(18);
    art_Port_45E54D FlightPlan_out;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("MissionComputer_Impl_Instance_SW_Monitor_Monitor_FlightPlan_out"), art_PortMode_Type_EventOut);
    FlightPlan_out = (art_Port_45E54D) (&t_1);

    sfUpdateLoc(19);
    art_Port_9CBF18 Alert;
    DeclNewart_Port_9CBF18(t_2);
    art_Port_9CBF18_apply(SF &t_2, Z_C(2), (String) string("MissionComputer_Impl_Instance_SW_Monitor_Monitor_Alert"), art_PortMode_Type_EventOut);
    Alert = (art_Port_9CBF18) (&t_2);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_4);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_4, Z_C(500));
    DeclNewNone_5C1355(t_5);
    None_5C1355_apply(SF &t_5);
    DeclNewHAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge(t_3);
    HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_apply(SF &t_3, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_Monitor_Monitor"), (art_DispatchPropertyProtocol) (&t_4), (Option_9AF35E) (&t_5), (art_Port_45E54D) FlightPlan_in, (art_Port_45E54D) FlightPlan_out, (art_Port_9CBF18) Alert);
    Type_assign(&_HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_MonitorBridge, (&t_3), sizeof(struct HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge));
  }
};

void HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(33);
  Type_assign(&_HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_entryPoints, HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_entryPoints_(HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_MonitorBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(34);
  DeclNewNone_964667(t_6);
  None_964667_apply(SF &t_6);
  Type_assign(&_HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_noData, (&t_6), sizeof(struct None_964667));
};

void HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_FlightPlan_in_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(37);
  _HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_in_id = art_Port_45E54D_id_(HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_FlightPlan_in_(HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_MonitorBridge(SF_LAST)));
};

void HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_FlightPlan_in_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(38);
  Type_assign(&_HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_in_port, HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_FlightPlan_out_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(41);
  _HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_out_id = art_Port_45E54D_id_(HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_FlightPlan_out_(HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_MonitorBridge(SF_LAST)));
};

void HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_FlightPlan_out_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(42);
  Type_assign(&_HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_FlightPlan_out_port, HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_Alert_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(45);
  _HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_Alert_id = art_Port_9CBF18_id_(HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_Alert_(HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_MonitorBridge(SF_LAST)));
};

void HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_init_Alert_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(46);
  Type_assign(&_HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_Alert_port, HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_noData(SF_LAST), sizeof(union Option_8E9F45));
};
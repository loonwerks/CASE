#include <all.h>

B CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_initialized_ = F;

struct CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge _CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_CASE_MonitorBridge;
union art_Bridge_EntryPoints _CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_entryPoints;
union Option_8E9F45 _CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_noData;
Z _CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Observed_id;
union Option_8E9F45 _CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Observed_port;
Z _CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_id;
union Option_8E9F45 _CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_port;

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init(STACK_FRAME_ONLY) {
  if (CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_initialized_) return;
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_initialized_ = T;
  DeclNewStackFrame(caller, "CASE_Monitor.scala", "CASE_MONITOR_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.CASE_Monitor", "<init>", 0);
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_CASE_MonitorBridge(SF_LAST);
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_entryPoints(SF_LAST);
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_noData(SF_LAST);
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_Observed_id(SF_LAST);
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_Observed_port(SF_LAST);
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_Suspect_Traffic_Out_id(SF_LAST);
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_Suspect_Traffic_Out_port(SF_LAST);
}

CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_CASE_MonitorBridge(STACK_FRAME_ONLY) {
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init(CALLER_LAST);
  return (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge) &_CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_CASE_MonitorBridge;
}

art_Bridge_EntryPoints CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_entryPoints(STACK_FRAME_ONLY) {
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_entryPoints;
}

Option_8E9F45 CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_noData(STACK_FRAME_ONLY) {
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init(CALLER_LAST);
  return (Option_8E9F45) &_CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_noData;
}

Z CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Observed_id(STACK_FRAME_ONLY) {
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init(CALLER_LAST);
  return _CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Observed_id;
}

Option_8E9F45 CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Observed_port(STACK_FRAME_ONLY) {
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init(CALLER_LAST);
  return (Option_8E9F45) &_CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Observed_port;
}

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Observed_port_a(STACK_FRAME Option_8E9F45 p_Observed_port) {
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init(CALLER_LAST);
  Type_assign(&_CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Observed_port, p_Observed_port, sizeof(union Option_8E9F45));
}

Z CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_id(STACK_FRAME_ONLY) {
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init(CALLER_LAST);
  return _CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_id;
}

Option_8E9F45 CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_port(STACK_FRAME_ONLY) {
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init(CALLER_LAST);
  return (Option_8E9F45) &_CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_port;
}

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_port_a(STACK_FRAME Option_8E9F45 p_Suspect_Traffic_Out_port) {
  CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init(CALLER_LAST);
  Type_assign(&_CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_port, p_Suspect_Traffic_Out_port, sizeof(union Option_8E9F45));
}

Z CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "CASE_Monitor.scala", "CASE_MONITOR_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.CASE_Monitor", "main", 0);

  sfUpdateLoc(94);
  {
    CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(95);
  {
    CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(96);
  {
    CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(97);
  {
    CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(99);
  {
    CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor.scala", "CASE_MONITOR_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.CASE_Monitor", "initialiseArchitecture", 0);

  sfUpdateLoc(78);
  art_ArchitectureDescription ad;
  STATIC_ASSERT(1 <= MaxIS_7E8796, "Insufficient maximum for IS[Z, art.Bridge] elements.");
  DeclNewIS_7E8796(t_1);
  t_1.size = (int8_t) 1;
  IS_7E8796_up(&t_1, 0, (art_Bridge) CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_CASE_MonitorBridge(SF_LAST));
  STATIC_ASSERT(0 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  DeclNewIS_08117A(t_2);
  t_2.size = (int8_t) 0;
  DeclNewart_ArchitectureDescription(t_0);
  art_ArchitectureDescription_apply(SF &t_0, (IS_7E8796) (&t_1), (IS_08117A) (&t_2));
  ad = (art_ArchitectureDescription) (&t_0);

  sfUpdateLoc(82);
  {
    art_Art_run(SF (art_ArchitectureDescription) ad);
  }
}

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor.scala", "CASE_MONITOR_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.CASE_Monitor", "initialiseEntryPoint", 0);

  sfUpdateLoc(85);
  {
    art_Bridge_EntryPoints_initialise_(SF CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_entryPoints(SF_LAST));
  }
}

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor.scala", "CASE_MONITOR_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.CASE_Monitor", "computeEntryPoint", 0);

  sfUpdateLoc(87);
  {
    art_Bridge_EntryPoints_compute_(SF CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_entryPoints(SF_LAST));
  }
}

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor.scala", "CASE_MONITOR_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.CASE_Monitor", "finaliseEntryPoint", 0);

  sfUpdateLoc(89);
  {
    art_Bridge_EntryPoints_finalise_(SF CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_entryPoints(SF_LAST));
  }
}

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "CASE_Monitor.scala", "CASE_MONITOR_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.CASE_Monitor.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(109);
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

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor.scala", "CASE_MONITOR_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.CASE_Monitor", "touch", 0);

  sfUpdateLoc(105);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(106);
    {
      CASE_MONITOR_TEST_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(111);
    {
      DeclNewIS_C4F575(t_2);
      CASE_MONITOR_TEST_Base_Types_Bits_example(SF (IS_C4F575) &t_2);
      DeclNewCASE_MONITOR_TEST_Base_Types_Bits_Payload(t_1);
      CASE_MONITOR_TEST_Base_Types_Bits_Payload_apply(SF &t_1, (IS_C4F575) ((IS_C4F575) &t_2));
      CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_touch_printDataContent(SF (art_DataContent) (&t_1));
    }

    sfUpdateLoc(112);
    {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_touch_printDataContent(SF (art_DataContent) (&t_3));
    }

    sfUpdateLoc(114);
    {
      DeclNewCASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api(t_4);
      Option_D00721_get_(SF (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &t_4, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_c_initialization_api(SF_LAST));
      CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_logInfo_(SF ((CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &t_4), (String) string(""));
    }

    sfUpdateLoc(115);
    {
      DeclNewCASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api(t_5);
      Option_D00721_get_(SF (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &t_5, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_c_initialization_api(SF_LAST));
      CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_logDebug_(SF ((CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &t_5), (String) string(""));
    }

    sfUpdateLoc(116);
    {
      DeclNewCASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api(t_6);
      Option_D00721_get_(SF (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &t_6, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_c_initialization_api(SF_LAST));
      CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_logError_(SF ((CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &t_6), (String) string(""));
    }

    sfUpdateLoc(117);
    {
      DeclNewCASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api(t_7);
      Option_ADA761_get_(SF (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &t_7, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_c_operational_api(SF_LAST));
      CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_logInfo_(SF ((CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &t_7), (String) string(""));
    }

    sfUpdateLoc(118);
    {
      DeclNewCASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api(t_8);
      Option_ADA761_get_(SF (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &t_8, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_c_operational_api(SF_LAST));
      CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_logDebug_(SF ((CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(119);
    {
      DeclNewCASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api(t_9);
      Option_ADA761_get_(SF (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &t_9, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_c_operational_api(SF_LAST));
      CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_logError_(SF ((CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(120);
    Option_30119F apiUsage_Observed;
    DeclNewCASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api(t_10);
    Option_ADA761_get_(SF (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &t_10, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_11);
    CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_get_Observed_(SF (Option_30119F) &t_11, ((CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &t_10));
    apiUsage_Observed = (Option_30119F) ((Option_30119F) &t_11);

    sfUpdateLoc(121);
    {
      DeclNewCASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api(t_12);
      Option_D00721_get_(SF (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &t_12, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_13);
      CASE_MONITOR_TEST_Base_Types_Bits_example(SF (IS_C4F575) &t_13);
      CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_put_Suspect_Traffic_Out_(SF ((CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &t_12), (IS_C4F575) ((IS_C4F575) &t_13));
    }

    sfUpdateLoc(122);
    {
      DeclNewCASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api(t_14);
      Option_ADA761_get_(SF (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &t_14, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_15);
      CASE_MONITOR_TEST_Base_Types_Bits_example(SF (IS_C4F575) &t_15);
      CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_put_Suspect_Traffic_Out_(SF ((CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &t_14), (IS_C4F575) ((IS_C4F575) &t_15));
    }
  }
}

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor.scala", "CASE_MONITOR_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.CASE_Monitor", "run", 0);
}

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor.scala", "CASE_MONITOR_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.CASE_Monitor", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(127);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(128);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(129);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor.scala", "CASE_MONITOR_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.CASE_Monitor", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(139);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(140);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(141);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor.scala", "CASE_MONITOR_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.CASE_Monitor", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(133);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(134);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(135);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "CASE_Monitor.scala", "CASE_MONITOR_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.CASE_Monitor", "getValue", 0);

  sfUpdateLoc(47);
  B t_0;
  {
    t_0 = Z__eq(portId, CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Observed_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Observed_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(50);
    {
      DeclNewString(t_1);
      String t_2 = (String) &t_1;
      DeclNewString(t_3);
      String_string_(SF (String) &t_3, string("Unexpected: CASE_Monitor.getValue called with: "));
      Z_string_(SF (String) &t_3, portId);
      String_string_(SF (String) &t_3, string(""));
      String_string_(SF t_2, ((String) &t_3));
      sfAbort(t_2->value);
      abort();
    }
  }
}

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "CASE_Monitor.scala", "CASE_MONITOR_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.CASE_Monitor", "putValue", 0);

  sfUpdateLoc(61);
  B t_0;
  {
    t_0 = Z__eq(portId, CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(62);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(64);
    {
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected: CASE_Monitor.putValue called with: "));
      Z_string_(SF (String) &t_4, portId);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
}

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "CASE_Monitor.scala", "CASE_MONITOR_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.CASE_Monitor", "sendOutput", 0);

  sfUpdateLoc(71);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(72);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_port(SF_LAST));
      CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_seL4Nix_Suspect_Traffic_Out_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(73);
    {
      CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_port_a(SF (Option_8E9F45) CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_noData(SF_LAST));
    }
  }
}

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "CASE_Monitor.scala", "CASE_MONITOR_TEST.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.CASE_Monitor", "receiveInput", 0);

  sfUpdateLoc(57);
  {
    DeclNewOption_8E9F45(t_0);
    CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_seL4Nix_Observed_Receive(SF (Option_8E9F45) &t_0);
    CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Observed_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }
}

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_CASE_MonitorBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  {

    sfUpdateLoc(17);
    art_Port_45E54D Observed;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("CASE_MONITOR_TEST_impl_Instance_CASE_Monitor_CASE_Monitor_Observed"), art_PortMode_Type_EventIn);
    Observed = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(18);
    art_Port_45E54D Suspect_Traffic_Out;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("CASE_MONITOR_TEST_impl_Instance_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out"), art_PortMode_Type_EventOut);
    Suspect_Traffic_Out = (art_Port_45E54D) (&t_1);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_3);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_3, Z_C(500));
    DeclNewNone_5C1355(t_4);
    None_5C1355_apply(SF &t_4);
    DeclNewCASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge(t_2);
    CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_apply(SF &t_2, Z_C(0), (String) string("CASE_MONITOR_TEST_impl_Instance_CASE_Monitor_CASE_Monitor"), (art_DispatchPropertyProtocol) (&t_3), (Option_9AF35E) (&t_4), (art_Port_45E54D) Observed, (art_Port_45E54D) Suspect_Traffic_Out);
    Type_assign(&_CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_CASE_MonitorBridge, (&t_2), sizeof(struct CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge));
  }
};

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(31);
  Type_assign(&_CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_entryPoints, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_entryPoints_(CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_CASE_MonitorBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(32);
  DeclNewNone_964667(t_5);
  None_964667_apply(SF &t_5);
  Type_assign(&_CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_noData, (&t_5), sizeof(struct None_964667));
};

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_Observed_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(35);
  _CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Observed_id = art_Port_45E54D_id_(CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_Observed_(CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_CASE_MonitorBridge(SF_LAST)));
};

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_Observed_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(36);
  Type_assign(&_CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Observed_port, CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_Suspect_Traffic_Out_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(39);
  _CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_id = art_Port_45E54D_id_(CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_Suspect_Traffic_Out_(CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_CASE_MonitorBridge(SF_LAST)));
};

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_Suspect_Traffic_Out_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(40);
  Type_assign(&_CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_port, CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_noData(SF_LAST), sizeof(union Option_8E9F45));
};
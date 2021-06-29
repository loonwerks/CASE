#include <all.h>

B HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_initialized_ = F;

struct HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge _HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationManagerBridge;
union art_Bridge_EntryPoints _HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_entryPoints;
union Option_8E9F45 _HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_noData;
Z _HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_id;
union Option_8E9F45 _HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_port;
Z _HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationResponse_id;
union Option_8E9F45 _HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationResponse_port;
Z _HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_id;
union Option_8E9F45 _HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_port;

void HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init(STACK_FRAME_ONLY) {
  if (HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_initialized_) return;
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_initialized_ = T;
  DeclNewStackFrame(caller, "AttestationManager.scala", "HAMR_Simple_V4.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager", "<init>", 0);
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_AttestationManagerBridge(SF_LAST);
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_entryPoints(SF_LAST);
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_noData(SF_LAST);
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_AttestationRequest_id(SF_LAST);
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_AttestationRequest_port(SF_LAST);
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_AttestationResponse_id(SF_LAST);
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_AttestationResponse_port(SF_LAST);
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_TrustedIds_id(SF_LAST);
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_TrustedIds_port(SF_LAST);
}

HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationManagerBridge(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init(CALLER_LAST);
  return (HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge) &_HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationManagerBridge;
}

art_Bridge_EntryPoints HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_entryPoints(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_entryPoints;
}

Option_8E9F45 HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_noData(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_noData;
}

Z HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_id(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init(CALLER_LAST);
  return _HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_id;
}

Option_8E9F45 HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_port(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_port;
}

void HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_port_a(STACK_FRAME Option_8E9F45 p_AttestationRequest_port) {
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init(CALLER_LAST);
  Type_assign(&_HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_port, p_AttestationRequest_port, sizeof(union Option_8E9F45));
}

Z HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationResponse_id(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init(CALLER_LAST);
  return _HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationResponse_id;
}

Option_8E9F45 HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationResponse_port(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationResponse_port;
}

void HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationResponse_port_a(STACK_FRAME Option_8E9F45 p_AttestationResponse_port) {
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init(CALLER_LAST);
  Type_assign(&_HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationResponse_port, p_AttestationResponse_port, sizeof(union Option_8E9F45));
}

Z HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_id(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init(CALLER_LAST);
  return _HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_id;
}

Option_8E9F45 HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_port(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_port;
}

void HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_port_a(STACK_FRAME Option_8E9F45 p_TrustedIds_port) {
  HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init(CALLER_LAST);
  Type_assign(&_HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_port, p_TrustedIds_port, sizeof(union Option_8E9F45));
}

Z HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "AttestationManager.scala", "HAMR_Simple_V4.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager", "main", 0);

  sfUpdateLoc(107);
  {
    HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(108);
  {
    HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(109);
  {
    HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(110);
  {
    HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(112);
  {
    HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationManager.scala", "HAMR_Simple_V4.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager", "initialiseArchitecture", 0);

  sfUpdateLoc(91);
  art_ArchitectureDescription ad;
  STATIC_ASSERT(1 <= MaxIS_7E8796, "Insufficient maximum for IS[Z, art.Bridge] elements.");
  DeclNewIS_7E8796(t_1);
  t_1.size = (int8_t) 1;
  IS_7E8796_up(&t_1, 0, (art_Bridge) HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationManagerBridge(SF_LAST));
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

Unit HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationManager.scala", "HAMR_Simple_V4.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager", "initialiseEntryPoint", 0);

  sfUpdateLoc(98);
  {
    art_Bridge_EntryPoints_initialise_(SF HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_entryPoints(SF_LAST));
  }
}

Unit HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationManager.scala", "HAMR_Simple_V4.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager", "computeEntryPoint", 0);

  sfUpdateLoc(100);
  {
    art_Bridge_EntryPoints_compute_(SF HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_entryPoints(SF_LAST));
  }
}

Unit HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationManager.scala", "HAMR_Simple_V4.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager", "finaliseEntryPoint", 0);

  sfUpdateLoc(102);
  {
    art_Bridge_EntryPoints_finalise_(SF HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_entryPoints(SF_LAST));
  }
}

Unit HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "AttestationManager.scala", "HAMR_Simple_V4.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager.touch", "printDataContent", 0);

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

Unit HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationManager.scala", "HAMR_Simple_V4.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager", "touch", 0);

  sfUpdateLoc(118);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(119);
    {
      HAMR_Simple_V4_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(124);
    {
      DeclNewIS_C4F575(t_2);
      HAMR_Simple_V4_Base_Types_Bits_example(SF (IS_C4F575) &t_2);
      DeclNewHAMR_Simple_V4_Base_Types_Bits_Payload(t_1);
      HAMR_Simple_V4_Base_Types_Bits_Payload_apply(SF &t_1, (IS_C4F575) ((IS_C4F575) &t_2));
      HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_touch_printDataContent(SF (art_DataContent) (&t_1));
    }

    sfUpdateLoc(125);
    {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_touch_printDataContent(SF (art_DataContent) (&t_3));
    }

    sfUpdateLoc(127);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api(t_4);
      Option_9DEC86_get_(SF (HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &t_4, HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api(SF_LAST));
      HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api_logInfo_(SF ((HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &t_4), (String) string(""));
    }

    sfUpdateLoc(128);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api(t_5);
      Option_9DEC86_get_(SF (HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &t_5, HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api(SF_LAST));
      HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api_logDebug_(SF ((HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &t_5), (String) string(""));
    }

    sfUpdateLoc(129);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api(t_6);
      Option_9DEC86_get_(SF (HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &t_6, HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api(SF_LAST));
      HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api_logError_(SF ((HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &t_6), (String) string(""));
    }

    sfUpdateLoc(130);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api(t_7);
      Option_179977_get_(SF (HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &t_7, HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_operational_api(SF_LAST));
      HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api_logInfo_(SF ((HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &t_7), (String) string(""));
    }

    sfUpdateLoc(131);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api(t_8);
      Option_179977_get_(SF (HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &t_8, HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_operational_api(SF_LAST));
      HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api_logDebug_(SF ((HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(132);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api(t_9);
      Option_179977_get_(SF (HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &t_9, HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_operational_api(SF_LAST));
      HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api_logError_(SF ((HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(133);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api(t_10);
      Option_9DEC86_get_(SF (HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &t_10, HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_11);
      HAMR_Simple_V4_Base_Types_Bits_example(SF (IS_C4F575) &t_11);
      HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api_put_AttestationRequest_(SF ((HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &t_10), (IS_C4F575) ((IS_C4F575) &t_11));
    }

    sfUpdateLoc(134);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api(t_12);
      Option_179977_get_(SF (HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &t_12, HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_13);
      HAMR_Simple_V4_Base_Types_Bits_example(SF (IS_C4F575) &t_13);
      HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api_put_AttestationRequest_(SF ((HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &t_12), (IS_C4F575) ((IS_C4F575) &t_13));
    }

    sfUpdateLoc(135);
    Option_30119F apiUsage_AttestationResponse;
    DeclNewHAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api(t_14);
    Option_179977_get_(SF (HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &t_14, HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_15);
    HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api_get_AttestationResponse_(SF (Option_30119F) &t_15, ((HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &t_14));
    apiUsage_AttestationResponse = (Option_30119F) ((Option_30119F) &t_15);

    sfUpdateLoc(136);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api(t_16);
      Option_9DEC86_get_(SF (HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &t_16, HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_17);
      HAMR_Simple_V4_Base_Types_Bits_example(SF (IS_C4F575) &t_17);
      HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api_put_TrustedIds_(SF ((HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &t_16), (IS_C4F575) ((IS_C4F575) &t_17));
    }

    sfUpdateLoc(137);
    {
      DeclNewHAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api(t_18);
      Option_179977_get_(SF (HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &t_18, HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_19);
      HAMR_Simple_V4_Base_Types_Bits_example(SF (IS_C4F575) &t_19);
      HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api_put_TrustedIds_(SF ((HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &t_18), (IS_C4F575) ((IS_C4F575) &t_19));
    }
  }
}

Unit HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationManager.scala", "HAMR_Simple_V4.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager", "run", 0);
}

Unit HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "AttestationManager.scala", "HAMR_Simple_V4.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager", "logInfo", 0);

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

Unit HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "AttestationManager.scala", "HAMR_Simple_V4.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager", "logDebug", 0);

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

Unit HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "AttestationManager.scala", "HAMR_Simple_V4.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager", "logError", 0);

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

Unit HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "AttestationManager.scala", "HAMR_Simple_V4.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager", "putValue", 0);

  sfUpdateLoc(67);
  B t_0;
  {
    t_0 = Z__eq(portId, HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(68);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(69);
    B t_2;
    {
      t_2 = Z__eq(portId, HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_id(SF_LAST));
    }
    if (t_2) {

      sfUpdateLoc(70);
      {
        DeclNewSome_D29615(t_3);
        Some_D29615_apply(SF &t_3, (art_DataContent) data);
        HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_port_a(SF (Option_8E9F45) (&t_3));
      }
    } else {

      sfUpdateLoc(72);
      {
        DeclNewString(t_4);
        String t_5 = (String) &t_4;
        DeclNewString(t_6);
        String_string_(SF (String) &t_6, string("Unexpected: AttestationManager.putValue called with: "));
        Z_string_(SF (String) &t_6, portId);
        String_string_(SF (String) &t_6, string(""));
        String_string_(SF t_5, ((String) &t_6));
        sfAbort(t_5->value);
        abort();
      }
    }
  }
}

void HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "AttestationManager.scala", "HAMR_Simple_V4.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager", "getValue", 0);

  sfUpdateLoc(53);
  B t_0;
  {
    t_0 = Z__eq(portId, HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationResponse_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationResponse_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(56);
    {
      DeclNewString(t_1);
      String t_2 = (String) &t_1;
      DeclNewString(t_3);
      String_string_(SF (String) &t_3, string("Unexpected: AttestationManager.getValue called with: "));
      Z_string_(SF (String) &t_3, portId);
      String_string_(SF (String) &t_3, string(""));
      String_string_(SF t_2, ((String) &t_3));
      sfAbort(t_2->value);
      abort();
    }
  }
}

Unit HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "AttestationManager.scala", "HAMR_Simple_V4.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager", "sendOutput", 0);

  sfUpdateLoc(79);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(80);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_port(SF_LAST));
      HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_seL4Nix_AttestationRequest_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(81);
    {
      HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_port_a(SF (Option_8E9F45) HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_noData(SF_LAST));
    }
  }

  sfUpdateLoc(84);
  B t_3;
  {
    B t_4 = Option_8E9F45_nonEmpty_(SF HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_port(SF_LAST));
    t_3 = t_4;
  }
  if (t_3) {

    sfUpdateLoc(85);
    {
      DeclNewart_DataContent(t_5);
      Option_8E9F45_get_(SF (art_DataContent) &t_5, HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_port(SF_LAST));
      HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_seL4Nix_TrustedIds_Send(SF (art_DataContent) ((art_DataContent) &t_5));
    }

    sfUpdateLoc(86);
    {
      HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_port_a(SF (Option_8E9F45) HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_noData(SF_LAST));
    }
  }
}

Unit HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "AttestationManager.scala", "HAMR_Simple_V4.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager", "receiveInput", 0);

  sfUpdateLoc(63);
  {
    DeclNewOption_8E9F45(t_0);
    HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_seL4Nix_AttestationResponse_Receive(SF (Option_8E9F45) &t_0);
    HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationResponse_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }
}

void HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_AttestationManagerBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  {

    sfUpdateLoc(17);
    art_Port_45E54D AttestationRequest;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager_AttestationRequest"), art_PortMode_Type_EventOut);
    AttestationRequest = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(18);
    art_Port_45E54D AttestationResponse;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager_AttestationResponse"), art_PortMode_Type_EventIn);
    AttestationResponse = (art_Port_45E54D) (&t_1);

    sfUpdateLoc(19);
    art_Port_45E54D TrustedIds;
    DeclNewart_Port_45E54D(t_2);
    art_Port_45E54D_apply(SF &t_2, Z_C(2), (String) string("MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager_TrustedIds"), art_PortMode_Type_EventOut);
    TrustedIds = (art_Port_45E54D) (&t_2);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_4);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_4, Z_C(500));
    DeclNewNone_5C1355(t_5);
    None_5C1355_apply(SF &t_5);
    DeclNewHAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge(t_3);
    HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_apply(SF &t_3, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_AttestationManager_AttestationManager"), (art_DispatchPropertyProtocol) (&t_4), (Option_9AF35E) (&t_5), (art_Port_45E54D) AttestationRequest, (art_Port_45E54D) AttestationResponse, (art_Port_45E54D) TrustedIds);
    Type_assign(&_HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationManagerBridge, (&t_3), sizeof(struct HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge));
  }
};

void HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(33);
  Type_assign(&_HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_entryPoints, HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_entryPoints_(HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationManagerBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(34);
  DeclNewNone_964667(t_6);
  None_964667_apply(SF &t_6);
  Type_assign(&_HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_noData, (&t_6), sizeof(struct None_964667));
};

void HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_AttestationRequest_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(37);
  _HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_id = art_Port_45E54D_id_(HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_AttestationRequest_(HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationManagerBridge(SF_LAST)));
};

void HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_AttestationRequest_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(38);
  Type_assign(&_HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_port, HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_AttestationResponse_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(41);
  _HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationResponse_id = art_Port_45E54D_id_(HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_AttestationResponse_(HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationManagerBridge(SF_LAST)));
};

void HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_AttestationResponse_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(42);
  Type_assign(&_HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationResponse_port, HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_TrustedIds_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(45);
  _HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_id = art_Port_45E54D_id_(HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_TrustedIds_(HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationManagerBridge(SF_LAST)));
};

void HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_TrustedIds_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(46);
  Type_assign(&_HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_port, HAMR_Simple_V4_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_noData(SF_LAST), sizeof(union Option_8E9F45));
};
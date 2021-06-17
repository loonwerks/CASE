#include <all.h>

Unit hamr_Drivers_UARTDriver_Impl_Initialization_Api_logInfo_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Api.scala", "hamr.Drivers.UARTDriver_Impl_Api", "logInfo", 0);

  sfUpdateLoc(30);
  {
    art_Art_logInfo(SF hamr_Drivers_UARTDriver_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit hamr_Drivers_UARTDriver_Impl_Initialization_Api_logDebug_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Api.scala", "hamr.Drivers.UARTDriver_Impl_Api", "logDebug", 0);

  sfUpdateLoc(34);
  {
    art_Art_logDebug(SF hamr_Drivers_UARTDriver_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit hamr_Drivers_UARTDriver_Impl_Initialization_Api_logError_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Api.scala", "hamr.Drivers.UARTDriver_Impl_Api", "logError", 0);

  sfUpdateLoc(38);
  {
    art_Art_logError(SF hamr_Drivers_UARTDriver_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit hamr_Drivers_UARTDriver_Impl_Operational_Api_logInfo_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Api.scala", "hamr.Drivers.UARTDriver_Impl_Api", "logInfo", 0);

  sfUpdateLoc(30);
  {
    art_Art_logInfo(SF hamr_Drivers_UARTDriver_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit hamr_Drivers_UARTDriver_Impl_Operational_Api_logDebug_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Api.scala", "hamr.Drivers.UARTDriver_Impl_Api", "logDebug", 0);

  sfUpdateLoc(34);
  {
    art_Art_logDebug(SF hamr_Drivers_UARTDriver_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit hamr_Drivers_UARTDriver_Impl_Operational_Api_logError_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Api.scala", "hamr.Drivers.UARTDriver_Impl_Api", "logError", 0);

  sfUpdateLoc(38);
  {
    art_Art_logError(SF hamr_Drivers_UARTDriver_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit hamr_Drivers_UARTDriver_Impl_Initialization_Api_put_send_data_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Api.scala", "hamr.Drivers.UARTDriver_Impl_Api", "put_send_data", 0);

  sfUpdateLoc(18);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_Drivers_UARTDriver_Impl_Initialization_Api_send_data_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_Drivers_UARTDriver_Impl_Operational_Api_put_send_data_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Api.scala", "hamr.Drivers.UARTDriver_Impl_Api", "put_send_data", 0);

  sfUpdateLoc(18);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_Drivers_UARTDriver_Impl_Operational_Api_send_data_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_Drivers_UARTDriver_Impl_Initialization_Api_put_AirVehicleState_WPM_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Api.scala", "hamr.Drivers.UARTDriver_Impl_Api", "put_AirVehicleState_WPM", 0);

  sfUpdateLoc(22);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_Drivers_UARTDriver_Impl_Initialization_Api_AirVehicleState_WPM_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_Drivers_UARTDriver_Impl_Operational_Api_put_AirVehicleState_WPM_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Api.scala", "hamr.Drivers.UARTDriver_Impl_Api", "put_AirVehicleState_WPM", 0);

  sfUpdateLoc(22);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_Drivers_UARTDriver_Impl_Operational_Api_AirVehicleState_WPM_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_Drivers_UARTDriver_Impl_Initialization_Api_put_AirVehicleState_UXAS_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Api.scala", "hamr.Drivers.UARTDriver_Impl_Api", "put_AirVehicleState_UXAS", 0);

  sfUpdateLoc(26);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_Drivers_UARTDriver_Impl_Initialization_Api_AirVehicleState_UXAS_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_Drivers_UARTDriver_Impl_Operational_Api_put_AirVehicleState_UXAS_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Api.scala", "hamr.Drivers.UARTDriver_Impl_Api", "put_AirVehicleState_UXAS", 0);

  sfUpdateLoc(26);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_Drivers_UARTDriver_Impl_Operational_Api_AirVehicleState_UXAS_Id_(this), (art_DataContent) (&t_0));
  }
}
// https://github.com/loonwerks/case-ta6-platform-assessment-camkes-apps/blob/master/apps/case-uav-step6/components/AutopilotSerialServer/src/autopilot_serial_server.c

#include <UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.h>
#include <UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.h>
#include <ext.h>

#include "hexdump.h"
//#include "serial.h"

#define DUMP_LINE_LENGTH 32
#define MAX_DUMP_SIZE (4 * DUMP_LINE_LENGTH)

// forward decls
static const char *get_instance_name(void);

void serial_pre_init(); // see https://github.com/loonwerks/case-ta6-platform-assessment-camkes-apps/blob/master/apps/case-uav-step6/components/AutopilotSerialServer/src/serial.c#L131-L160

void serial_post_init(); // see https://github.com/loonwerks/case-ta6-platform-assessment-camkes-apps/blob/master/apps/case-uav-step6/components/AutopilotSerialServer/src/serial.c#L163-L165

ssize_t autopilot_serial_server_write_serial(void *data, size_t length); // see https://github.com/loonwerks/case-ta6-platform-assessment-camkes-apps/blob/master/apps/case-uav-step6/components/AutopilotSerialServer/src/serial.c#L56-L66


// This file will not be overwritten so is safe to edit

Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_initialise_(STACK_FRAME_ONLY) {
    DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.c", "", "hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_initialise_", 0);

    printf("%s: pre init apss\n", get_instance_name());
    
    /*
    serial_pre_init() causes the following error when run under camkes so removing 
    it out for now
    
		plat_pre_init@plat.c:70 Failed to initialise character device
		apss serial pre_init: rx_buffer 0x536e80, tx_buffer 0x525e80
		camkes_irq_register@irq.c:129 Couldn't find an unallocated interrupt with the same details
		nplat_post_init@plat.c:27 [Err seL4_InvalidArgument]:
		Failed to register irq for serial
	  */
	
	  #ifndef CAMKES
    serial_pre_init();
    #endif
    
    // TODO slang-embedded doesn't have pre/post init phases

    // serial_post_init() doesn't do anything so safe to keep it when run under camkes
    printf("%s: post init apss\n", get_instance_name());
    serial_post_init();
/*
  // examples of api setter and logging usage

  uint8_t t0[numBytes_hamr_CASE_Model_Transformations_CASE_UART_Msg_Impl];
  byte_array_default(SF t0, numBits_hamr_CASE_Model_Transformations_CASE_UART_Msg_Impl, numBytes_hamr_CASE_Model_Transformations_CASE_UART_Msg_Impl);
  api_put_send_data__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(SF numBits_hamr_CASE_Model_Transformations_CASE_UART_Msg_Impl, t0);

  uint8_t t1[numBytes_hamr_CMASI_AirVehicleState_i];
  byte_array_default(SF t1, numBits_hamr_CMASI_AirVehicleState_i, numBytes_hamr_CMASI_AirVehicleState_i);
  api_put_AirVehicleState_WPM__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(SF numBits_hamr_CMASI_AirVehicleState_i, t1);

  uint8_t t2[numBytes_hamr_CMASI_AirVehicleState_i];
  byte_array_default(SF t2, numBits_hamr_CMASI_AirVehicleState_i, numBytes_hamr_CMASI_AirVehicleState_i);
  api_put_AirVehicleState_UXAS__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(SF numBits_hamr_CMASI_AirVehicleState_i, t2);

  api_logInfo__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(SF string("Example logInfo"));

  api_logDebug__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(SF string("Example logDebug"));

  api_logError__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(SF string("Example logError"));
  */
}

Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.c", "", "hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_finalise_", 0);
}

Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.c", "", "hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_timeTriggered_", 0);

  size_t numBitsRead;
  uint8_t data[numBits_hamr_CMASI_MissionCommand_i];
  if (api_get_MissionCommand__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(SF &numBitsRead, data)) {
      fprintf(stdout, "apss: received mission command message of %zu octets\n", numBitsRead);  fflush(stdout);
      hexdump("    ", DUMP_LINE_LENGTH, data, (numBitsRead > MAX_DUMP_SIZE) ? MAX_DUMP_SIZE : numBitsRead);

      // currently no messages are being sent so safe to keep this even under camkes
      autopilot_serial_server_write_serial(data, numBitsRead);

  } else {
      //fprintf(stdout, "apss: received mission command message, decode errno result %d\n", errno);  fflush(stdout);
      //hexdump("    ", DUMP_LINE_LENGTH, data,
      //        (sizeof(data) > MAX_DUMP_SIZE) ? MAX_DUMP_SIZE : sizeof(data));
  }
/*
  // examples of api getter usage

  uint8_t t0[numBytes_hamr_CASE_Model_Transformations_CASE_UART_Msg_Impl];
  size_t t0_numBits;
  if(api_get_recv_data__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_hamr_CASE_Model_Transformations_CASE_UART_Msg_Impl, "numBits received does not match expected");

    DeclNewString(recv_data_str);
    String__append(SF (String) &recv_data_str, string("Received on recv_data: "));
    byte_array_string(SF (String) &recv_data_str, t0, numBytes_hamr_CASE_Model_Transformations_CASE_UART_Msg_Impl);
    api_logInfo__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(SF (String) &recv_data_str);
  }

  uint8_t t1[numBytes_hamr_CMASI_MissionCommand_i];
  size_t t1_numBits;
  if(api_get_MissionCommand__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(SF &t1_numBits, t1)) {
    // sanity check
    sfAssert(SF (Z) t1_numBits == numBits_hamr_CMASI_MissionCommand_i, "numBits received does not match expected");

    DeclNewString(MissionCommand_str);
    String__append(SF (String) &MissionCommand_str, string("Received on MissionCommand: "));
    byte_array_string(SF (String) &MissionCommand_str, t1, numBytes_hamr_CMASI_MissionCommand_i);
    api_logInfo__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(SF (String) &MissionCommand_str);
  }
  */
}

static const char *get_instance_name(void) {
    // TODO have the component name accessible via the API
    static const char name[] = "UARTDriver";
    return name;
}
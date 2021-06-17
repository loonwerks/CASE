// https://github.com/loonwerks/case-ta6-platform-assessment-camkes-apps/blob/master/apps/case-uav-step6/components/AutopilotSerialServer/src/autopilot_serial_server.c

#include <UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.h>
#include <UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.h>
#include <ext.h>

char* tieFighter[] = {
"||                          ||",
"||                          ||",
"||                          ||",
"||           ____           ||",
"||         .''''''.         ||",
"||        /   __   \\        ||",
"||\\__..-':   /\\/\\   :'-..__/||",
"||=__ =|='  |-()-|  '=|= __=||",
"||/  ''-.:   \\/\\/   :.-''  \\||",
"||        \\   \"\"   /        ||",
"||         `.____.'         ||",
"||                          ||",
"||                          ||",
"||                          ||"};

// This file will not be overwritten so is safe to edit

int missionsReceived = 0;

Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_initialise_(STACK_FRAME_ONLY) {
    DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.c", "", "hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_initialise_", 0);
}

Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.c", "", "hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_finalise_", 0);
}

Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.c", "", "hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_timeTriggered_", 0);

  size_t numBitsRead;
  uint8_t data[numBits_hamr_CMASI_MissionCommand_i];
  if (api_get_MissionCommand__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(SF &numBitsRead, data)) {

    api_logInfo__hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver(SF string("Mission Received!"));

    int length = (missionsReceived % 10) * 10 + 1;        
    char spaces[length];
    memset(spaces, ' ', length);
    spaces[length] = '\0';
    
    missionsReceived++;
    
    for(int i = 0; i < sizeof(tieFighter)/sizeof(char *); i++) {
      printf("%s%s\n", spaces, tieFighter[i]);
    }
  }
}

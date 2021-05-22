#ifndef SERIAL_H
#define SERIAL_H

#include <sys/types.h>

void serial_pre_init(); // see https://github.com/loonwerks/case-ta6-platform-assessment-camkes-apps/blob/master/apps/case-uav-step6/components/AutopilotSerialServer/src/serial.c#L131-L160

void serial_post_init(); // see https://github.com/loonwerks/case-ta6-platform-assessment-camkes-apps/blob/master/apps/case-uav-step6/components/AutopilotSerialServer/src/serial.c#L163-L165

ssize_t autopilot_serial_server_write_serial(void *data, size_t length); // see https://github.com/loonwerks/case-ta6-platform-assessment-camkes-apps/blob/master/apps/case-uav-step6/components/AutopilotSerialServer/src/serial.c#L56-L66

#endif
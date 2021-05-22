#include "serial.h"

// see https://github.com/loonwerks/case-ta6-platform-assessment-camkes-apps/blob/master/apps/case-uav-step6/components/AutopilotSerialServer/src/serial.c#L131-L160
void serial_pre_init() {

}

// see https://github.com/loonwerks/case-ta6-platform-assessment-camkes-apps/blob/master/apps/case-uav-step6/components/AutopilotSerialServer/src/serial.c#L163-L165
void serial_post_init(){

}

// see https://github.com/loonwerks/case-ta6-platform-assessment-camkes-apps/blob/master/apps/case-uav-step6/components/AutopilotSerialServer/src/serial.c#L56-L66
ssize_t autopilot_serial_server_write_serial(void *data, size_t length) {
    ssize_t result = -1;

    //if (sentinel_serial_buffer_append_sentinelized_string(getchar_client->tx_buffer,
    //                                                      (const uint8_t *) data, length)) {
    //    /* Kick start the serial by applying the timer_callback */
    //    timer_callback(NULL);
    //    result = length;
    //}

    return result;
}
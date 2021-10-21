// Copyright 2021, Adventium Labs
//
// Example task that simple ping/pongs data via it's dataIn and dataOut
// ports. It is implemented to emulate the same pattern used for period wait
// for VM tasks (vmRADIO and VMUXAS) in CASE phase2 tool evaluation 4. Both a
// queue and notificaiton are used.

// Override log level for this file. Comment to get application default.
#define ZF_LOG_LEVEL ZF_LOG_VERBOSE

#include <utils/zf_log.h>
#include <sel4utils/sel4_zf_logif.h>
#include <camkes.h>
#include <sel4bench/sel4bench.h>
#include "seqNum.h"
#include "sp_uintmax.h"

sb_queue_int8_t_1_Recv_t tics_period_queue_recv;

// [2021/10/20:JCC] Emulate same pattern used for period wait for VM tasks
// (vmRADIO and VMUXAS) in CASE phase2 tool evaluation 4. Frankly this code
// confuses me. Why do we need both the queue and the notification? As I read
// this it appears the notification is mapped to a stream and the queue data
// is ignored. But maybe there is more happening in the VM that I cannot see.
void vm_tics_period_notification_wait() {
    sb_event_counter_t numDropped = 0;
    int8_t data;

    while (!sb_queue_int8_t_1_dequeue(&tics_period_queue_recv, &numDropped, &data)) {
        //int val;

        // [2021/10/20:JCC] Not running a VM, so replace stream with the real
        // CAmkES notification wait signaled byt TICS.
        /* Blocking read */
        //int result = read(tics_period_fd, &val, sizeof(val));
        tics_period_notification_wait();

        //if (result < 0) {
        //  printf("Error reading period. %i\n", result);
        //  //return -1;
        //}
    }

    //printf("read %i -- numDropped %i\n", data, numDropped);
}

int run(void)
{

    const char* name = get_instance_name();

    uintmax_t data;
    seqNum_t dataIn_seqNum = 0;

    uint64_t ts, prev = (uint64_t)sel4bench_get_cycle_count();

    init_sp_uintmax(dataIn, &dataIn_seqNum);

    sb_queue_int8_t_1_Recv_init(&tics_period_queue_recv, tics_period_queue); 

    ZF_LOGD("    [%s] Started", name);

    // Run indefinitely
    for (int i = 0; ; i++) {

        vm_tics_period_notification_wait();

        // Ping pong data
        read_sp_uintmax(dataIn, &data, &dataIn_seqNum);
        data++;
        write_sp_uintmax(dataIn, &data, &dataIn_seqNum);

        // TODO: convert cycle count to ms
        ts = (uint64_t)sel4bench_get_cycle_count();
        uint64_t diff = ts - prev;
        prev = ts;

        ZF_LOGD("    [%s] Tick: %5d  Period(cycles): %12"PRIu64"  Data: %"PRIu64"", name, i, diff, data);
        fflush(stdout);

    }

    ZF_LOGD("    [%d] Finished", name);

    return 0;
}


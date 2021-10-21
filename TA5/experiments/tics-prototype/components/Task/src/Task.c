// Copyright 2021, Adventium Labs
//
// Example task that simple ping/pongs data via it's dataIn and dataOut
// ports. It uses sel4_Yeild to wait for next TICS window.

// Override log level for this file. Comment to get application default.
#define ZF_LOG_LEVEL ZF_LOG_VERBOSE

#include <utils/zf_log.h>
#include <sel4utils/sel4_zf_logif.h>
#include <camkes.h>
#include <sel4bench/sel4bench.h>
#include "seqNum.h"
#include "sp_uintmax.h"

int run(void)
{

    const char* name = get_instance_name();

    uintmax_t data;
    seqNum_t dataIn_seqNum = 0;

    uint64_t ts, prev = (uint64_t)sel4bench_get_cycle_count();

    init_sp_uintmax(dataIn, &dataIn_seqNum);

    ZF_LOGD("    [%s] Started", name);

    // Run indefinitely
    for (int i = 0; ; i++) {

        // Yeild is period wait for periodci MCS task
        seL4_Yield();

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


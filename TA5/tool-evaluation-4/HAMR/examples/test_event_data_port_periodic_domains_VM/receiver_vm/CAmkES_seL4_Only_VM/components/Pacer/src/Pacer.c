// Copyright 2019 Adventium Labs

#include <camkes.h>
#include <stdio.h>
#include <sel4/sel4.h>
#include <sb_queue_int8_t_1.h>

int run(void) {

  int8_t tickCount = 0;

  while (1) {
    //printf("%s: Period tick %d\n", get_instance_name(), tickCount);

    tickCount++;

    tick_emit();

    period_emit();
    send_period_to_vm(&tickCount);

    tock_wait();
  }

  return 0;
}
// Copyright 2019 Adventium Labs

#include <camkes.h>
#include <stdio.h>
#include <sel4/sel4.h>

int run(void) {

  // Just used for output
  int tickCount = 0;

  while (1) {

    printf("%s: Period tick %d\n", get_instance_name(), ++tickCount);
    tick_emit();

    period_emit();

    tock_wait();

  }

  return 0;
}


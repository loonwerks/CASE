// Copyright 2019 Adventium Labs

#include <camkes.h>
#include <stdio.h>
#include <sp_int8_t.h>
#include <sel4/sel4.h>

seqNum_t seqNum;

void send_period_to_vm(int8_t *data) {
  write_sp_int8_t(period_to_vm, data, &seqNum);
}

void pre_init(void) {
  init_sp_int8_t(period_to_vm, &seqNum);
}

int run(void) {

  // Just used for output
  int8_t tickCount = 0;

  while (1) {

	tickCount++;
    //printf("%s: Period tick %d\n", get_instance_name(), tickCount);
    tick_emit();

    send_period_to_vm(&tickCount);
    period_emit();

    tock_wait();
  }
  return 0;
}

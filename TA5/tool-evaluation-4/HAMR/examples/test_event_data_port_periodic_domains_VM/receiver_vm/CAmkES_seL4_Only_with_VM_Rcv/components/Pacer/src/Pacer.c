// Copyright 2020 Adventium Labs

#include <camkes.h>
#include <stdio.h>
#include <sb_queue_int8_t_1.h>
#include <sel4/sel4.h>

void send_period_to_vm(int8_t *data) {
  sb_queue_int8_t_1_enqueue(period_to_vm, data);
}

void pre_init(void) {
  sb_queue_int8_t_1_init(period_to_vm);
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
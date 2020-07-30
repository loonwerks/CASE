// Copyright 2019 Adventium Labs

#include <camkes.h>
#include <stdio.h>
#include <sel4/sel4.h>
#include <sb_queue_int8_t_1.h>

void send_period_to_vmdst_process(int8_t *data) {
  sb_queue_int8_t_1_enqueue(period_to_vmdst_process_queue, data);
  //period_to_vmdst_process_notification_emit();
  period_to_vmdst_process_queue_emit_underlying();
}

void pre_init(void) {
  sb_queue_int8_t_1_init(period_to_vmdst_process_queue);
}

int run(void) {

  int8_t tickCount = 0;

  while (1) {
    //printf("%s: Period tick %d\n", get_instance_name(), tickCount);

    tickCount = (tickCount + 1) % 2;

    tick_emit();

    send_period_to_vmdst_process(&tickCount);
    period_emit();

    tock_wait();
  }

  return 0;
}
// Copyright 2019 Adventium Labs

#include <camkes.h>
#include <stdio.h>
#include <sel4/sel4.h>
#include <sb_queue_int8_t_1.h>

extern const char *get_instance_name(void);

void send_period_to_vmconsumer(int8_t *data) {
  sb_queue_int8_t_1_enqueue(period_to_vmconsumer_queue, data);
  period_to_vmconsumer_notification_emit();
}

void pre_init(void) {
  sb_queue_int8_t_1_init(period_to_vmconsumer_queue);
}

int run(void) {

  int8_t tickCount = 0;

  while (1) {
    //printf("%s: Period tick %d\n", get_instance_name(), tickCount);

    tickCount++;

    tick_emit();

    send_period_to_vmconsumer(&tickCount);
    period_emit();

    tock_wait();
  }

  return 0;
}
/* apps/testevent/components/Consumer/src/main.c */

/* Similar to the "helloevent" example in CAmkES doc,
 * tidied up a bit.
 */

#include <camkes.h>
#include <stdio.h>
#include <sb_consumer_impl.h>

static int8_t _value;

void testevent_consumer_component_init(const int64_t *in_arg) {
  printf("testevent_consumer_component_init called\n");
  _value = 0;
}

void testevent_consumer_s_event_handler() {

  printf("[Consumer] Callback %d fired.\n", _value);
  _value = (_value + 1) % 500;
}

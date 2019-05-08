/* apps/testevent/components/Consumer/src/main.c */

/* Similar to the "helloevent" example in CAmkES doc,
 * tidied up a bit.
 */

#include <camkes.h>
#include <stdio.h>

void testevent_consumer_component_init(const int64_t *in_arg) {
  printf("[Consumer] Registering callback...\n");
  if ( s_reg_callback(&handler,NULL) ) {
      printf("[Consumer] Error: Initial callback registration failed");
  }
}

void testevent_consumer_s_event_handler(const int8_t *in_arg) {
  static int fired = 0;

  printf("[Consumer] Callback fired.\n");
  if (!fired) {
    fired = 1;
    if (s_reg_callback(&handler,NULL)) {
        printf("[Consumer] Error: Callback registration failed");
    }
  }
}

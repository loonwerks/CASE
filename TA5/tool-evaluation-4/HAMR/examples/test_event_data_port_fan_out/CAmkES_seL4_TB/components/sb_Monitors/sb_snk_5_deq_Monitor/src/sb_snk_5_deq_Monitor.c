#ifndef SB_VERIFY
#include <stdio.h>
#endif // SB_VERIFY

#include <sb_top_impl_Instance_types.h>
#include "../includes/sb_snk_5_deq_Monitor.h"

int mon_get_sender_id(void);
int monsig_emit(void);

int8_t contents[5];
static uint32_t front = 0;
static uint32_t length = 0;

static bool is_full(void) {
  return length == 5;
}

bool mon_is_empty(void) {
  return length == 0;
}

bool mon_dequeue(int8_t * m) {
  if (mon_is_empty()) {
    return false;
  } else {
    *m = contents[front];
    front = (front + 1) % 5;
    length--;
    return true;
  }
}

bool mon_enqueue(const int8_t * m) {
  if (is_full()) {
    return false;
  } else {
    contents[(front + length) % 5] = *m;
    length++;
    monsig_emit();
    return true;
  }
}

#ifndef SB_VERIFY
#include <stdio.h>
#endif // SB_VERIFY

#include <sb_UAV_Impl_Instance_types.h>
#include "../includes/sb_WPM_flight_plan_Monitor.h"

int mon_get_sender_id(void);
int monsig_emit(void);

sb_SW__Mission_container contents[1];
static uint32_t front = 0;
static uint32_t length = 0;

static bool is_full(void) {
  return length == 1;
}

bool mon_is_empty(void) {
  return length == 0;
}

bool mon_dequeue(sb_SW__Mission_container * m) {
  if (mon_is_empty()) {
    return false;
  } else {
    *m = contents[front];
    front = (front + 1) % 1;
    length--;
    return true;
  }
}

bool mon_enqueue(const sb_SW__Mission_container * m) {
  if (is_full()) {
    return false;
  } else {
    contents[(front + length) % 1] = *m;
    length++;
    monsig_emit();
    return true;
  }
}

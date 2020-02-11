#include <camkes.h>
#include <stdio.h>
#include <string.h>

int32_t num_events = 0;

static inline void ignore_result(long long int unused_result) { (void) unused_result; }

void mon_send_raise(void) {
  int do_emit = 0;
  ignore_result(m_lock());
  if (num_events < 2) {
    num_events++;
    do_emit = 1;
  }
  ignore_result(m_unlock());
  if (do_emit) {
    monsig_emit();
  }
}

int32_t mon_receive_get_events(void) {
  ignore_result(m_lock());
  int ne = num_events;
  num_events = 0;
  ignore_result(m_unlock());
  return ne;
}

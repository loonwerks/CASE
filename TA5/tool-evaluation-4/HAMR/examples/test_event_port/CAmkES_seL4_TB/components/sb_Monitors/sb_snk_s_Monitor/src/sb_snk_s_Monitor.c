#include <camkes.h>
#include <stdio.h>
#include <string.h>

int32_t num_events = 0;

static inline void ignore_result(long long int unused_result) { (void) unused_result; }

// Send interfaces
bool mon_send_enqueue(void) {
  int do_emit = 0;
  ignore_result(m_lock());
  if (num_events < 1) {
    num_events++;
    do_emit = 1;
  }
  ignore_result(m_unlock());
  if (do_emit) {
    monsig_emit();
  }
  return true;
}

// Receive interfaces 
bool mon_receive_is_empty(void) {
  return num_events == 0;
}

bool mon_receive_dequeue(void) {
  ignore_result(m_lock());
  bool ret = false;
  if(num_events > 0){
    num_events--;
    ret = true;
  }
  ignore_result(m_unlock());
  return ret;
}

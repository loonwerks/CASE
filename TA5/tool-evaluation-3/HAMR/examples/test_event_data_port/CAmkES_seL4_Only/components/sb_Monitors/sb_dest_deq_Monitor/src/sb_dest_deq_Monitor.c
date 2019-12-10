#ifndef SB_VERIFY
#include <stdio.h>
#endif // SB_VERIFY
#include <camkes.h>
#include "../../../../includes/sb_proc_types.h"
#include "../includes/sb_dest_deq_Monitor.h"

struct queue {
    int head;
    int tail;
    int len;
    int8_t elt[1];
} q = {.head=0, .tail=0, .len=0};

static bool is_full(void) {
  return q.len == 1;
}

static bool is_empty(void) {
  return q.len == 0;
}

bool mon_receive_dequeue(int8_t * m) {
  if (is_empty()) {
    return false;
  } else {
    m_lock();
    *m = q.elt[q.tail];
    q.tail = (q.tail + 1) % 1;
    q.len--;
    m_unlock();
    return true;
  }
}

bool mon_send_enqueue(const int8_t * m) {
  if (is_full()) {
    return false;
  } else {
    m_lock();
    q.elt[q.head] = *m;
    q.head = (q.head + 1) % 1;
    q.len++;
    m_unlock();
    monsig_emit();    
    return true;
  }
}

#include "../../../../includes/tb_proc_types.h"
#include "../includes/tb_dest_deq_Monitor.h"

int monsig_emit(void);

static int8_t contents;

bool mon_read(int8_t * m) {
  *m = contents;
  return true;
}

bool mon_write(const int8_t * m) {
  contents = *m;
  monsig_emit();
  return true;
}

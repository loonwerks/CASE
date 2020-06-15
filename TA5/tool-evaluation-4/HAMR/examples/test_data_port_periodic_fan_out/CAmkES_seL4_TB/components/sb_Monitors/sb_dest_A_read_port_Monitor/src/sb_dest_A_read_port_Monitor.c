#include <sb_types.h>
#include <sb_dest_A_read_port_Monitor.h>

int monsig_emit(void);

static int8_t contents;
bool receivedData = false;

bool mon_is_empty() {
  return !receivedData;
}

bool mon_read(int8_t * m) {
  *m = contents;
  return receivedData;
}

bool mon_write(const int8_t * m) {
  receivedData = true;
  contents = *m;
  monsig_emit();
  return receivedData;
}
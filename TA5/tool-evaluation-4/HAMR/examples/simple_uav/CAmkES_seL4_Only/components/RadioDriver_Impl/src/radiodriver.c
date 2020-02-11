#include <camkes.h>
#include <sb_PROC_HW_types.h>
#include <sb_RadioDriver_Impl.h>
#include <assert.h>

void init(const int64_t * in_arg) {

  printf("RDIO: initialise entry point called\n");

  SW__Command_Impl command = {
    .Map = {{ .lat = 0, .longitude = 1, .alt = 2 },
            { .lat = 1, .longitude = 2, .alt = 3 },
            { .lat = 2, .longitude = 3, .alt = 4 },
            { .lat = 3, .longitude = 4, .alt = 5 }},
      .Pattern = Perimeter,
      .HMAC = true
  };

  printf("RDIO:> Sending command.\n");

  // send command to FPLN  
  assert(sb_recv_map_out_enqueue(&command)==true);
}
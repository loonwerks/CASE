#include <camkes.h>
#include <sb_PROC_HW_types.h>
#include <sb_UARTDriver_Impl.h>
#include <assert.h>

static uintmax_t i = 0;

void init(const uintmax_t * in_arg) {
}

void printMissionWindow(const sb_SW__MissionWindow_container * missionWindow){
  printf("  MissionWindow:\n");
  for(int i = 0; i < 4; i++){
    SW__Coordinate_Impl c = missionWindow->f[i];
    printf("    %i: {%i, %i, %i}\n", i, c.lat, c.longitude, c.alt);
  }
}

void mission_window(const sb_SW__MissionWindow_container * missionWindow){
  printf("UART:< Received mission window\n");
  printMissionWindow(missionWindow);

  // [2019/09/22:JCC] Note sure what this busy loop was for. Now that we have
  // a fixed periodc schedule, I see no reason for this.
  for(unsigned int j = 0; j < 500000000; j++){}

  i++;
  
  printf("UART:> Sending %" PRIu64 " as the next id.\n", i);
  
  // send tracking id to WPM
  assert(sb_tracking_id_enqueue(&i) == true);
}

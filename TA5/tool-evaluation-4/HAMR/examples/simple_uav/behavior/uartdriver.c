#include <camkes.h>
#include <sb_types.h>
#include <sb_UARTDriver_Impl.h>
#include <assert.h>

static int64_t i = 0;

void init(const int64_t * in_arg) {
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
    		
  for(unsigned int j = 0; j < 100000000; j++){}

  i++;
  
  printf("UART:> Sending %lu as the next id.\n", i);
  
  // send tracking id to WPM
  assert(sb_tracking_id_enqueue(&i) == true);
}

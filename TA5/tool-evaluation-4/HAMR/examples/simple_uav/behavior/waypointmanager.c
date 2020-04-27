#include <camkes.h>
#include <sb_types.h>
#include <sb_WaypointManager_Impl.h>
#include <assert.h>
#include <string.h>


sb_SW__Mission_container _mission;

void init(const int64_t * __unused__) {
}

void printMission(const sb_SW__Mission_container * mission){
  printf("  Mission:\n");
  for(int i = 0; i < 10; i++){
    SW__Coordinate_Impl c = mission->f[i];
    printf("    %i: {%i, %i, %i}\n", i, c.lat, c.longitude, c.alt);
  }
}

void sendWin(int i) {

  // simulate creation of new mission windows
  sb_SW__MissionWindow_container missionWindow = { 
    .f = { _mission.f[i % 10], 
           _mission.f[(i + 1) % 10],
           _mission.f[(i + 2) % 10],
           _mission.f[(i + 3) % 10]} 
  };
  
  // send mission window to UART  
  assert(sb_mission_window_enqueue(&missionWindow) == true);
  
  printf("WM:> Sent mission window\n");
}

void flight_plan(const sb_SW__Mission_container * mission){
  printf("WM:< Received flight plan\n");
  
  memcpy(&_mission, mission, sizeof(struct sb_SW__Mission_container));
  
  printMission(&_mission);
  
  sendWin(0);
  
  // send receipt confirmation back to FPLN
  bool dummy = true;
  assert(sb_mission_rcv_enqueue(&dummy) == true);
}

void tracking_id(const int64_t * nid) {
  printf("WM:< Received %lu as the next id.\n", *nid);
		
  sendWin(*nid);
}
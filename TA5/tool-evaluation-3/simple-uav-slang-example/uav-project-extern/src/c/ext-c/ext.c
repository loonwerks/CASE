#include <all.h>
#include <ext.h>
#include <unistd.h>

/********************************************************
 * FLIGHT PLANNER
 *******************************************************/

#define constructCoordinate(command, i) ((struct uav_project_extern_SW_Coordinate_Impl) { .type = Tuav_project_extern_SW_Coordinate_Impl, .lat = i, .longitude = i + 1, .alt = i + 2 })

#define MAP_SIZE 4

#define MISSION_SIZE 10

#define MISSION_WINDOW_SIZE 4

struct uav_project_extern_SW_Mission constructMission(uav_project_extern_SW_FlightPlanner_Impl_Impl this,
                                                      struct uav_project_extern_SW_Coordinate_Impl flighplan[]){
  DeclNewIS_83A978(t_2);
  t_2.size = (int8_t) MISSION_SIZE;

  memcpy(&t_2.value, flighplan, MISSION_SIZE * sizeof(struct uav_project_extern_SW_Coordinate_Impl ));

  struct uav_project_extern_SW_Mission mission = (struct uav_project_extern_SW_Mission) { .type = Tuav_project_extern_SW_Mission };

  uav_project_extern_SW_Mission_apply(&mission, (IS_83A978) (&t_2));

  uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api_sendflight_plan_(uav_project_extern_SW_FlightPlanner_Impl_Impl_api_(this), (uav_project_extern_SW_Mission) &mission);

  return mission;
}

Unit uav_project_extern_SW_FlightPlanner_Impl_Impl_initialise_(uav_project_extern_SW_FlightPlanner_Impl_Impl planner) {
 // do nothing
}

Unit uav_project_extern_SW_FlightPlanner_Impl_Impl_handlemission_rcv_(uav_project_extern_SW_FlightPlanner_Impl_Impl planner, B value) {
  printf("FPLN:< Received mission receipt confirmation: %i\n", value);
}

Unit uav_project_extern_SW_FlightPlanner_Impl_Impl_handlerecv_map_(uav_project_extern_SW_FlightPlanner_Impl_Impl planner,
                                                                   uav_project_extern_SW_Command_Impl value) {
  printf("FPLN:< Command.\n");
  
  struct StaticString command_to_string = { .type = TString };
  uav_project_extern_SW_Command_Impl_string_((String) &command_to_string, value);
  printf("  %s\n", command_to_string.value);

  if (!planner->missioncommand_sent) { // only send on mission to the flight planner

    // simulate constructing a mission from the received command

    struct uav_project_extern_SW_Coordinate_Impl waypoints[MISSION_SIZE];
    for(int i = 0; i < MISSION_SIZE; i++) {
      waypoints[i] = constructCoordinate(command, i);
    }

    struct uav_project_extern_SW_Mission mission = constructMission(planner, waypoints);

    uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api_sendflight_plan_(&planner->api, &mission);

    printf("FPLN:> new mission notification\n");

    planner->missioncommand_sent = T;
  }
}


/********************************************************
 * RADIO DRIVER
 *******************************************************/

Unit uav_project_extern_SW_RadioDriver_Impl_Impl_initialise_(uav_project_extern_SW_RadioDriver_Impl_Impl radio) {
  printf("RDIO: initialise entry point called\n");
  
  DeclNewIS_83A978(coords);
  coords.size = MAP_SIZE;
  for(int i = 0; i < MAP_SIZE; i++) {
    DeclNewuav_project_extern_SW_Coordinate_Impl(t_2);
    uav_project_extern_SW_Coordinate_Impl_apply(&t_2, i, i + 1, i + 2);
    Type_assign(&coords.value[i], (&t_2), sizeof(struct uav_project_extern_SW_Coordinate_Impl));
  }

  DeclNewuav_project_extern_SW_Map(map);
  uav_project_extern_SW_Map_apply(&map, (IS_83A978) &coords);
  DeclNewuav_project_extern_SW_Command_Impl(command);
  uav_project_extern_SW_Command_Impl_apply(&command, (uav_project_extern_SW_Map) (&map), uav_project_extern_SW_FlightPattern_Perimeter, T);

  printf("RDIO:> Sending command\n");

  DeclNewString(command_to_string);
  uav_project_extern_SW_Command_Impl_string_((String) &command_to_string, &command);
  printf("  %s\n", command_to_string.value);

  uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_sendrecv_map_out_(uav_project_extern_SW_RadioDriver_Impl_Impl_api_(radio), (uav_project_extern_SW_Command_Impl) &command);
}


/********************************************************
 * UART Driver
 *******************************************************/

Unit uav_project_extern_SW_UARTDriver_Impl_Impl_initialise_(uav_project_extern_SW_UARTDriver_Impl_Impl uart) {
  // do nothing
}

Unit uav_project_extern_SW_UARTDriver_Impl_Impl_handlemission_window_(uav_project_extern_SW_UARTDriver_Impl_Impl uart,
                                                                      uav_project_extern_SW_MissionWindow value) {
  printf("UART:< Received mission window\n");
  
  DeclNewString(mission_window_to_string);
  uav_project_extern_SW_MissionWindow_string_((String) &mission_window_to_string, value);
  printf("  %s\n", mission_window_to_string.value);

  uav_project_extern_SW_UARTDriver_Util_pause();

  printf("UART:> Sending %ld as the next tracking id\n", uart->i);

  uav_project_extern_SW_UARTDriver_Impl_Bridge_Api_sendtracking_id_(uav_project_extern_SW_UARTDriver_Impl_Impl_api_(uart), uav_project_extern_SW_UARTDriver_Impl_Impl_i_(uart));

  uart->i = uart->i + 1;
}

Unit uav_project_extern_SW_UARTDriver_Util_pause() {
  #ifdef CAMKES
  // just busy wait
  for(int i = 0; i < 100000000; i++){}
  #else
  sleep(1);
  #endif
}

/********************************************************
 * WAYPOINT MANAGER
 *******************************************************/

Unit uav_project_extern_SW_WaypointManager_Impl_Impl_initialise_(uav_project_extern_SW_WaypointManager_Impl_Impl wpm) {
  // do nothing
}

Unit uav_project_extern_SW_WaypointManager_Impl_Impl_handleflight_plan_(uav_project_extern_SW_WaypointManager_Impl_Impl wpm,
                                                                        uav_project_extern_SW_Mission mission) {
  printf("WM:< Received flight plan\n");
  
  DeclNewSome_C19C7E(t_0);
  Some_C19C7E_apply(&t_0, (uav_project_extern_SW_Mission) mission);
  uav_project_extern_SW_WaypointManager_Impl_Impl__mission_a(wpm, (Option_32416F) (&t_0));

  printf("  Mission:\n");

  for(int i = 0; i < MISSION_SIZE; i++) {
    DeclNewString(coordinate_to_string);
    uav_project_extern_SW_Coordinate_Impl_string_((String) &coordinate_to_string, &mission->value.value[i]);
    printf("    %s\n", coordinate_to_string.value);
  }

  uav_project_extern_SW_WaypointManager_Impl_Impl_sendWin_(wpm, 0);

  uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_sendmission_rcv_(uav_project_extern_SW_WaypointManager_Impl_Impl_api_(wpm), T);
}

Unit uav_project_extern_SW_WaypointManager_Impl_Impl_handletracking_id_(uav_project_extern_SW_WaypointManager_Impl_Impl wpm, S64 nid) {
  printf("WM:< Received %ld as the next tracking id.\n", nid);
  
  uav_project_extern_SW_WaypointManager_Impl_Impl_sendWin_(wpm, nid);
}

Unit uav_project_extern_SW_WaypointManager_Impl_Impl_sendWin_(uav_project_extern_SW_WaypointManager_Impl_Impl wpm, Z i) {
  Option_32416F t_0 = (Option_32416F) &wpm->_mission;
  if(Some_C19C7E__is(t_0)){
    // simulate creation of new mission windows

    uav_project_extern_SW_Mission mission = &((Some_C19C7E) t_0)->value;

    DeclNewIS_83A978(t_2);
    t_2.size = (int8_t) MISSION_WINDOW_SIZE;

    for(int c = 0; c < MISSION_WINDOW_SIZE; c++) {
      IS_83A978_up(&t_2, c, (uav_project_extern_SW_Coordinate_Impl) &mission->value.value[(i + c) % MISSION_SIZE]);
    }

    DeclNewuav_project_extern_SW_MissionWindow(missionWindow);
    uav_project_extern_SW_MissionWindow_apply(&missionWindow, (IS_83A978) (&t_2));

    uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_sendmission_window_(uav_project_extern_SW_WaypointManager_Impl_Impl_api_(wpm), (uav_project_extern_SW_MissionWindow) &missionWindow);

    printf("WM:> Sent mission window\n");
  } else {
    printf("WPM: Unexpected: trying to create mission window by never received a mission");
  }
}
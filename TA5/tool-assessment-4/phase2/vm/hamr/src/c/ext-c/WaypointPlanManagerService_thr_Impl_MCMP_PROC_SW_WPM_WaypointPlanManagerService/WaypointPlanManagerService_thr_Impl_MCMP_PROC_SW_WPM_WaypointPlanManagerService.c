// https://github.com/loonwerks/case-ta6-platform-assessment-camkes-apps/blob/master/apps/case-uav-step6/components/WaypointManager/src/waypoint_manager.c

#include <WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_api.h>
#include <WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.h>

#include <sys/types.h>

#include "hexdump.h"

#include "lmcp.h"
#include "common/conv.h"
#include "MissionCommand.h"
#include "AirVehicleState.h"
#include "EntityState.h"
#include "Waypoint.h"
#include "AutomationResponse.h"
#include "AddressAttributedMessage.h"

#define VEHICLE_ID 400
#define WINDOW_SIZE 15
#define WINDOW_OVERLAP 5
#define INIT_CMD_ID 101
#define HOME_WAYPOINT_LAT 4631577348376571884UL     // 45.3364
#define HOME_WAYPOINT_LONG 13861587297017124409UL   // -121.0032
#define HOME_WAYPOINT_ALT 1143930880U               // 700.0
#define HOME_WAYPOINT_SPEED 1102053376U
#define HOME_WAYPOINT_NUM 17554

#include <ext.h>

int64_t currentWaypoint;
int64_t currentCommand;
bool returnHome;
AutomationResponse * automationResponse;
Waypoint * homeWaypoint;

// forward decls
void sendMissionCommand(STACK_FRAME_ONLY);
bool FillWindow(  Waypoint ** ws,
                  uint16_t len_ws,
                  int64_t id,
                  Waypoint ** ws_win,
                  uint16_t len_ws_win);
Waypoint * FindWaypoint(Waypoint ** ws,
                        uint16_t len,
                        int64_t id);
bool IsWaypointInWindow( Waypoint ** waypointList,
                         uint16_t waypointListSize,
                         uint16_t windowSize,
                         int64_t startId,
                         int64_t id);
static const char *get_instance_name(void);

const char mission_command_attributes[] = "afrl.cmasi.MissionCommand$lmcp|afrl.cmasi.MissionCommand||400|63$";

// This file will not be overwritten so is safe to edit

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.c", "", "hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_initialise_", 0);
    currentWaypoint = 0;
    currentCommand = INIT_CMD_ID;
    returnHome = false;
    automationResponse = NULL;
    homeWaypoint = NULL;

    lmcp_init_Waypoint(&homeWaypoint);
    homeWaypoint->super.latitude = HOME_WAYPOINT_LAT;
    homeWaypoint->super.longitude = HOME_WAYPOINT_LONG;
    homeWaypoint->super.altitude = HOME_WAYPOINT_ALT;
    homeWaypoint->super.altitudetype = 1;
    homeWaypoint->number = HOME_WAYPOINT_NUM;
    homeWaypoint->nextwaypoint = HOME_WAYPOINT_NUM;
    homeWaypoint->speed = HOME_WAYPOINT_SPEED;
    homeWaypoint->speedtype = 0;
    homeWaypoint->climbrate = 0;
    homeWaypoint->turntype = 0;
    homeWaypoint->vehicleactionlist_ai.length = 0;
    homeWaypoint->contingencywaypointa = 0;
    homeWaypoint->contingencywaypointb = 0;
    homeWaypoint->associatedtasks_ai.length = 0;
  /*
  // examples of api setter and logging usage

  uint8_t t0[numBytes_hamr_CMASI_MissionCommand_i];
  byte_array_default(SF t0, numBits_hamr_CMASI_MissionCommand_i, numBytes_hamr_CMASI_MissionCommand_i);
  api_put_MissionCommand__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF numBits_hamr_CMASI_MissionCommand_i, t0);

  api_logInfo__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF string("Example logInfo"));

  api_logDebug__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF string("Example logDebug"));

  api_logError__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF string("Example logError"));
  */
}

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.c", "", "hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_finalise_", 0);
}

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.c", "", "hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_timeTriggered_", 0);

    //bool dataReceived = false;

    returnHome = api_get_ReturnHome__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF_LAST);
    //dataReceived = return_home_in_event_data_poll(&numDropped, &data);
    //if (dataReceived) {
    //    returnHome = true;
    //}

    if (returnHome || automationResponse != NULL) {
        size_t numbits;
        uint8_t data[numBits_hamr_CMASI_AirVehicleState_i];
        if(api_get_AirVehicleState__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF &numbits, data)){
            // TODO

        }
        //dataReceived = air_vehicle_state_in_event_data_poll(&numDropped, &data);
        //if (dataReceived) {
        //    air_vehicle_state_in_event_data_receive_handler(numDropped, &data);
        //}
    }

    {
        size_t numbits;
        uint8_t data[numBits_hamr_CMASI_AutomationResponse_i];
        if(api_get_AutomationResponse__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF &numbits, data)) {
            // TODO
            if(data[0] == 0xde && data[1] == 0xad && data[2] == 0xbe && data[3] == 0xef) {
              api_logInfo__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(string("Dead beef was delivered"));
            } else {
              api_logInfo__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(string("Hmm..."));
            }
        }
        //dataReceived = automation_response_in_event_data_poll(&numDropped, &data);
        //if (dataReceived) {
        //    automation_response_in_event_data_receive_handler(numDropped, &data);
        //}
    }
  /*
  // examples of api getter usage

  uint8_t t0[numBytes_hamr_CMASI_AutomationResponse_i];
  size_t t0_numBits;
  if(api_get_AutomationResponse__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_hamr_CMASI_AutomationResponse_i, "numBits received does not match expected");

    DeclNewString(AutomationResponse_str);
    String__append(SF (String) &AutomationResponse_str, string("Received on AutomationResponse: "));
    byte_array_string(SF (String) &AutomationResponse_str, t0, numBytes_hamr_CMASI_AutomationResponse_i);
    api_logInfo__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF (String) &AutomationResponse_str);
  }

  uint8_t t1[numBytes_hamr_CMASI_AirVehicleState_i];
  size_t t1_numBits;
  if(api_get_AirVehicleState__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF &t1_numBits, t1)) {
    // sanity check
    sfAssert(SF (Z) t1_numBits == numBits_hamr_CMASI_AirVehicleState_i, "numBits received does not match expected");

    DeclNewString(AirVehicleState_str);
    String__append(SF (String) &AirVehicleState_str, string("Received on AirVehicleState: "));
    byte_array_string(SF (String) &AirVehicleState_str, t1, numBytes_hamr_CMASI_AirVehicleState_i);
    api_logInfo__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF (String) &AirVehicleState_str);
  }

  if(api_get_ReturnHome__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF_LAST )){
    String ReturnHome_str = string("Received event on ReturnHome");
    api_logInfo__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF ReturnHome_str);
  }
  */
}




//void air_vehicle_state_in_event_data_receive_handler(counter_t numDropped, data_t *data) {
void air_vehicle_state_in_event_data_receive_handler(STACK_FRAME uint8_t *payload, size_t numBitsRead) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.c", "", "air_vehicle_state_in_event_data_receive_handler", 0);

//  printf("\n%s: received air vehicle state\n", get_instance_name()); fflush(stdout);

    if (automationResponse == NULL && !returnHome) {
        return;
    }

    AirVehicleState *airVehicleState = NULL;
    lmcp_init_AirVehicleState(&airVehicleState);

    if (airVehicleState != NULL) {
        //uint8_t *payload = &(data->payload[0]);
        //int msg_result = lmcp_process_msg(&payload, sizeof(data->payload), (lmcp_object**)&airVehicleState);
        int msg_result = lmcp_process_msg(&payload, sizeof(numBitsRead), (lmcp_object**)&airVehicleState);

        if (msg_result == 0) {

//      printf("AirVehicleState waypoint = %llu, currentWaypoint = %llu\n", airVehicleState->super.currentwaypoint, currentWaypoint);
//      fflush(stdout);
//      hexdump_raw(24, data->payload, compute_addr_attr_lmcp_message_size(data->payload, sizeof(data->payload)));

            if (airVehicleState->super.currentwaypoint == 0 && !returnHome) {
                lmcp_free_AirVehicleState(airVehicleState, 1);
                return;
            }

            // Check to see if we need to return home
            if (returnHome) {
                if (airVehicleState->super.currentwaypoint != HOME_WAYPOINT_NUM) {
                    currentWaypoint = HOME_WAYPOINT_NUM;
                    sendMissionCommand(SF_LAST);
                }
            } else {

                bool waypointInWindow = IsWaypointInWindow(automationResponse->missioncommandlist[0]->waypointlist,
                                                           automationResponse->missioncommandlist[0]->waypointlist_ai.length,
                                                           WINDOW_SIZE - WINDOW_OVERLAP,
                                                           currentWaypoint,
                                                           airVehicleState->super.currentwaypoint);

                if (!waypointInWindow) {
                    currentWaypoint = airVehicleState->super.currentwaypoint;
                    sendMissionCommand(SF_LAST);
                }
            }

        } else {
            printf("%s: air vehicle state rx handler: invalide air vehicle state\n", get_instance_name()); fflush(stdout);
        }

        lmcp_free_AirVehicleState(airVehicleState, 1);

    } else {
        printf("%s: air vehicle state rx handler: couldn't allocate structure\n", get_instance_name()); fflush(stdout);
    }
}

void sendMissionCommand(STACK_FRAME_ONLY) {
	DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.c", "", "sendMissionCommand", 0);

    // Don't do anything if current waypoint is 0.
    // Something is wrong.  This method should not have been called.
//    if (currentWaypoint == 0) {
//        printf("%s: sendMissionCommand(): currentWaypoint == 0\n", get_instance_name()); fflush(stdout);
//        return;
//    }

    // Don't do anything until an AutomationResponse is recevied
//    if (automationResponse == NULL) {
//        printf("%s: sendMissionCommand(): automationResponse == NULL\n", get_instance_name()); fflush(stdout);
//        return;
//    }

//    printf("%s: sendMissionCommand()\n", get_instance_name()); fflush(stdout);

    // Construct mission command message
    MissionCommand * missionCommand = NULL;
    lmcp_init_MissionCommand(&missionCommand);
//    missionCommand->super = automationResponse->missioncommandlist[0]->super;
    missionCommand->super.vehicleid = VEHICLE_ID;
    missionCommand->super.commandid = currentCommand++;
    missionCommand->super.status = 1;
    missionCommand->super.vehicleactionlist_ai.length = 0;
    missionCommand->waypointlist_ai.length = WINDOW_SIZE;
    missionCommand->waypointlist = malloc(sizeof(Waypoint*) * WINDOW_SIZE);

    if (returnHome) {
        currentWaypoint = HOME_WAYPOINT_NUM;
        // Set mission window waypoints to home
        for (int i = 0; i < WINDOW_SIZE; i++) {
            missionCommand->waypointlist[i] = homeWaypoint;
        }
    } else {
        // Construct mission window
        FillWindow( automationResponse->missioncommandlist[0]->waypointlist,
                    automationResponse->missioncommandlist[0]->waypointlist_ai.length,
                    currentWaypoint,
                    missionCommand->waypointlist,
                    WINDOW_SIZE);
    }

    missionCommand->firstwaypoint = currentWaypoint;
    AddressAttributedMessage * addressAttributedMessage = NULL;

    lmcp_init_AddressAttributedMessage(&addressAttributedMessage);

    //addressAttributedMessage->attributes = mission_command_attributes;
    addressAttributedMessage->attributes = (char*)mission_command_attributes;

    addressAttributedMessage->lmcp_obj = (lmcp_object*)missionCommand;

    //data_t* data = calloc(1, sizeof(data_t));
    uint8_t payload[numBits_hamr_CMASI_MissionCommand_i];
    //if (data != NULL) {
    //lmcp_pack_AddressAttributedMessage(data->payload, addressAttributedMessage);
    if(payload != NULL) { // payload is stack allocated so just keeping code form here
        lmcp_pack_AddressAttributedMessage(payload, addressAttributedMessage);

        // hexdump_raw(24, data->payload, compute_addr_attr_lmcp_message_size(data->payload, sizeof(data->payload)));

        // Send it
        //mission_command_out_event_data_send(data);
        api_put_MissionCommand__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService
        (SF numBits_hamr_CMASI_MissionCommand_i, payload);

        //free(data);
    } else {
        printf("%s: sendMissionCommand(): could not allocate data buffer\n", get_instance_name()); fflush(stdout);
    }

    lmcp_free_AddressAttributedMessage(addressAttributedMessage, 1);

}

/* NB: Cycles in ws will be unrolled into win. */
bool FillWindow(  Waypoint ** ws,
                  uint16_t len_ws,
                  int64_t id,
                  Waypoint ** ws_win, /* out */
                  uint16_t len_ws_win) {
    uint16_t i;
    int64_t nid = id;
    Waypoint * wp = NULL;
    bool success = true;

    for(i=0; i < len_ws_win && success == true; i++) {
        success = false;
        wp = FindWaypoint(ws, len_ws, nid);
        if(wp != NULL) {
            success = true;
            ws_win[i] = wp;
            nid = ws_win[i]->nextwaypoint;
        }
    }
    return success;
}

Waypoint * FindWaypoint(Waypoint ** ws,
                        uint16_t len,
                        int64_t id) {

    for (uint16_t i = 0 ; i < len; i++) {
        if (ws[i]->number == id) {
            return ws[i];
        }
    }
    return NULL;
}


bool IsWaypointInWindow( Waypoint ** waypointList,
                         uint16_t waypointListSize,
                         uint16_t windowSize,
                         int64_t startId,
                         int64_t id) {
    int64_t nid = startId;
    Waypoint * wp = NULL;

    for (int i = 0; i < windowSize; i++) {
        wp = FindWaypoint(waypointList, waypointListSize, nid);
        if (wp != NULL) {
            if (wp->number == id) {
                return true;
            }
            nid = wp->nextwaypoint;
        } else {
            return false;
        }
    }
    return false;
}

static const char *get_instance_name(void) {
    // TODO have the component name accessible via the API
    static const char name[] = "WaypointPlanManagerService";
    return name;
}
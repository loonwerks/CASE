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
}

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.c", "", "hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_finalise_", 0);
}

Unit hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.c", "", "hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_timeTriggered_", 0);

  //bool dataReceived = false;

  size_t numbitsAVS;
  uint8_t dataAVS[numBits_hamr_CMASI_AirVehicleState_i];
  if(api_get_AirVehicleState__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF &numbitsAVS, dataAVS)){
    // TODO
  }
    
  // ignore for now
  returnHome = api_get_ReturnHome__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF_LAST);

  size_t numbitsAR;
  uint8_t dataAR[numBits_hamr_CMASI_AutomationResponse_i];
  if(api_get_AutomationResponse__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF &numbitsAR, dataAR)) {
    
    api_logInfo__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF string("Received Automation Response from monitor"));
      
    if (automationResponse != NULL) {
	  lmcp_free_AutomationResponse(automationResponse, 1);
	   automationResponse = NULL;
	}
	lmcp_init_AutomationResponse(&automationResponse);
	
	uint8_t *payload = dataAR;
	
	int msg_result = lmcp_process_msg(&payload, numbitsAR, (lmcp_object**)&automationResponse);
	
	if (msg_result == 0 && automationResponse->missioncommandlist_ai.length > 0) {
		
	  currentWaypoint = automationResponse->missioncommandlist[0]->firstwaypoint;
	  sendMissionCommand(SF_LAST);
	} else {
	  printf("%s: automation response rx handler: invalid automation response\n", get_instance_name()); fflush(stdout);
	  lmcp_free_AutomationResponse(automationResponse, 1);
	  automationResponse = NULL;
	}
  }
}


void sendMissionCommand(STACK_FRAME_ONLY) {
	DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.c", "", "sendMissionCommand", 0);

    // Construct mission command message
    MissionCommand * missionCommand = NULL;
    lmcp_init_MissionCommand(&missionCommand);
    // missionCommand->super = automationResponse->missioncommandlist[0]->super;
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

    uint8_t payload[numBits_hamr_CMASI_MissionCommand_i];
    if(payload != NULL) { // payload is stack allocated so just keeping code form here
        lmcp_pack_AddressAttributedMessage(payload, addressAttributedMessage);

        // hexdump_raw(24, data->payload, compute_addr_attr_lmcp_message_size(data->payload, sizeof(data->payload)));

        // Send it
        api_put_MissionCommand__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF
          numBits_hamr_CMASI_MissionCommand_i, payload);

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


static const char *get_instance_name(void) {
    // TODO have the component name accessible via the API
    static const char name[] = "WaypointPlanManagerService";
    return name;
}
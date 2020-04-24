#ifndef __SB_AADL_sb_PROC_HW_types__H
#define __SB_AADL_sb_PROC_HW_types__H

#include <stdbool.h>
#include <stdint.h>

#ifndef SB_VERIFY
#include <stddef.h>
#endif // SB_VERIFY

#define __SB_OS_CAMKES__

#ifndef SB_VERIFY
#define MUTEXOP(OP)\
if((OP) != 0) {\
  fprintf(stderr,"Operation " #OP " failed in %s at %d.\n",__FILE__,__LINE__);\
  *((int*)0)=0xdeadbeef;\
}
#else
#define MUTEXOP(OP) OP
#endif // SB_VERIFY
#ifndef SB_VERIFY
#define CALLBACKOP(OP)\
if((OP) != 0) {\
  fprintf(stderr,"Operation " #OP " failed in %s at %d.\n",__FILE__,__LINE__);\
  *((int*)0)=0xdeadbeef;\
}
#else
#define CALLBACKOP(OP) OP
#endif // SB_VERIFY

typedef
  struct CASE_Model_Transformations__CASE_MsgHeader_Impl {
    int32_t src;
    int32_t dst;
    bool trusted;
    bool HMAC;
  } CASE_Model_Transformations__CASE_MsgHeader_Impl;

// placeholder for unspecified types in the AADL model
typedef bool MISSING_AADL_TYPE;

typedef
  struct CASE_Model_Transformations__CASE_RF_Msg_Impl {
    CASE_Model_Transformations__CASE_MsgHeader_Impl header;
    MISSING_AADL_TYPE payload;
  } CASE_Model_Transformations__CASE_RF_Msg_Impl;

typedef
  struct CASE_Model_Transformations__CASE_UART_Msg_Impl {
    bool crc;
    char* message;
  } CASE_Model_Transformations__CASE_UART_Msg_Impl;

typedef uint8_t CMASI__Address [4];

typedef
  struct sb_CMASI__Address_container {
    CMASI__Address f;
  } sb_CMASI__Address_container;

typedef int64_t CMASI__Int64Array [1];

typedef
  struct sb_CMASI__Int64Array_container {
    CMASI__Int64Array f;
  } sb_CMASI__Int64Array_container;

typedef
  struct CMASI__AutomationRequest_i {
    CMASI__Int64Array EntityList;
    CMASI__Int64Array TaskList;
    int64_t TaskListSize;
    char* TaskRelationships;
    int64_t OperatingRegion;
    bool RedoAllTasks;
  } CMASI__AutomationRequest_i;

typedef
  struct CMASI__KeyValuePair_i {
    char* Key;
    char* Value;
  } CMASI__KeyValuePair_i;

typedef
  enum {Pending, Approved, InProcess, Executed, Cancelled} CMASI__CommandStatusType_i;

typedef
  struct CMASI__VehicleAction_i {
    int64_t AssociatedTaskList;
  } CMASI__VehicleAction_i;

typedef
  enum {AGL, MSL} CMASI__AltitudeType_i;

typedef
  enum {Airspeed, Groundspeed} CMASI__SpeedType_i;

typedef
  enum {TurnShort, FlyOver} CMASI__TurnType_i;

typedef
  struct CMASI__Waypoint_i {
    double Latitude;
    double Longitude;
    double Altitude;
    CMASI__AltitudeType_i AltitudeType;
    int64_t Number;
    int64_t NextWaypoint;
    double Speed;
    CMASI__SpeedType_i SpeedType;
    double ClimbRate;
    CMASI__TurnType_i TurnType;
    CMASI__VehicleAction_i VehicleActionList;
    int64_t ContingencyWaypointA;
    int64_t ContingencyWaypointB;
    int64_t AssociatedTasks;
  } CMASI__Waypoint_i;

typedef
  struct CMASI__MissionCommand_i {
    int64_t CommandID;
    int64_t VehicleID;
    CMASI__VehicleAction_i VehicleActionList;
    CMASI__CommandStatusType_i Status;
    CMASI__Waypoint_i WaypointList;
    int64_t FirstWaypoint;
  } CMASI__MissionCommand_i;

typedef
  struct CMASI__VehicleActionCommand_i {
    int64_t CommandID;
    int64_t VehicleID;
    CMASI__VehicleAction_i VehicleActionList;
    CMASI__CommandStatusType_i Status;
  } CMASI__VehicleActionCommand_i;

typedef
  struct CMASI__AutomationResponse_i {
    CMASI__MissionCommand_i MissionCommandList;
    CMASI__VehicleActionCommand_i VehicleCommandList;
    CMASI__KeyValuePair_i Info;
  } CMASI__AutomationResponse_i;

typedef
  struct CMASI__Location3D_i {
    double Latitude;
    double Longitude;
    double Altitude;
    CMASI__AltitudeType_i AltitudeType;
  } CMASI__Location3D_i;

typedef CMASI__Location3D_i CMASI__PointListArray [1024];

typedef
  struct sb_CMASI__PointListArray_container {
    CMASI__PointListArray f;
  } sb_CMASI__PointListArray_container;

typedef
  enum {AllAny, EO, LWIR, SWIR, MWIR, Other} CMASI__WavelengthBand;

typedef
  struct CMASI__Wedge_i {
    double AzimuthCenterline;
    double VerticalCenterline;
    double AzimuthExtent;
    double VerticalExtent;
  } CMASI__Wedge_i;

typedef CMASI__Wedge_i CMASI__WedgeArray [16];

typedef
  struct sb_CMASI__WedgeArray_container {
    CMASI__WedgeArray f;
  } sb_CMASI__WedgeArray_container;

typedef
  struct CMASI__LineSearchTask_i {
    int64_t TaskID;
    char* Label;
    int64_t EligibleEntities;
    double RevisitRate;
    CMASI__KeyValuePair_i Parameters;
    uint8_t Priority;
    bool Required;
    CMASI__WavelengthBand DesiredWavelengthBands;
    int64_t DwellTime;
    double GroundSampleDistance;
    CMASI__PointListArray PointList;
    CMASI__WedgeArray ViewAngleList;
    bool UseInertialViewAngles;
  } CMASI__LineSearchTask_i;

typedef
  struct CMASI__OperatingRegion_i {
    int64_t ID;
    CMASI__Int64Array KeepInAreas;
    CMASI__Int64Array KeepOutAreas;
  } CMASI__OperatingRegion_i;

typedef
  struct CMASI__LMCPObject_i {
    CMASI__AutomationRequest_i AutomationRequest;
    CMASI__OperatingRegion_i OperatingRegion;
    CMASI__LineSearchTask_i LineSearchTask;
    CMASI__AutomationResponse_i AutomationResponse;
  } CMASI__LMCPObject_i;

typedef
  struct CMASI__AddressAttributedMessage_i {
    CMASI__Address id;
    CMASI__LMCPObject_i payload;
  } CMASI__AddressAttributedMessage_i;

typedef
  enum {Waypoint, Loiter, FlightDirector, TargetTrack, FollowLeader, LostComm} CMASI__NavigationMode_i;

typedef
  struct CMASI__PayloadState_i {
    int64_t PayloadID;
    CMASI__KeyValuePair_i Parameters;
  } CMASI__PayloadState_i;

typedef
  struct CMASI__AirVehicleState_i {
    int64_t ID;
    double u;
    double v;
    double w;
    double udot;
    double vdot;
    double wdot;
    double Heading;
    double Pitch;
    double Roll;
    double p;
    double q;
    double r;
    double Course;
    double Groundspeed;
    CMASI__Location3D_i Location;
    double EnergyAvailable;
    double ActualEnergyRate;
    CMASI__PayloadState_i PayloadStateList;
    int64_t CurrentWaypoint;
    int64_t CurrentCommand;
    CMASI__NavigationMode_i FIXMEMode;
    int64_t AssociatedTasks;
    int64_t Time;
    CMASI__KeyValuePair_i Info;
    double Airspeed;
    double VerticalSpeed;
    double WindSpeed;
    double WindDirection;
  } CMASI__AirVehicleState_i;

typedef
  struct CMASI__Polygon_i {
    CMASI__Location3D_i BoundaryPointsList;
  } CMASI__Polygon_i;

#endif // __SB_AADL_sb_PROC_HW_types__H

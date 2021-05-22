#pragma once

enum LmcpType {
    ABSTRACTGEOMETRY = 1,
    KEYVALUEPAIR = 2,
    LOCATION3D = 3,
    PAYLOADACTION = 4,
    PAYLOADCONFIGURATION = 5,
    PAYLOADSTATE = 6,
    VEHICLEACTION = 7,
    TASK = 8,
    SEARCHTASK = 9,
    ABSTRACTZONE = 10,
    ENTITYCONFIGURATION = 11,
    FLIGHTPROFILE = 12,
    AIRVEHICLECONFIGURATION = 13,
    ENTITYSTATE = 14,
    AIRVEHICLESTATE = 15,
    WEDGE = 16,
    AREASEARCHTASK = 17,
    CAMERAACTION = 18,
    CAMERACONFIGURATION = 19,
    GIMBALLEDPAYLOADSTATE = 20,
    CAMERASTATE = 21,
    CIRCLE = 22,
    GIMBALANGLEACTION = 23,
    GIMBALCONFIGURATION = 24,
    GIMBALSCANACTION = 25,
    GIMBALSTAREACTION = 26,
    GIMBALSTATE = 27,
    GOTOWAYPOINTACTION = 28,
    KEEPINZONE = 29,
    KEEPOUTZONE = 30,
    LINESEARCHTASK = 31,
    NAVIGATIONACTION = 32,
    LOITERACTION = 33,
    LOITERTASK = 34,
    WAYPOINT = 35,
    MISSIONCOMMAND = 36,
    MUSTFLYTASK = 37,
    OPERATORSIGNAL = 38,
    OPERATINGREGION = 39,
    AUTOMATIONREQUEST = 40,
    POINTSEARCHTASK = 41,
    POLYGON = 42,
    RECTANGLE = 43,
    REMOVETASKS = 44,
    SERVICESTATUS = 45,
    SESSIONSTATUS = 46,
    VEHICLEACTIONCOMMAND = 47,
    VIDEOSTREAMACTION = 48,
    VIDEOSTREAMCONFIGURATION = 49,
    VIDEOSTREAMSTATE = 50,
    AUTOMATIONRESPONSE = 51,
    REMOVEZONES = 52,
    REMOVEENTITIES = 53,
    FLIGHTDIRECTORACTION = 54,
    WEATHERREPORT = 55,
    FOLLOWPATHCOMMAND = 56,
    PATHWAYPOINT = 57,
    STOPMOVEMENTACTION = 58,
    WAYPOINTTRANSFER = 59,
    PAYLOADSTOWACTION = 60
};

enum WavelengthBand_enum {
    WavelengthBand_EO = 1,
    WavelengthBand_LWIR = 2,
    WavelengthBand_AllAny = 0,
    WavelengthBand_Other = 5,
    WavelengthBand_MWIR = 4,
    WavelengthBand_SWIR = 3,
};
typedef enum WavelengthBand_enum WavelengthBand;
enum NavigationMode_enum {
    NavigationMode_LostComm = 5,
    NavigationMode_FlightDirector = 2,
    NavigationMode_Waypoint = 0,
    NavigationMode_Loiter = 1,
    NavigationMode_FollowLeader = 4,
    NavigationMode_TargetTrack = 3,
};
typedef enum NavigationMode_enum NavigationMode;
enum FOVOperationMode_enum {
    FOVOperationMode_Discrete = 1,
    FOVOperationMode_Continuous = 0,
};
typedef enum FOVOperationMode_enum FOVOperationMode;
enum GimbalPointingMode_enum {
    GimbalPointingMode_Scan = 5,
    GimbalPointingMode_Unknown = 0,
    GimbalPointingMode_AirVehicleRelativeAngle = 1,
    GimbalPointingMode_LatLonSlaved = 3,
    GimbalPointingMode_InertialRelativeSlewRate = 4,
    GimbalPointingMode_Stowed = 6,
    GimbalPointingMode_AirVehicleRelativeSlewRate = 2,
};
typedef enum GimbalPointingMode_enum GimbalPointingMode;
enum ZoneAvoidanceType_enum {
    ZoneAvoidanceType_Regulatory = 2,
    ZoneAvoidanceType_Acoustic = 3,
    ZoneAvoidanceType_Visual = 5,
    ZoneAvoidanceType_Threat = 4,
    ZoneAvoidanceType_Physical = 1,
};
typedef enum ZoneAvoidanceType_enum ZoneAvoidanceType;
enum LoiterType_enum {
    LoiterType_VehicleDefault = 0,
    LoiterType_FigureEight = 3,
    LoiterType_Hover = 4,
    LoiterType_Racetrack = 2,
    LoiterType_Circular = 1,
};
typedef enum LoiterType_enum LoiterType;
enum LoiterDirection_enum {
    LoiterDirection_VehicleDefault = 0,
    LoiterDirection_Clockwise = 2,
    LoiterDirection_CounterClockwise = 1,
};
typedef enum LoiterDirection_enum LoiterDirection;
enum ServiceStatusType_enum {
    ServiceStatusType_Information = 0,
    ServiceStatusType_Warning = 1,
    ServiceStatusType_Error = 2,
};
typedef enum ServiceStatusType_enum ServiceStatusType;
enum SimulationStatusType_enum {
    SimulationStatusType_Paused = 2,
    SimulationStatusType_Reset = 3,
    SimulationStatusType_Running = 1,
    SimulationStatusType_Stopped = 0,
};
typedef enum SimulationStatusType_enum SimulationStatusType;
enum SpeedType_enum {
    SpeedType_Groundspeed = 1,
    SpeedType_Airspeed = 0,
};
typedef enum SpeedType_enum SpeedType;
enum TurnType_enum {
    TurnType_TurnShort = 0,
    TurnType_FlyOver = 1,
};
typedef enum TurnType_enum TurnType;
enum CommandStatusType_enum {
    CommandStatusType_Cancelled,
    CommandStatusType_Executed,
    CommandStatusType_Approved,
    CommandStatusType_Pending,
    CommandStatusType_InProcess,
};
typedef enum CommandStatusType_enum CommandStatusType;
enum AltitudeType_enum {
    AltitudeType_AGL,
    AltitudeType_MSL,
};
typedef enum AltitudeType_enum AltitudeType;
enum TravelMode_enum {
    TravelMode_ReverseCourse,
    TravelMode_SinglePass,
    TravelMode_Loop,
};
typedef enum TravelMode_enum TravelMode;
enum WaypointTransferMode_enum {
    WaypointTransferMode_ReportWaypoints,
    WaypointTransferMode_AddWaypoints,
    WaypointTransferMode_RequestWaypoints,
    WaypointTransferMode_ClearWaypoints,
};
typedef enum WaypointTransferMode_enum WaypointTransferMode;

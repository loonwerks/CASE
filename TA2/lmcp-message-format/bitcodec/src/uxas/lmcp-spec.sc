// #Sireum

import org.sireum._
import org.sireum.U16._
import org.sireum.S64._
import org.sireum.U32._
import org.sireum.bitcodec.Spec._
import org.sireum.bitcodec.Spec.{Long => Long, Int => Int, Double => Double}

val CMASISeriesID = s64"4849604199710720000"
val CMASISeriesVersion : U16 = u16"3"

val ABSTRACTGEOMETRY = 1
val KEYVALUEPAIR = u32"2"
val LOCATION3D = u32"3"
val PAYLOADACTION = 4
val PAYLOADCONFIGURATION = 5
val PAYLOADSTATE = u32"6"
val VEHICLEACTION = u32"7"
val TASK = u32"8"
val SEARCHTASK = u32"9"
val ABSTRACTZONE = 10
val ENTITYCONFIGURATION = 11
val FLIGHTPROFILE = 12
val AIRVEHICLECONFIGURATION = 13
val ENTITYSTATE = u32"14"
val AIRVEHICLESTATE = u32"15"
val WEDGE = u32"16"
val AREASEARCHTASK = 17
val CAMERAACTION = 18
val CAMERACONFIGURATION = 19
val GIMBALLEDPAYLOADSTATE = 20
val CAMERASTATE = 21
val CIRCLE = 22
val GIMBALANGLEACTION = 23
val GIMBALCONFIGURATION = 24
val GIMBALSCANACTION = 25
val GIMBALSTAREACTION = 26
val GIMBALSTATE = 27
val GOTOWAYPOINTACTION = 28
val KEEPINZONE = 29
val KEEPOUTZONE = 30
val LINESEARCHTASK = u32"31"
val NAVIGATIONACTION = 32
val LOITERACTION = 33
val LOITERTASK = 34
val WAYPOINT = u32"35"
val MISSIONCOMMAND = u32"36"
val MUSTFLYTASK = 37
val OPERATORSIGNAL = 38
val OPERATINGREGION = u32"39"
val AUTOMATIONREQUEST = u32"40"
val POINTSEARCHTASK = 41
val POLYGON = 42
val RECTANGLE = 43
val REMOVETASKS = 44
val SERVICESTATUS = 45
val SESSIONSTATUS = 46
val VEHICLEACTIONCOMMAND = u32"47"
val VIDEOSTREAMACTION = 48
val VIDEOSTREAMCONFIGURATION = 49
val VIDEOSTREAMSTATE = 50
val AUTOMATIONRESPONSE = u32"51"
val REMOVEZONES = 52
val REMOVEENTITIES = 53
val FLIGHTDIRECTORACTION = 54
val WEATHERREPORT = 55
val FOLLOWPATHCOMMAND = 56
val PATHWAYPOINT = 57
val STOPMOVEMENTACTION = 58
val WAYPOINTTRANSFER = 59
val PAYLOADSTOWACTION = 60

@strictpure def lmcpObject(name: String, typeID: U32, packedObject: Concat) : Concat =
  Concat(name = s"Object${name}", elements = ISZ(
    PredUnion(name = s"PredUnion${name}", subs = ISZ(
      PredSpec(
        ISZ(bytes(ISZ(0))),
        UByteConst(s"nullValue${name}", 0)
      ),
      PredSpec(
        ISZ(), // else
        Concat(name = s"LMCP${name}", elements = ISZ(
          UByteRange(name = "nonNullValue", min = 1, max = 255),
          LongConst(name = "seriesID", value = conversions.S64.toZ(CMASISeriesID)),
          UIntConst(name = "typeID", value = conversions.U32.toZ(typeID)),
          UShortConst(name = "seriesVersion", value = conversions.U16.toZ(CMASISeriesVersion)),
          packedObject
    )))  
  ))))

// Packed Object Definitions

// OperatingRegion (see ./afrl/cmasi/afrlcmasiOperatingRegion.cpp)
val OperatingRegion: Concat = 
  Concat(name = "OperatingRegion", elements = ISZ(
    Long(name = "id"),
    UShort(name = "keepInAreasSize"),
    BoundedRepeat[U16](
      name = "keepInAreas",
      maxElements = 1,
      dependsOn = ISZ("keepInAreasSize"),
      size = l => conversions.U16.toZ(l),
      element = ULong("id")
    ),
    UShort(name = "keepOutAreasSize"),
    BoundedRepeat[U16](
      name = "keepOutAreas",
      maxElements = 1,
      dependsOn = ISZ("keepOutAreasSize"),
      size = l => conversions.U16.toZ(l),
      element = ULong("id")
    )
  ))

// Location3D (see ./afrl/cmasi/afrlcmasiLocation3D.cpp)
val Location3D: Concat = 
  Concat(name = "Location3D", elements = ISZ(
    Double("latitude"),
    Double("longitude"),
    Float(name = "altitude"),
    Int(name = "altitudeType")
  ))

// See ByteBuffer.putString(string)
@strictpure def StringType(name: String): Concat = 
  Concat(name = name, elements = ISZ(
    UShort(name = "stringCharsSize"),
    BoundedRepeat[U16](
      name = "stringChars",
      maxElements = 65535,
      dependsOn = ISZ("stringCharsSize"),
      size = l => conversions.U16.toZ(l),
      element = UByte("c"),
    )
  ))

// KeyValuePair (see  ./afrl/cmasi/afrlcmasiKeyValuePair.cpp)
val KeyValuePair: Concat = 
  Concat(name = "KeyValuePair", elements = ISZ(
    StringType(name = "Key"),
    StringType(name = "Value")
  ))

// PayloadState (see ./afrl/cmasi/afrlcmasiPayloadState.cpp)
val PayloadState: Concat = 
  Concat(name = "PayloadState", elements = ISZ(
    Long(name = "payloadID"),
    UShort(name = "parametersSize"),
    BoundedRepeat[U16](
      name = "parameters",
      maxElements = 8, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("parametersSize"),
      size = l => conversions.U16.toZ(l),
      element = lmcpObject("PayloadStateParameter", KEYVALUEPAIR, KeyValuePair)
    )
  ))

// EntitiyState (see ./afrl/cmasi/afrlcmasiEntityState.cpp)
val EntityState: Concat = 
  Concat(name = "EntityState", elements = ISZ(
    Long(name = "id"),
    Float(name = "u"),
    Float(name = "v"),
    Float(name = "w"),
    Float(name = "udot"),
    Float(name = "vdot"),
    Float(name = "wdot"),
    Float(name = "heading"),
    Float(name = "pitch"),
    Float(name = "roll"),
    Float(name = "p"),
    Float(name = "q"),
    Float(name = "r"),
    Float(name = "course"),
    Float(name = "groundspeed"),
    lmcpObject("EntityStateLocation3D", LOCATION3D, Location3D),
    Float(name = "energyAvailable"),
    Float(name = "actualEnergyRate"),
    // PayloadStateList (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml for max size)
    UShort(name = "payloadStateListSize"),
    BoundedRepeat[U16](
      name = "payloadStateList",
      maxElements = 8, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("payloadStateListSize"),
      size = l => conversions.U16.toZ(l),
      element = lmcpObject("PayloadState", PAYLOADSTATE, PayloadState)
    ),
    Long(name = "currentWaypoint"),
    Long(name = "currentCommand"),
    Int(name = "mode"),
    UShort(name = "associatedTasksSize"),
    BoundedRepeat[U16](
      name = "associatedTasks",
      maxElements = 8, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("associatedTasksSize"),
      size = l => conversions.U16.toZ(l),
      element = Long("id"),
    ),
    Long(name = "time"),
    UShort(name = "infoSize"),
    BoundedRepeat[U16](
      name = "info",
      maxElements = 32, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("infoSize"),
      size = l => conversions.U16.toZ(l),
      element = lmcpObject("EntityStateInfo", KEYVALUEPAIR, KeyValuePair)
    )
  ))

// AirVehicleState (see ./afrl/cmasi/afrlcmasiAirVehicleState.cpp)
val AirVehicleState: Concat = 
  Concat(name = "AirVehicleState", elements = ISZ(
    EntityState,
    Float(name = "airspeed"),
    Float(name = "verticalSpeed"),
    Float(name = "windSpeed"),
    Float(name = "windDirection")
  ))

// Wedge (see ./afrl/cmasi/afrlcmasiWedge.cpp)
val Wedge: Concat = 
  Concat(name = "Wedge", elements = ISZ(
    Float("azimuthCenterline"),
    Float("verticalCenterline"),
    Float("azimuthExtent"),
    Float("verticalExtent")
  ))

// SearchTask (see ./afrl/cmasi/afrlcmasiSearchTask.cpp)
val Task: Concat = 
  Concat(name = "Task", elements = ISZ(
    Long("taskID"),
    StringType("Label"),
    UShort("eligibleEntitiesSize"),
    BoundedRepeat[U16](
      name = "eligibleEntities",
      maxElements = 32, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("eligibleEntitiesSize"),
      size = l => conversions.U16.toZ(l), 
      element = Long("entity")
    ),
    Float("revisitRate"),
    UShort("parametersSize"),
    BoundedRepeat[U16](
      name = "parameters",
      maxElements = 8, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("parametersSize"),
      size = l => conversions.U16.toZ(l),
      element = lmcpObject("TaskParameter", KEYVALUEPAIR, KeyValuePair)
    ),
    Byte("priority"),
    UByte("required")
  ))

// SearchTask (see ./afrl/cmasi/afrlcmasiSearchTask.cpp)
val SearchTask: Concat = 
  Concat(name = "SearchTask", elements = ISZ(
    Task,
    UShort("desiredWavelengthBandsSize"),
    BoundedRepeat[U16](
      name = "desiredWavelengthBands",
      maxElements = 8, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("desiredWavelengthBandsSize"),
      size = l => conversions.U16.toZ(l),
      element = Int("band")
    ),
    Long("dwellTime"),
    Float("groundSampleDistance")
  ))

// LineSearchTask (see ./afrl/cmasi/afrlcmasiLineSearchTask.cpp)
val LineSearchTask: Concat = 
  Concat(name = "LineSearchTask", elements = ISZ(
    SearchTask,
    UShort("pointListSize"),
    BoundedRepeat[U16](
      name = "pointList",
      maxElements = 1024, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("pointListSize"),
      size = l => conversions.U16.toZ(l),
      element = lmcpObject("Point", LOCATION3D, Location3D)
    ),
    UShort("viewAngleListSize"),
    BoundedRepeat[U16](
      name = "viewAngleList",
      maxElements = 16, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("viewAngleListSize"),
      size = l => conversions.U16.toZ(l),
      element = lmcpObject("ViewAngle", WEDGE, Wedge)
    ),
    UByte("useInertialViewAngles")
  ))

// AutomationRequest (see ./afrl/cmasi/afrlcmasiAutomationRequest.cpp)
val AutomationRequest: Concat = 
  Concat(name = "AutomationRequest", elements = ISZ(
    UShort("entityListSize"),
    BoundedRepeat[U16](
      name = "entityList",
      maxElements = 16, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("entityListSize"),
      size = l => conversions.U16.toZ(l),
      element = Long("entityId")
    ),
    UShort("taskListSize"),
    BoundedRepeat[U16](
      name = "taskList",
      maxElements = 32, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("taskListSize"),
      size = l => conversions.U16.toZ(l),
      element = Long("taskId")
    ),
    StringType("TaskRelationships"),
    Long("operatingRegion"),
    UByte("redoAllTasks")
  ))

val VehicleAction: Concat = 
  Concat(name = "VehicleAction", elements = ISZ(
    UShort("associatedTaskListSize"),
    BoundedRepeat[U16](
      name = "associatedTaskList",
      maxElements = 8, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("associatedTaskListSize"),
      size = l => conversions.U16.toZ(l),
      element = Long("associatedTaskId")
    )
  ))

val VehicleActionCommand: Concat = 
  Concat(name = "VehicleActionCommand", elements = ISZ(
    Long("commandID"),
    Long("vehicleID"),
    UShort("vehicleActionListSize"),
    BoundedRepeat[U16](
      name = "vehicleActionList",
      maxElements = 8, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("vehicleActionListSize"),
      size = l => conversions.U16.toZ(l),
      element = lmcpObject(s"VehicleActionVehicleActionCommand", VEHICLEACTION, VehicleAction)
    ),
    Int("status")
  ))

val Waypoint: Concat = 
  Concat(name = "Waypoint", elements = ISZ(
    Location3D,
    Long("number"),
    Long("nextWaypoint"),
    Float("speed"),
    Int("speedType"),
    Float("climbRate"),
    Int("turnType"),
    UShort("vehicleActionListSize"),
     BoundedRepeat[U16](
      name = "vehicleActionList",
      maxElements = 8, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("vehicleActionListSize"),
      size = l => conversions.U16.toZ(l),
      element = lmcpObject("WaypointVehicleAction", VEHICLEACTION, VehicleAction)
    ),
    Long("contingencyWaypointA"),
    Long("contingencyWaypointB"),
    UShort("associatedTaskListSize"),
    BoundedRepeat[U16](
      name = "associatedTaskList",
      maxElements = 8, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("associatedTaskListSize"),
      size = l => conversions.U16.toZ(l),
      element = Long("associatedTaskId")
    )
  ))

val MissionCommand: Concat = 
  Concat(name = "MissionCommand", elements = ISZ(
    VehicleActionCommand,
    UShort("waypointListSize"),
    BoundedRepeat[U16](
      name = "waypointList",
      maxElements = 1024, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("waypointListSize"),
      size = l => conversions.U16.toZ(l),
      element = lmcpObject("Waypoint", WAYPOINT, Waypoint)
    ),
    Long("firstWaypoint")
  ))

val AutomationResponse: Concat = 
  Concat(name = "AutomationResponse", elements = ISZ(
    UShort("missionCommandListSize"),
    BoundedRepeat[U16](
      name = "missionCommandList",
      maxElements = 16, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("missionCommandListSize"),
      size = l => conversions.U16.toZ(l),
      element = lmcpObject("MissionCommand", MISSIONCOMMAND, MissionCommand)
    ),
    UShort("vehicleCommandListSize"),
    BoundedRepeat[U16](
      name = "vehicleCommandList",
      maxElements = 64, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("vehicleCommandListSize"),
      size = l => conversions.U16.toZ(l),
      element = lmcpObject("AutomationResponseVehicleCommand", VEHICLEACTIONCOMMAND, VehicleActionCommand)
    ),
    UShort("infoSize"),
    BoundedRepeat[U16](
      name = "info",
      maxElements = 8, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("infoSize"),
      size = l => conversions.U16.toZ(l),
      element = lmcpObject("AutomationResponseInfo", KEYVALUEPAIR, KeyValuePair)
    )
  ))
// END Packed Object Definitions

val lmcpObjectDecode = Concat(name = "LMCPObjectDecode", elements = ISZ(
  UByteRange(name = "nonNullValue", min = 1, max = 255),
  Long("seriesID"),
  UInt("typeID"),
  UShort("seriesVersion"),
  Union[(S64, U32, U16)](
    name = "LMCPObject",
    dependsOn = ISZ("seriesID", "typeID", "seriesVersion"),
    choice = n => n match {
      // OperatingRegion (see ./afrl/cmasi/afrlcmasiOperatingRegion.cpp)
      case (CMASISeriesID, OPERATINGREGION, CMASISeriesVersion) => 0
      // AirVehicleState (see ./afrl/cmasi/afrlcmasiAirVehicleState.cpp)
      case (CMASISeriesID, AIRVEHICLESTATE, CMASISeriesVersion) => 1
      // LineSearchTask (see ./afrl/cmasi/afrlcmasiLineSearchTask.cpp)
      case (CMASISeriesID, LINESEARCHTASK, CMASISeriesVersion) => 2
      // AutomationRequest (see ./afrl/cmasi/afrlcmasiAutomationRequest.cpp)
      case (CMASISeriesID, AUTOMATIONREQUEST, CMASISeriesVersion) => 3
      // AutomationResponse (see ./afrl/cmasi/afrlcmasiAutomationResponse.cpp)
      case (CMASISeriesID, AUTOMATIONRESPONSE, CMASISeriesVersion) => 4
      case (_, _, _) => -1
    },
    subs = ISZ(
      OperatingRegion,
      AirVehicleState,
      LineSearchTask,
      AutomationRequest,
      AutomationResponse
    )
  )
))

val lmcpObjectNullCheck = PredUnion(
  name = "LMCPObjectNullCheck",
  subs = ISZ(
    PredSpec(
      ISZ(bytes(ISZ(0))),
      UByteConst("nullValue", 0)
    ),
    PredSpec(
      ISZ(),
      lmcpObjectDecode
    )
  )
)

val lmcpMessage = Concat(name = "LMCPMessage", elements = ISZ(
  IntConst(name = "controlString", value = 0x4c4d4350),
  UInt(name = "messageSize"),
  lmcpObjectNullCheck,
  UInt(name = "checksum")
))

println(lmcpMessage.toJSON(T))
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
val VEHICLEACTION = 7
val TASK = 8
val SEARCHTASK = 9
val ABSTRACTZONE = 10
val ENTITYCONFIGURATION = 11
val FLIGHTPROFILE = 12
val AIRVEHICLECONFIGURATION = 13
val ENTITYSTATE = u32"14"
val AIRVEHICLESTATE = u32"15"
val WEDGE = 16
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
val LINESEARCHTASK = 31
val NAVIGATIONACTION = 32
val LOITERACTION = 33
val LOITERTASK = 34
val WAYPOINT = 35
val MISSIONCOMMAND = 36
val MUSTFLYTASK = 37
val OPERATORSIGNAL = 38
val OPERATINGREGION = u32"39"
val AUTOMATIONREQUEST = 40
val POINTSEARCHTASK = 41
val POLYGON = 42
val RECTANGLE = 43
val REMOVETASKS = 44
val SERVICESTATUS = 45
val SESSIONSTATUS = 46
val VEHICLEACTIONCOMMAND = 47
val VIDEOSTREAMACTION = 48
val VIDEOSTREAMCONFIGURATION = 49
val VIDEOSTREAMSTATE = 50
val AUTOMATIONRESPONSE = 51
val REMOVEZONES = 52
val REMOVEENTITIES = 53
val FLIGHTDIRECTORACTION = 54
val WEATHERREPORT = 55
val FOLLOWPATHCOMMAND = 56
val PATHWAYPOINT = 57
val STOPMOVEMENTACTION = 58
val WAYPOINTTRANSFER = 59
val PAYLOADSTOWACTION = 60

// Packed Object Definitions
@strictpure def lmcpObject(name: String, typeID: U32, packedObject: (String) => Concat) : PredUnion =
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
        packedObject(s"Packed${name}")
    )))  
  )) 
  

// EGM: the underscore on list size definitions in to avoid the name clash with
//      internal generated variable by bitcodec that use the same name to track
//      the size of the list internally.

@strictpure def operatingRegion(name: String): Concat = 
  Concat(name = name, elements = ISZ(
    Long(name = "id"),
    UShort(name = "_keepInAreasSize"),
    BoundedRepeat[U16](
      name = "keepInAreas",
      maxElements = 1,
      dependsOn = ISZ("_keepInAreasSize"),
      size = l => conversions.U16.toZ(l),
      element = ULong("id")
    ),
    UShort(name = "_keepOutAreasSize"),
    BoundedRepeat[U16](
      name = "keepOutAreas",
      maxElements = 1,
      dependsOn = ISZ("_keepOutAreasSize"),
      size = l => conversions.U16.toZ(l),
      element = ULong("id")
    )
  ))

// Location3D (see ./afrl/cmasi/afrlcmasiLocation3D.cpp)
@strictpure def location3D(name: String) : Concat = 
  Concat(name = name, elements = ISZ(
    Double("latitude"),
    Double("longitude"),
    Float(name = "altitude"),
    Int(name = "altitudeType")
  ))

@strictpure def stringType(name: String): Concat = 
  Concat(name = name, elements = ISZ(
    UShort(name = "_stringCharsSize"),
    BoundedRepeat[U16](
      name = "stringChars",
      maxElements = 65535,
      dependsOn = ISZ("_stringCharsSize"),
      size = l => conversions.U16.toZ(l),
      element = UByte("c"),
    )
  ))

// KeyValuePair (see  ./afrl/cmasi/afrlcmasiKeyValuePair.cpp)
@strictpure def keyValuePair(name: String): Concat = 
  Concat(name = name, elements = ISZ(
    stringType(name = s"${name}Key"),
    stringType(name = s"${name}Value")
  ))

// PayloadState (see ./afrl/cmasi/afrlcmasiPayloadState.cpp)
@strictpure def payloadState(name: String): Concat = 
  Concat(name = name, elements = ISZ(
    Long(name = "payloadID"),
    UShort(name = "_parametersSize"),
    BoundedRepeat[U16](
      name = "parameters",
      maxElements = 8, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("_parametersSize"),
      size = l => conversions.U16.toZ(l),
      element = lmcpObject("Parameters", KEYVALUEPAIR, keyValuePair _))
  ))

@strictpure def entityState(name: String): Concat = 
  Concat(name = name, elements = ISZ(
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
    lmcpObject("LMCPLocation3D", LOCATION3D, location3D _),
    Float(name = "energyAvailable"),
    Float(name = "actualEnergyRate"),
    // PayloadStateList (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml for max size)
    UShort(name = "_payloadStateListSize"),
    BoundedRepeat[U16](
      name = "payloadStateList",
      maxElements = 8, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("_payloadStateListSize"),
      size = l => conversions.U16.toZ(l),
      element = lmcpObject("PayloadStateList", PAYLOADSTATE, payloadState _)
    ),
    Long(name = "currentWaypoint"),
    Long(name = "currentCommand"),
    Int(name = "mode"),
    UShort(name = "_associatedTasksSize"),
    BoundedRepeat[U16](
      name = "associatedTasks",
      maxElements = 8, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("_associatedTasksSize"),
      size = l => conversions.U16.toZ(l),
      element = Long("id"),
    ),
    Long(name = "time"),
    UShort(name = "_infoSize"),
    BoundedRepeat[U16](
      name = "info",
      maxElements = 32, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
      dependsOn = ISZ("_infoSize"),
      size = l => conversions.U16.toZ(l),
      element = lmcpObject("Info", KEYVALUEPAIR, keyValuePair _)
    )
  ))

@strictpure def airVehicleState(name: String): Concat = 
  Concat(name = name, elements = ISZ(
    entityState("EntityState"),
    Float(name = "airspeed"),
    Float(name = "verticalSpeed"),
    Float(name = "windSpeed"),
    Float(name = "windDirection")
  ))

// LMCP Object Definition

// val nullObject = Concat(name = "NullObject", elements = ISZ(
//   UByte(name = "isNonNull") // bool is 1 byte (see getBool in avtas/lmcp/ByteBuffer.cpp)
// ))

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
      case (_, _, _) => -1
    },
    subs = ISZ(
      operatingRegion("OperatingRegion"),
      airVehicleState("AirVehicleState")
      // ...
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

// LMPC Message Definition
val lmcpMessage = Concat(name = "LMCPMessage", elements = ISZ(
  IntConst(name = "controlString", value = 0x4c4d4350),
  UInt(name = "messageSize"),
  lmcpObjectNullCheck,
  UInt(name = "checksum")
))

println(lmcpMessage.toJSON(T))
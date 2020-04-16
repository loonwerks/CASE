// #Sireum

import org.sireum._
import org.sireum.U16._
import org.sireum.S64._
import org.sireum.U32._
import org.sireum.bitcodec.Spec._
import org.sireum.bitcodec.Spec.{Long => Long, Int => Int, Double => Double}

// Packed Object Definitions

// EGM: the underscore on list size definitions in to avoid the name clash with
//      internal generated variable by bitcodec that use the same name to track
//      the size of the list internally.

val operatingRegion = Concat(name = "OperatingRegion", elements = ISZ(
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
val location3D = Concat(name = "Location3D", elements = ISZ(
  Double("latitude"),
  Double("longitude"),
  Float(name = "altitude"),
  Int(name = "altitudeType")
))

val lmcpLocation3D = Concat(name = "LMCPLocation3D", elements = ISZ(
  UByteRange(name = "isNonNull", min = 1, max = 255),
  LongConst(name = "seriesID", value = 4849604199710720000L),
  UIntConst(name = "typeID", value = 3),
  UShortConst(name = "seriesVersion", value = 3),
  location3D,
))

val stringType = Concat(name = "StringType", elements = ISZ(
  PredRepeatUntil (
    "stringChars", 
    ISZ(bytes(ISZ(0))),
    UByte("c"),
  ),
  UByteConst("nullValue", 0)
))

// KeyValuePair (see  ./afrl/cmasi/afrlcmasiKeyValuePair.cpp)
val keyValuePair = Concat(name = "KeyValuePair", elements = ISZ(
  stringType(name = "Key"),
  stringType(name = "Value")
))

val lmcpKeyValuePair =  Concat(name = "LMCPKeyValuePair", elements = ISZ(
  UByteRange(name = "isNonNull", min = 1, max = 255),
  LongConst(name = "seriesID", value = 4849604199710720000L),
  UIntConst(name = "typeID", value = 2),
  UShortConst(name = "seriesVersion", value = 3),
  keyValuePair,
))

// PayloadState (see ./afrl/cmasi/afrlcmasiPayloadState.cpp)
val payloadState = Concat(name = "PayloadState", elements = ISZ(
  Long(name = "payloadID"),
  UShort(name = "_parametersSize"),
  BoundedRepeat[U16](
    name = "parameters",
    maxElements = 8, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
    dependsOn = ISZ("_parametersSize"),
    size = l => conversions.U16.toZ(l),
    element = lmcpKeyValuePair)
))

val lmcpPayloadState = Concat(name = "LMCPPayloadState", elements = ISZ(
  UByteRange(name = "isNonNull", min = 1, max = 255),
  LongConst(name = "seriesID", value = 4849604199710720000L),
  UIntConst(name = "typeID", value = 6),
  UShortConst(name = "seriesVersion", value = 3),
  payloadState
))

val entityState = Concat(name = "EntityState", elements = ISZ(
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
  lmcpLocation3D,
  Float(name = "energyAvailable"),
  Float(name = "actualEnergyRate"),
  // PayloadStateList (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml for max size)
  UShort(name = "_payloadStateListSize"),
  BoundedRepeat[U16](
    name = "payloadStateList",
    maxElements = 8, // (see case-ta6-experimental-platform-OpenUxAS/mdms/CMASI.xml)
    dependsOn = ISZ("_payloadStateListSize"),
    size = l => conversions.U16.toZ(l),
    element = lmcpPayloadState
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
    element = lmcpKeyValuePair
  )
))

val airVehicleState = Concat(name = "AirVehicleState", elements = ISZ(
  entityState,
  Float(name = "airspeed"),
  Float(name = "verticalSpeed"),
  Float(name = "windSpeed"),
  Float(name = "windDirection")
))

// LMCP Object Definition

val nullObject = Concat(name = "NullObject", elements = ISZ(
  UByte(name = "isNonNull") // bool is 1 byte (see getBool in avtas/lmcp/ByteBuffer.cpp)
))

val nonNullObject = Concat(name = "NonNullObject", elements = ISZ(
  UByte(name = "isNonNull"),
  Long(name = "seriesID"),
  UInt(name = "typeID"),
  UShort(name = "seriesVersion"),
  Union[(S64, U32, U16)](
    name = "PackedObject",
    dependsOn = ISZ("seriesID", "typeID", "seriesVersion"),
    choice = n => n match {
      // OperatingRegion (see ./afrl/cmasi/afrlcmasiOperatingRegion.cpp)
      case (s64"4849604199710720000", u32"39", u16"3") => 0
      // AirVehicleState (see ./afrl/cmasi/afrlcmasiAirVehicleState.cpp)
      case (s64"4849604199710720000", u32"15", u16"3") => 0
      case (_, _, _) => -1
    },
    subs = ISZ(
      operatingRegion,
      airVehicleState
      // ...
    )
  )
))

val lmcpObject = PredUnion(
  name = "LMCPObject",
  subs = ISZ(
    PredSpec(
      ISZ(bytes(ISZ(0))),
      nullObject
    ),
    PredSpec(
      ISZ(), // else
      nonNullObject
    )
  )
)

// LMPC Message Definition 
val lmcpMessage = Concat(name = "LMCPMessage", elements = ISZ(
  IntConst(name = "controlString", value = 0x4c4d4350),
  UInt(name = "messageSize"),
  lmcpObject,
  UInt(name = "checksum")
))

println(lmcpMessage.toJSON(T))

// #Sireum

import org.sireum._
import org.sireum.U8._
import org.sireum.U16._
import org.sireum.U32._
import org.sireum.U64._
import org.sireum.S8._
import org.sireum.S32._
import org.sireum.S64._
import org.sireum.ops.Bits.{Context, Reader, Writer}
import org.sireum.bitcodec.Runtime

// BEGIN USER CODE: Imports

// END USER CODE: Imports

object BitCodec {

  val ERROR_NullValue: Z = 2

  val ERROR_OperatingRegion_keepInAreas: Z = 3

  val ERROR_OperatingRegion_keepOutAreas: Z = 4

  val ERROR_OperatingRegion: Z = 5

  val ERROR_NullValueEntityStateLocation3D: Z = 6

  val ERROR_Location3D: Z = 7

  val ERROR_LMCPEntityStateLocation3D: Z = 8

  val ERROR_PredUnionEntityStateLocation3D: Z = 9

  val ERROR_ObjectEntityStateLocation3D: Z = 10

  val ERROR_NullValuePayloadState: Z = 11

  val ERROR_NullValuePayloadStateParameter: Z = 12

  val ERROR_Key_stringChars: Z = 13

  val ERROR_Key: Z = 14

  val ERROR_Value_stringChars: Z = 15

  val ERROR_Value: Z = 16

  val ERROR_KeyValuePair: Z = 17

  val ERROR_LMCPPayloadStateParameter: Z = 18

  val ERROR_PredUnionPayloadStateParameter: Z = 19

  val ERROR_ObjectPayloadStateParameter: Z = 20

  val ERROR_PayloadState_parameters: Z = 21

  val ERROR_PayloadState: Z = 22

  val ERROR_LMCPPayloadState: Z = 23

  val ERROR_PredUnionPayloadState: Z = 24

  val ERROR_ObjectPayloadState: Z = 25

  val ERROR_EntityState_payloadStateList: Z = 26

  val ERROR_EntityState_associatedTasks: Z = 27

  val ERROR_NullValueEntityStateInfo: Z = 28

  val ERROR_LMCPEntityStateInfo: Z = 34

  val ERROR_PredUnionEntityStateInfo: Z = 35

  val ERROR_ObjectEntityStateInfo: Z = 36

  val ERROR_EntityState_info: Z = 37

  val ERROR_EntityState: Z = 38

  val ERROR_AirVehicleState: Z = 39

  val ERROR_Label_stringChars: Z = 40

  val ERROR_Label: Z = 41

  val ERROR_Task_eligibleEntities: Z = 42

  val ERROR_NullValueTaskParameter: Z = 43

  val ERROR_LMCPTaskParameter: Z = 49

  val ERROR_PredUnionTaskParameter: Z = 50

  val ERROR_ObjectTaskParameter: Z = 51

  val ERROR_Task_parameters: Z = 52

  val ERROR_Task: Z = 53

  val ERROR_SearchTask_desiredWavelengthBands: Z = 54

  val ERROR_SearchTask: Z = 55

  val ERROR_NullValuePoint: Z = 56

  val ERROR_LMCPPoint: Z = 58

  val ERROR_PredUnionPoint: Z = 59

  val ERROR_ObjectPoint: Z = 60

  val ERROR_LineSearchTask_pointList: Z = 61

  val ERROR_NullValueViewAngle: Z = 62

  val ERROR_Wedge: Z = 63

  val ERROR_LMCPViewAngle: Z = 64

  val ERROR_PredUnionViewAngle: Z = 65

  val ERROR_ObjectViewAngle: Z = 66

  val ERROR_LineSearchTask_viewAngleList: Z = 67

  val ERROR_LineSearchTask: Z = 68

  val ERROR_AutomationRequest_entityList: Z = 69

  val ERROR_AutomationRequest_taskList: Z = 70

  val ERROR_TaskRelationships_stringChars: Z = 71

  val ERROR_TaskRelationships: Z = 72

  val ERROR_AutomationRequest: Z = 73

  val ERROR_NullValueMissionCommand: Z = 74

  val ERROR_NullValueVehicleActionVehicleActionCommand: Z = 75

  val ERROR_VehicleAction_associatedTaskList: Z = 76

  val ERROR_VehicleAction: Z = 77

  val ERROR_LMCPVehicleActionVehicleActionCommand: Z = 78

  val ERROR_PredUnionVehicleActionVehicleActionCommand: Z = 79

  val ERROR_ObjectVehicleActionVehicleActionCommand: Z = 80

  val ERROR_VehicleActionCommand_vehicleActionList: Z = 81

  val ERROR_VehicleActionCommand: Z = 82

  val ERROR_NullValueWaypoint: Z = 83

  val ERROR_NullValueWaypointVehicleAction: Z = 85

  val ERROR_LMCPWaypointVehicleAction: Z = 88

  val ERROR_PredUnionWaypointVehicleAction: Z = 89

  val ERROR_ObjectWaypointVehicleAction: Z = 90

  val ERROR_Waypoint_vehicleActionList: Z = 91

  val ERROR_Waypoint_associatedTaskList: Z = 92

  val ERROR_Waypoint: Z = 93

  val ERROR_LMCPWaypoint: Z = 94

  val ERROR_PredUnionWaypoint: Z = 95

  val ERROR_ObjectWaypoint: Z = 96

  val ERROR_MissionCommand_waypointList: Z = 97

  val ERROR_MissionCommand: Z = 98

  val ERROR_LMCPMissionCommand: Z = 99

  val ERROR_PredUnionMissionCommand: Z = 100

  val ERROR_ObjectMissionCommand: Z = 101

  val ERROR_AutomationResponse_missionCommandList: Z = 102

  val ERROR_NullValueAutomationResponseVehicleCommand: Z = 103

  val ERROR_LMCPAutomationResponseVehicleCommand: Z = 112

  val ERROR_PredUnionAutomationResponseVehicleCommand: Z = 113

  val ERROR_ObjectAutomationResponseVehicleCommand: Z = 114

  val ERROR_AutomationResponse_vehicleCommandList: Z = 115

  val ERROR_NullValueAutomationResponseInfo: Z = 116

  val ERROR_LMCPAutomationResponseInfo: Z = 122

  val ERROR_PredUnionAutomationResponseInfo: Z = 123

  val ERROR_ObjectAutomationResponseInfo: Z = 124

  val ERROR_AutomationResponse_info: Z = 125

  val ERROR_AutomationResponse: Z = 126

  val ERROR_LMCPObject: Z = 127

  val ERROR_LMCPObjectDecode: Z = 128

  val ERROR_LMCPObjectNullCheck: Z = 129

  val ERROR_LMCPMessage: Z = 130

  // BEGIN USER CODE: Members
  val CMASISeriesID: S64 = s64"4849604199710720000"
  val CMASISeriesVersion: U16 = u16"3"

  val KEYVALUEPAIR: U32 = u32"2"
  val LOCATION3D: U32 = u32"3"
  val PAYLOADSTATE: U32 = u32"6"
  val VEHICLEACTION: U32 = u32"7"
  val TASK: U32 = u32"8"
  val SEARCHTASK: U32 = u32"9"
  val ENTITYSTATE: U32 = u32"14"
  val AIRVEHICLESTATE: U32 = u32"15"
  val WEDGE: U32 = u32"16"
  val LINESEARCHTASK: U32 = u32"31"
  val WAYPOINT: U32 = u32"35"
  val MISSIONCOMMAND: U32 = u32"36"
  val OPERATINGREGION: U32 = u32"39"
  val AUTOMATIONREQUEST: U32 = u32"40"
  val VEHICLEACTIONCOMMAND: U32 = u32"47"
  val AUTOMATIONRESPONSE: U32 = u32"51"
  // END USER CODE: Members

  object NullValue {

    val maxSize: Z = z"8"

    def empty: MNullValue = {
      return MNullValue(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValue] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValue]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValue(
    val nullValue: U8
  ) extends LMCPObjectNullCheck {

    @strictpure def toMutable: MNullValue = MNullValue(nullValue)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValue(
    var nullValue: U8
  ) extends MLMCPObjectNullCheck {

    @strictpure def toImmutable: NullValue = NullValue(nullValue)

    def wellFormed: Z = {

      if (nullValue != u8"0") {
        return ERROR_NullValue
      }

      // BEGIN USER CODE: NullValue.wellFormed

      // END USER CODE: NullValue.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValue = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValue)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValue)
      }
    }

  }

  object OperatingRegion {

    val maxSize: Z = z"224"

    def empty: MOperatingRegion = {
      return MOperatingRegion(s64"0", u16"0", MSZ[U64](), u16"0", MSZ[U64]())
    }

    def decode(input: ISZ[B], context: Context): Option[OperatingRegion] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[OperatingRegion]() else Some(r.toImmutable)
    }

    def toMutableKeepInAreas(s: ISZ[U64]): MSZ[U64] = {
      var r = MSZ[U64]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toImmutableKeepInAreas(s: MSZ[U64]): ISZ[U64] = {
      var r = ISZ[U64]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toMutableKeepOutAreas(s: ISZ[U64]): MSZ[U64] = {
      var r = MSZ[U64]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toImmutableKeepOutAreas(s: MSZ[U64]): ISZ[U64] = {
      var r = ISZ[U64]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }
  }

  @datatype class OperatingRegion(
    val id: S64,
    val keepInAreasSize: U16,
    val keepInAreas: ISZ[U64],
    val keepOutAreasSize: U16,
    val keepOutAreas: ISZ[U64]
  ) extends LMCPObject {

    @strictpure def toMutable: MOperatingRegion = MOperatingRegion(id, keepInAreasSize, OperatingRegion.toMutableKeepInAreas(keepInAreas), keepOutAreasSize, OperatingRegion.toMutableKeepOutAreas(keepOutAreas))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(224, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MOperatingRegion(
    var id: S64,
    var keepInAreasSize: U16,
    var keepInAreas: MSZ[U64],
    var keepOutAreasSize: U16,
    var keepOutAreas: MSZ[U64]
  ) extends MLMCPObject {

    @strictpure def toImmutable: OperatingRegion = OperatingRegion(id, keepInAreasSize, OperatingRegion.toImmutableKeepInAreas(keepInAreas), keepOutAreasSize, OperatingRegion.toImmutableKeepOutAreas(keepOutAreas))

    def wellFormed: Z = {

      if (keepInAreas.size > 1) {
        return ERROR_OperatingRegion_keepInAreas
      }

      val keepInAreasSz = sizeOfKeepInAreas(keepInAreasSize)
      if (keepInAreas.size != keepInAreasSz) {
        return ERROR_OperatingRegion_keepInAreas
      }

      if (keepOutAreas.size > 1) {
        return ERROR_OperatingRegion_keepOutAreas
      }

      val keepOutAreasSz = sizeOfKeepOutAreas(keepOutAreasSize)
      if (keepOutAreas.size != keepOutAreasSz) {
        return ERROR_OperatingRegion_keepOutAreas
      }

      // BEGIN USER CODE: OperatingRegion.wellFormed

      // END USER CODE: OperatingRegion.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      id = Reader.IS.beS64(input, context)
      keepInAreasSize = Reader.IS.beU16(input, context)
      val keepInAreasSz = sizeOfKeepInAreas(keepInAreasSize)
      if (keepInAreasSz >= 0) {
        keepInAreas = MSZ.create(keepInAreasSz, u64"0")
        for (i <- 0 until keepInAreasSz) {
          val id = Reader.IS.beU64(input, context)
          keepInAreas(i) = id
        }
      } else {
        context.signalError(ERROR_OperatingRegion_keepInAreas)
      }
      keepOutAreasSize = Reader.IS.beU16(input, context)
      val keepOutAreasSz = sizeOfKeepOutAreas(keepOutAreasSize)
      if (keepOutAreasSz >= 0) {
        keepOutAreas = MSZ.create(keepOutAreasSz, u64"0")
        for (i <- 0 until keepOutAreasSz) {
          val id = Reader.IS.beU64(input, context)
          keepOutAreas(i) = id
        }
      } else {
        context.signalError(ERROR_OperatingRegion_keepOutAreas)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beS64(output, context, id)
      Writer.beU16(output, context, keepInAreasSize)
      val keepInAreasSz = sizeOfKeepInAreas(keepInAreasSize)
      if (keepInAreasSz >= 0) {
        for (i <- 0 until keepInAreasSz) {
          val id = keepInAreas(i)
          Writer.beU64(output, context, id)
        }
      } else {
        context.signalError(ERROR_OperatingRegion_keepInAreas)
      }
      Writer.beU16(output, context, keepOutAreasSize)
      val keepOutAreasSz = sizeOfKeepOutAreas(keepOutAreasSize)
      if (keepOutAreasSz >= 0) {
        for (i <- 0 until keepOutAreasSz) {
          val id = keepOutAreas(i)
          Writer.beU64(output, context, id)
        }
      } else {
        context.signalError(ERROR_OperatingRegion_keepOutAreas)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_OperatingRegion)
      }
    }

    def sizeOfKeepInAreas(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }

    def sizeOfKeepOutAreas(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object NullValueEntityStateLocation3D {

    val maxSize: Z = z"8"

    def empty: MNullValueEntityStateLocation3D = {
      return MNullValueEntityStateLocation3D(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValueEntityStateLocation3D] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValueEntityStateLocation3D]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValueEntityStateLocation3D(
    val nullValueEntityStateLocation3D: U8
  ) extends PredUnionEntityStateLocation3D {

    @strictpure def toMutable: MNullValueEntityStateLocation3D = MNullValueEntityStateLocation3D(nullValueEntityStateLocation3D)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValueEntityStateLocation3D(
    var nullValueEntityStateLocation3D: U8
  ) extends MPredUnionEntityStateLocation3D {

    @strictpure def toImmutable: NullValueEntityStateLocation3D = NullValueEntityStateLocation3D(nullValueEntityStateLocation3D)

    def wellFormed: Z = {

      if (nullValueEntityStateLocation3D != u8"0") {
        return ERROR_NullValueEntityStateLocation3D
      }

      // BEGIN USER CODE: NullValueEntityStateLocation3D.wellFormed

      // END USER CODE: NullValueEntityStateLocation3D.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValueEntityStateLocation3D = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValueEntityStateLocation3D)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValueEntityStateLocation3D)
      }
    }

  }

  object Location3D {

    val maxSize: Z = z"192"

    def empty: MLocation3D = {
      return MLocation3D(0.0d, 0.0d, 0.0f, s32"0")
    }

    def decode(input: ISZ[B], context: Context): Option[Location3D] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[Location3D]() else Some(r.toImmutable)
    }

  }

  @datatype class Location3D(
    val latitude: F64,
    val longitude: F64,
    val altitude: F32,
    val altitudeType: S32
  ) {

    @strictpure def toMutable: MLocation3D = MLocation3D(latitude, longitude, altitude, altitudeType)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(192, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLocation3D(
    var latitude: F64,
    var longitude: F64,
    var altitude: F32,
    var altitudeType: S32
  ) extends Runtime.Composite {

    @strictpure def toImmutable: Location3D = Location3D(latitude, longitude, altitude, altitudeType)

    def wellFormed: Z = {


      // BEGIN USER CODE: Location3D.wellFormed

      // END USER CODE: Location3D.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      latitude = Reader.IS.beF64(input, context)
      longitude = Reader.IS.beF64(input, context)
      altitude = Reader.IS.beF32(input, context)
      altitudeType = Reader.IS.beS32(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beF64(output, context, latitude)
      Writer.beF64(output, context, longitude)
      Writer.beF32(output, context, altitude)
      Writer.beS32(output, context, altitudeType)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_Location3D)
      }
    }

  }

  object LMCPEntityStateLocation3D {

    val maxSize: Z = z"312"

    def empty: MLMCPEntityStateLocation3D = {
      return MLMCPEntityStateLocation3D(u8"0", s64"0", u32"0", u16"0", Location3D.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPEntityStateLocation3D] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPEntityStateLocation3D]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPEntityStateLocation3D(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val location3D: Location3D
  ) extends PredUnionEntityStateLocation3D {

    @strictpure def toMutable: MLMCPEntityStateLocation3D = MLMCPEntityStateLocation3D(nonNullValue, seriesID, typeID, seriesVersion, location3D.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(312, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPEntityStateLocation3D(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var location3D: MLocation3D
  ) extends MPredUnionEntityStateLocation3D {

    @strictpure def toImmutable: LMCPEntityStateLocation3D = LMCPEntityStateLocation3D(nonNullValue, seriesID, typeID, seriesVersion, location3D.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPEntityStateLocation3D
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPEntityStateLocation3D
      }

      if (typeID != u32"3") {
        return ERROR_LMCPEntityStateLocation3D
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPEntityStateLocation3D
      }

      val wfLocation3D = location3D.wellFormed
      if (wfLocation3D != 0) {
        return wfLocation3D
      }

      // BEGIN USER CODE: LMCPEntityStateLocation3D.wellFormed

      // END USER CODE: LMCPEntityStateLocation3D.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      location3D.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nonNullValue)
      Writer.beS64(output, context, seriesID)
      Writer.beU32(output, context, typeID)
      Writer.beU16(output, context, seriesVersion)
      location3D.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPEntityStateLocation3D)
      }
    }

  }

  @datatype trait PredUnionEntityStateLocation3D {
    @strictpure def toMutable: MPredUnionEntityStateLocation3D
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionEntityStateLocation3D extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionEntityStateLocation3D
  }

  object PredUnionEntityStateLocation3D {

    val maxSize: Z = z"312"

    def empty: MPredUnionEntityStateLocation3D = {
      return NullValueEntityStateLocation3D.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionEntityStateLocation3D] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionEntityStateLocation3D]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValueEntityStateLocation3D
       'LMCPEntityStateLocation3D
       'Error
    }

    def choose(input: ISZ[B], context: Context): Choice.Type = {
      {
        var ctx = context
        var hasError = F
        if (!hasError) {
          val temp = MSZ.create(1, u8"0")
          Reader.IS.beU8S(input, ctx, temp, 1)
          hasError = !(ctx.errorCode == 0 && temp == MSZ(u8"0"))
        }
        if (!hasError && ctx.errorCode == 0) {
          return Choice.NullValueEntityStateLocation3D
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPEntityStateLocation3D
        }
      }
      return Choice.Error
    }

  }

  object ObjectEntityStateLocation3D {

    val maxSize: Z = z"312"

    def empty: MObjectEntityStateLocation3D = {
      return MObjectEntityStateLocation3D(NullValueEntityStateLocation3D.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjectEntityStateLocation3D] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjectEntityStateLocation3D]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjectEntityStateLocation3D(
    val predUnionEntityStateLocation3D: PredUnionEntityStateLocation3D
  ) {

    @strictpure def toMutable: MObjectEntityStateLocation3D = MObjectEntityStateLocation3D(predUnionEntityStateLocation3D.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(312, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjectEntityStateLocation3D(
    var predUnionEntityStateLocation3D: MPredUnionEntityStateLocation3D
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjectEntityStateLocation3D = ObjectEntityStateLocation3D(predUnionEntityStateLocation3D.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjectEntityStateLocation3D.wellFormed

      // END USER CODE: ObjectEntityStateLocation3D.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUnionEntityStateLocation3D.choose(input, context) match {
        case PredUnionEntityStateLocation3D.Choice.NullValueEntityStateLocation3D => predUnionEntityStateLocation3D = NullValueEntityStateLocation3D.empty
        case PredUnionEntityStateLocation3D.Choice.LMCPEntityStateLocation3D => predUnionEntityStateLocation3D = LMCPEntityStateLocation3D.empty
        case _ => context.signalError(ERROR_PredUnionEntityStateLocation3D)
      }
      predUnionEntityStateLocation3D.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUnionEntityStateLocation3D.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjectEntityStateLocation3D)
      }
    }

  }

  object NullValuePayloadState {

    val maxSize: Z = z"8"

    def empty: MNullValuePayloadState = {
      return MNullValuePayloadState(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValuePayloadState] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValuePayloadState]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValuePayloadState(
    val nullValuePayloadState: U8
  ) extends PredUnionPayloadState {

    @strictpure def toMutable: MNullValuePayloadState = MNullValuePayloadState(nullValuePayloadState)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValuePayloadState(
    var nullValuePayloadState: U8
  ) extends MPredUnionPayloadState {

    @strictpure def toImmutable: NullValuePayloadState = NullValuePayloadState(nullValuePayloadState)

    def wellFormed: Z = {

      if (nullValuePayloadState != u8"0") {
        return ERROR_NullValuePayloadState
      }

      // BEGIN USER CODE: NullValuePayloadState.wellFormed

      // END USER CODE: NullValuePayloadState.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValuePayloadState = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValuePayloadState)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValuePayloadState)
      }
    }

  }

  object NullValuePayloadStateParameter {

    val maxSize: Z = z"8"

    def empty: MNullValuePayloadStateParameter = {
      return MNullValuePayloadStateParameter(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValuePayloadStateParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValuePayloadStateParameter]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValuePayloadStateParameter(
    val nullValuePayloadStateParameter: U8
  ) extends PredUnionPayloadStateParameter {

    @strictpure def toMutable: MNullValuePayloadStateParameter = MNullValuePayloadStateParameter(nullValuePayloadStateParameter)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValuePayloadStateParameter(
    var nullValuePayloadStateParameter: U8
  ) extends MPredUnionPayloadStateParameter {

    @strictpure def toImmutable: NullValuePayloadStateParameter = NullValuePayloadStateParameter(nullValuePayloadStateParameter)

    def wellFormed: Z = {

      if (nullValuePayloadStateParameter != u8"0") {
        return ERROR_NullValuePayloadStateParameter
      }

      // BEGIN USER CODE: NullValuePayloadStateParameter.wellFormed

      // END USER CODE: NullValuePayloadStateParameter.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValuePayloadStateParameter = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValuePayloadStateParameter)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValuePayloadStateParameter)
      }
    }

  }

  object Key {

    val maxSize: Z = z"524296"

    def empty: MKey = {
      return MKey(u16"0", MSZ[U8]())
    }

    def decode(input: ISZ[B], context: Context): Option[Key] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[Key]() else Some(r.toImmutable)
    }

    def toMutableStringChars(s: ISZ[U8]): MSZ[U8] = {
      var r = MSZ[U8]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toImmutableStringChars(s: MSZ[U8]): ISZ[U8] = {
      var r = ISZ[U8]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }
  }

  @datatype class Key(
    val stringCharsSize: U16,
    val stringChars: ISZ[U8]
  ) {

    @strictpure def toMutable: MKey = MKey(stringCharsSize, Key.toMutableStringChars(stringChars))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(524296, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MKey(
    var stringCharsSize: U16,
    var stringChars: MSZ[U8]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: Key = Key(stringCharsSize, Key.toImmutableStringChars(stringChars))

    def wellFormed: Z = {

      if (stringChars.size > 65535) {
        return ERROR_Key_stringChars
      }

      val stringCharsSz = sizeOfStringChars(stringCharsSize)
      if (stringChars.size != stringCharsSz) {
        return ERROR_Key_stringChars
      }

      // BEGIN USER CODE: Key.wellFormed

      // END USER CODE: Key.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      stringCharsSize = Reader.IS.beU16(input, context)
      val stringCharsSz = sizeOfStringChars(stringCharsSize)
      if (stringCharsSz >= 0) {
        stringChars = MSZ.create(stringCharsSz, u8"0")
        for (i <- 0 until stringCharsSz) {
          val c = Reader.IS.bleU8(input, context)
          stringChars(i) = c
        }
      } else {
        context.signalError(ERROR_Key_stringChars)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, stringCharsSize)
      val stringCharsSz = sizeOfStringChars(stringCharsSize)
      if (stringCharsSz >= 0) {
        for (i <- 0 until stringCharsSz) {
          val c = stringChars(i)
          Writer.bleU8(output, context, c)
        }
      } else {
        context.signalError(ERROR_Key_stringChars)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_Key)
      }
    }

    def sizeOfStringChars(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object Value {

    val maxSize: Z = z"524296"

    def empty: MValue = {
      return MValue(u16"0", MSZ[U8]())
    }

    def decode(input: ISZ[B], context: Context): Option[Value] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[Value]() else Some(r.toImmutable)
    }

    def toMutableStringChars(s: ISZ[U8]): MSZ[U8] = {
      var r = MSZ[U8]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toImmutableStringChars(s: MSZ[U8]): ISZ[U8] = {
      var r = ISZ[U8]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }
  }

  @datatype class Value(
    val stringCharsSize: U16,
    val stringChars: ISZ[U8]
  ) {

    @strictpure def toMutable: MValue = MValue(stringCharsSize, Value.toMutableStringChars(stringChars))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(524296, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MValue(
    var stringCharsSize: U16,
    var stringChars: MSZ[U8]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: Value = Value(stringCharsSize, Value.toImmutableStringChars(stringChars))

    def wellFormed: Z = {

      if (stringChars.size > 65535) {
        return ERROR_Value_stringChars
      }

      val stringCharsSz = sizeOfStringChars(stringCharsSize)
      if (stringChars.size != stringCharsSz) {
        return ERROR_Value_stringChars
      }

      // BEGIN USER CODE: Value.wellFormed

      // END USER CODE: Value.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      stringCharsSize = Reader.IS.beU16(input, context)
      val stringCharsSz = sizeOfStringChars(stringCharsSize)
      if (stringCharsSz >= 0) {
        stringChars = MSZ.create(stringCharsSz, u8"0")
        for (i <- 0 until stringCharsSz) {
          val c = Reader.IS.bleU8(input, context)
          stringChars(i) = c
        }
      } else {
        context.signalError(ERROR_Value_stringChars)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, stringCharsSize)
      val stringCharsSz = sizeOfStringChars(stringCharsSize)
      if (stringCharsSz >= 0) {
        for (i <- 0 until stringCharsSz) {
          val c = stringChars(i)
          Writer.bleU8(output, context, c)
        }
      } else {
        context.signalError(ERROR_Value_stringChars)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_Value)
      }
    }

    def sizeOfStringChars(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object KeyValuePair {

    val maxSize: Z = z"1048592"

    def empty: MKeyValuePair = {
      return MKeyValuePair(Key.empty, Value.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[KeyValuePair] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[KeyValuePair]() else Some(r.toImmutable)
    }

  }

  @datatype class KeyValuePair(
    val key: Key,
    val value: Value
  ) {

    @strictpure def toMutable: MKeyValuePair = MKeyValuePair(key.toMutable, value.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048592, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MKeyValuePair(
    var key: MKey,
    var value: MValue
  ) extends Runtime.Composite {

    @strictpure def toImmutable: KeyValuePair = KeyValuePair(key.toImmutable, value.toImmutable)

    def wellFormed: Z = {

      val wfKey = key.wellFormed
      if (wfKey != 0) {
        return wfKey
      }

      val wfValue = value.wellFormed
      if (wfValue != 0) {
        return wfValue
      }

      // BEGIN USER CODE: KeyValuePair.wellFormed

      // END USER CODE: KeyValuePair.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      key.decode(input, context)
      value.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      key.encode(output, context)
      value.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_KeyValuePair)
      }
    }

  }

  object LMCPPayloadStateParameter {

    val maxSize: Z = z"1048712"

    def empty: MLMCPPayloadStateParameter = {
      return MLMCPPayloadStateParameter(u8"0", s64"0", u32"0", u16"0", KeyValuePair.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPPayloadStateParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPPayloadStateParameter]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPPayloadStateParameter(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val keyValuePair: KeyValuePair
  ) extends PredUnionPayloadStateParameter {

    @strictpure def toMutable: MLMCPPayloadStateParameter = MLMCPPayloadStateParameter(nonNullValue, seriesID, typeID, seriesVersion, keyValuePair.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048712, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPPayloadStateParameter(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var keyValuePair: MKeyValuePair
  ) extends MPredUnionPayloadStateParameter {

    @strictpure def toImmutable: LMCPPayloadStateParameter = LMCPPayloadStateParameter(nonNullValue, seriesID, typeID, seriesVersion, keyValuePair.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPPayloadStateParameter
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPPayloadStateParameter
      }

      if (typeID != u32"2") {
        return ERROR_LMCPPayloadStateParameter
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPPayloadStateParameter
      }

      val wfKeyValuePair = keyValuePair.wellFormed
      if (wfKeyValuePair != 0) {
        return wfKeyValuePair
      }

      // BEGIN USER CODE: LMCPPayloadStateParameter.wellFormed

      // END USER CODE: LMCPPayloadStateParameter.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      keyValuePair.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nonNullValue)
      Writer.beS64(output, context, seriesID)
      Writer.beU32(output, context, typeID)
      Writer.beU16(output, context, seriesVersion)
      keyValuePair.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPPayloadStateParameter)
      }
    }

  }

  @datatype trait PredUnionPayloadStateParameter {
    @strictpure def toMutable: MPredUnionPayloadStateParameter
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionPayloadStateParameter extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionPayloadStateParameter
  }

  object PredUnionPayloadStateParameter {

    val maxSize: Z = z"1048712"

    def empty: MPredUnionPayloadStateParameter = {
      return NullValuePayloadStateParameter.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionPayloadStateParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionPayloadStateParameter]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValuePayloadStateParameter
       'LMCPPayloadStateParameter
       'Error
    }

    def choose(input: ISZ[B], context: Context): Choice.Type = {
      {
        var ctx = context
        var hasError = F
        if (!hasError) {
          val temp = MSZ.create(1, u8"0")
          Reader.IS.beU8S(input, ctx, temp, 1)
          hasError = !(ctx.errorCode == 0 && temp == MSZ(u8"0"))
        }
        if (!hasError && ctx.errorCode == 0) {
          return Choice.NullValuePayloadStateParameter
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPPayloadStateParameter
        }
      }
      return Choice.Error
    }

  }

  object ObjectPayloadStateParameter {

    val maxSize: Z = z"1048712"

    def empty: MObjectPayloadStateParameter = {
      return MObjectPayloadStateParameter(NullValuePayloadStateParameter.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjectPayloadStateParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjectPayloadStateParameter]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjectPayloadStateParameter(
    val predUnionPayloadStateParameter: PredUnionPayloadStateParameter
  ) {

    @strictpure def toMutable: MObjectPayloadStateParameter = MObjectPayloadStateParameter(predUnionPayloadStateParameter.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048712, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjectPayloadStateParameter(
    var predUnionPayloadStateParameter: MPredUnionPayloadStateParameter
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjectPayloadStateParameter = ObjectPayloadStateParameter(predUnionPayloadStateParameter.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjectPayloadStateParameter.wellFormed

      // END USER CODE: ObjectPayloadStateParameter.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUnionPayloadStateParameter.choose(input, context) match {
        case PredUnionPayloadStateParameter.Choice.NullValuePayloadStateParameter => predUnionPayloadStateParameter = NullValuePayloadStateParameter.empty
        case PredUnionPayloadStateParameter.Choice.LMCPPayloadStateParameter => predUnionPayloadStateParameter = LMCPPayloadStateParameter.empty
        case _ => context.signalError(ERROR_PredUnionPayloadStateParameter)
      }
      predUnionPayloadStateParameter.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUnionPayloadStateParameter.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjectPayloadStateParameter)
      }
    }

  }

  object PayloadState {

    val maxSize: Z = z"8389776"

    def empty: MPayloadState = {
      return MPayloadState(s64"0", u16"0", MSZ[MObjectPayloadStateParameter]())
    }

    def decode(input: ISZ[B], context: Context): Option[PayloadState] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PayloadState]() else Some(r.toImmutable)
    }

    def toMutableParameters(s: ISZ[ObjectPayloadStateParameter]): MSZ[MObjectPayloadStateParameter] = {
      var r = MSZ[MObjectPayloadStateParameter]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableParameters(s: MSZ[MObjectPayloadStateParameter]): ISZ[ObjectPayloadStateParameter] = {
      var r = ISZ[ObjectPayloadStateParameter]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class PayloadState(
    val payloadID: S64,
    val parametersSize: U16,
    val parameters: ISZ[ObjectPayloadStateParameter]
  ) {

    @strictpure def toMutable: MPayloadState = MPayloadState(payloadID, parametersSize, PayloadState.toMutableParameters(parameters))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8389776, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPayloadState(
    var payloadID: S64,
    var parametersSize: U16,
    var parameters: MSZ[MObjectPayloadStateParameter]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PayloadState = PayloadState(payloadID, parametersSize, PayloadState.toImmutableParameters(parameters))

    def wellFormed: Z = {

      if (parameters.size > 8) {
        return ERROR_PayloadState_parameters
      }

      val parametersSz = sizeOfParameters(parametersSize)
      if (parameters.size != parametersSz) {
        return ERROR_PayloadState_parameters
      }

      // BEGIN USER CODE: PayloadState.wellFormed

      // END USER CODE: PayloadState.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      payloadID = Reader.IS.beS64(input, context)
      parametersSize = Reader.IS.beU16(input, context)
      val parametersSz = sizeOfParameters(parametersSize)
      if (parametersSz >= 0) {
        parameters = MSZ.create(parametersSz, ObjectPayloadStateParameter.empty)
        for (i <- 0 until parametersSz) {
          parameters(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_PayloadState_parameters)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beS64(output, context, payloadID)
      Writer.beU16(output, context, parametersSize)
      val parametersSz = sizeOfParameters(parametersSize)
      if (parametersSz >= 0) {
        for (i <- 0 until parametersSz) {
          parameters(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_PayloadState_parameters)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PayloadState)
      }
    }

    def sizeOfParameters(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object LMCPPayloadState {

    val maxSize: Z = z"8389896"

    def empty: MLMCPPayloadState = {
      return MLMCPPayloadState(u8"0", s64"0", u32"0", u16"0", PayloadState.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPPayloadState] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPPayloadState]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPPayloadState(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val payloadState: PayloadState
  ) extends PredUnionPayloadState {

    @strictpure def toMutable: MLMCPPayloadState = MLMCPPayloadState(nonNullValue, seriesID, typeID, seriesVersion, payloadState.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8389896, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPPayloadState(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var payloadState: MPayloadState
  ) extends MPredUnionPayloadState {

    @strictpure def toImmutable: LMCPPayloadState = LMCPPayloadState(nonNullValue, seriesID, typeID, seriesVersion, payloadState.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPPayloadState
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPPayloadState
      }

      if (typeID != u32"6") {
        return ERROR_LMCPPayloadState
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPPayloadState
      }

      val wfPayloadState = payloadState.wellFormed
      if (wfPayloadState != 0) {
        return wfPayloadState
      }

      // BEGIN USER CODE: LMCPPayloadState.wellFormed

      // END USER CODE: LMCPPayloadState.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      payloadState.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nonNullValue)
      Writer.beS64(output, context, seriesID)
      Writer.beU32(output, context, typeID)
      Writer.beU16(output, context, seriesVersion)
      payloadState.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPPayloadState)
      }
    }

  }

  @datatype trait PredUnionPayloadState {
    @strictpure def toMutable: MPredUnionPayloadState
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionPayloadState extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionPayloadState
  }

  object PredUnionPayloadState {

    val maxSize: Z = z"8389896"

    def empty: MPredUnionPayloadState = {
      return NullValuePayloadState.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionPayloadState] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionPayloadState]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValuePayloadState
       'LMCPPayloadState
       'Error
    }

    def choose(input: ISZ[B], context: Context): Choice.Type = {
      {
        var ctx = context
        var hasError = F
        if (!hasError) {
          val temp = MSZ.create(1, u8"0")
          Reader.IS.beU8S(input, ctx, temp, 1)
          hasError = !(ctx.errorCode == 0 && temp == MSZ(u8"0"))
        }
        if (!hasError && ctx.errorCode == 0) {
          return Choice.NullValuePayloadState
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPPayloadState
        }
      }
      return Choice.Error
    }

  }

  object ObjectPayloadState {

    val maxSize: Z = z"8389896"

    def empty: MObjectPayloadState = {
      return MObjectPayloadState(NullValuePayloadState.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjectPayloadState] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjectPayloadState]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjectPayloadState(
    val predUnionPayloadState: PredUnionPayloadState
  ) {

    @strictpure def toMutable: MObjectPayloadState = MObjectPayloadState(predUnionPayloadState.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8389896, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjectPayloadState(
    var predUnionPayloadState: MPredUnionPayloadState
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjectPayloadState = ObjectPayloadState(predUnionPayloadState.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjectPayloadState.wellFormed

      // END USER CODE: ObjectPayloadState.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUnionPayloadState.choose(input, context) match {
        case PredUnionPayloadState.Choice.NullValuePayloadState => predUnionPayloadState = NullValuePayloadState.empty
        case PredUnionPayloadState.Choice.LMCPPayloadState => predUnionPayloadState = LMCPPayloadState.empty
        case _ => context.signalError(ERROR_PredUnionPayloadState)
      }
      predUnionPayloadState.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUnionPayloadState.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjectPayloadState)
      }
    }

  }

  object NullValueEntityStateInfo {

    val maxSize: Z = z"8"

    def empty: MNullValueEntityStateInfo = {
      return MNullValueEntityStateInfo(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValueEntityStateInfo] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValueEntityStateInfo]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValueEntityStateInfo(
    val nullValueEntityStateInfo: U8
  ) extends PredUnionEntityStateInfo {

    @strictpure def toMutable: MNullValueEntityStateInfo = MNullValueEntityStateInfo(nullValueEntityStateInfo)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValueEntityStateInfo(
    var nullValueEntityStateInfo: U8
  ) extends MPredUnionEntityStateInfo {

    @strictpure def toImmutable: NullValueEntityStateInfo = NullValueEntityStateInfo(nullValueEntityStateInfo)

    def wellFormed: Z = {

      if (nullValueEntityStateInfo != u8"0") {
        return ERROR_NullValueEntityStateInfo
      }

      // BEGIN USER CODE: NullValueEntityStateInfo.wellFormed

      // END USER CODE: NullValueEntityStateInfo.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValueEntityStateInfo = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValueEntityStateInfo)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValueEntityStateInfo)
      }
    }

  }

  object LMCPEntityStateInfo {

    val maxSize: Z = z"1048712"

    def empty: MLMCPEntityStateInfo = {
      return MLMCPEntityStateInfo(u8"0", s64"0", u32"0", u16"0", KeyValuePair.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPEntityStateInfo] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPEntityStateInfo]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPEntityStateInfo(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val keyValuePair: KeyValuePair
  ) extends PredUnionEntityStateInfo {

    @strictpure def toMutable: MLMCPEntityStateInfo = MLMCPEntityStateInfo(nonNullValue, seriesID, typeID, seriesVersion, keyValuePair.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048712, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPEntityStateInfo(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var keyValuePair: MKeyValuePair
  ) extends MPredUnionEntityStateInfo {

    @strictpure def toImmutable: LMCPEntityStateInfo = LMCPEntityStateInfo(nonNullValue, seriesID, typeID, seriesVersion, keyValuePair.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPEntityStateInfo
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPEntityStateInfo
      }

      if (typeID != u32"2") {
        return ERROR_LMCPEntityStateInfo
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPEntityStateInfo
      }

      val wfKeyValuePair = keyValuePair.wellFormed
      if (wfKeyValuePair != 0) {
        return wfKeyValuePair
      }

      // BEGIN USER CODE: LMCPEntityStateInfo.wellFormed

      // END USER CODE: LMCPEntityStateInfo.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      keyValuePair.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nonNullValue)
      Writer.beS64(output, context, seriesID)
      Writer.beU32(output, context, typeID)
      Writer.beU16(output, context, seriesVersion)
      keyValuePair.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPEntityStateInfo)
      }
    }

  }

  @datatype trait PredUnionEntityStateInfo {
    @strictpure def toMutable: MPredUnionEntityStateInfo
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionEntityStateInfo extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionEntityStateInfo
  }

  object PredUnionEntityStateInfo {

    val maxSize: Z = z"1048712"

    def empty: MPredUnionEntityStateInfo = {
      return NullValueEntityStateInfo.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionEntityStateInfo] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionEntityStateInfo]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValueEntityStateInfo
       'LMCPEntityStateInfo
       'Error
    }

    def choose(input: ISZ[B], context: Context): Choice.Type = {
      {
        var ctx = context
        var hasError = F
        if (!hasError) {
          val temp = MSZ.create(1, u8"0")
          Reader.IS.beU8S(input, ctx, temp, 1)
          hasError = !(ctx.errorCode == 0 && temp == MSZ(u8"0"))
        }
        if (!hasError && ctx.errorCode == 0) {
          return Choice.NullValueEntityStateInfo
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPEntityStateInfo
        }
      }
      return Choice.Error
    }

  }

  object ObjectEntityStateInfo {

    val maxSize: Z = z"1048712"

    def empty: MObjectEntityStateInfo = {
      return MObjectEntityStateInfo(NullValueEntityStateInfo.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjectEntityStateInfo] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjectEntityStateInfo]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjectEntityStateInfo(
    val predUnionEntityStateInfo: PredUnionEntityStateInfo
  ) {

    @strictpure def toMutable: MObjectEntityStateInfo = MObjectEntityStateInfo(predUnionEntityStateInfo.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048712, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjectEntityStateInfo(
    var predUnionEntityStateInfo: MPredUnionEntityStateInfo
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjectEntityStateInfo = ObjectEntityStateInfo(predUnionEntityStateInfo.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjectEntityStateInfo.wellFormed

      // END USER CODE: ObjectEntityStateInfo.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUnionEntityStateInfo.choose(input, context) match {
        case PredUnionEntityStateInfo.Choice.NullValueEntityStateInfo => predUnionEntityStateInfo = NullValueEntityStateInfo.empty
        case PredUnionEntityStateInfo.Choice.LMCPEntityStateInfo => predUnionEntityStateInfo = LMCPEntityStateInfo.empty
        case _ => context.signalError(ERROR_PredUnionEntityStateInfo)
      }
      predUnionEntityStateInfo.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUnionEntityStateInfo.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjectEntityStateInfo)
      }
    }

  }

  object EntityState {

    val maxSize: Z = z"100679624"

    def empty: MEntityState = {
      return MEntityState(s64"0", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, ObjectEntityStateLocation3D.empty, 0.0f, 0.0f, u16"0", MSZ[MObjectPayloadState](), s64"0", s64"0", s32"0", u16"0", MSZ[S64](), s64"0", u16"0", MSZ[MObjectEntityStateInfo]())
    }

    def decode(input: ISZ[B], context: Context): Option[EntityState] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[EntityState]() else Some(r.toImmutable)
    }

    def toMutablePayloadStateList(s: ISZ[ObjectPayloadState]): MSZ[MObjectPayloadState] = {
      var r = MSZ[MObjectPayloadState]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutablePayloadStateList(s: MSZ[MObjectPayloadState]): ISZ[ObjectPayloadState] = {
      var r = ISZ[ObjectPayloadState]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }

    def toMutableAssociatedTasks(s: ISZ[S64]): MSZ[S64] = {
      var r = MSZ[S64]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toImmutableAssociatedTasks(s: MSZ[S64]): ISZ[S64] = {
      var r = ISZ[S64]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toMutableInfo(s: ISZ[ObjectEntityStateInfo]): MSZ[MObjectEntityStateInfo] = {
      var r = MSZ[MObjectEntityStateInfo]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableInfo(s: MSZ[MObjectEntityStateInfo]): ISZ[ObjectEntityStateInfo] = {
      var r = ISZ[ObjectEntityStateInfo]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class EntityState(
    val id: S64,
    val u: F32,
    val v: F32,
    val w: F32,
    val udot: F32,
    val vdot: F32,
    val wdot: F32,
    val heading: F32,
    val pitch: F32,
    val roll: F32,
    val p: F32,
    val q: F32,
    val r: F32,
    val course: F32,
    val groundspeed: F32,
    val objectEntityStateLocation3D: ObjectEntityStateLocation3D,
    val energyAvailable: F32,
    val actualEnergyRate: F32,
    val payloadStateListSize: U16,
    val payloadStateList: ISZ[ObjectPayloadState],
    val currentWaypoint: S64,
    val currentCommand: S64,
    val mode: S32,
    val associatedTasksSize: U16,
    val associatedTasks: ISZ[S64],
    val time: S64,
    val infoSize: U16,
    val info: ISZ[ObjectEntityStateInfo]
  ) {

    @strictpure def toMutable: MEntityState = MEntityState(id, u, v, w, udot, vdot, wdot, heading, pitch, roll, p, q, r, course, groundspeed, objectEntityStateLocation3D.toMutable, energyAvailable, actualEnergyRate, payloadStateListSize, EntityState.toMutablePayloadStateList(payloadStateList), currentWaypoint, currentCommand, mode, associatedTasksSize, EntityState.toMutableAssociatedTasks(associatedTasks), time, infoSize, EntityState.toMutableInfo(info))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(100679624, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MEntityState(
    var id: S64,
    var u: F32,
    var v: F32,
    var w: F32,
    var udot: F32,
    var vdot: F32,
    var wdot: F32,
    var heading: F32,
    var pitch: F32,
    var roll: F32,
    var p: F32,
    var q: F32,
    var r: F32,
    var course: F32,
    var groundspeed: F32,
    var objectEntityStateLocation3D: MObjectEntityStateLocation3D,
    var energyAvailable: F32,
    var actualEnergyRate: F32,
    var payloadStateListSize: U16,
    var payloadStateList: MSZ[MObjectPayloadState],
    var currentWaypoint: S64,
    var currentCommand: S64,
    var mode: S32,
    var associatedTasksSize: U16,
    var associatedTasks: MSZ[S64],
    var time: S64,
    var infoSize: U16,
    var info: MSZ[MObjectEntityStateInfo]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: EntityState = EntityState(id, u, v, w, udot, vdot, wdot, heading, pitch, roll, p, q, r, course, groundspeed, objectEntityStateLocation3D.toImmutable, energyAvailable, actualEnergyRate, payloadStateListSize, EntityState.toImmutablePayloadStateList(payloadStateList), currentWaypoint, currentCommand, mode, associatedTasksSize, EntityState.toImmutableAssociatedTasks(associatedTasks), time, infoSize, EntityState.toImmutableInfo(info))

    def wellFormed: Z = {

      val wfObjectEntityStateLocation3D = objectEntityStateLocation3D.wellFormed
      if (wfObjectEntityStateLocation3D != 0) {
        return wfObjectEntityStateLocation3D
      }

      if (payloadStateList.size > 8) {
        return ERROR_EntityState_payloadStateList
      }

      val payloadStateListSz = sizeOfPayloadStateList(payloadStateListSize)
      if (payloadStateList.size != payloadStateListSz) {
        return ERROR_EntityState_payloadStateList
      }

      if (associatedTasks.size > 8) {
        return ERROR_EntityState_associatedTasks
      }

      val associatedTasksSz = sizeOfAssociatedTasks(associatedTasksSize)
      if (associatedTasks.size != associatedTasksSz) {
        return ERROR_EntityState_associatedTasks
      }

      if (info.size > 32) {
        return ERROR_EntityState_info
      }

      val infoSz = sizeOfInfo(infoSize)
      if (info.size != infoSz) {
        return ERROR_EntityState_info
      }

      // BEGIN USER CODE: EntityState.wellFormed

      // END USER CODE: EntityState.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      id = Reader.IS.beS64(input, context)
      u = Reader.IS.beF32(input, context)
      v = Reader.IS.beF32(input, context)
      w = Reader.IS.beF32(input, context)
      udot = Reader.IS.beF32(input, context)
      vdot = Reader.IS.beF32(input, context)
      wdot = Reader.IS.beF32(input, context)
      heading = Reader.IS.beF32(input, context)
      pitch = Reader.IS.beF32(input, context)
      roll = Reader.IS.beF32(input, context)
      p = Reader.IS.beF32(input, context)
      q = Reader.IS.beF32(input, context)
      r = Reader.IS.beF32(input, context)
      course = Reader.IS.beF32(input, context)
      groundspeed = Reader.IS.beF32(input, context)
      objectEntityStateLocation3D.decode(input, context)
      energyAvailable = Reader.IS.beF32(input, context)
      actualEnergyRate = Reader.IS.beF32(input, context)
      payloadStateListSize = Reader.IS.beU16(input, context)
      val payloadStateListSz = sizeOfPayloadStateList(payloadStateListSize)
      if (payloadStateListSz >= 0) {
        payloadStateList = MSZ.create(payloadStateListSz, ObjectPayloadState.empty)
        for (i <- 0 until payloadStateListSz) {
          payloadStateList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_EntityState_payloadStateList)
      }
      currentWaypoint = Reader.IS.beS64(input, context)
      currentCommand = Reader.IS.beS64(input, context)
      mode = Reader.IS.beS32(input, context)
      associatedTasksSize = Reader.IS.beU16(input, context)
      val associatedTasksSz = sizeOfAssociatedTasks(associatedTasksSize)
      if (associatedTasksSz >= 0) {
        associatedTasks = MSZ.create(associatedTasksSz, s64"0")
        for (i <- 0 until associatedTasksSz) {
          val id = Reader.IS.beS64(input, context)
          associatedTasks(i) = id
        }
      } else {
        context.signalError(ERROR_EntityState_associatedTasks)
      }
      time = Reader.IS.beS64(input, context)
      infoSize = Reader.IS.beU16(input, context)
      val infoSz = sizeOfInfo(infoSize)
      if (infoSz >= 0) {
        info = MSZ.create(infoSz, ObjectEntityStateInfo.empty)
        for (i <- 0 until infoSz) {
          info(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_EntityState_info)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beS64(output, context, id)
      Writer.beF32(output, context, u)
      Writer.beF32(output, context, v)
      Writer.beF32(output, context, w)
      Writer.beF32(output, context, udot)
      Writer.beF32(output, context, vdot)
      Writer.beF32(output, context, wdot)
      Writer.beF32(output, context, heading)
      Writer.beF32(output, context, pitch)
      Writer.beF32(output, context, roll)
      Writer.beF32(output, context, p)
      Writer.beF32(output, context, q)
      Writer.beF32(output, context, r)
      Writer.beF32(output, context, course)
      Writer.beF32(output, context, groundspeed)
      objectEntityStateLocation3D.encode(output, context)
      Writer.beF32(output, context, energyAvailable)
      Writer.beF32(output, context, actualEnergyRate)
      Writer.beU16(output, context, payloadStateListSize)
      val payloadStateListSz = sizeOfPayloadStateList(payloadStateListSize)
      if (payloadStateListSz >= 0) {
        for (i <- 0 until payloadStateListSz) {
          payloadStateList(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_EntityState_payloadStateList)
      }
      Writer.beS64(output, context, currentWaypoint)
      Writer.beS64(output, context, currentCommand)
      Writer.beS32(output, context, mode)
      Writer.beU16(output, context, associatedTasksSize)
      val associatedTasksSz = sizeOfAssociatedTasks(associatedTasksSize)
      if (associatedTasksSz >= 0) {
        for (i <- 0 until associatedTasksSz) {
          val id = associatedTasks(i)
          Writer.beS64(output, context, id)
        }
      } else {
        context.signalError(ERROR_EntityState_associatedTasks)
      }
      Writer.beS64(output, context, time)
      Writer.beU16(output, context, infoSize)
      val infoSz = sizeOfInfo(infoSize)
      if (infoSz >= 0) {
        for (i <- 0 until infoSz) {
          info(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_EntityState_info)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_EntityState)
      }
    }

    def sizeOfPayloadStateList(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }

    def sizeOfAssociatedTasks(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }

    def sizeOfInfo(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object AirVehicleState {

    val maxSize: Z = z"100679752"

    def empty: MAirVehicleState = {
      return MAirVehicleState(EntityState.empty, 0.0f, 0.0f, 0.0f, 0.0f)
    }

    def decode(input: ISZ[B], context: Context): Option[AirVehicleState] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[AirVehicleState]() else Some(r.toImmutable)
    }

  }

  @datatype class AirVehicleState(
    val entityState: EntityState,
    val airspeed: F32,
    val verticalSpeed: F32,
    val windSpeed: F32,
    val windDirection: F32
  ) extends LMCPObject {

    @strictpure def toMutable: MAirVehicleState = MAirVehicleState(entityState.toMutable, airspeed, verticalSpeed, windSpeed, windDirection)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(100679752, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MAirVehicleState(
    var entityState: MEntityState,
    var airspeed: F32,
    var verticalSpeed: F32,
    var windSpeed: F32,
    var windDirection: F32
  ) extends MLMCPObject {

    @strictpure def toImmutable: AirVehicleState = AirVehicleState(entityState.toImmutable, airspeed, verticalSpeed, windSpeed, windDirection)

    def wellFormed: Z = {

      val wfEntityState = entityState.wellFormed
      if (wfEntityState != 0) {
        return wfEntityState
      }

      // BEGIN USER CODE: AirVehicleState.wellFormed

      // END USER CODE: AirVehicleState.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      entityState.decode(input, context)
      airspeed = Reader.IS.beF32(input, context)
      verticalSpeed = Reader.IS.beF32(input, context)
      windSpeed = Reader.IS.beF32(input, context)
      windDirection = Reader.IS.beF32(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      entityState.encode(output, context)
      Writer.beF32(output, context, airspeed)
      Writer.beF32(output, context, verticalSpeed)
      Writer.beF32(output, context, windSpeed)
      Writer.beF32(output, context, windDirection)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_AirVehicleState)
      }
    }

  }

  object Label {

    val maxSize: Z = z"524296"

    def empty: MLabel = {
      return MLabel(u16"0", MSZ[U8]())
    }

    def decode(input: ISZ[B], context: Context): Option[Label] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[Label]() else Some(r.toImmutable)
    }

    def toMutableStringChars(s: ISZ[U8]): MSZ[U8] = {
      var r = MSZ[U8]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toImmutableStringChars(s: MSZ[U8]): ISZ[U8] = {
      var r = ISZ[U8]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }
  }

  @datatype class Label(
    val stringCharsSize: U16,
    val stringChars: ISZ[U8]
  ) {

    @strictpure def toMutable: MLabel = MLabel(stringCharsSize, Label.toMutableStringChars(stringChars))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(524296, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLabel(
    var stringCharsSize: U16,
    var stringChars: MSZ[U8]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: Label = Label(stringCharsSize, Label.toImmutableStringChars(stringChars))

    def wellFormed: Z = {

      if (stringChars.size > 65535) {
        return ERROR_Label_stringChars
      }

      val stringCharsSz = sizeOfStringChars(stringCharsSize)
      if (stringChars.size != stringCharsSz) {
        return ERROR_Label_stringChars
      }

      // BEGIN USER CODE: Label.wellFormed

      // END USER CODE: Label.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      stringCharsSize = Reader.IS.beU16(input, context)
      val stringCharsSz = sizeOfStringChars(stringCharsSize)
      if (stringCharsSz >= 0) {
        stringChars = MSZ.create(stringCharsSz, u8"0")
        for (i <- 0 until stringCharsSz) {
          val c = Reader.IS.bleU8(input, context)
          stringChars(i) = c
        }
      } else {
        context.signalError(ERROR_Label_stringChars)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, stringCharsSize)
      val stringCharsSz = sizeOfStringChars(stringCharsSize)
      if (stringCharsSz >= 0) {
        for (i <- 0 until stringCharsSz) {
          val c = stringChars(i)
          Writer.bleU8(output, context, c)
        }
      } else {
        context.signalError(ERROR_Label_stringChars)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_Label)
      }
    }

    def sizeOfStringChars(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object NullValueTaskParameter {

    val maxSize: Z = z"8"

    def empty: MNullValueTaskParameter = {
      return MNullValueTaskParameter(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValueTaskParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValueTaskParameter]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValueTaskParameter(
    val nullValueTaskParameter: U8
  ) extends PredUnionTaskParameter {

    @strictpure def toMutable: MNullValueTaskParameter = MNullValueTaskParameter(nullValueTaskParameter)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValueTaskParameter(
    var nullValueTaskParameter: U8
  ) extends MPredUnionTaskParameter {

    @strictpure def toImmutable: NullValueTaskParameter = NullValueTaskParameter(nullValueTaskParameter)

    def wellFormed: Z = {

      if (nullValueTaskParameter != u8"0") {
        return ERROR_NullValueTaskParameter
      }

      // BEGIN USER CODE: NullValueTaskParameter.wellFormed

      // END USER CODE: NullValueTaskParameter.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValueTaskParameter = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValueTaskParameter)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValueTaskParameter)
      }
    }

  }

  object LMCPTaskParameter {

    val maxSize: Z = z"1048712"

    def empty: MLMCPTaskParameter = {
      return MLMCPTaskParameter(u8"0", s64"0", u32"0", u16"0", KeyValuePair.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPTaskParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPTaskParameter]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPTaskParameter(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val keyValuePair: KeyValuePair
  ) extends PredUnionTaskParameter {

    @strictpure def toMutable: MLMCPTaskParameter = MLMCPTaskParameter(nonNullValue, seriesID, typeID, seriesVersion, keyValuePair.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048712, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPTaskParameter(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var keyValuePair: MKeyValuePair
  ) extends MPredUnionTaskParameter {

    @strictpure def toImmutable: LMCPTaskParameter = LMCPTaskParameter(nonNullValue, seriesID, typeID, seriesVersion, keyValuePair.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPTaskParameter
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPTaskParameter
      }

      if (typeID != u32"2") {
        return ERROR_LMCPTaskParameter
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPTaskParameter
      }

      val wfKeyValuePair = keyValuePair.wellFormed
      if (wfKeyValuePair != 0) {
        return wfKeyValuePair
      }

      // BEGIN USER CODE: LMCPTaskParameter.wellFormed

      // END USER CODE: LMCPTaskParameter.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      keyValuePair.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nonNullValue)
      Writer.beS64(output, context, seriesID)
      Writer.beU32(output, context, typeID)
      Writer.beU16(output, context, seriesVersion)
      keyValuePair.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPTaskParameter)
      }
    }

  }

  @datatype trait PredUnionTaskParameter {
    @strictpure def toMutable: MPredUnionTaskParameter
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionTaskParameter extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionTaskParameter
  }

  object PredUnionTaskParameter {

    val maxSize: Z = z"1048712"

    def empty: MPredUnionTaskParameter = {
      return NullValueTaskParameter.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionTaskParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionTaskParameter]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValueTaskParameter
       'LMCPTaskParameter
       'Error
    }

    def choose(input: ISZ[B], context: Context): Choice.Type = {
      {
        var ctx = context
        var hasError = F
        if (!hasError) {
          val temp = MSZ.create(1, u8"0")
          Reader.IS.beU8S(input, ctx, temp, 1)
          hasError = !(ctx.errorCode == 0 && temp == MSZ(u8"0"))
        }
        if (!hasError && ctx.errorCode == 0) {
          return Choice.NullValueTaskParameter
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPTaskParameter
        }
      }
      return Choice.Error
    }

  }

  object ObjectTaskParameter {

    val maxSize: Z = z"1048712"

    def empty: MObjectTaskParameter = {
      return MObjectTaskParameter(NullValueTaskParameter.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjectTaskParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjectTaskParameter]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjectTaskParameter(
    val predUnionTaskParameter: PredUnionTaskParameter
  ) {

    @strictpure def toMutable: MObjectTaskParameter = MObjectTaskParameter(predUnionTaskParameter.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048712, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjectTaskParameter(
    var predUnionTaskParameter: MPredUnionTaskParameter
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjectTaskParameter = ObjectTaskParameter(predUnionTaskParameter.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjectTaskParameter.wellFormed

      // END USER CODE: ObjectTaskParameter.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUnionTaskParameter.choose(input, context) match {
        case PredUnionTaskParameter.Choice.NullValueTaskParameter => predUnionTaskParameter = NullValueTaskParameter.empty
        case PredUnionTaskParameter.Choice.LMCPTaskParameter => predUnionTaskParameter = LMCPTaskParameter.empty
        case _ => context.signalError(ERROR_PredUnionTaskParameter)
      }
      predUnionTaskParameter.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUnionTaskParameter.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjectTaskParameter)
      }
    }

  }

  object Task {

    val maxSize: Z = z"8916184"

    def empty: MTask = {
      return MTask(s64"0", Label.empty, u16"0", MSZ[S64](), 0.0f, u16"0", MSZ[MObjectTaskParameter](), s8"0", u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[Task] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[Task]() else Some(r.toImmutable)
    }

    def toMutableEligibleEntities(s: ISZ[S64]): MSZ[S64] = {
      var r = MSZ[S64]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toImmutableEligibleEntities(s: MSZ[S64]): ISZ[S64] = {
      var r = ISZ[S64]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toMutableParameters(s: ISZ[ObjectTaskParameter]): MSZ[MObjectTaskParameter] = {
      var r = MSZ[MObjectTaskParameter]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableParameters(s: MSZ[MObjectTaskParameter]): ISZ[ObjectTaskParameter] = {
      var r = ISZ[ObjectTaskParameter]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class Task(
    val taskID: S64,
    val label: Label,
    val eligibleEntitiesSize: U16,
    val eligibleEntities: ISZ[S64],
    val revisitRate: F32,
    val parametersSize: U16,
    val parameters: ISZ[ObjectTaskParameter],
    val priority: S8,
    val required: U8
  ) {

    @strictpure def toMutable: MTask = MTask(taskID, label.toMutable, eligibleEntitiesSize, Task.toMutableEligibleEntities(eligibleEntities), revisitRate, parametersSize, Task.toMutableParameters(parameters), priority, required)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8916184, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MTask(
    var taskID: S64,
    var label: MLabel,
    var eligibleEntitiesSize: U16,
    var eligibleEntities: MSZ[S64],
    var revisitRate: F32,
    var parametersSize: U16,
    var parameters: MSZ[MObjectTaskParameter],
    var priority: S8,
    var required: U8
  ) extends Runtime.Composite {

    @strictpure def toImmutable: Task = Task(taskID, label.toImmutable, eligibleEntitiesSize, Task.toImmutableEligibleEntities(eligibleEntities), revisitRate, parametersSize, Task.toImmutableParameters(parameters), priority, required)

    def wellFormed: Z = {

      val wfLabel = label.wellFormed
      if (wfLabel != 0) {
        return wfLabel
      }

      if (eligibleEntities.size > 32) {
        return ERROR_Task_eligibleEntities
      }

      val eligibleEntitiesSz = sizeOfEligibleEntities(eligibleEntitiesSize)
      if (eligibleEntities.size != eligibleEntitiesSz) {
        return ERROR_Task_eligibleEntities
      }

      if (parameters.size > 8) {
        return ERROR_Task_parameters
      }

      val parametersSz = sizeOfParameters(parametersSize)
      if (parameters.size != parametersSz) {
        return ERROR_Task_parameters
      }

      // BEGIN USER CODE: Task.wellFormed

      // END USER CODE: Task.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      taskID = Reader.IS.beS64(input, context)
      label.decode(input, context)
      eligibleEntitiesSize = Reader.IS.beU16(input, context)
      val eligibleEntitiesSz = sizeOfEligibleEntities(eligibleEntitiesSize)
      if (eligibleEntitiesSz >= 0) {
        eligibleEntities = MSZ.create(eligibleEntitiesSz, s64"0")
        for (i <- 0 until eligibleEntitiesSz) {
          val entity = Reader.IS.beS64(input, context)
          eligibleEntities(i) = entity
        }
      } else {
        context.signalError(ERROR_Task_eligibleEntities)
      }
      revisitRate = Reader.IS.beF32(input, context)
      parametersSize = Reader.IS.beU16(input, context)
      val parametersSz = sizeOfParameters(parametersSize)
      if (parametersSz >= 0) {
        parameters = MSZ.create(parametersSz, ObjectTaskParameter.empty)
        for (i <- 0 until parametersSz) {
          parameters(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_Task_parameters)
      }
      priority = Reader.IS.bleS8(input, context)
      required = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beS64(output, context, taskID)
      label.encode(output, context)
      Writer.beU16(output, context, eligibleEntitiesSize)
      val eligibleEntitiesSz = sizeOfEligibleEntities(eligibleEntitiesSize)
      if (eligibleEntitiesSz >= 0) {
        for (i <- 0 until eligibleEntitiesSz) {
          val entity = eligibleEntities(i)
          Writer.beS64(output, context, entity)
        }
      } else {
        context.signalError(ERROR_Task_eligibleEntities)
      }
      Writer.beF32(output, context, revisitRate)
      Writer.beU16(output, context, parametersSize)
      val parametersSz = sizeOfParameters(parametersSize)
      if (parametersSz >= 0) {
        for (i <- 0 until parametersSz) {
          parameters(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_Task_parameters)
      }
      Writer.bleS8(output, context, priority)
      Writer.bleU8(output, context, required)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_Task)
      }
    }

    def sizeOfEligibleEntities(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }

    def sizeOfParameters(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object SearchTask {

    val maxSize: Z = z"8916552"

    def empty: MSearchTask = {
      return MSearchTask(Task.empty, u16"0", MSZ[S32](), s64"0", 0.0f)
    }

    def decode(input: ISZ[B], context: Context): Option[SearchTask] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[SearchTask]() else Some(r.toImmutable)
    }

    def toMutableDesiredWavelengthBands(s: ISZ[S32]): MSZ[S32] = {
      var r = MSZ[S32]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toImmutableDesiredWavelengthBands(s: MSZ[S32]): ISZ[S32] = {
      var r = ISZ[S32]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }
  }

  @datatype class SearchTask(
    val task: Task,
    val desiredWavelengthBandsSize: U16,
    val desiredWavelengthBands: ISZ[S32],
    val dwellTime: S64,
    val groundSampleDistance: F32
  ) {

    @strictpure def toMutable: MSearchTask = MSearchTask(task.toMutable, desiredWavelengthBandsSize, SearchTask.toMutableDesiredWavelengthBands(desiredWavelengthBands), dwellTime, groundSampleDistance)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8916552, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MSearchTask(
    var task: MTask,
    var desiredWavelengthBandsSize: U16,
    var desiredWavelengthBands: MSZ[S32],
    var dwellTime: S64,
    var groundSampleDistance: F32
  ) extends Runtime.Composite {

    @strictpure def toImmutable: SearchTask = SearchTask(task.toImmutable, desiredWavelengthBandsSize, SearchTask.toImmutableDesiredWavelengthBands(desiredWavelengthBands), dwellTime, groundSampleDistance)

    def wellFormed: Z = {

      val wfTask = task.wellFormed
      if (wfTask != 0) {
        return wfTask
      }

      if (desiredWavelengthBands.size > 8) {
        return ERROR_SearchTask_desiredWavelengthBands
      }

      val desiredWavelengthBandsSz = sizeOfDesiredWavelengthBands(desiredWavelengthBandsSize)
      if (desiredWavelengthBands.size != desiredWavelengthBandsSz) {
        return ERROR_SearchTask_desiredWavelengthBands
      }

      // BEGIN USER CODE: SearchTask.wellFormed

      // END USER CODE: SearchTask.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      task.decode(input, context)
      desiredWavelengthBandsSize = Reader.IS.beU16(input, context)
      val desiredWavelengthBandsSz = sizeOfDesiredWavelengthBands(desiredWavelengthBandsSize)
      if (desiredWavelengthBandsSz >= 0) {
        desiredWavelengthBands = MSZ.create(desiredWavelengthBandsSz, s32"0")
        for (i <- 0 until desiredWavelengthBandsSz) {
          val band = Reader.IS.beS32(input, context)
          desiredWavelengthBands(i) = band
        }
      } else {
        context.signalError(ERROR_SearchTask_desiredWavelengthBands)
      }
      dwellTime = Reader.IS.beS64(input, context)
      groundSampleDistance = Reader.IS.beF32(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      task.encode(output, context)
      Writer.beU16(output, context, desiredWavelengthBandsSize)
      val desiredWavelengthBandsSz = sizeOfDesiredWavelengthBands(desiredWavelengthBandsSize)
      if (desiredWavelengthBandsSz >= 0) {
        for (i <- 0 until desiredWavelengthBandsSz) {
          val band = desiredWavelengthBands(i)
          Writer.beS32(output, context, band)
        }
      } else {
        context.signalError(ERROR_SearchTask_desiredWavelengthBands)
      }
      Writer.beS64(output, context, dwellTime)
      Writer.beF32(output, context, groundSampleDistance)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_SearchTask)
      }
    }

    def sizeOfDesiredWavelengthBands(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object NullValuePoint {

    val maxSize: Z = z"8"

    def empty: MNullValuePoint = {
      return MNullValuePoint(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValuePoint] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValuePoint]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValuePoint(
    val nullValuePoint: U8
  ) extends PredUnionPoint {

    @strictpure def toMutable: MNullValuePoint = MNullValuePoint(nullValuePoint)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValuePoint(
    var nullValuePoint: U8
  ) extends MPredUnionPoint {

    @strictpure def toImmutable: NullValuePoint = NullValuePoint(nullValuePoint)

    def wellFormed: Z = {

      if (nullValuePoint != u8"0") {
        return ERROR_NullValuePoint
      }

      // BEGIN USER CODE: NullValuePoint.wellFormed

      // END USER CODE: NullValuePoint.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValuePoint = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValuePoint)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValuePoint)
      }
    }

  }

  object LMCPPoint {

    val maxSize: Z = z"312"

    def empty: MLMCPPoint = {
      return MLMCPPoint(u8"0", s64"0", u32"0", u16"0", Location3D.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPPoint] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPPoint]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPPoint(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val location3D: Location3D
  ) extends PredUnionPoint {

    @strictpure def toMutable: MLMCPPoint = MLMCPPoint(nonNullValue, seriesID, typeID, seriesVersion, location3D.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(312, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPPoint(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var location3D: MLocation3D
  ) extends MPredUnionPoint {

    @strictpure def toImmutable: LMCPPoint = LMCPPoint(nonNullValue, seriesID, typeID, seriesVersion, location3D.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPPoint
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPPoint
      }

      if (typeID != u32"3") {
        return ERROR_LMCPPoint
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPPoint
      }

      val wfLocation3D = location3D.wellFormed
      if (wfLocation3D != 0) {
        return wfLocation3D
      }

      // BEGIN USER CODE: LMCPPoint.wellFormed

      // END USER CODE: LMCPPoint.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      location3D.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nonNullValue)
      Writer.beS64(output, context, seriesID)
      Writer.beU32(output, context, typeID)
      Writer.beU16(output, context, seriesVersion)
      location3D.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPPoint)
      }
    }

  }

  @datatype trait PredUnionPoint {
    @strictpure def toMutable: MPredUnionPoint
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionPoint extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionPoint
  }

  object PredUnionPoint {

    val maxSize: Z = z"312"

    def empty: MPredUnionPoint = {
      return NullValuePoint.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionPoint] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionPoint]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValuePoint
       'LMCPPoint
       'Error
    }

    def choose(input: ISZ[B], context: Context): Choice.Type = {
      {
        var ctx = context
        var hasError = F
        if (!hasError) {
          val temp = MSZ.create(1, u8"0")
          Reader.IS.beU8S(input, ctx, temp, 1)
          hasError = !(ctx.errorCode == 0 && temp == MSZ(u8"0"))
        }
        if (!hasError && ctx.errorCode == 0) {
          return Choice.NullValuePoint
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPPoint
        }
      }
      return Choice.Error
    }

  }

  object ObjectPoint {

    val maxSize: Z = z"312"

    def empty: MObjectPoint = {
      return MObjectPoint(NullValuePoint.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjectPoint] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjectPoint]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjectPoint(
    val predUnionPoint: PredUnionPoint
  ) {

    @strictpure def toMutable: MObjectPoint = MObjectPoint(predUnionPoint.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(312, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjectPoint(
    var predUnionPoint: MPredUnionPoint
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjectPoint = ObjectPoint(predUnionPoint.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjectPoint.wellFormed

      // END USER CODE: ObjectPoint.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUnionPoint.choose(input, context) match {
        case PredUnionPoint.Choice.NullValuePoint => predUnionPoint = NullValuePoint.empty
        case PredUnionPoint.Choice.LMCPPoint => predUnionPoint = LMCPPoint.empty
        case _ => context.signalError(ERROR_PredUnionPoint)
      }
      predUnionPoint.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUnionPoint.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjectPoint)
      }
    }

  }

  object NullValueViewAngle {

    val maxSize: Z = z"8"

    def empty: MNullValueViewAngle = {
      return MNullValueViewAngle(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValueViewAngle] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValueViewAngle]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValueViewAngle(
    val nullValueViewAngle: U8
  ) extends PredUnionViewAngle {

    @strictpure def toMutable: MNullValueViewAngle = MNullValueViewAngle(nullValueViewAngle)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValueViewAngle(
    var nullValueViewAngle: U8
  ) extends MPredUnionViewAngle {

    @strictpure def toImmutable: NullValueViewAngle = NullValueViewAngle(nullValueViewAngle)

    def wellFormed: Z = {

      if (nullValueViewAngle != u8"0") {
        return ERROR_NullValueViewAngle
      }

      // BEGIN USER CODE: NullValueViewAngle.wellFormed

      // END USER CODE: NullValueViewAngle.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValueViewAngle = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValueViewAngle)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValueViewAngle)
      }
    }

  }

  object Wedge {

    val maxSize: Z = z"128"

    def empty: MWedge = {
      return MWedge(0.0f, 0.0f, 0.0f, 0.0f)
    }

    def decode(input: ISZ[B], context: Context): Option[Wedge] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[Wedge]() else Some(r.toImmutable)
    }

  }

  @datatype class Wedge(
    val azimuthCenterline: F32,
    val verticalCenterline: F32,
    val azimuthExtent: F32,
    val verticalExtent: F32
  ) {

    @strictpure def toMutable: MWedge = MWedge(azimuthCenterline, verticalCenterline, azimuthExtent, verticalExtent)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(128, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MWedge(
    var azimuthCenterline: F32,
    var verticalCenterline: F32,
    var azimuthExtent: F32,
    var verticalExtent: F32
  ) extends Runtime.Composite {

    @strictpure def toImmutable: Wedge = Wedge(azimuthCenterline, verticalCenterline, azimuthExtent, verticalExtent)

    def wellFormed: Z = {


      // BEGIN USER CODE: Wedge.wellFormed

      // END USER CODE: Wedge.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      azimuthCenterline = Reader.IS.beF32(input, context)
      verticalCenterline = Reader.IS.beF32(input, context)
      azimuthExtent = Reader.IS.beF32(input, context)
      verticalExtent = Reader.IS.beF32(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beF32(output, context, azimuthCenterline)
      Writer.beF32(output, context, verticalCenterline)
      Writer.beF32(output, context, azimuthExtent)
      Writer.beF32(output, context, verticalExtent)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_Wedge)
      }
    }

  }

  object LMCPViewAngle {

    val maxSize: Z = z"248"

    def empty: MLMCPViewAngle = {
      return MLMCPViewAngle(u8"0", s64"0", u32"0", u16"0", Wedge.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPViewAngle] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPViewAngle]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPViewAngle(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val wedge: Wedge
  ) extends PredUnionViewAngle {

    @strictpure def toMutable: MLMCPViewAngle = MLMCPViewAngle(nonNullValue, seriesID, typeID, seriesVersion, wedge.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(248, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPViewAngle(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var wedge: MWedge
  ) extends MPredUnionViewAngle {

    @strictpure def toImmutable: LMCPViewAngle = LMCPViewAngle(nonNullValue, seriesID, typeID, seriesVersion, wedge.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPViewAngle
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPViewAngle
      }

      if (typeID != u32"16") {
        return ERROR_LMCPViewAngle
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPViewAngle
      }

      val wfWedge = wedge.wellFormed
      if (wfWedge != 0) {
        return wfWedge
      }

      // BEGIN USER CODE: LMCPViewAngle.wellFormed

      // END USER CODE: LMCPViewAngle.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      wedge.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nonNullValue)
      Writer.beS64(output, context, seriesID)
      Writer.beU32(output, context, typeID)
      Writer.beU16(output, context, seriesVersion)
      wedge.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPViewAngle)
      }
    }

  }

  @datatype trait PredUnionViewAngle {
    @strictpure def toMutable: MPredUnionViewAngle
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionViewAngle extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionViewAngle
  }

  object PredUnionViewAngle {

    val maxSize: Z = z"248"

    def empty: MPredUnionViewAngle = {
      return NullValueViewAngle.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionViewAngle] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionViewAngle]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValueViewAngle
       'LMCPViewAngle
       'Error
    }

    def choose(input: ISZ[B], context: Context): Choice.Type = {
      {
        var ctx = context
        var hasError = F
        if (!hasError) {
          val temp = MSZ.create(1, u8"0")
          Reader.IS.beU8S(input, ctx, temp, 1)
          hasError = !(ctx.errorCode == 0 && temp == MSZ(u8"0"))
        }
        if (!hasError && ctx.errorCode == 0) {
          return Choice.NullValueViewAngle
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPViewAngle
        }
      }
      return Choice.Error
    }

  }

  object ObjectViewAngle {

    val maxSize: Z = z"248"

    def empty: MObjectViewAngle = {
      return MObjectViewAngle(NullValueViewAngle.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjectViewAngle] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjectViewAngle]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjectViewAngle(
    val predUnionViewAngle: PredUnionViewAngle
  ) {

    @strictpure def toMutable: MObjectViewAngle = MObjectViewAngle(predUnionViewAngle.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(248, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjectViewAngle(
    var predUnionViewAngle: MPredUnionViewAngle
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjectViewAngle = ObjectViewAngle(predUnionViewAngle.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjectViewAngle.wellFormed

      // END USER CODE: ObjectViewAngle.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUnionViewAngle.choose(input, context) match {
        case PredUnionViewAngle.Choice.NullValueViewAngle => predUnionViewAngle = NullValueViewAngle.empty
        case PredUnionViewAngle.Choice.LMCPViewAngle => predUnionViewAngle = LMCPViewAngle.empty
        case _ => context.signalError(ERROR_PredUnionViewAngle)
      }
      predUnionViewAngle.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUnionViewAngle.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjectViewAngle)
      }
    }

  }

  object LineSearchTask {

    val maxSize: Z = z"9240048"

    def empty: MLineSearchTask = {
      return MLineSearchTask(SearchTask.empty, u16"0", MSZ[MObjectPoint](), u16"0", MSZ[MObjectViewAngle](), u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[LineSearchTask] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LineSearchTask]() else Some(r.toImmutable)
    }

    def toMutablePointList(s: ISZ[ObjectPoint]): MSZ[MObjectPoint] = {
      var r = MSZ[MObjectPoint]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutablePointList(s: MSZ[MObjectPoint]): ISZ[ObjectPoint] = {
      var r = ISZ[ObjectPoint]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }

    def toMutableViewAngleList(s: ISZ[ObjectViewAngle]): MSZ[MObjectViewAngle] = {
      var r = MSZ[MObjectViewAngle]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableViewAngleList(s: MSZ[MObjectViewAngle]): ISZ[ObjectViewAngle] = {
      var r = ISZ[ObjectViewAngle]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class LineSearchTask(
    val searchTask: SearchTask,
    val pointListSize: U16,
    val pointList: ISZ[ObjectPoint],
    val viewAngleListSize: U16,
    val viewAngleList: ISZ[ObjectViewAngle],
    val useInertialViewAngles: U8
  ) extends LMCPObject {

    @strictpure def toMutable: MLineSearchTask = MLineSearchTask(searchTask.toMutable, pointListSize, LineSearchTask.toMutablePointList(pointList), viewAngleListSize, LineSearchTask.toMutableViewAngleList(viewAngleList), useInertialViewAngles)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(9240048, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLineSearchTask(
    var searchTask: MSearchTask,
    var pointListSize: U16,
    var pointList: MSZ[MObjectPoint],
    var viewAngleListSize: U16,
    var viewAngleList: MSZ[MObjectViewAngle],
    var useInertialViewAngles: U8
  ) extends MLMCPObject {

    @strictpure def toImmutable: LineSearchTask = LineSearchTask(searchTask.toImmutable, pointListSize, LineSearchTask.toImmutablePointList(pointList), viewAngleListSize, LineSearchTask.toImmutableViewAngleList(viewAngleList), useInertialViewAngles)

    def wellFormed: Z = {

      val wfSearchTask = searchTask.wellFormed
      if (wfSearchTask != 0) {
        return wfSearchTask
      }

      if (pointList.size > 1024) {
        return ERROR_LineSearchTask_pointList
      }

      val pointListSz = sizeOfPointList(pointListSize)
      if (pointList.size != pointListSz) {
        return ERROR_LineSearchTask_pointList
      }

      if (viewAngleList.size > 16) {
        return ERROR_LineSearchTask_viewAngleList
      }

      val viewAngleListSz = sizeOfViewAngleList(viewAngleListSize)
      if (viewAngleList.size != viewAngleListSz) {
        return ERROR_LineSearchTask_viewAngleList
      }

      // BEGIN USER CODE: LineSearchTask.wellFormed

      // END USER CODE: LineSearchTask.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      searchTask.decode(input, context)
      pointListSize = Reader.IS.beU16(input, context)
      val pointListSz = sizeOfPointList(pointListSize)
      if (pointListSz >= 0) {
        pointList = MSZ.create(pointListSz, ObjectPoint.empty)
        for (i <- 0 until pointListSz) {
          pointList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_LineSearchTask_pointList)
      }
      viewAngleListSize = Reader.IS.beU16(input, context)
      val viewAngleListSz = sizeOfViewAngleList(viewAngleListSize)
      if (viewAngleListSz >= 0) {
        viewAngleList = MSZ.create(viewAngleListSz, ObjectViewAngle.empty)
        for (i <- 0 until viewAngleListSz) {
          viewAngleList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_LineSearchTask_viewAngleList)
      }
      useInertialViewAngles = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      searchTask.encode(output, context)
      Writer.beU16(output, context, pointListSize)
      val pointListSz = sizeOfPointList(pointListSize)
      if (pointListSz >= 0) {
        for (i <- 0 until pointListSz) {
          pointList(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_LineSearchTask_pointList)
      }
      Writer.beU16(output, context, viewAngleListSize)
      val viewAngleListSz = sizeOfViewAngleList(viewAngleListSize)
      if (viewAngleListSz >= 0) {
        for (i <- 0 until viewAngleListSz) {
          viewAngleList(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_LineSearchTask_viewAngleList)
      }
      Writer.bleU8(output, context, useInertialViewAngles)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LineSearchTask)
      }
    }

    def sizeOfPointList(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }

    def sizeOfViewAngleList(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object TaskRelationships {

    val maxSize: Z = z"524296"

    def empty: MTaskRelationships = {
      return MTaskRelationships(u16"0", MSZ[U8]())
    }

    def decode(input: ISZ[B], context: Context): Option[TaskRelationships] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[TaskRelationships]() else Some(r.toImmutable)
    }

    def toMutableStringChars(s: ISZ[U8]): MSZ[U8] = {
      var r = MSZ[U8]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toImmutableStringChars(s: MSZ[U8]): ISZ[U8] = {
      var r = ISZ[U8]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }
  }

  @datatype class TaskRelationships(
    val stringCharsSize: U16,
    val stringChars: ISZ[U8]
  ) {

    @strictpure def toMutable: MTaskRelationships = MTaskRelationships(stringCharsSize, TaskRelationships.toMutableStringChars(stringChars))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(524296, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MTaskRelationships(
    var stringCharsSize: U16,
    var stringChars: MSZ[U8]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: TaskRelationships = TaskRelationships(stringCharsSize, TaskRelationships.toImmutableStringChars(stringChars))

    def wellFormed: Z = {

      if (stringChars.size > 65535) {
        return ERROR_TaskRelationships_stringChars
      }

      val stringCharsSz = sizeOfStringChars(stringCharsSize)
      if (stringChars.size != stringCharsSz) {
        return ERROR_TaskRelationships_stringChars
      }

      // BEGIN USER CODE: TaskRelationships.wellFormed

      // END USER CODE: TaskRelationships.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      stringCharsSize = Reader.IS.beU16(input, context)
      val stringCharsSz = sizeOfStringChars(stringCharsSize)
      if (stringCharsSz >= 0) {
        stringChars = MSZ.create(stringCharsSz, u8"0")
        for (i <- 0 until stringCharsSz) {
          val c = Reader.IS.bleU8(input, context)
          stringChars(i) = c
        }
      } else {
        context.signalError(ERROR_TaskRelationships_stringChars)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, stringCharsSize)
      val stringCharsSz = sizeOfStringChars(stringCharsSize)
      if (stringCharsSz >= 0) {
        for (i <- 0 until stringCharsSz) {
          val c = stringChars(i)
          Writer.bleU8(output, context, c)
        }
      } else {
        context.signalError(ERROR_TaskRelationships_stringChars)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_TaskRelationships)
      }
    }

    def sizeOfStringChars(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object AutomationRequest {

    val maxSize: Z = z"527472"

    def empty: MAutomationRequest = {
      return MAutomationRequest(u16"0", MSZ[S64](), u16"0", MSZ[S64](), TaskRelationships.empty, s64"0", u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[AutomationRequest] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[AutomationRequest]() else Some(r.toImmutable)
    }

    def toMutableEntityList(s: ISZ[S64]): MSZ[S64] = {
      var r = MSZ[S64]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toImmutableEntityList(s: MSZ[S64]): ISZ[S64] = {
      var r = ISZ[S64]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toMutableTaskList(s: ISZ[S64]): MSZ[S64] = {
      var r = MSZ[S64]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toImmutableTaskList(s: MSZ[S64]): ISZ[S64] = {
      var r = ISZ[S64]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }
  }

  @datatype class AutomationRequest(
    val entityListSize: U16,
    val entityList: ISZ[S64],
    val taskListSize: U16,
    val taskList: ISZ[S64],
    val taskRelationships: TaskRelationships,
    val operatingRegion: S64,
    val redoAllTasks: U8
  ) extends LMCPObject {

    @strictpure def toMutable: MAutomationRequest = MAutomationRequest(entityListSize, AutomationRequest.toMutableEntityList(entityList), taskListSize, AutomationRequest.toMutableTaskList(taskList), taskRelationships.toMutable, operatingRegion, redoAllTasks)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(527472, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MAutomationRequest(
    var entityListSize: U16,
    var entityList: MSZ[S64],
    var taskListSize: U16,
    var taskList: MSZ[S64],
    var taskRelationships: MTaskRelationships,
    var operatingRegion: S64,
    var redoAllTasks: U8
  ) extends MLMCPObject {

    @strictpure def toImmutable: AutomationRequest = AutomationRequest(entityListSize, AutomationRequest.toImmutableEntityList(entityList), taskListSize, AutomationRequest.toImmutableTaskList(taskList), taskRelationships.toImmutable, operatingRegion, redoAllTasks)

    def wellFormed: Z = {

      if (entityList.size > 16) {
        return ERROR_AutomationRequest_entityList
      }

      val entityListSz = sizeOfEntityList(entityListSize)
      if (entityList.size != entityListSz) {
        return ERROR_AutomationRequest_entityList
      }

      if (taskList.size > 32) {
        return ERROR_AutomationRequest_taskList
      }

      val taskListSz = sizeOfTaskList(taskListSize)
      if (taskList.size != taskListSz) {
        return ERROR_AutomationRequest_taskList
      }

      val wfTaskRelationships = taskRelationships.wellFormed
      if (wfTaskRelationships != 0) {
        return wfTaskRelationships
      }

      // BEGIN USER CODE: AutomationRequest.wellFormed

      // END USER CODE: AutomationRequest.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      entityListSize = Reader.IS.beU16(input, context)
      val entityListSz = sizeOfEntityList(entityListSize)
      if (entityListSz >= 0) {
        entityList = MSZ.create(entityListSz, s64"0")
        for (i <- 0 until entityListSz) {
          val entityId = Reader.IS.beS64(input, context)
          entityList(i) = entityId
        }
      } else {
        context.signalError(ERROR_AutomationRequest_entityList)
      }
      taskListSize = Reader.IS.beU16(input, context)
      val taskListSz = sizeOfTaskList(taskListSize)
      if (taskListSz >= 0) {
        taskList = MSZ.create(taskListSz, s64"0")
        for (i <- 0 until taskListSz) {
          val taskId = Reader.IS.beS64(input, context)
          taskList(i) = taskId
        }
      } else {
        context.signalError(ERROR_AutomationRequest_taskList)
      }
      taskRelationships.decode(input, context)
      operatingRegion = Reader.IS.beS64(input, context)
      redoAllTasks = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, entityListSize)
      val entityListSz = sizeOfEntityList(entityListSize)
      if (entityListSz >= 0) {
        for (i <- 0 until entityListSz) {
          val entityId = entityList(i)
          Writer.beS64(output, context, entityId)
        }
      } else {
        context.signalError(ERROR_AutomationRequest_entityList)
      }
      Writer.beU16(output, context, taskListSize)
      val taskListSz = sizeOfTaskList(taskListSize)
      if (taskListSz >= 0) {
        for (i <- 0 until taskListSz) {
          val taskId = taskList(i)
          Writer.beS64(output, context, taskId)
        }
      } else {
        context.signalError(ERROR_AutomationRequest_taskList)
      }
      taskRelationships.encode(output, context)
      Writer.beS64(output, context, operatingRegion)
      Writer.bleU8(output, context, redoAllTasks)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_AutomationRequest)
      }
    }

    def sizeOfEntityList(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }

    def sizeOfTaskList(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object NullValueMissionCommand {

    val maxSize: Z = z"8"

    def empty: MNullValueMissionCommand = {
      return MNullValueMissionCommand(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValueMissionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValueMissionCommand]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValueMissionCommand(
    val nullValueMissionCommand: U8
  ) extends PredUnionMissionCommand {

    @strictpure def toMutable: MNullValueMissionCommand = MNullValueMissionCommand(nullValueMissionCommand)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValueMissionCommand(
    var nullValueMissionCommand: U8
  ) extends MPredUnionMissionCommand {

    @strictpure def toImmutable: NullValueMissionCommand = NullValueMissionCommand(nullValueMissionCommand)

    def wellFormed: Z = {

      if (nullValueMissionCommand != u8"0") {
        return ERROR_NullValueMissionCommand
      }

      // BEGIN USER CODE: NullValueMissionCommand.wellFormed

      // END USER CODE: NullValueMissionCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValueMissionCommand = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValueMissionCommand)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValueMissionCommand)
      }
    }

  }

  object NullValueVehicleActionVehicleActionCommand {

    val maxSize: Z = z"8"

    def empty: MNullValueVehicleActionVehicleActionCommand = {
      return MNullValueVehicleActionVehicleActionCommand(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValueVehicleActionVehicleActionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValueVehicleActionVehicleActionCommand]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValueVehicleActionVehicleActionCommand(
    val nullValueVehicleActionVehicleActionCommand: U8
  ) extends PredUnionVehicleActionVehicleActionCommand {

    @strictpure def toMutable: MNullValueVehicleActionVehicleActionCommand = MNullValueVehicleActionVehicleActionCommand(nullValueVehicleActionVehicleActionCommand)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValueVehicleActionVehicleActionCommand(
    var nullValueVehicleActionVehicleActionCommand: U8
  ) extends MPredUnionVehicleActionVehicleActionCommand {

    @strictpure def toImmutable: NullValueVehicleActionVehicleActionCommand = NullValueVehicleActionVehicleActionCommand(nullValueVehicleActionVehicleActionCommand)

    def wellFormed: Z = {

      if (nullValueVehicleActionVehicleActionCommand != u8"0") {
        return ERROR_NullValueVehicleActionVehicleActionCommand
      }

      // BEGIN USER CODE: NullValueVehicleActionVehicleActionCommand.wellFormed

      // END USER CODE: NullValueVehicleActionVehicleActionCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValueVehicleActionVehicleActionCommand = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValueVehicleActionVehicleActionCommand)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValueVehicleActionVehicleActionCommand)
      }
    }

  }

  object VehicleAction {

    val maxSize: Z = z"528"

    def empty: MVehicleAction = {
      return MVehicleAction(u16"0", MSZ[S64]())
    }

    def decode(input: ISZ[B], context: Context): Option[VehicleAction] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[VehicleAction]() else Some(r.toImmutable)
    }

    def toMutableAssociatedTaskList(s: ISZ[S64]): MSZ[S64] = {
      var r = MSZ[S64]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toImmutableAssociatedTaskList(s: MSZ[S64]): ISZ[S64] = {
      var r = ISZ[S64]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }
  }

  @datatype class VehicleAction(
    val associatedTaskListSize: U16,
    val associatedTaskList: ISZ[S64]
  ) {

    @strictpure def toMutable: MVehicleAction = MVehicleAction(associatedTaskListSize, VehicleAction.toMutableAssociatedTaskList(associatedTaskList))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(528, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MVehicleAction(
    var associatedTaskListSize: U16,
    var associatedTaskList: MSZ[S64]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: VehicleAction = VehicleAction(associatedTaskListSize, VehicleAction.toImmutableAssociatedTaskList(associatedTaskList))

    def wellFormed: Z = {

      if (associatedTaskList.size > 8) {
        return ERROR_VehicleAction_associatedTaskList
      }

      val associatedTaskListSz = sizeOfAssociatedTaskList(associatedTaskListSize)
      if (associatedTaskList.size != associatedTaskListSz) {
        return ERROR_VehicleAction_associatedTaskList
      }

      // BEGIN USER CODE: VehicleAction.wellFormed

      // END USER CODE: VehicleAction.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      associatedTaskListSize = Reader.IS.beU16(input, context)
      val associatedTaskListSz = sizeOfAssociatedTaskList(associatedTaskListSize)
      if (associatedTaskListSz >= 0) {
        associatedTaskList = MSZ.create(associatedTaskListSz, s64"0")
        for (i <- 0 until associatedTaskListSz) {
          val associatedTaskId = Reader.IS.beS64(input, context)
          associatedTaskList(i) = associatedTaskId
        }
      } else {
        context.signalError(ERROR_VehicleAction_associatedTaskList)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, associatedTaskListSize)
      val associatedTaskListSz = sizeOfAssociatedTaskList(associatedTaskListSize)
      if (associatedTaskListSz >= 0) {
        for (i <- 0 until associatedTaskListSz) {
          val associatedTaskId = associatedTaskList(i)
          Writer.beS64(output, context, associatedTaskId)
        }
      } else {
        context.signalError(ERROR_VehicleAction_associatedTaskList)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_VehicleAction)
      }
    }

    def sizeOfAssociatedTaskList(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object LMCPVehicleActionVehicleActionCommand {

    val maxSize: Z = z"648"

    def empty: MLMCPVehicleActionVehicleActionCommand = {
      return MLMCPVehicleActionVehicleActionCommand(u8"0", s64"0", u32"0", u16"0", VehicleAction.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPVehicleActionVehicleActionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPVehicleActionVehicleActionCommand]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPVehicleActionVehicleActionCommand(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val vehicleAction: VehicleAction
  ) extends PredUnionVehicleActionVehicleActionCommand {

    @strictpure def toMutable: MLMCPVehicleActionVehicleActionCommand = MLMCPVehicleActionVehicleActionCommand(nonNullValue, seriesID, typeID, seriesVersion, vehicleAction.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(648, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPVehicleActionVehicleActionCommand(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var vehicleAction: MVehicleAction
  ) extends MPredUnionVehicleActionVehicleActionCommand {

    @strictpure def toImmutable: LMCPVehicleActionVehicleActionCommand = LMCPVehicleActionVehicleActionCommand(nonNullValue, seriesID, typeID, seriesVersion, vehicleAction.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPVehicleActionVehicleActionCommand
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPVehicleActionVehicleActionCommand
      }

      if (typeID != u32"7") {
        return ERROR_LMCPVehicleActionVehicleActionCommand
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPVehicleActionVehicleActionCommand
      }

      val wfVehicleAction = vehicleAction.wellFormed
      if (wfVehicleAction != 0) {
        return wfVehicleAction
      }

      // BEGIN USER CODE: LMCPVehicleActionVehicleActionCommand.wellFormed

      // END USER CODE: LMCPVehicleActionVehicleActionCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      vehicleAction.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nonNullValue)
      Writer.beS64(output, context, seriesID)
      Writer.beU32(output, context, typeID)
      Writer.beU16(output, context, seriesVersion)
      vehicleAction.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPVehicleActionVehicleActionCommand)
      }
    }

  }

  @datatype trait PredUnionVehicleActionVehicleActionCommand {
    @strictpure def toMutable: MPredUnionVehicleActionVehicleActionCommand
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionVehicleActionVehicleActionCommand extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionVehicleActionVehicleActionCommand
  }

  object PredUnionVehicleActionVehicleActionCommand {

    val maxSize: Z = z"648"

    def empty: MPredUnionVehicleActionVehicleActionCommand = {
      return NullValueVehicleActionVehicleActionCommand.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionVehicleActionVehicleActionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionVehicleActionVehicleActionCommand]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValueVehicleActionVehicleActionCommand
       'LMCPVehicleActionVehicleActionCommand
       'Error
    }

    def choose(input: ISZ[B], context: Context): Choice.Type = {
      {
        var ctx = context
        var hasError = F
        if (!hasError) {
          val temp = MSZ.create(1, u8"0")
          Reader.IS.beU8S(input, ctx, temp, 1)
          hasError = !(ctx.errorCode == 0 && temp == MSZ(u8"0"))
        }
        if (!hasError && ctx.errorCode == 0) {
          return Choice.NullValueVehicleActionVehicleActionCommand
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPVehicleActionVehicleActionCommand
        }
      }
      return Choice.Error
    }

  }

  object ObjectVehicleActionVehicleActionCommand {

    val maxSize: Z = z"648"

    def empty: MObjectVehicleActionVehicleActionCommand = {
      return MObjectVehicleActionVehicleActionCommand(NullValueVehicleActionVehicleActionCommand.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjectVehicleActionVehicleActionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjectVehicleActionVehicleActionCommand]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjectVehicleActionVehicleActionCommand(
    val predUnionVehicleActionVehicleActionCommand: PredUnionVehicleActionVehicleActionCommand
  ) {

    @strictpure def toMutable: MObjectVehicleActionVehicleActionCommand = MObjectVehicleActionVehicleActionCommand(predUnionVehicleActionVehicleActionCommand.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(648, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjectVehicleActionVehicleActionCommand(
    var predUnionVehicleActionVehicleActionCommand: MPredUnionVehicleActionVehicleActionCommand
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjectVehicleActionVehicleActionCommand = ObjectVehicleActionVehicleActionCommand(predUnionVehicleActionVehicleActionCommand.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjectVehicleActionVehicleActionCommand.wellFormed

      // END USER CODE: ObjectVehicleActionVehicleActionCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUnionVehicleActionVehicleActionCommand.choose(input, context) match {
        case PredUnionVehicleActionVehicleActionCommand.Choice.NullValueVehicleActionVehicleActionCommand => predUnionVehicleActionVehicleActionCommand = NullValueVehicleActionVehicleActionCommand.empty
        case PredUnionVehicleActionVehicleActionCommand.Choice.LMCPVehicleActionVehicleActionCommand => predUnionVehicleActionVehicleActionCommand = LMCPVehicleActionVehicleActionCommand.empty
        case _ => context.signalError(ERROR_PredUnionVehicleActionVehicleActionCommand)
      }
      predUnionVehicleActionVehicleActionCommand.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUnionVehicleActionVehicleActionCommand.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjectVehicleActionVehicleActionCommand)
      }
    }

  }

  object VehicleActionCommand {

    val maxSize: Z = z"5360"

    def empty: MVehicleActionCommand = {
      return MVehicleActionCommand(s64"0", s64"0", u16"0", MSZ[MObjectVehicleActionVehicleActionCommand](), s32"0")
    }

    def decode(input: ISZ[B], context: Context): Option[VehicleActionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[VehicleActionCommand]() else Some(r.toImmutable)
    }

    def toMutableVehicleActionList(s: ISZ[ObjectVehicleActionVehicleActionCommand]): MSZ[MObjectVehicleActionVehicleActionCommand] = {
      var r = MSZ[MObjectVehicleActionVehicleActionCommand]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableVehicleActionList(s: MSZ[MObjectVehicleActionVehicleActionCommand]): ISZ[ObjectVehicleActionVehicleActionCommand] = {
      var r = ISZ[ObjectVehicleActionVehicleActionCommand]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class VehicleActionCommand(
    val commandID: S64,
    val vehicleID: S64,
    val vehicleActionListSize: U16,
    val vehicleActionList: ISZ[ObjectVehicleActionVehicleActionCommand],
    val status: S32
  ) {

    @strictpure def toMutable: MVehicleActionCommand = MVehicleActionCommand(commandID, vehicleID, vehicleActionListSize, VehicleActionCommand.toMutableVehicleActionList(vehicleActionList), status)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(5360, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MVehicleActionCommand(
    var commandID: S64,
    var vehicleID: S64,
    var vehicleActionListSize: U16,
    var vehicleActionList: MSZ[MObjectVehicleActionVehicleActionCommand],
    var status: S32
  ) extends Runtime.Composite {

    @strictpure def toImmutable: VehicleActionCommand = VehicleActionCommand(commandID, vehicleID, vehicleActionListSize, VehicleActionCommand.toImmutableVehicleActionList(vehicleActionList), status)

    def wellFormed: Z = {

      if (vehicleActionList.size > 8) {
        return ERROR_VehicleActionCommand_vehicleActionList
      }

      val vehicleActionListSz = sizeOfVehicleActionList(vehicleActionListSize)
      if (vehicleActionList.size != vehicleActionListSz) {
        return ERROR_VehicleActionCommand_vehicleActionList
      }

      // BEGIN USER CODE: VehicleActionCommand.wellFormed

      // END USER CODE: VehicleActionCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      commandID = Reader.IS.beS64(input, context)
      vehicleID = Reader.IS.beS64(input, context)
      vehicleActionListSize = Reader.IS.beU16(input, context)
      val vehicleActionListSz = sizeOfVehicleActionList(vehicleActionListSize)
      if (vehicleActionListSz >= 0) {
        vehicleActionList = MSZ.create(vehicleActionListSz, ObjectVehicleActionVehicleActionCommand.empty)
        for (i <- 0 until vehicleActionListSz) {
          vehicleActionList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_VehicleActionCommand_vehicleActionList)
      }
      status = Reader.IS.beS32(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beS64(output, context, commandID)
      Writer.beS64(output, context, vehicleID)
      Writer.beU16(output, context, vehicleActionListSize)
      val vehicleActionListSz = sizeOfVehicleActionList(vehicleActionListSize)
      if (vehicleActionListSz >= 0) {
        for (i <- 0 until vehicleActionListSz) {
          vehicleActionList(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_VehicleActionCommand_vehicleActionList)
      }
      Writer.beS32(output, context, status)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_VehicleActionCommand)
      }
    }

    def sizeOfVehicleActionList(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object NullValueWaypoint {

    val maxSize: Z = z"8"

    def empty: MNullValueWaypoint = {
      return MNullValueWaypoint(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValueWaypoint] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValueWaypoint]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValueWaypoint(
    val nullValueWaypoint: U8
  ) extends PredUnionWaypoint {

    @strictpure def toMutable: MNullValueWaypoint = MNullValueWaypoint(nullValueWaypoint)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValueWaypoint(
    var nullValueWaypoint: U8
  ) extends MPredUnionWaypoint {

    @strictpure def toImmutable: NullValueWaypoint = NullValueWaypoint(nullValueWaypoint)

    def wellFormed: Z = {

      if (nullValueWaypoint != u8"0") {
        return ERROR_NullValueWaypoint
      }

      // BEGIN USER CODE: NullValueWaypoint.wellFormed

      // END USER CODE: NullValueWaypoint.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValueWaypoint = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValueWaypoint)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValueWaypoint)
      }
    }

  }

  object NullValueWaypointVehicleAction {

    val maxSize: Z = z"8"

    def empty: MNullValueWaypointVehicleAction = {
      return MNullValueWaypointVehicleAction(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValueWaypointVehicleAction] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValueWaypointVehicleAction]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValueWaypointVehicleAction(
    val nullValueWaypointVehicleAction: U8
  ) extends PredUnionWaypointVehicleAction {

    @strictpure def toMutable: MNullValueWaypointVehicleAction = MNullValueWaypointVehicleAction(nullValueWaypointVehicleAction)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValueWaypointVehicleAction(
    var nullValueWaypointVehicleAction: U8
  ) extends MPredUnionWaypointVehicleAction {

    @strictpure def toImmutable: NullValueWaypointVehicleAction = NullValueWaypointVehicleAction(nullValueWaypointVehicleAction)

    def wellFormed: Z = {

      if (nullValueWaypointVehicleAction != u8"0") {
        return ERROR_NullValueWaypointVehicleAction
      }

      // BEGIN USER CODE: NullValueWaypointVehicleAction.wellFormed

      // END USER CODE: NullValueWaypointVehicleAction.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValueWaypointVehicleAction = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValueWaypointVehicleAction)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValueWaypointVehicleAction)
      }
    }

  }

  object LMCPWaypointVehicleAction {

    val maxSize: Z = z"648"

    def empty: MLMCPWaypointVehicleAction = {
      return MLMCPWaypointVehicleAction(u8"0", s64"0", u32"0", u16"0", VehicleAction.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPWaypointVehicleAction] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPWaypointVehicleAction]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPWaypointVehicleAction(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val vehicleAction: VehicleAction
  ) extends PredUnionWaypointVehicleAction {

    @strictpure def toMutable: MLMCPWaypointVehicleAction = MLMCPWaypointVehicleAction(nonNullValue, seriesID, typeID, seriesVersion, vehicleAction.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(648, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPWaypointVehicleAction(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var vehicleAction: MVehicleAction
  ) extends MPredUnionWaypointVehicleAction {

    @strictpure def toImmutable: LMCPWaypointVehicleAction = LMCPWaypointVehicleAction(nonNullValue, seriesID, typeID, seriesVersion, vehicleAction.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPWaypointVehicleAction
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPWaypointVehicleAction
      }

      if (typeID != u32"7") {
        return ERROR_LMCPWaypointVehicleAction
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPWaypointVehicleAction
      }

      val wfVehicleAction = vehicleAction.wellFormed
      if (wfVehicleAction != 0) {
        return wfVehicleAction
      }

      // BEGIN USER CODE: LMCPWaypointVehicleAction.wellFormed

      // END USER CODE: LMCPWaypointVehicleAction.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      vehicleAction.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nonNullValue)
      Writer.beS64(output, context, seriesID)
      Writer.beU32(output, context, typeID)
      Writer.beU16(output, context, seriesVersion)
      vehicleAction.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPWaypointVehicleAction)
      }
    }

  }

  @datatype trait PredUnionWaypointVehicleAction {
    @strictpure def toMutable: MPredUnionWaypointVehicleAction
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionWaypointVehicleAction extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionWaypointVehicleAction
  }

  object PredUnionWaypointVehicleAction {

    val maxSize: Z = z"648"

    def empty: MPredUnionWaypointVehicleAction = {
      return NullValueWaypointVehicleAction.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionWaypointVehicleAction] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionWaypointVehicleAction]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValueWaypointVehicleAction
       'LMCPWaypointVehicleAction
       'Error
    }

    def choose(input: ISZ[B], context: Context): Choice.Type = {
      {
        var ctx = context
        var hasError = F
        if (!hasError) {
          val temp = MSZ.create(1, u8"0")
          Reader.IS.beU8S(input, ctx, temp, 1)
          hasError = !(ctx.errorCode == 0 && temp == MSZ(u8"0"))
        }
        if (!hasError && ctx.errorCode == 0) {
          return Choice.NullValueWaypointVehicleAction
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPWaypointVehicleAction
        }
      }
      return Choice.Error
    }

  }

  object ObjectWaypointVehicleAction {

    val maxSize: Z = z"648"

    def empty: MObjectWaypointVehicleAction = {
      return MObjectWaypointVehicleAction(NullValueWaypointVehicleAction.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjectWaypointVehicleAction] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjectWaypointVehicleAction]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjectWaypointVehicleAction(
    val predUnionWaypointVehicleAction: PredUnionWaypointVehicleAction
  ) {

    @strictpure def toMutable: MObjectWaypointVehicleAction = MObjectWaypointVehicleAction(predUnionWaypointVehicleAction.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(648, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjectWaypointVehicleAction(
    var predUnionWaypointVehicleAction: MPredUnionWaypointVehicleAction
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjectWaypointVehicleAction = ObjectWaypointVehicleAction(predUnionWaypointVehicleAction.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjectWaypointVehicleAction.wellFormed

      // END USER CODE: ObjectWaypointVehicleAction.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUnionWaypointVehicleAction.choose(input, context) match {
        case PredUnionWaypointVehicleAction.Choice.NullValueWaypointVehicleAction => predUnionWaypointVehicleAction = NullValueWaypointVehicleAction.empty
        case PredUnionWaypointVehicleAction.Choice.LMCPWaypointVehicleAction => predUnionWaypointVehicleAction = LMCPWaypointVehicleAction.empty
        case _ => context.signalError(ERROR_PredUnionWaypointVehicleAction)
      }
      predUnionWaypointVehicleAction.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUnionWaypointVehicleAction.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjectWaypointVehicleAction)
      }
    }

  }

  object Waypoint {

    val maxSize: Z = z"6304"

    def empty: MWaypoint = {
      return MWaypoint(Location3D.empty, s64"0", s64"0", 0.0f, s32"0", 0.0f, s32"0", u16"0", MSZ[MObjectWaypointVehicleAction](), s64"0", s64"0", u16"0", MSZ[S64]())
    }

    def decode(input: ISZ[B], context: Context): Option[Waypoint] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[Waypoint]() else Some(r.toImmutable)
    }

    def toMutableVehicleActionList(s: ISZ[ObjectWaypointVehicleAction]): MSZ[MObjectWaypointVehicleAction] = {
      var r = MSZ[MObjectWaypointVehicleAction]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableVehicleActionList(s: MSZ[MObjectWaypointVehicleAction]): ISZ[ObjectWaypointVehicleAction] = {
      var r = ISZ[ObjectWaypointVehicleAction]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }

    def toMutableAssociatedTaskList(s: ISZ[S64]): MSZ[S64] = {
      var r = MSZ[S64]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }

    def toImmutableAssociatedTaskList(s: MSZ[S64]): ISZ[S64] = {
      var r = ISZ[S64]()
      for (e <- s) {
        r = r :+ e
      }
      return r
    }
  }

  @datatype class Waypoint(
    val location3D: Location3D,
    val number: S64,
    val nextWaypoint: S64,
    val speed: F32,
    val speedType: S32,
    val climbRate: F32,
    val turnType: S32,
    val vehicleActionListSize: U16,
    val vehicleActionList: ISZ[ObjectWaypointVehicleAction],
    val contingencyWaypointA: S64,
    val contingencyWaypointB: S64,
    val associatedTaskListSize: U16,
    val associatedTaskList: ISZ[S64]
  ) {

    @strictpure def toMutable: MWaypoint = MWaypoint(location3D.toMutable, number, nextWaypoint, speed, speedType, climbRate, turnType, vehicleActionListSize, Waypoint.toMutableVehicleActionList(vehicleActionList), contingencyWaypointA, contingencyWaypointB, associatedTaskListSize, Waypoint.toMutableAssociatedTaskList(associatedTaskList))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(6304, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MWaypoint(
    var location3D: MLocation3D,
    var number: S64,
    var nextWaypoint: S64,
    var speed: F32,
    var speedType: S32,
    var climbRate: F32,
    var turnType: S32,
    var vehicleActionListSize: U16,
    var vehicleActionList: MSZ[MObjectWaypointVehicleAction],
    var contingencyWaypointA: S64,
    var contingencyWaypointB: S64,
    var associatedTaskListSize: U16,
    var associatedTaskList: MSZ[S64]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: Waypoint = Waypoint(location3D.toImmutable, number, nextWaypoint, speed, speedType, climbRate, turnType, vehicleActionListSize, Waypoint.toImmutableVehicleActionList(vehicleActionList), contingencyWaypointA, contingencyWaypointB, associatedTaskListSize, Waypoint.toImmutableAssociatedTaskList(associatedTaskList))

    def wellFormed: Z = {

      val wfLocation3D = location3D.wellFormed
      if (wfLocation3D != 0) {
        return wfLocation3D
      }

      if (vehicleActionList.size > 8) {
        return ERROR_Waypoint_vehicleActionList
      }

      val vehicleActionListSz = sizeOfVehicleActionList(vehicleActionListSize)
      if (vehicleActionList.size != vehicleActionListSz) {
        return ERROR_Waypoint_vehicleActionList
      }

      if (associatedTaskList.size > 8) {
        return ERROR_Waypoint_associatedTaskList
      }

      val associatedTaskListSz = sizeOfAssociatedTaskList(associatedTaskListSize)
      if (associatedTaskList.size != associatedTaskListSz) {
        return ERROR_Waypoint_associatedTaskList
      }

      // BEGIN USER CODE: Waypoint.wellFormed

      // END USER CODE: Waypoint.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      location3D.decode(input, context)
      number = Reader.IS.beS64(input, context)
      nextWaypoint = Reader.IS.beS64(input, context)
      speed = Reader.IS.beF32(input, context)
      speedType = Reader.IS.beS32(input, context)
      climbRate = Reader.IS.beF32(input, context)
      turnType = Reader.IS.beS32(input, context)
      vehicleActionListSize = Reader.IS.beU16(input, context)
      val vehicleActionListSz = sizeOfVehicleActionList(vehicleActionListSize)
      if (vehicleActionListSz >= 0) {
        vehicleActionList = MSZ.create(vehicleActionListSz, ObjectWaypointVehicleAction.empty)
        for (i <- 0 until vehicleActionListSz) {
          vehicleActionList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_Waypoint_vehicleActionList)
      }
      contingencyWaypointA = Reader.IS.beS64(input, context)
      contingencyWaypointB = Reader.IS.beS64(input, context)
      associatedTaskListSize = Reader.IS.beU16(input, context)
      val associatedTaskListSz = sizeOfAssociatedTaskList(associatedTaskListSize)
      if (associatedTaskListSz >= 0) {
        associatedTaskList = MSZ.create(associatedTaskListSz, s64"0")
        for (i <- 0 until associatedTaskListSz) {
          val associatedTaskId = Reader.IS.beS64(input, context)
          associatedTaskList(i) = associatedTaskId
        }
      } else {
        context.signalError(ERROR_Waypoint_associatedTaskList)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      location3D.encode(output, context)
      Writer.beS64(output, context, number)
      Writer.beS64(output, context, nextWaypoint)
      Writer.beF32(output, context, speed)
      Writer.beS32(output, context, speedType)
      Writer.beF32(output, context, climbRate)
      Writer.beS32(output, context, turnType)
      Writer.beU16(output, context, vehicleActionListSize)
      val vehicleActionListSz = sizeOfVehicleActionList(vehicleActionListSize)
      if (vehicleActionListSz >= 0) {
        for (i <- 0 until vehicleActionListSz) {
          vehicleActionList(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_Waypoint_vehicleActionList)
      }
      Writer.beS64(output, context, contingencyWaypointA)
      Writer.beS64(output, context, contingencyWaypointB)
      Writer.beU16(output, context, associatedTaskListSize)
      val associatedTaskListSz = sizeOfAssociatedTaskList(associatedTaskListSize)
      if (associatedTaskListSz >= 0) {
        for (i <- 0 until associatedTaskListSz) {
          val associatedTaskId = associatedTaskList(i)
          Writer.beS64(output, context, associatedTaskId)
        }
      } else {
        context.signalError(ERROR_Waypoint_associatedTaskList)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_Waypoint)
      }
    }

    def sizeOfVehicleActionList(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }

    def sizeOfAssociatedTaskList(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object LMCPWaypoint {

    val maxSize: Z = z"6424"

    def empty: MLMCPWaypoint = {
      return MLMCPWaypoint(u8"0", s64"0", u32"0", u16"0", Waypoint.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPWaypoint] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPWaypoint]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPWaypoint(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val waypoint: Waypoint
  ) extends PredUnionWaypoint {

    @strictpure def toMutable: MLMCPWaypoint = MLMCPWaypoint(nonNullValue, seriesID, typeID, seriesVersion, waypoint.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(6424, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPWaypoint(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var waypoint: MWaypoint
  ) extends MPredUnionWaypoint {

    @strictpure def toImmutable: LMCPWaypoint = LMCPWaypoint(nonNullValue, seriesID, typeID, seriesVersion, waypoint.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPWaypoint
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPWaypoint
      }

      if (typeID != u32"35") {
        return ERROR_LMCPWaypoint
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPWaypoint
      }

      val wfWaypoint = waypoint.wellFormed
      if (wfWaypoint != 0) {
        return wfWaypoint
      }

      // BEGIN USER CODE: LMCPWaypoint.wellFormed

      // END USER CODE: LMCPWaypoint.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      waypoint.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nonNullValue)
      Writer.beS64(output, context, seriesID)
      Writer.beU32(output, context, typeID)
      Writer.beU16(output, context, seriesVersion)
      waypoint.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPWaypoint)
      }
    }

  }

  @datatype trait PredUnionWaypoint {
    @strictpure def toMutable: MPredUnionWaypoint
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionWaypoint extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionWaypoint
  }

  object PredUnionWaypoint {

    val maxSize: Z = z"6424"

    def empty: MPredUnionWaypoint = {
      return NullValueWaypoint.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionWaypoint] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionWaypoint]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValueWaypoint
       'LMCPWaypoint
       'Error
    }

    def choose(input: ISZ[B], context: Context): Choice.Type = {
      {
        var ctx = context
        var hasError = F
        if (!hasError) {
          val temp = MSZ.create(1, u8"0")
          Reader.IS.beU8S(input, ctx, temp, 1)
          hasError = !(ctx.errorCode == 0 && temp == MSZ(u8"0"))
        }
        if (!hasError && ctx.errorCode == 0) {
          return Choice.NullValueWaypoint
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPWaypoint
        }
      }
      return Choice.Error
    }

  }

  object ObjectWaypoint {

    val maxSize: Z = z"6424"

    def empty: MObjectWaypoint = {
      return MObjectWaypoint(NullValueWaypoint.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjectWaypoint] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjectWaypoint]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjectWaypoint(
    val predUnionWaypoint: PredUnionWaypoint
  ) {

    @strictpure def toMutable: MObjectWaypoint = MObjectWaypoint(predUnionWaypoint.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(6424, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjectWaypoint(
    var predUnionWaypoint: MPredUnionWaypoint
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjectWaypoint = ObjectWaypoint(predUnionWaypoint.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjectWaypoint.wellFormed

      // END USER CODE: ObjectWaypoint.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUnionWaypoint.choose(input, context) match {
        case PredUnionWaypoint.Choice.NullValueWaypoint => predUnionWaypoint = NullValueWaypoint.empty
        case PredUnionWaypoint.Choice.LMCPWaypoint => predUnionWaypoint = LMCPWaypoint.empty
        case _ => context.signalError(ERROR_PredUnionWaypoint)
      }
      predUnionWaypoint.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUnionWaypoint.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjectWaypoint)
      }
    }

  }

  object MissionCommand {

    val maxSize: Z = z"6583616"

    def empty: MMissionCommand = {
      return MMissionCommand(VehicleActionCommand.empty, u16"0", MSZ[MObjectWaypoint](), s64"0")
    }

    def decode(input: ISZ[B], context: Context): Option[MissionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[MissionCommand]() else Some(r.toImmutable)
    }

    def toMutableWaypointList(s: ISZ[ObjectWaypoint]): MSZ[MObjectWaypoint] = {
      var r = MSZ[MObjectWaypoint]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableWaypointList(s: MSZ[MObjectWaypoint]): ISZ[ObjectWaypoint] = {
      var r = ISZ[ObjectWaypoint]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class MissionCommand(
    val vehicleActionCommand: VehicleActionCommand,
    val waypointListSize: U16,
    val waypointList: ISZ[ObjectWaypoint],
    val firstWaypoint: S64
  ) {

    @strictpure def toMutable: MMissionCommand = MMissionCommand(vehicleActionCommand.toMutable, waypointListSize, MissionCommand.toMutableWaypointList(waypointList), firstWaypoint)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(6583616, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MMissionCommand(
    var vehicleActionCommand: MVehicleActionCommand,
    var waypointListSize: U16,
    var waypointList: MSZ[MObjectWaypoint],
    var firstWaypoint: S64
  ) extends Runtime.Composite {

    @strictpure def toImmutable: MissionCommand = MissionCommand(vehicleActionCommand.toImmutable, waypointListSize, MissionCommand.toImmutableWaypointList(waypointList), firstWaypoint)

    def wellFormed: Z = {

      val wfVehicleActionCommand = vehicleActionCommand.wellFormed
      if (wfVehicleActionCommand != 0) {
        return wfVehicleActionCommand
      }

      if (waypointList.size > 1024) {
        return ERROR_MissionCommand_waypointList
      }

      val waypointListSz = sizeOfWaypointList(waypointListSize)
      if (waypointList.size != waypointListSz) {
        return ERROR_MissionCommand_waypointList
      }

      // BEGIN USER CODE: MissionCommand.wellFormed

      // END USER CODE: MissionCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      vehicleActionCommand.decode(input, context)
      waypointListSize = Reader.IS.beU16(input, context)
      val waypointListSz = sizeOfWaypointList(waypointListSize)
      if (waypointListSz >= 0) {
        waypointList = MSZ.create(waypointListSz, ObjectWaypoint.empty)
        for (i <- 0 until waypointListSz) {
          waypointList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_MissionCommand_waypointList)
      }
      firstWaypoint = Reader.IS.beS64(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      vehicleActionCommand.encode(output, context)
      Writer.beU16(output, context, waypointListSize)
      val waypointListSz = sizeOfWaypointList(waypointListSize)
      if (waypointListSz >= 0) {
        for (i <- 0 until waypointListSz) {
          waypointList(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_MissionCommand_waypointList)
      }
      Writer.beS64(output, context, firstWaypoint)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_MissionCommand)
      }
    }

    def sizeOfWaypointList(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object LMCPMissionCommand {

    val maxSize: Z = z"6583736"

    def empty: MLMCPMissionCommand = {
      return MLMCPMissionCommand(u8"0", s64"0", u32"0", u16"0", MissionCommand.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPMissionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPMissionCommand]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPMissionCommand(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val missionCommand: MissionCommand
  ) extends PredUnionMissionCommand {

    @strictpure def toMutable: MLMCPMissionCommand = MLMCPMissionCommand(nonNullValue, seriesID, typeID, seriesVersion, missionCommand.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(6583736, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPMissionCommand(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var missionCommand: MMissionCommand
  ) extends MPredUnionMissionCommand {

    @strictpure def toImmutable: LMCPMissionCommand = LMCPMissionCommand(nonNullValue, seriesID, typeID, seriesVersion, missionCommand.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPMissionCommand
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPMissionCommand
      }

      if (typeID != u32"36") {
        return ERROR_LMCPMissionCommand
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPMissionCommand
      }

      val wfMissionCommand = missionCommand.wellFormed
      if (wfMissionCommand != 0) {
        return wfMissionCommand
      }

      // BEGIN USER CODE: LMCPMissionCommand.wellFormed

      // END USER CODE: LMCPMissionCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      missionCommand.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nonNullValue)
      Writer.beS64(output, context, seriesID)
      Writer.beU32(output, context, typeID)
      Writer.beU16(output, context, seriesVersion)
      missionCommand.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPMissionCommand)
      }
    }

  }

  @datatype trait PredUnionMissionCommand {
    @strictpure def toMutable: MPredUnionMissionCommand
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionMissionCommand extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionMissionCommand
  }

  object PredUnionMissionCommand {

    val maxSize: Z = z"6583736"

    def empty: MPredUnionMissionCommand = {
      return NullValueMissionCommand.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionMissionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionMissionCommand]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValueMissionCommand
       'LMCPMissionCommand
       'Error
    }

    def choose(input: ISZ[B], context: Context): Choice.Type = {
      {
        var ctx = context
        var hasError = F
        if (!hasError) {
          val temp = MSZ.create(1, u8"0")
          Reader.IS.beU8S(input, ctx, temp, 1)
          hasError = !(ctx.errorCode == 0 && temp == MSZ(u8"0"))
        }
        if (!hasError && ctx.errorCode == 0) {
          return Choice.NullValueMissionCommand
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPMissionCommand
        }
      }
      return Choice.Error
    }

  }

  object ObjectMissionCommand {

    val maxSize: Z = z"6583736"

    def empty: MObjectMissionCommand = {
      return MObjectMissionCommand(NullValueMissionCommand.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjectMissionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjectMissionCommand]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjectMissionCommand(
    val predUnionMissionCommand: PredUnionMissionCommand
  ) {

    @strictpure def toMutable: MObjectMissionCommand = MObjectMissionCommand(predUnionMissionCommand.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(6583736, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjectMissionCommand(
    var predUnionMissionCommand: MPredUnionMissionCommand
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjectMissionCommand = ObjectMissionCommand(predUnionMissionCommand.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjectMissionCommand.wellFormed

      // END USER CODE: ObjectMissionCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUnionMissionCommand.choose(input, context) match {
        case PredUnionMissionCommand.Choice.NullValueMissionCommand => predUnionMissionCommand = NullValueMissionCommand.empty
        case PredUnionMissionCommand.Choice.LMCPMissionCommand => predUnionMissionCommand = LMCPMissionCommand.empty
        case _ => context.signalError(ERROR_PredUnionMissionCommand)
      }
      predUnionMissionCommand.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUnionMissionCommand.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjectMissionCommand)
      }
    }

  }

  object NullValueAutomationResponseVehicleCommand {

    val maxSize: Z = z"8"

    def empty: MNullValueAutomationResponseVehicleCommand = {
      return MNullValueAutomationResponseVehicleCommand(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValueAutomationResponseVehicleCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValueAutomationResponseVehicleCommand]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValueAutomationResponseVehicleCommand(
    val nullValueAutomationResponseVehicleCommand: U8
  ) extends PredUnionAutomationResponseVehicleCommand {

    @strictpure def toMutable: MNullValueAutomationResponseVehicleCommand = MNullValueAutomationResponseVehicleCommand(nullValueAutomationResponseVehicleCommand)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValueAutomationResponseVehicleCommand(
    var nullValueAutomationResponseVehicleCommand: U8
  ) extends MPredUnionAutomationResponseVehicleCommand {

    @strictpure def toImmutable: NullValueAutomationResponseVehicleCommand = NullValueAutomationResponseVehicleCommand(nullValueAutomationResponseVehicleCommand)

    def wellFormed: Z = {

      if (nullValueAutomationResponseVehicleCommand != u8"0") {
        return ERROR_NullValueAutomationResponseVehicleCommand
      }

      // BEGIN USER CODE: NullValueAutomationResponseVehicleCommand.wellFormed

      // END USER CODE: NullValueAutomationResponseVehicleCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValueAutomationResponseVehicleCommand = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValueAutomationResponseVehicleCommand)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValueAutomationResponseVehicleCommand)
      }
    }

  }

  object LMCPAutomationResponseVehicleCommand {

    val maxSize: Z = z"5480"

    def empty: MLMCPAutomationResponseVehicleCommand = {
      return MLMCPAutomationResponseVehicleCommand(u8"0", s64"0", u32"0", u16"0", VehicleActionCommand.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPAutomationResponseVehicleCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPAutomationResponseVehicleCommand]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPAutomationResponseVehicleCommand(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val vehicleActionCommand: VehicleActionCommand
  ) extends PredUnionAutomationResponseVehicleCommand {

    @strictpure def toMutable: MLMCPAutomationResponseVehicleCommand = MLMCPAutomationResponseVehicleCommand(nonNullValue, seriesID, typeID, seriesVersion, vehicleActionCommand.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(5480, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPAutomationResponseVehicleCommand(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var vehicleActionCommand: MVehicleActionCommand
  ) extends MPredUnionAutomationResponseVehicleCommand {

    @strictpure def toImmutable: LMCPAutomationResponseVehicleCommand = LMCPAutomationResponseVehicleCommand(nonNullValue, seriesID, typeID, seriesVersion, vehicleActionCommand.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPAutomationResponseVehicleCommand
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPAutomationResponseVehicleCommand
      }

      if (typeID != u32"47") {
        return ERROR_LMCPAutomationResponseVehicleCommand
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPAutomationResponseVehicleCommand
      }

      val wfVehicleActionCommand = vehicleActionCommand.wellFormed
      if (wfVehicleActionCommand != 0) {
        return wfVehicleActionCommand
      }

      // BEGIN USER CODE: LMCPAutomationResponseVehicleCommand.wellFormed

      // END USER CODE: LMCPAutomationResponseVehicleCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      vehicleActionCommand.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nonNullValue)
      Writer.beS64(output, context, seriesID)
      Writer.beU32(output, context, typeID)
      Writer.beU16(output, context, seriesVersion)
      vehicleActionCommand.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPAutomationResponseVehicleCommand)
      }
    }

  }

  @datatype trait PredUnionAutomationResponseVehicleCommand {
    @strictpure def toMutable: MPredUnionAutomationResponseVehicleCommand
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionAutomationResponseVehicleCommand extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionAutomationResponseVehicleCommand
  }

  object PredUnionAutomationResponseVehicleCommand {

    val maxSize: Z = z"5480"

    def empty: MPredUnionAutomationResponseVehicleCommand = {
      return NullValueAutomationResponseVehicleCommand.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionAutomationResponseVehicleCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionAutomationResponseVehicleCommand]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValueAutomationResponseVehicleCommand
       'LMCPAutomationResponseVehicleCommand
       'Error
    }

    def choose(input: ISZ[B], context: Context): Choice.Type = {
      {
        var ctx = context
        var hasError = F
        if (!hasError) {
          val temp = MSZ.create(1, u8"0")
          Reader.IS.beU8S(input, ctx, temp, 1)
          hasError = !(ctx.errorCode == 0 && temp == MSZ(u8"0"))
        }
        if (!hasError && ctx.errorCode == 0) {
          return Choice.NullValueAutomationResponseVehicleCommand
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPAutomationResponseVehicleCommand
        }
      }
      return Choice.Error
    }

  }

  object ObjectAutomationResponseVehicleCommand {

    val maxSize: Z = z"5480"

    def empty: MObjectAutomationResponseVehicleCommand = {
      return MObjectAutomationResponseVehicleCommand(NullValueAutomationResponseVehicleCommand.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjectAutomationResponseVehicleCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjectAutomationResponseVehicleCommand]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjectAutomationResponseVehicleCommand(
    val predUnionAutomationResponseVehicleCommand: PredUnionAutomationResponseVehicleCommand
  ) {

    @strictpure def toMutable: MObjectAutomationResponseVehicleCommand = MObjectAutomationResponseVehicleCommand(predUnionAutomationResponseVehicleCommand.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(5480, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjectAutomationResponseVehicleCommand(
    var predUnionAutomationResponseVehicleCommand: MPredUnionAutomationResponseVehicleCommand
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjectAutomationResponseVehicleCommand = ObjectAutomationResponseVehicleCommand(predUnionAutomationResponseVehicleCommand.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjectAutomationResponseVehicleCommand.wellFormed

      // END USER CODE: ObjectAutomationResponseVehicleCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUnionAutomationResponseVehicleCommand.choose(input, context) match {
        case PredUnionAutomationResponseVehicleCommand.Choice.NullValueAutomationResponseVehicleCommand => predUnionAutomationResponseVehicleCommand = NullValueAutomationResponseVehicleCommand.empty
        case PredUnionAutomationResponseVehicleCommand.Choice.LMCPAutomationResponseVehicleCommand => predUnionAutomationResponseVehicleCommand = LMCPAutomationResponseVehicleCommand.empty
        case _ => context.signalError(ERROR_PredUnionAutomationResponseVehicleCommand)
      }
      predUnionAutomationResponseVehicleCommand.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUnionAutomationResponseVehicleCommand.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjectAutomationResponseVehicleCommand)
      }
    }

  }

  object NullValueAutomationResponseInfo {

    val maxSize: Z = z"8"

    def empty: MNullValueAutomationResponseInfo = {
      return MNullValueAutomationResponseInfo(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValueAutomationResponseInfo] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValueAutomationResponseInfo]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValueAutomationResponseInfo(
    val nullValueAutomationResponseInfo: U8
  ) extends PredUnionAutomationResponseInfo {

    @strictpure def toMutable: MNullValueAutomationResponseInfo = MNullValueAutomationResponseInfo(nullValueAutomationResponseInfo)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValueAutomationResponseInfo(
    var nullValueAutomationResponseInfo: U8
  ) extends MPredUnionAutomationResponseInfo {

    @strictpure def toImmutable: NullValueAutomationResponseInfo = NullValueAutomationResponseInfo(nullValueAutomationResponseInfo)

    def wellFormed: Z = {

      if (nullValueAutomationResponseInfo != u8"0") {
        return ERROR_NullValueAutomationResponseInfo
      }

      // BEGIN USER CODE: NullValueAutomationResponseInfo.wellFormed

      // END USER CODE: NullValueAutomationResponseInfo.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValueAutomationResponseInfo = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValueAutomationResponseInfo)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValueAutomationResponseInfo)
      }
    }

  }

  object LMCPAutomationResponseInfo {

    val maxSize: Z = z"1048712"

    def empty: MLMCPAutomationResponseInfo = {
      return MLMCPAutomationResponseInfo(u8"0", s64"0", u32"0", u16"0", KeyValuePair.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPAutomationResponseInfo] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPAutomationResponseInfo]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPAutomationResponseInfo(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val keyValuePair: KeyValuePair
  ) extends PredUnionAutomationResponseInfo {

    @strictpure def toMutable: MLMCPAutomationResponseInfo = MLMCPAutomationResponseInfo(nonNullValue, seriesID, typeID, seriesVersion, keyValuePair.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048712, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPAutomationResponseInfo(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var keyValuePair: MKeyValuePair
  ) extends MPredUnionAutomationResponseInfo {

    @strictpure def toImmutable: LMCPAutomationResponseInfo = LMCPAutomationResponseInfo(nonNullValue, seriesID, typeID, seriesVersion, keyValuePair.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPAutomationResponseInfo
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPAutomationResponseInfo
      }

      if (typeID != u32"2") {
        return ERROR_LMCPAutomationResponseInfo
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPAutomationResponseInfo
      }

      val wfKeyValuePair = keyValuePair.wellFormed
      if (wfKeyValuePair != 0) {
        return wfKeyValuePair
      }

      // BEGIN USER CODE: LMCPAutomationResponseInfo.wellFormed

      // END USER CODE: LMCPAutomationResponseInfo.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      keyValuePair.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nonNullValue)
      Writer.beS64(output, context, seriesID)
      Writer.beU32(output, context, typeID)
      Writer.beU16(output, context, seriesVersion)
      keyValuePair.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPAutomationResponseInfo)
      }
    }

  }

  @datatype trait PredUnionAutomationResponseInfo {
    @strictpure def toMutable: MPredUnionAutomationResponseInfo
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionAutomationResponseInfo extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionAutomationResponseInfo
  }

  object PredUnionAutomationResponseInfo {

    val maxSize: Z = z"1048712"

    def empty: MPredUnionAutomationResponseInfo = {
      return NullValueAutomationResponseInfo.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionAutomationResponseInfo] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionAutomationResponseInfo]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValueAutomationResponseInfo
       'LMCPAutomationResponseInfo
       'Error
    }

    def choose(input: ISZ[B], context: Context): Choice.Type = {
      {
        var ctx = context
        var hasError = F
        if (!hasError) {
          val temp = MSZ.create(1, u8"0")
          Reader.IS.beU8S(input, ctx, temp, 1)
          hasError = !(ctx.errorCode == 0 && temp == MSZ(u8"0"))
        }
        if (!hasError && ctx.errorCode == 0) {
          return Choice.NullValueAutomationResponseInfo
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPAutomationResponseInfo
        }
      }
      return Choice.Error
    }

  }

  object ObjectAutomationResponseInfo {

    val maxSize: Z = z"1048712"

    def empty: MObjectAutomationResponseInfo = {
      return MObjectAutomationResponseInfo(NullValueAutomationResponseInfo.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjectAutomationResponseInfo] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjectAutomationResponseInfo]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjectAutomationResponseInfo(
    val predUnionAutomationResponseInfo: PredUnionAutomationResponseInfo
  ) {

    @strictpure def toMutable: MObjectAutomationResponseInfo = MObjectAutomationResponseInfo(predUnionAutomationResponseInfo.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048712, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjectAutomationResponseInfo(
    var predUnionAutomationResponseInfo: MPredUnionAutomationResponseInfo
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjectAutomationResponseInfo = ObjectAutomationResponseInfo(predUnionAutomationResponseInfo.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjectAutomationResponseInfo.wellFormed

      // END USER CODE: ObjectAutomationResponseInfo.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUnionAutomationResponseInfo.choose(input, context) match {
        case PredUnionAutomationResponseInfo.Choice.NullValueAutomationResponseInfo => predUnionAutomationResponseInfo = NullValueAutomationResponseInfo.empty
        case PredUnionAutomationResponseInfo.Choice.LMCPAutomationResponseInfo => predUnionAutomationResponseInfo = LMCPAutomationResponseInfo.empty
        case _ => context.signalError(ERROR_PredUnionAutomationResponseInfo)
      }
      predUnionAutomationResponseInfo.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUnionAutomationResponseInfo.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjectAutomationResponseInfo)
      }
    }

  }

  object AutomationResponse {

    val maxSize: Z = z"114080240"

    def empty: MAutomationResponse = {
      return MAutomationResponse(u16"0", MSZ[MObjectMissionCommand](), u16"0", MSZ[MObjectAutomationResponseVehicleCommand](), u16"0", MSZ[MObjectAutomationResponseInfo]())
    }

    def decode(input: ISZ[B], context: Context): Option[AutomationResponse] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[AutomationResponse]() else Some(r.toImmutable)
    }

    def toMutableMissionCommandList(s: ISZ[ObjectMissionCommand]): MSZ[MObjectMissionCommand] = {
      var r = MSZ[MObjectMissionCommand]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableMissionCommandList(s: MSZ[MObjectMissionCommand]): ISZ[ObjectMissionCommand] = {
      var r = ISZ[ObjectMissionCommand]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }

    def toMutableVehicleCommandList(s: ISZ[ObjectAutomationResponseVehicleCommand]): MSZ[MObjectAutomationResponseVehicleCommand] = {
      var r = MSZ[MObjectAutomationResponseVehicleCommand]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableVehicleCommandList(s: MSZ[MObjectAutomationResponseVehicleCommand]): ISZ[ObjectAutomationResponseVehicleCommand] = {
      var r = ISZ[ObjectAutomationResponseVehicleCommand]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }

    def toMutableInfo(s: ISZ[ObjectAutomationResponseInfo]): MSZ[MObjectAutomationResponseInfo] = {
      var r = MSZ[MObjectAutomationResponseInfo]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableInfo(s: MSZ[MObjectAutomationResponseInfo]): ISZ[ObjectAutomationResponseInfo] = {
      var r = ISZ[ObjectAutomationResponseInfo]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class AutomationResponse(
    val missionCommandListSize: U16,
    val missionCommandList: ISZ[ObjectMissionCommand],
    val vehicleCommandListSize: U16,
    val vehicleCommandList: ISZ[ObjectAutomationResponseVehicleCommand],
    val infoSize: U16,
    val info: ISZ[ObjectAutomationResponseInfo]
  ) extends LMCPObject {

    @strictpure def toMutable: MAutomationResponse = MAutomationResponse(missionCommandListSize, AutomationResponse.toMutableMissionCommandList(missionCommandList), vehicleCommandListSize, AutomationResponse.toMutableVehicleCommandList(vehicleCommandList), infoSize, AutomationResponse.toMutableInfo(info))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(114080240, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MAutomationResponse(
    var missionCommandListSize: U16,
    var missionCommandList: MSZ[MObjectMissionCommand],
    var vehicleCommandListSize: U16,
    var vehicleCommandList: MSZ[MObjectAutomationResponseVehicleCommand],
    var infoSize: U16,
    var info: MSZ[MObjectAutomationResponseInfo]
  ) extends MLMCPObject {

    @strictpure def toImmutable: AutomationResponse = AutomationResponse(missionCommandListSize, AutomationResponse.toImmutableMissionCommandList(missionCommandList), vehicleCommandListSize, AutomationResponse.toImmutableVehicleCommandList(vehicleCommandList), infoSize, AutomationResponse.toImmutableInfo(info))

    def wellFormed: Z = {

      if (missionCommandList.size > 16) {
        return ERROR_AutomationResponse_missionCommandList
      }

      val missionCommandListSz = sizeOfMissionCommandList(missionCommandListSize)
      if (missionCommandList.size != missionCommandListSz) {
        return ERROR_AutomationResponse_missionCommandList
      }

      if (vehicleCommandList.size > 64) {
        return ERROR_AutomationResponse_vehicleCommandList
      }

      val vehicleCommandListSz = sizeOfVehicleCommandList(vehicleCommandListSize)
      if (vehicleCommandList.size != vehicleCommandListSz) {
        return ERROR_AutomationResponse_vehicleCommandList
      }

      if (info.size > 8) {
        return ERROR_AutomationResponse_info
      }

      val infoSz = sizeOfInfo(infoSize)
      if (info.size != infoSz) {
        return ERROR_AutomationResponse_info
      }

      // BEGIN USER CODE: AutomationResponse.wellFormed

      // END USER CODE: AutomationResponse.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      missionCommandListSize = Reader.IS.beU16(input, context)
      val missionCommandListSz = sizeOfMissionCommandList(missionCommandListSize)
      if (missionCommandListSz >= 0) {
        missionCommandList = MSZ.create(missionCommandListSz, ObjectMissionCommand.empty)
        for (i <- 0 until missionCommandListSz) {
          missionCommandList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_AutomationResponse_missionCommandList)
      }
      vehicleCommandListSize = Reader.IS.beU16(input, context)
      val vehicleCommandListSz = sizeOfVehicleCommandList(vehicleCommandListSize)
      if (vehicleCommandListSz >= 0) {
        vehicleCommandList = MSZ.create(vehicleCommandListSz, ObjectAutomationResponseVehicleCommand.empty)
        for (i <- 0 until vehicleCommandListSz) {
          vehicleCommandList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_AutomationResponse_vehicleCommandList)
      }
      infoSize = Reader.IS.beU16(input, context)
      val infoSz = sizeOfInfo(infoSize)
      if (infoSz >= 0) {
        info = MSZ.create(infoSz, ObjectAutomationResponseInfo.empty)
        for (i <- 0 until infoSz) {
          info(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_AutomationResponse_info)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, missionCommandListSize)
      val missionCommandListSz = sizeOfMissionCommandList(missionCommandListSize)
      if (missionCommandListSz >= 0) {
        for (i <- 0 until missionCommandListSz) {
          missionCommandList(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_AutomationResponse_missionCommandList)
      }
      Writer.beU16(output, context, vehicleCommandListSize)
      val vehicleCommandListSz = sizeOfVehicleCommandList(vehicleCommandListSize)
      if (vehicleCommandListSz >= 0) {
        for (i <- 0 until vehicleCommandListSz) {
          vehicleCommandList(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_AutomationResponse_vehicleCommandList)
      }
      Writer.beU16(output, context, infoSize)
      val infoSz = sizeOfInfo(infoSize)
      if (infoSz >= 0) {
        for (i <- 0 until infoSz) {
          info(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_AutomationResponse_info)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_AutomationResponse)
      }
    }

    def sizeOfMissionCommandList(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }

    def sizeOfVehicleCommandList(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }

    def sizeOfInfo(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  @datatype trait LMCPObject {
    @strictpure def toMutable: MLMCPObject
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MLMCPObject extends Runtime.Composite {
    @strictpure def toImmutable: LMCPObject
  }

  object LMCPObject {

    val maxSize: Z = z"114080240"

    def empty: MLMCPObject = {
      return OperatingRegion.empty
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPObject] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPObject]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'OperatingRegion
       'AirVehicleState
       'LineSearchTask
       'AutomationRequest
       'AutomationResponse
       'Error
    }

    def choose(n: (S64, U32, U16)): Choice.Type = {
      val r: Z = {
        n match {
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
        }
      }
      r match {
        case z"0" => return Choice.OperatingRegion
        case z"1" => return Choice.AirVehicleState
        case z"2" => return Choice.LineSearchTask
        case z"3" => return Choice.AutomationRequest
        case z"4" => return Choice.AutomationResponse
        case _ =>
      }
      return Choice.Error
    }

  }

  object LMCPObjectDecode {

    val maxSize: Z = z"114080360"

    def empty: MLMCPObjectDecode = {
      return MLMCPObjectDecode(u8"0", s64"0", u32"0", u16"0", OperatingRegion.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPObjectDecode] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPObjectDecode]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPObjectDecode(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val lMCPObject: LMCPObject
  ) extends LMCPObjectNullCheck {

    @strictpure def toMutable: MLMCPObjectDecode = MLMCPObjectDecode(nonNullValue, seriesID, typeID, seriesVersion, lMCPObject.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(114080360, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPObjectDecode(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var lMCPObject: MLMCPObject
  ) extends MLMCPObjectNullCheck {

    @strictpure def toImmutable: LMCPObjectDecode = LMCPObjectDecode(nonNullValue, seriesID, typeID, seriesVersion, lMCPObject.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPObjectDecode
      }

      (LMCPObject.choose((seriesID, typeID, seriesVersion)), lMCPObject) match {
        case (LMCPObject.Choice.OperatingRegion, _: MOperatingRegion) =>
        case (LMCPObject.Choice.AirVehicleState, _: MAirVehicleState) =>
        case (LMCPObject.Choice.LineSearchTask, _: MLineSearchTask) =>
        case (LMCPObject.Choice.AutomationRequest, _: MAutomationRequest) =>
        case (LMCPObject.Choice.AutomationResponse, _: MAutomationResponse) =>
        case _ => return ERROR_LMCPObject
      }

      val wfLMCPObject = lMCPObject.wellFormed
      if (wfLMCPObject != 0) {
        return wfLMCPObject
      }

      // BEGIN USER CODE: LMCPObjectDecode.wellFormed

      // END USER CODE: LMCPObjectDecode.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      LMCPObject.choose((seriesID, typeID, seriesVersion)) match {
        case LMCPObject.Choice.OperatingRegion => lMCPObject = OperatingRegion.empty
        case LMCPObject.Choice.AirVehicleState => lMCPObject = AirVehicleState.empty
        case LMCPObject.Choice.LineSearchTask => lMCPObject = LineSearchTask.empty
        case LMCPObject.Choice.AutomationRequest => lMCPObject = AutomationRequest.empty
        case LMCPObject.Choice.AutomationResponse => lMCPObject = AutomationResponse.empty
        case _ => context.signalError(ERROR_LMCPObject)
      }
      lMCPObject.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nonNullValue)
      Writer.beS64(output, context, seriesID)
      Writer.beU32(output, context, typeID)
      Writer.beU16(output, context, seriesVersion)
      lMCPObject.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPObjectDecode)
      }
    }

  }

  @datatype trait LMCPObjectNullCheck {
    @strictpure def toMutable: MLMCPObjectNullCheck
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MLMCPObjectNullCheck extends Runtime.Composite {
    @strictpure def toImmutable: LMCPObjectNullCheck
  }

  object LMCPObjectNullCheck {

    val maxSize: Z = z"114080360"

    def empty: MLMCPObjectNullCheck = {
      return NullValue.empty
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPObjectNullCheck] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPObjectNullCheck]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValue
       'LMCPObjectDecode
       'Error
    }

    def choose(input: ISZ[B], context: Context): Choice.Type = {
      {
        var ctx = context
        var hasError = F
        if (!hasError) {
          val temp = MSZ.create(1, u8"0")
          Reader.IS.beU8S(input, ctx, temp, 1)
          hasError = !(ctx.errorCode == 0 && temp == MSZ(u8"0"))
        }
        if (!hasError && ctx.errorCode == 0) {
          return Choice.NullValue
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPObjectDecode
        }
      }
      return Choice.Error
    }

  }

  object LMCPMessage {

    val maxSize: Z = z"114080456"

    def empty: MLMCPMessage = {
      return MLMCPMessage(s32"0", u32"0", NullValue.empty, u32"0")
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPMessage] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPMessage]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPMessage(
    val controlString: S32,
    val messageSize: U32,
    val lMCPObjectNullCheck: LMCPObjectNullCheck,
    val checksum: U32
  ) {

    @strictpure def toMutable: MLMCPMessage = MLMCPMessage(controlString, messageSize, lMCPObjectNullCheck.toMutable, checksum)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(114080456, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPMessage(
    var controlString: S32,
    var messageSize: U32,
    var lMCPObjectNullCheck: MLMCPObjectNullCheck,
    var checksum: U32
  ) extends Runtime.Composite {

    @strictpure def toImmutable: LMCPMessage = LMCPMessage(controlString, messageSize, lMCPObjectNullCheck.toImmutable, checksum)

    def wellFormed: Z = {

      if (controlString != s32"1280131920") {
        return ERROR_LMCPMessage
      }

      // BEGIN USER CODE: LMCPMessage.wellFormed

      // END USER CODE: LMCPMessage.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      controlString = Reader.IS.beS32(input, context)
      messageSize = Reader.IS.beU32(input, context)
      LMCPObjectNullCheck.choose(input, context) match {
        case LMCPObjectNullCheck.Choice.NullValue => lMCPObjectNullCheck = NullValue.empty
        case LMCPObjectNullCheck.Choice.LMCPObjectDecode => lMCPObjectNullCheck = LMCPObjectDecode.empty
        case _ => context.signalError(ERROR_LMCPObjectNullCheck)
      }
      lMCPObjectNullCheck.decode(input, context)
      checksum = Reader.IS.beU32(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beS32(output, context, controlString)
      Writer.beU32(output, context, messageSize)
      lMCPObjectNullCheck.encode(output, context)
      Writer.beU32(output, context, checksum)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPMessage)
      }
    }

  }

}

// BEGIN USER CODE: Test
import BitCodec._

val expectedOperatingRegionMessage = MLMCPMessage(
  s32"0x4c4d4350",
  u32"0x2B",
  MLMCPObjectDecode(
    u8"0x01",
    s64"0x434D415349000000",
    u32"0x00000027",
    u16"0x0003",
    MOperatingRegion(
      s64"0x0000000000000150",
      u16"0x0001",
      MSZ(u64"0x000000000000014E"),
      u16"0x0001",
      MSZ(u64"0x000000000000014F")
    )
  ),
  u32"0x000003E1"
)

val operatingRegionBitstream = ops.Bits.fromHexString("00000000000001500001000000000000014E0001000000000000014F")
val operatingRegionContext = Context.create
val operatingRegionDecoded = OperatingRegion.empty
operatingRegionDecoded.decode(operatingRegionBitstream, operatingRegionContext)
assert(operatingRegionContext.offset == operatingRegionBitstream.size)
assert(operatingRegionContext.errorCode == 0 && operatingRegionContext.errorOffset == 0)

// println(s"decode(bitstream).offset = ${operatingRegionContext.offset}")
// println(s"decode(bitstream).errorCode = ${operatingRegionContext.errorCode}")
// println(s"decode(bitstream).errorOffset = ${operatingRegionContext.errorOffset}")

val lmcpOperatingRegionBitstream = ops.Bits.fromHexString("01434D41534900000000000027000300000000000001500001000000000000014E0001000000000000014F")
val lmcpOperatingRegionContext = Context.create
val lmcpOperatingRegionDecoded = LMCPObjectDecode.empty
lmcpOperatingRegionDecoded.decode(lmcpOperatingRegionBitstream, lmcpOperatingRegionContext)
assert(lmcpOperatingRegionContext.offset == lmcpOperatingRegionBitstream.size)
assert(lmcpOperatingRegionContext.errorCode == 0 && lmcpOperatingRegionContext.errorOffset == 0)

// println(s"decode(bitstream) = $lmcpOperatingRegionDecoded")
// println(s"decode(bitstream).offset = ${lmcpOperatingRegionContext.offset}")
// println(s"decode(bitstream).errorCode = ${lmcpOperatingRegionContext.errorCode}")
// println(s"decode(bitstream).errorOffset = ${lmcpOperatingRegionContext.errorOffset}")

val lmcpMessageOperatingRegionBitstream = ops.Bits.fromHexString("4C4D43500000002B01434D41534900000000000027000300000000000001500001000000000000014E0001000000000000014F000003E1")
val lmcpMessageOperatingRegionInputContext = Context.create
val lmcpMessageOperatingRegionDecoded = LMCPMessage.empty
lmcpMessageOperatingRegionDecoded.decode(lmcpMessageOperatingRegionBitstream, lmcpMessageOperatingRegionInputContext)
assert(lmcpMessageOperatingRegionInputContext.offset == lmcpMessageOperatingRegionBitstream.size)
assert(lmcpMessageOperatingRegionInputContext.errorCode == 0 && lmcpMessageOperatingRegionInputContext.errorOffset == 0)
assert(lmcpMessageOperatingRegionDecoded == expectedOperatingRegionMessage)
println(s"lmcpMessageOperatingRegionDecoded(lmcpMessageOperatingRegionBitstream) =\n\t $lmcpMessageOperatingRegionDecoded")

// println(s"decode(bitstream).offset = ${lmcpMessageOperatingRegionInputContext.offset}")
// println(s"decode(bitstream).errorCode = ${lmcpMessageOperatingRegionInputContext.errorCode}")
// println(s"decode(bitstream).errorOffset = ${lmcpMessageOperatingRegionInputContext.errorOffset}")

val lmcpMessageOperatingRegionOutputBitstream = MSZ.create(440,F)
val lmcpMessageOperatingRegionOutputContext = Context.create
lmcpMessageOperatingRegionDecoded.encode(lmcpMessageOperatingRegionOutputBitstream, lmcpMessageOperatingRegionOutputContext)
assert(lmcpMessageOperatingRegionOutputBitstream.toIS == lmcpMessageOperatingRegionBitstream)

// println(s"encode(bitstream) = ${lmcpMessageOperatingRegionOutputBitstream}")
// println(s"input bitstream   = ${lmcpMessageOperatingRegionBitstream}")
// println(s"encode(bitstream).errorCode = ${lmcpMessageOperatingRegionOutputContext.errorCode}")

val expectedAutomationRequestMessage = MLMCPMessage (
  s32"0x4c4d4350",
  u32"0x2E",
  MLMCPObjectDecode(
    u8"0x01",
    s64"0x434D415349000000",
    u32"0x00000028",
    u16"0x0003",
    MAutomationRequest(
      u16"0x0001",
      MSZ(s64"0x0000000000000190"),
      u16"0x0001",
      MSZ(s64"0x00000000000003E8"),
      MTaskRelationships(
        u16"0x0000",
        MSZ()
      ),
      s64"0x0000000000000150",
      u8"0x00"
    )
  ),
  u32"0x000004C2"
)

val lmcpMessageAutomationRequestBitstream = ops.Bits.fromHexString("4C4D43500000002E01434D41534900000000000028000300010000000000000190000100000000000003E80000000000000000015000000004C2")
val lmcpMessageAutomationRequestInputContext = Context.create
val lmcpMessageAutomationRequestDecoded = LMCPMessage.empty
lmcpMessageAutomationRequestDecoded.decode(lmcpMessageAutomationRequestBitstream, lmcpMessageAutomationRequestInputContext)
assert(lmcpMessageAutomationRequestInputContext.offset == lmcpMessageAutomationRequestBitstream.size)
assert(lmcpMessageAutomationRequestInputContext.errorCode == 0 && lmcpMessageAutomationRequestInputContext.errorOffset == 0)
assert(lmcpMessageAutomationRequestDecoded == expectedAutomationRequestMessage)
println(s"lmcpMessageAutomationRequestDecoded(lmcpMessageAutomationRequestBitstream) =\n\t $lmcpMessageAutomationRequestDecoded")

val lmcpPointBitstream = ops.Bits.fromHexString("01434D4153490000000000000300034046A7B16B64BB7FC05E4088677920160000000000000001")
// val lmcpPointBitstream = ops.Bits.fromHexString("4046A7B16B64BB7FC05E4088677920160000000000000001")
val lmcpPointContext = Context.create
val lmcpPoint = ObjectPoint.empty
lmcpPoint.decode(lmcpPointBitstream, lmcpPointContext)
println(s"Point = ${lmcpPoint}")

val lmcpMessageLineSearchTaskBitstream = ops.Bits.fromHexString("4C4D435000000E2601434D4153490000000000001F000300000000000003E800174C494E455F57617465727761795F446573636875746573000000000000000000010001000000000000000000000000447A0000000601434D4153490000000000000300034046A7B16B64BB7FC05E408867792016000000000000000101434D4153490000000000000300034046A7B2D106358DC05E40783309F5A6000000000000000101434D4153490000000000000300034046A7ABFEFC1685C05E4064B6DD718E000000000000000101434D4153490000000000000300034046A79EB59F8CCFC05E40513EED62A0000000000000000101434D4153490000000000000300034046A7928F582DA4C05E403F033BF933000000000000000101434D4153490000000000000300034046A786746308B6C05E40313C3AE4F90000000000000001000101434D415349000000000000100003420C0000C270000000000000000000000000032E25")
val lmcpMessageLineSearchTaskInputContext = Context.create
val lmcpMessageLineSearchTaskDecoded = LMCPMessage.empty
lmcpMessageLineSearchTaskDecoded.decode(lmcpMessageLineSearchTaskBitstream, lmcpMessageLineSearchTaskInputContext)
// // assert(lmcpMessageLineSearchTaskInputContext.offset == lmcpMessageLineSearchTaskBitstream.size)
// // assert(lmcpMessageLineSearchTaskInputContext.errorCode == 0 && lmcpMessageLineSearchTaskInputContext.errorOffset == 0)
// println(s"decode(bitstream).offset = ${lmcpMessageLineSearchTaskInputContext.offset}")
// println(s"decode(bitstream).errorCode = ${lmcpMessageLineSearchTaskInputContext.errorCode}")
// println(s"decode(bitstream).errorOffset = ${lmcpMessageLineSearchTaskInputContext.errorOffset}")
println(s"lmcpMessageLineSearchTaskDecoded(lmcpMessageLineSearchTaskBitstream) =\n\t $lmcpMessageLineSearchTaskDecoded")
// END USER CODE: Test
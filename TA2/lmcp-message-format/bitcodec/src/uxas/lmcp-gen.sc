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

  val ERROR_PackedEntityStateLocation3D: Z = 7

  val ERROR_LMCPEntityStateLocation3D: Z = 8

  val ERROR_PredUnionEntityStateLocation3D: Z = 9

  val ERROR_ObjectEntityStateLocation3D: Z = 10

  val ERROR_NullValuePayloadState: Z = 11

  val ERROR_NullValuepayloadStateParameter: Z = 12

  val ERROR_PackedpayloadStateParameterKey_stringChars: Z = 13

  val ERROR_PackedpayloadStateParameterKey: Z = 14

  val ERROR_PackedpayloadStateParameterValue_stringChars: Z = 15

  val ERROR_PackedpayloadStateParameterValue: Z = 16

  val ERROR_PackedpayloadStateParameter: Z = 17

  val ERROR_LMCPpayloadStateParameter: Z = 18

  val ERROR_PredUnionpayloadStateParameter: Z = 19

  val ERROR_ObjectpayloadStateParameter: Z = 20

  val ERROR_PackedPayloadState_parameters: Z = 21

  val ERROR_PackedPayloadState: Z = 22

  val ERROR_LMCPPayloadState: Z = 23

  val ERROR_PredUnionPayloadState: Z = 24

  val ERROR_ObjectPayloadState: Z = 25

  val ERROR_EntityState_payloadStateList: Z = 26

  val ERROR_EntityState_associatedTasks: Z = 27

  val ERROR_NullValueEntityStateInfo: Z = 28

  val ERROR_PackedEntityStateInfoKey_stringChars: Z = 29

  val ERROR_PackedEntityStateInfoKey: Z = 30

  val ERROR_PackedEntityStateInfoValue_stringChars: Z = 31

  val ERROR_PackedEntityStateInfoValue: Z = 32

  val ERROR_PackedEntityStateInfo: Z = 33

  val ERROR_LMCPEntityStateInfo: Z = 34

  val ERROR_PredUnionEntityStateInfo: Z = 35

  val ERROR_ObjectEntityStateInfo: Z = 36

  val ERROR_EntityState_info: Z = 37

  val ERROR_EntityState: Z = 38

  val ERROR_AirVehicleState: Z = 39

  val ERROR_Label_stringChars: Z = 40

  val ERROR_Label: Z = 41

  val ERROR_Task_eligibleEntities: Z = 42

  val ERROR_NullValuetaskParameter: Z = 43

  val ERROR_PackedtaskParameterKey_stringChars: Z = 44

  val ERROR_PackedtaskParameterKey: Z = 45

  val ERROR_PackedtaskParameterValue_stringChars: Z = 46

  val ERROR_PackedtaskParameterValue: Z = 47

  val ERROR_PackedtaskParameter: Z = 48

  val ERROR_LMCPtaskParameter: Z = 49

  val ERROR_PredUniontaskParameter: Z = 50

  val ERROR_ObjecttaskParameter: Z = 51

  val ERROR_Task_parameters: Z = 52

  val ERROR_Task: Z = 53

  val ERROR_SearchTask_desiredWavelengthBands: Z = 54

  val ERROR_SearchTask: Z = 55

  val ERROR_NullValuePoint: Z = 56

  val ERROR_PackedPoint: Z = 57

  val ERROR_LMCPPoint: Z = 58

  val ERROR_PredUnionPoint: Z = 59

  val ERROR_ObjectPoint: Z = 60

  val ERROR_LineSearchTask_pointList: Z = 61

  val ERROR_NullValueViewAngle: Z = 62

  val ERROR_PackedViewAngle: Z = 63

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

  val ERROR_NullValueVehicleActionMissionCommandVehicleActionCommand: Z = 75

  val ERROR_PackedVehicleActionMissionCommandVehicleActionCommand_associatedTaskList: Z = 76

  val ERROR_PackedVehicleActionMissionCommandVehicleActionCommand: Z = 77

  val ERROR_LMCPVehicleActionMissionCommandVehicleActionCommand: Z = 78

  val ERROR_PredUnionVehicleActionMissionCommandVehicleActionCommand: Z = 79

  val ERROR_ObjectVehicleActionMissionCommandVehicleActionCommand: Z = 80

  val ERROR_MissionCommandVehicleActionCommand_vehicleActionList: Z = 81

  val ERROR_MissionCommandVehicleActionCommand: Z = 82

  val ERROR_NullValueWaypoint: Z = 83

  val ERROR_WayPointLocation3D: Z = 84

  val ERROR_NullValueWaypointVehicleAction: Z = 85

  val ERROR_PackedWaypointVehicleAction_associatedTaskList: Z = 86

  val ERROR_PackedWaypointVehicleAction: Z = 87

  val ERROR_LMCPWaypointVehicleAction: Z = 88

  val ERROR_PredUnionWaypointVehicleAction: Z = 89

  val ERROR_ObjectWaypointVehicleAction: Z = 90

  val ERROR_PackedWaypoint_vehicleActionList: Z = 91

  val ERROR_PackedWaypoint_associatedTaskList: Z = 92

  val ERROR_PackedWaypoint: Z = 93

  val ERROR_LMCPWaypoint: Z = 94

  val ERROR_PredUnionWaypoint: Z = 95

  val ERROR_ObjectWaypoint: Z = 96

  val ERROR_PackedMissionCommand_waypointList: Z = 97

  val ERROR_PackedMissionCommand: Z = 98

  val ERROR_LMCPMissionCommand: Z = 99

  val ERROR_PredUnionMissionCommand: Z = 100

  val ERROR_ObjectMissionCommand: Z = 101

  val ERROR_AutomationResponse_missionCommandList: Z = 102

  val ERROR_NullValueAutomationResponseVehicleCommand: Z = 103

  val ERROR_NullValueVehicleActionPackedAutomationResponseVehicleCommand: Z = 104

  val ERROR_PackedVehicleActionPackedAutomationResponseVehicleCommand_associatedTaskList: Z = 105

  val ERROR_PackedVehicleActionPackedAutomationResponseVehicleCommand: Z = 106

  val ERROR_LMCPVehicleActionPackedAutomationResponseVehicleCommand: Z = 107

  val ERROR_PredUnionVehicleActionPackedAutomationResponseVehicleCommand: Z = 108

  val ERROR_ObjectVehicleActionPackedAutomationResponseVehicleCommand: Z = 109

  val ERROR_PackedAutomationResponseVehicleCommand_vehicleActionList: Z = 110

  val ERROR_PackedAutomationResponseVehicleCommand: Z = 111

  val ERROR_LMCPAutomationResponseVehicleCommand: Z = 112

  val ERROR_PredUnionAutomationResponseVehicleCommand: Z = 113

  val ERROR_ObjectAutomationResponseVehicleCommand: Z = 114

  val ERROR_AutomationResponse_vehicleCommandList: Z = 115

  val ERROR_NullValueAutomationResponseInfo: Z = 116

  val ERROR_PackedAutomationResponseInfoKey_stringChars: Z = 117

  val ERROR_PackedAutomationResponseInfoKey: Z = 118

  val ERROR_PackedAutomationResponseInfoValue_stringChars: Z = 119

  val ERROR_PackedAutomationResponseInfoValue: Z = 120

  val ERROR_PackedAutomationResponseInfo: Z = 121

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
  val CMASISeriesVersion : U16 = u16"3"

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
    val _keepInAreasSize: U16,
    val keepInAreas: ISZ[U64],
    val _keepOutAreasSize: U16,
    val keepOutAreas: ISZ[U64]
  ) extends LMCPObject {

    @strictpure def toMutable: MOperatingRegion = MOperatingRegion(id, _keepInAreasSize, OperatingRegion.toMutableKeepInAreas(keepInAreas), _keepOutAreasSize, OperatingRegion.toMutableKeepOutAreas(keepOutAreas))

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
    var _keepInAreasSize: U16,
    var keepInAreas: MSZ[U64],
    var _keepOutAreasSize: U16,
    var keepOutAreas: MSZ[U64]
  ) extends MLMCPObject {

    @strictpure def toImmutable: OperatingRegion = OperatingRegion(id, _keepInAreasSize, OperatingRegion.toImmutableKeepInAreas(keepInAreas), _keepOutAreasSize, OperatingRegion.toImmutableKeepOutAreas(keepOutAreas))

    def wellFormed: Z = {

      if (keepInAreas.size > 1) {
        return ERROR_OperatingRegion_keepInAreas
      }

      val keepInAreasSize = sizeOfKeepInAreas(_keepInAreasSize)
      if (keepInAreas.size != keepInAreasSize) {
        return ERROR_OperatingRegion_keepInAreas
      }

      if (keepOutAreas.size > 1) {
        return ERROR_OperatingRegion_keepOutAreas
      }

      val keepOutAreasSize = sizeOfKeepOutAreas(_keepOutAreasSize)
      if (keepOutAreas.size != keepOutAreasSize) {
        return ERROR_OperatingRegion_keepOutAreas
      }

      // BEGIN USER CODE: OperatingRegion.wellFormed

      // END USER CODE: OperatingRegion.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      id = Reader.IS.beS64(input, context)
      _keepInAreasSize = Reader.IS.beU16(input, context)
      val keepInAreasSize = sizeOfKeepInAreas(_keepInAreasSize)
      if (keepInAreasSize >= 0) {
        keepInAreas = MSZ.create(keepInAreasSize, u64"0")
        for (i <- 0 until keepInAreasSize) {
          val id = Reader.IS.beU64(input, context)
          keepInAreas(i) = id
        }
      } else {
        context.signalError(ERROR_OperatingRegion_keepInAreas)
      }
      _keepOutAreasSize = Reader.IS.beU16(input, context)
      val keepOutAreasSize = sizeOfKeepOutAreas(_keepOutAreasSize)
      if (keepOutAreasSize >= 0) {
        keepOutAreas = MSZ.create(keepOutAreasSize, u64"0")
        for (i <- 0 until keepOutAreasSize) {
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
      Writer.beU16(output, context, _keepInAreasSize)
      val keepInAreasSize = sizeOfKeepInAreas(_keepInAreasSize)
      if (keepInAreasSize >= 0) {
        for (i <- 0 until keepInAreasSize) {
          val id = keepInAreas(i)
          Writer.beU64(output, context, id)
        }
      } else {
        context.signalError(ERROR_OperatingRegion_keepInAreas)
      }
      Writer.beU16(output, context, _keepOutAreasSize)
      val keepOutAreasSize = sizeOfKeepOutAreas(_keepOutAreasSize)
      if (keepOutAreasSize >= 0) {
        for (i <- 0 until keepOutAreasSize) {
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

  object PackedEntityStateLocation3D {

    val maxSize: Z = z"192"

    def empty: MPackedEntityStateLocation3D = {
      return MPackedEntityStateLocation3D(0.0d, 0.0d, 0.0f, s32"0")
    }

    def decode(input: ISZ[B], context: Context): Option[PackedEntityStateLocation3D] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedEntityStateLocation3D]() else Some(r.toImmutable)
    }

  }

  @datatype class PackedEntityStateLocation3D(
    val latitude: F64,
    val longitude: F64,
    val altitude: F32,
    val altitudeType: S32
  ) {

    @strictpure def toMutable: MPackedEntityStateLocation3D = MPackedEntityStateLocation3D(latitude, longitude, altitude, altitudeType)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(192, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedEntityStateLocation3D(
    var latitude: F64,
    var longitude: F64,
    var altitude: F32,
    var altitudeType: S32
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedEntityStateLocation3D = PackedEntityStateLocation3D(latitude, longitude, altitude, altitudeType)

    def wellFormed: Z = {


      // BEGIN USER CODE: PackedEntityStateLocation3D.wellFormed

      // END USER CODE: PackedEntityStateLocation3D.wellFormed

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
        context.updateErrorCode(ERROR_PackedEntityStateLocation3D)
      }
    }

  }

  object LMCPEntityStateLocation3D {

    val maxSize: Z = z"312"

    def empty: MLMCPEntityStateLocation3D = {
      return MLMCPEntityStateLocation3D(u8"0", s64"0", u32"0", u16"0", PackedEntityStateLocation3D.empty)
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
    val packedEntityStateLocation3D: PackedEntityStateLocation3D
  ) extends PredUnionEntityStateLocation3D {

    @strictpure def toMutable: MLMCPEntityStateLocation3D = MLMCPEntityStateLocation3D(nonNullValue, seriesID, typeID, seriesVersion, packedEntityStateLocation3D.toMutable)

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
    var packedEntityStateLocation3D: MPackedEntityStateLocation3D
  ) extends MPredUnionEntityStateLocation3D {

    @strictpure def toImmutable: LMCPEntityStateLocation3D = LMCPEntityStateLocation3D(nonNullValue, seriesID, typeID, seriesVersion, packedEntityStateLocation3D.toImmutable)

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

      val wfPackedEntityStateLocation3D = packedEntityStateLocation3D.wellFormed
      if (wfPackedEntityStateLocation3D != 0) {
        return wfPackedEntityStateLocation3D
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
      packedEntityStateLocation3D.decode(input, context)

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
      packedEntityStateLocation3D.encode(output, context)

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

  object NullValuepayloadStateParameter {

    val maxSize: Z = z"8"

    def empty: MNullValuepayloadStateParameter = {
      return MNullValuepayloadStateParameter(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValuepayloadStateParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValuepayloadStateParameter]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValuepayloadStateParameter(
    val nullValuepayloadStateParameter: U8
  ) extends PredUnionpayloadStateParameter {

    @strictpure def toMutable: MNullValuepayloadStateParameter = MNullValuepayloadStateParameter(nullValuepayloadStateParameter)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValuepayloadStateParameter(
    var nullValuepayloadStateParameter: U8
  ) extends MPredUnionpayloadStateParameter {

    @strictpure def toImmutable: NullValuepayloadStateParameter = NullValuepayloadStateParameter(nullValuepayloadStateParameter)

    def wellFormed: Z = {

      if (nullValuepayloadStateParameter != u8"0") {
        return ERROR_NullValuepayloadStateParameter
      }

      // BEGIN USER CODE: NullValuepayloadStateParameter.wellFormed

      // END USER CODE: NullValuepayloadStateParameter.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValuepayloadStateParameter = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValuepayloadStateParameter)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValuepayloadStateParameter)
      }
    }

  }

  object PackedpayloadStateParameterKey {

    val maxSize: Z = z"524296"

    def empty: MPackedpayloadStateParameterKey = {
      return MPackedpayloadStateParameterKey(u16"0", MSZ[U8]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedpayloadStateParameterKey] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedpayloadStateParameterKey]() else Some(r.toImmutable)
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

  @datatype class PackedpayloadStateParameterKey(
    val _stringCharsSize: U16,
    val stringChars: ISZ[U8]
  ) {

    @strictpure def toMutable: MPackedpayloadStateParameterKey = MPackedpayloadStateParameterKey(_stringCharsSize, PackedpayloadStateParameterKey.toMutableStringChars(stringChars))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(524296, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedpayloadStateParameterKey(
    var _stringCharsSize: U16,
    var stringChars: MSZ[U8]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedpayloadStateParameterKey = PackedpayloadStateParameterKey(_stringCharsSize, PackedpayloadStateParameterKey.toImmutableStringChars(stringChars))

    def wellFormed: Z = {

      if (stringChars.size > 65535) {
        return ERROR_PackedpayloadStateParameterKey_stringChars
      }

      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringChars.size != stringCharsSize) {
        return ERROR_PackedpayloadStateParameterKey_stringChars
      }

      // BEGIN USER CODE: PackedpayloadStateParameterKey.wellFormed

      // END USER CODE: PackedpayloadStateParameterKey.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      _stringCharsSize = Reader.IS.beU16(input, context)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        stringChars = MSZ.create(stringCharsSize, u8"0")
        for (i <- 0 until stringCharsSize) {
          val c = Reader.IS.bleU8(input, context)
          stringChars(i) = c
        }
      } else {
        context.signalError(ERROR_PackedpayloadStateParameterKey_stringChars)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, _stringCharsSize)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        for (i <- 0 until stringCharsSize) {
          val c = stringChars(i)
          Writer.bleU8(output, context, c)
        }
      } else {
        context.signalError(ERROR_PackedpayloadStateParameterKey_stringChars)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedpayloadStateParameterKey)
      }
    }

    def sizeOfStringChars(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object PackedpayloadStateParameterValue {

    val maxSize: Z = z"524296"

    def empty: MPackedpayloadStateParameterValue = {
      return MPackedpayloadStateParameterValue(u16"0", MSZ[U8]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedpayloadStateParameterValue] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedpayloadStateParameterValue]() else Some(r.toImmutable)
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

  @datatype class PackedpayloadStateParameterValue(
    val _stringCharsSize: U16,
    val stringChars: ISZ[U8]
  ) {

    @strictpure def toMutable: MPackedpayloadStateParameterValue = MPackedpayloadStateParameterValue(_stringCharsSize, PackedpayloadStateParameterValue.toMutableStringChars(stringChars))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(524296, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedpayloadStateParameterValue(
    var _stringCharsSize: U16,
    var stringChars: MSZ[U8]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedpayloadStateParameterValue = PackedpayloadStateParameterValue(_stringCharsSize, PackedpayloadStateParameterValue.toImmutableStringChars(stringChars))

    def wellFormed: Z = {

      if (stringChars.size > 65535) {
        return ERROR_PackedpayloadStateParameterValue_stringChars
      }

      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringChars.size != stringCharsSize) {
        return ERROR_PackedpayloadStateParameterValue_stringChars
      }

      // BEGIN USER CODE: PackedpayloadStateParameterValue.wellFormed

      // END USER CODE: PackedpayloadStateParameterValue.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      _stringCharsSize = Reader.IS.beU16(input, context)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        stringChars = MSZ.create(stringCharsSize, u8"0")
        for (i <- 0 until stringCharsSize) {
          val c = Reader.IS.bleU8(input, context)
          stringChars(i) = c
        }
      } else {
        context.signalError(ERROR_PackedpayloadStateParameterValue_stringChars)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, _stringCharsSize)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        for (i <- 0 until stringCharsSize) {
          val c = stringChars(i)
          Writer.bleU8(output, context, c)
        }
      } else {
        context.signalError(ERROR_PackedpayloadStateParameterValue_stringChars)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedpayloadStateParameterValue)
      }
    }

    def sizeOfStringChars(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object PackedpayloadStateParameter {

    val maxSize: Z = z"1048592"

    def empty: MPackedpayloadStateParameter = {
      return MPackedpayloadStateParameter(PackedpayloadStateParameterKey.empty, PackedpayloadStateParameterValue.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[PackedpayloadStateParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedpayloadStateParameter]() else Some(r.toImmutable)
    }

  }

  @datatype class PackedpayloadStateParameter(
    val packedpayloadStateParameterKey: PackedpayloadStateParameterKey,
    val packedpayloadStateParameterValue: PackedpayloadStateParameterValue
  ) {

    @strictpure def toMutable: MPackedpayloadStateParameter = MPackedpayloadStateParameter(packedpayloadStateParameterKey.toMutable, packedpayloadStateParameterValue.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048592, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedpayloadStateParameter(
    var packedpayloadStateParameterKey: MPackedpayloadStateParameterKey,
    var packedpayloadStateParameterValue: MPackedpayloadStateParameterValue
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedpayloadStateParameter = PackedpayloadStateParameter(packedpayloadStateParameterKey.toImmutable, packedpayloadStateParameterValue.toImmutable)

    def wellFormed: Z = {

      val wfPackedpayloadStateParameterKey = packedpayloadStateParameterKey.wellFormed
      if (wfPackedpayloadStateParameterKey != 0) {
        return wfPackedpayloadStateParameterKey
      }

      val wfPackedpayloadStateParameterValue = packedpayloadStateParameterValue.wellFormed
      if (wfPackedpayloadStateParameterValue != 0) {
        return wfPackedpayloadStateParameterValue
      }

      // BEGIN USER CODE: PackedpayloadStateParameter.wellFormed

      // END USER CODE: PackedpayloadStateParameter.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      packedpayloadStateParameterKey.decode(input, context)
      packedpayloadStateParameterValue.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      packedpayloadStateParameterKey.encode(output, context)
      packedpayloadStateParameterValue.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedpayloadStateParameter)
      }
    }

  }

  object LMCPpayloadStateParameter {

    val maxSize: Z = z"1048712"

    def empty: MLMCPpayloadStateParameter = {
      return MLMCPpayloadStateParameter(u8"0", s64"0", u32"0", u16"0", PackedpayloadStateParameter.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPpayloadStateParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPpayloadStateParameter]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPpayloadStateParameter(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val packedpayloadStateParameter: PackedpayloadStateParameter
  ) extends PredUnionpayloadStateParameter {

    @strictpure def toMutable: MLMCPpayloadStateParameter = MLMCPpayloadStateParameter(nonNullValue, seriesID, typeID, seriesVersion, packedpayloadStateParameter.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048712, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPpayloadStateParameter(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var packedpayloadStateParameter: MPackedpayloadStateParameter
  ) extends MPredUnionpayloadStateParameter {

    @strictpure def toImmutable: LMCPpayloadStateParameter = LMCPpayloadStateParameter(nonNullValue, seriesID, typeID, seriesVersion, packedpayloadStateParameter.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPpayloadStateParameter
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPpayloadStateParameter
      }

      if (typeID != u32"2") {
        return ERROR_LMCPpayloadStateParameter
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPpayloadStateParameter
      }

      val wfPackedpayloadStateParameter = packedpayloadStateParameter.wellFormed
      if (wfPackedpayloadStateParameter != 0) {
        return wfPackedpayloadStateParameter
      }

      // BEGIN USER CODE: LMCPpayloadStateParameter.wellFormed

      // END USER CODE: LMCPpayloadStateParameter.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      packedpayloadStateParameter.decode(input, context)

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
      packedpayloadStateParameter.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPpayloadStateParameter)
      }
    }

  }

  @datatype trait PredUnionpayloadStateParameter {
    @strictpure def toMutable: MPredUnionpayloadStateParameter
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionpayloadStateParameter extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionpayloadStateParameter
  }

  object PredUnionpayloadStateParameter {

    val maxSize: Z = z"1048712"

    def empty: MPredUnionpayloadStateParameter = {
      return NullValuepayloadStateParameter.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionpayloadStateParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionpayloadStateParameter]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValuepayloadStateParameter
       'LMCPpayloadStateParameter
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
          return Choice.NullValuepayloadStateParameter
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPpayloadStateParameter
        }
      }
      return Choice.Error
    }

  }

  object ObjectpayloadStateParameter {

    val maxSize: Z = z"1048712"

    def empty: MObjectpayloadStateParameter = {
      return MObjectpayloadStateParameter(NullValuepayloadStateParameter.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjectpayloadStateParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjectpayloadStateParameter]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjectpayloadStateParameter(
    val predUnionpayloadStateParameter: PredUnionpayloadStateParameter
  ) {

    @strictpure def toMutable: MObjectpayloadStateParameter = MObjectpayloadStateParameter(predUnionpayloadStateParameter.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048712, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjectpayloadStateParameter(
    var predUnionpayloadStateParameter: MPredUnionpayloadStateParameter
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjectpayloadStateParameter = ObjectpayloadStateParameter(predUnionpayloadStateParameter.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjectpayloadStateParameter.wellFormed

      // END USER CODE: ObjectpayloadStateParameter.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUnionpayloadStateParameter.choose(input, context) match {
        case PredUnionpayloadStateParameter.Choice.NullValuepayloadStateParameter => predUnionpayloadStateParameter = NullValuepayloadStateParameter.empty
        case PredUnionpayloadStateParameter.Choice.LMCPpayloadStateParameter => predUnionpayloadStateParameter = LMCPpayloadStateParameter.empty
        case _ => context.signalError(ERROR_PredUnionpayloadStateParameter)
      }
      predUnionpayloadStateParameter.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUnionpayloadStateParameter.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjectpayloadStateParameter)
      }
    }

  }

  object PackedPayloadState {

    val maxSize: Z = z"8389776"

    def empty: MPackedPayloadState = {
      return MPackedPayloadState(s64"0", u16"0", MSZ[MObjectpayloadStateParameter]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedPayloadState] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedPayloadState]() else Some(r.toImmutable)
    }

    def toMutableParameters(s: ISZ[ObjectpayloadStateParameter]): MSZ[MObjectpayloadStateParameter] = {
      var r = MSZ[MObjectpayloadStateParameter]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableParameters(s: MSZ[MObjectpayloadStateParameter]): ISZ[ObjectpayloadStateParameter] = {
      var r = ISZ[ObjectpayloadStateParameter]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class PackedPayloadState(
    val payloadID: S64,
    val _parametersSize: U16,
    val parameters: ISZ[ObjectpayloadStateParameter]
  ) {

    @strictpure def toMutable: MPackedPayloadState = MPackedPayloadState(payloadID, _parametersSize, PackedPayloadState.toMutableParameters(parameters))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8389776, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedPayloadState(
    var payloadID: S64,
    var _parametersSize: U16,
    var parameters: MSZ[MObjectpayloadStateParameter]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedPayloadState = PackedPayloadState(payloadID, _parametersSize, PackedPayloadState.toImmutableParameters(parameters))

    def wellFormed: Z = {

      if (parameters.size > 8) {
        return ERROR_PackedPayloadState_parameters
      }

      val parametersSize = sizeOfParameters(_parametersSize)
      if (parameters.size != parametersSize) {
        return ERROR_PackedPayloadState_parameters
      }

      // BEGIN USER CODE: PackedPayloadState.wellFormed

      // END USER CODE: PackedPayloadState.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      payloadID = Reader.IS.beS64(input, context)
      _parametersSize = Reader.IS.beU16(input, context)
      val parametersSize = sizeOfParameters(_parametersSize)
      if (parametersSize >= 0) {
        parameters = MSZ.create(parametersSize, ObjectpayloadStateParameter.empty)
        for (i <- 0 until parametersSize) {
          parameters(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_PackedPayloadState_parameters)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beS64(output, context, payloadID)
      Writer.beU16(output, context, _parametersSize)
      val parametersSize = sizeOfParameters(_parametersSize)
      if (parametersSize >= 0) {
        for (i <- 0 until parametersSize) {
          parameters(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_PackedPayloadState_parameters)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedPayloadState)
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
      return MLMCPPayloadState(u8"0", s64"0", u32"0", u16"0", PackedPayloadState.empty)
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
    val packedPayloadState: PackedPayloadState
  ) extends PredUnionPayloadState {

    @strictpure def toMutable: MLMCPPayloadState = MLMCPPayloadState(nonNullValue, seriesID, typeID, seriesVersion, packedPayloadState.toMutable)

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
    var packedPayloadState: MPackedPayloadState
  ) extends MPredUnionPayloadState {

    @strictpure def toImmutable: LMCPPayloadState = LMCPPayloadState(nonNullValue, seriesID, typeID, seriesVersion, packedPayloadState.toImmutable)

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

      val wfPackedPayloadState = packedPayloadState.wellFormed
      if (wfPackedPayloadState != 0) {
        return wfPackedPayloadState
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
      packedPayloadState.decode(input, context)

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
      packedPayloadState.encode(output, context)

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

  object PackedEntityStateInfoKey {

    val maxSize: Z = z"524296"

    def empty: MPackedEntityStateInfoKey = {
      return MPackedEntityStateInfoKey(u16"0", MSZ[U8]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedEntityStateInfoKey] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedEntityStateInfoKey]() else Some(r.toImmutable)
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

  @datatype class PackedEntityStateInfoKey(
    val _stringCharsSize: U16,
    val stringChars: ISZ[U8]
  ) {

    @strictpure def toMutable: MPackedEntityStateInfoKey = MPackedEntityStateInfoKey(_stringCharsSize, PackedEntityStateInfoKey.toMutableStringChars(stringChars))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(524296, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedEntityStateInfoKey(
    var _stringCharsSize: U16,
    var stringChars: MSZ[U8]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedEntityStateInfoKey = PackedEntityStateInfoKey(_stringCharsSize, PackedEntityStateInfoKey.toImmutableStringChars(stringChars))

    def wellFormed: Z = {

      if (stringChars.size > 65535) {
        return ERROR_PackedEntityStateInfoKey_stringChars
      }

      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringChars.size != stringCharsSize) {
        return ERROR_PackedEntityStateInfoKey_stringChars
      }

      // BEGIN USER CODE: PackedEntityStateInfoKey.wellFormed

      // END USER CODE: PackedEntityStateInfoKey.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      _stringCharsSize = Reader.IS.beU16(input, context)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        stringChars = MSZ.create(stringCharsSize, u8"0")
        for (i <- 0 until stringCharsSize) {
          val c = Reader.IS.bleU8(input, context)
          stringChars(i) = c
        }
      } else {
        context.signalError(ERROR_PackedEntityStateInfoKey_stringChars)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, _stringCharsSize)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        for (i <- 0 until stringCharsSize) {
          val c = stringChars(i)
          Writer.bleU8(output, context, c)
        }
      } else {
        context.signalError(ERROR_PackedEntityStateInfoKey_stringChars)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedEntityStateInfoKey)
      }
    }

    def sizeOfStringChars(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object PackedEntityStateInfoValue {

    val maxSize: Z = z"524296"

    def empty: MPackedEntityStateInfoValue = {
      return MPackedEntityStateInfoValue(u16"0", MSZ[U8]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedEntityStateInfoValue] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedEntityStateInfoValue]() else Some(r.toImmutable)
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

  @datatype class PackedEntityStateInfoValue(
    val _stringCharsSize: U16,
    val stringChars: ISZ[U8]
  ) {

    @strictpure def toMutable: MPackedEntityStateInfoValue = MPackedEntityStateInfoValue(_stringCharsSize, PackedEntityStateInfoValue.toMutableStringChars(stringChars))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(524296, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedEntityStateInfoValue(
    var _stringCharsSize: U16,
    var stringChars: MSZ[U8]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedEntityStateInfoValue = PackedEntityStateInfoValue(_stringCharsSize, PackedEntityStateInfoValue.toImmutableStringChars(stringChars))

    def wellFormed: Z = {

      if (stringChars.size > 65535) {
        return ERROR_PackedEntityStateInfoValue_stringChars
      }

      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringChars.size != stringCharsSize) {
        return ERROR_PackedEntityStateInfoValue_stringChars
      }

      // BEGIN USER CODE: PackedEntityStateInfoValue.wellFormed

      // END USER CODE: PackedEntityStateInfoValue.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      _stringCharsSize = Reader.IS.beU16(input, context)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        stringChars = MSZ.create(stringCharsSize, u8"0")
        for (i <- 0 until stringCharsSize) {
          val c = Reader.IS.bleU8(input, context)
          stringChars(i) = c
        }
      } else {
        context.signalError(ERROR_PackedEntityStateInfoValue_stringChars)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, _stringCharsSize)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        for (i <- 0 until stringCharsSize) {
          val c = stringChars(i)
          Writer.bleU8(output, context, c)
        }
      } else {
        context.signalError(ERROR_PackedEntityStateInfoValue_stringChars)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedEntityStateInfoValue)
      }
    }

    def sizeOfStringChars(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object PackedEntityStateInfo {

    val maxSize: Z = z"1048592"

    def empty: MPackedEntityStateInfo = {
      return MPackedEntityStateInfo(PackedEntityStateInfoKey.empty, PackedEntityStateInfoValue.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[PackedEntityStateInfo] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedEntityStateInfo]() else Some(r.toImmutable)
    }

  }

  @datatype class PackedEntityStateInfo(
    val packedEntityStateInfoKey: PackedEntityStateInfoKey,
    val packedEntityStateInfoValue: PackedEntityStateInfoValue
  ) {

    @strictpure def toMutable: MPackedEntityStateInfo = MPackedEntityStateInfo(packedEntityStateInfoKey.toMutable, packedEntityStateInfoValue.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048592, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedEntityStateInfo(
    var packedEntityStateInfoKey: MPackedEntityStateInfoKey,
    var packedEntityStateInfoValue: MPackedEntityStateInfoValue
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedEntityStateInfo = PackedEntityStateInfo(packedEntityStateInfoKey.toImmutable, packedEntityStateInfoValue.toImmutable)

    def wellFormed: Z = {

      val wfPackedEntityStateInfoKey = packedEntityStateInfoKey.wellFormed
      if (wfPackedEntityStateInfoKey != 0) {
        return wfPackedEntityStateInfoKey
      }

      val wfPackedEntityStateInfoValue = packedEntityStateInfoValue.wellFormed
      if (wfPackedEntityStateInfoValue != 0) {
        return wfPackedEntityStateInfoValue
      }

      // BEGIN USER CODE: PackedEntityStateInfo.wellFormed

      // END USER CODE: PackedEntityStateInfo.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      packedEntityStateInfoKey.decode(input, context)
      packedEntityStateInfoValue.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      packedEntityStateInfoKey.encode(output, context)
      packedEntityStateInfoValue.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedEntityStateInfo)
      }
    }

  }

  object LMCPEntityStateInfo {

    val maxSize: Z = z"1048712"

    def empty: MLMCPEntityStateInfo = {
      return MLMCPEntityStateInfo(u8"0", s64"0", u32"0", u16"0", PackedEntityStateInfo.empty)
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
    val packedEntityStateInfo: PackedEntityStateInfo
  ) extends PredUnionEntityStateInfo {

    @strictpure def toMutable: MLMCPEntityStateInfo = MLMCPEntityStateInfo(nonNullValue, seriesID, typeID, seriesVersion, packedEntityStateInfo.toMutable)

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
    var packedEntityStateInfo: MPackedEntityStateInfo
  ) extends MPredUnionEntityStateInfo {

    @strictpure def toImmutable: LMCPEntityStateInfo = LMCPEntityStateInfo(nonNullValue, seriesID, typeID, seriesVersion, packedEntityStateInfo.toImmutable)

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

      val wfPackedEntityStateInfo = packedEntityStateInfo.wellFormed
      if (wfPackedEntityStateInfo != 0) {
        return wfPackedEntityStateInfo
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
      packedEntityStateInfo.decode(input, context)

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
      packedEntityStateInfo.encode(output, context)

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
    val _payloadStateListSize: U16,
    val payloadStateList: ISZ[ObjectPayloadState],
    val currentWaypoint: S64,
    val currentCommand: S64,
    val mode: S32,
    val _associatedTasksSize: U16,
    val associatedTasks: ISZ[S64],
    val time: S64,
    val _infoSize: U16,
    val info: ISZ[ObjectEntityStateInfo]
  ) {

    @strictpure def toMutable: MEntityState = MEntityState(id, u, v, w, udot, vdot, wdot, heading, pitch, roll, p, q, r, course, groundspeed, objectEntityStateLocation3D.toMutable, energyAvailable, actualEnergyRate, _payloadStateListSize, EntityState.toMutablePayloadStateList(payloadStateList), currentWaypoint, currentCommand, mode, _associatedTasksSize, EntityState.toMutableAssociatedTasks(associatedTasks), time, _infoSize, EntityState.toMutableInfo(info))

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
    var _payloadStateListSize: U16,
    var payloadStateList: MSZ[MObjectPayloadState],
    var currentWaypoint: S64,
    var currentCommand: S64,
    var mode: S32,
    var _associatedTasksSize: U16,
    var associatedTasks: MSZ[S64],
    var time: S64,
    var _infoSize: U16,
    var info: MSZ[MObjectEntityStateInfo]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: EntityState = EntityState(id, u, v, w, udot, vdot, wdot, heading, pitch, roll, p, q, r, course, groundspeed, objectEntityStateLocation3D.toImmutable, energyAvailable, actualEnergyRate, _payloadStateListSize, EntityState.toImmutablePayloadStateList(payloadStateList), currentWaypoint, currentCommand, mode, _associatedTasksSize, EntityState.toImmutableAssociatedTasks(associatedTasks), time, _infoSize, EntityState.toImmutableInfo(info))

    def wellFormed: Z = {

      val wfObjectEntityStateLocation3D = objectEntityStateLocation3D.wellFormed
      if (wfObjectEntityStateLocation3D != 0) {
        return wfObjectEntityStateLocation3D
      }

      if (payloadStateList.size > 8) {
        return ERROR_EntityState_payloadStateList
      }

      val payloadStateListSize = sizeOfPayloadStateList(_payloadStateListSize)
      if (payloadStateList.size != payloadStateListSize) {
        return ERROR_EntityState_payloadStateList
      }

      if (associatedTasks.size > 8) {
        return ERROR_EntityState_associatedTasks
      }

      val associatedTasksSize = sizeOfAssociatedTasks(_associatedTasksSize)
      if (associatedTasks.size != associatedTasksSize) {
        return ERROR_EntityState_associatedTasks
      }

      if (info.size > 32) {
        return ERROR_EntityState_info
      }

      val infoSize = sizeOfInfo(_infoSize)
      if (info.size != infoSize) {
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
      _payloadStateListSize = Reader.IS.beU16(input, context)
      val payloadStateListSize = sizeOfPayloadStateList(_payloadStateListSize)
      if (payloadStateListSize >= 0) {
        payloadStateList = MSZ.create(payloadStateListSize, ObjectPayloadState.empty)
        for (i <- 0 until payloadStateListSize) {
          payloadStateList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_EntityState_payloadStateList)
      }
      currentWaypoint = Reader.IS.beS64(input, context)
      currentCommand = Reader.IS.beS64(input, context)
      mode = Reader.IS.beS32(input, context)
      _associatedTasksSize = Reader.IS.beU16(input, context)
      val associatedTasksSize = sizeOfAssociatedTasks(_associatedTasksSize)
      if (associatedTasksSize >= 0) {
        associatedTasks = MSZ.create(associatedTasksSize, s64"0")
        for (i <- 0 until associatedTasksSize) {
          val id = Reader.IS.beS64(input, context)
          associatedTasks(i) = id
        }
      } else {
        context.signalError(ERROR_EntityState_associatedTasks)
      }
      time = Reader.IS.beS64(input, context)
      _infoSize = Reader.IS.beU16(input, context)
      val infoSize = sizeOfInfo(_infoSize)
      if (infoSize >= 0) {
        info = MSZ.create(infoSize, ObjectEntityStateInfo.empty)
        for (i <- 0 until infoSize) {
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
      Writer.beU16(output, context, _payloadStateListSize)
      val payloadStateListSize = sizeOfPayloadStateList(_payloadStateListSize)
      if (payloadStateListSize >= 0) {
        for (i <- 0 until payloadStateListSize) {
          payloadStateList(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_EntityState_payloadStateList)
      }
      Writer.beS64(output, context, currentWaypoint)
      Writer.beS64(output, context, currentCommand)
      Writer.beS32(output, context, mode)
      Writer.beU16(output, context, _associatedTasksSize)
      val associatedTasksSize = sizeOfAssociatedTasks(_associatedTasksSize)
      if (associatedTasksSize >= 0) {
        for (i <- 0 until associatedTasksSize) {
          val id = associatedTasks(i)
          Writer.beS64(output, context, id)
        }
      } else {
        context.signalError(ERROR_EntityState_associatedTasks)
      }
      Writer.beS64(output, context, time)
      Writer.beU16(output, context, _infoSize)
      val infoSize = sizeOfInfo(_infoSize)
      if (infoSize >= 0) {
        for (i <- 0 until infoSize) {
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
    val _stringCharsSize: U16,
    val stringChars: ISZ[U8]
  ) {

    @strictpure def toMutable: MLabel = MLabel(_stringCharsSize, Label.toMutableStringChars(stringChars))

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
    var _stringCharsSize: U16,
    var stringChars: MSZ[U8]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: Label = Label(_stringCharsSize, Label.toImmutableStringChars(stringChars))

    def wellFormed: Z = {

      if (stringChars.size > 65535) {
        return ERROR_Label_stringChars
      }

      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringChars.size != stringCharsSize) {
        return ERROR_Label_stringChars
      }

      // BEGIN USER CODE: Label.wellFormed

      // END USER CODE: Label.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      _stringCharsSize = Reader.IS.beU16(input, context)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        stringChars = MSZ.create(stringCharsSize, u8"0")
        for (i <- 0 until stringCharsSize) {
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
      Writer.beU16(output, context, _stringCharsSize)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        for (i <- 0 until stringCharsSize) {
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

  object NullValuetaskParameter {

    val maxSize: Z = z"8"

    def empty: MNullValuetaskParameter = {
      return MNullValuetaskParameter(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValuetaskParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValuetaskParameter]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValuetaskParameter(
    val nullValuetaskParameter: U8
  ) extends PredUniontaskParameter {

    @strictpure def toMutable: MNullValuetaskParameter = MNullValuetaskParameter(nullValuetaskParameter)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValuetaskParameter(
    var nullValuetaskParameter: U8
  ) extends MPredUniontaskParameter {

    @strictpure def toImmutable: NullValuetaskParameter = NullValuetaskParameter(nullValuetaskParameter)

    def wellFormed: Z = {

      if (nullValuetaskParameter != u8"0") {
        return ERROR_NullValuetaskParameter
      }

      // BEGIN USER CODE: NullValuetaskParameter.wellFormed

      // END USER CODE: NullValuetaskParameter.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValuetaskParameter = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValuetaskParameter)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValuetaskParameter)
      }
    }

  }

  object PackedtaskParameterKey {

    val maxSize: Z = z"524296"

    def empty: MPackedtaskParameterKey = {
      return MPackedtaskParameterKey(u16"0", MSZ[U8]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedtaskParameterKey] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedtaskParameterKey]() else Some(r.toImmutable)
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

  @datatype class PackedtaskParameterKey(
    val _stringCharsSize: U16,
    val stringChars: ISZ[U8]
  ) {

    @strictpure def toMutable: MPackedtaskParameterKey = MPackedtaskParameterKey(_stringCharsSize, PackedtaskParameterKey.toMutableStringChars(stringChars))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(524296, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedtaskParameterKey(
    var _stringCharsSize: U16,
    var stringChars: MSZ[U8]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedtaskParameterKey = PackedtaskParameterKey(_stringCharsSize, PackedtaskParameterKey.toImmutableStringChars(stringChars))

    def wellFormed: Z = {

      if (stringChars.size > 65535) {
        return ERROR_PackedtaskParameterKey_stringChars
      }

      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringChars.size != stringCharsSize) {
        return ERROR_PackedtaskParameterKey_stringChars
      }

      // BEGIN USER CODE: PackedtaskParameterKey.wellFormed

      // END USER CODE: PackedtaskParameterKey.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      _stringCharsSize = Reader.IS.beU16(input, context)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        stringChars = MSZ.create(stringCharsSize, u8"0")
        for (i <- 0 until stringCharsSize) {
          val c = Reader.IS.bleU8(input, context)
          stringChars(i) = c
        }
      } else {
        context.signalError(ERROR_PackedtaskParameterKey_stringChars)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, _stringCharsSize)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        for (i <- 0 until stringCharsSize) {
          val c = stringChars(i)
          Writer.bleU8(output, context, c)
        }
      } else {
        context.signalError(ERROR_PackedtaskParameterKey_stringChars)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedtaskParameterKey)
      }
    }

    def sizeOfStringChars(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object PackedtaskParameterValue {

    val maxSize: Z = z"524296"

    def empty: MPackedtaskParameterValue = {
      return MPackedtaskParameterValue(u16"0", MSZ[U8]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedtaskParameterValue] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedtaskParameterValue]() else Some(r.toImmutable)
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

  @datatype class PackedtaskParameterValue(
    val _stringCharsSize: U16,
    val stringChars: ISZ[U8]
  ) {

    @strictpure def toMutable: MPackedtaskParameterValue = MPackedtaskParameterValue(_stringCharsSize, PackedtaskParameterValue.toMutableStringChars(stringChars))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(524296, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedtaskParameterValue(
    var _stringCharsSize: U16,
    var stringChars: MSZ[U8]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedtaskParameterValue = PackedtaskParameterValue(_stringCharsSize, PackedtaskParameterValue.toImmutableStringChars(stringChars))

    def wellFormed: Z = {

      if (stringChars.size > 65535) {
        return ERROR_PackedtaskParameterValue_stringChars
      }

      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringChars.size != stringCharsSize) {
        return ERROR_PackedtaskParameterValue_stringChars
      }

      // BEGIN USER CODE: PackedtaskParameterValue.wellFormed

      // END USER CODE: PackedtaskParameterValue.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      _stringCharsSize = Reader.IS.beU16(input, context)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        stringChars = MSZ.create(stringCharsSize, u8"0")
        for (i <- 0 until stringCharsSize) {
          val c = Reader.IS.bleU8(input, context)
          stringChars(i) = c
        }
      } else {
        context.signalError(ERROR_PackedtaskParameterValue_stringChars)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, _stringCharsSize)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        for (i <- 0 until stringCharsSize) {
          val c = stringChars(i)
          Writer.bleU8(output, context, c)
        }
      } else {
        context.signalError(ERROR_PackedtaskParameterValue_stringChars)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedtaskParameterValue)
      }
    }

    def sizeOfStringChars(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object PackedtaskParameter {

    val maxSize: Z = z"1048592"

    def empty: MPackedtaskParameter = {
      return MPackedtaskParameter(PackedtaskParameterKey.empty, PackedtaskParameterValue.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[PackedtaskParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedtaskParameter]() else Some(r.toImmutable)
    }

  }

  @datatype class PackedtaskParameter(
    val packedtaskParameterKey: PackedtaskParameterKey,
    val packedtaskParameterValue: PackedtaskParameterValue
  ) {

    @strictpure def toMutable: MPackedtaskParameter = MPackedtaskParameter(packedtaskParameterKey.toMutable, packedtaskParameterValue.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048592, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedtaskParameter(
    var packedtaskParameterKey: MPackedtaskParameterKey,
    var packedtaskParameterValue: MPackedtaskParameterValue
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedtaskParameter = PackedtaskParameter(packedtaskParameterKey.toImmutable, packedtaskParameterValue.toImmutable)

    def wellFormed: Z = {

      val wfPackedtaskParameterKey = packedtaskParameterKey.wellFormed
      if (wfPackedtaskParameterKey != 0) {
        return wfPackedtaskParameterKey
      }

      val wfPackedtaskParameterValue = packedtaskParameterValue.wellFormed
      if (wfPackedtaskParameterValue != 0) {
        return wfPackedtaskParameterValue
      }

      // BEGIN USER CODE: PackedtaskParameter.wellFormed

      // END USER CODE: PackedtaskParameter.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      packedtaskParameterKey.decode(input, context)
      packedtaskParameterValue.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      packedtaskParameterKey.encode(output, context)
      packedtaskParameterValue.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedtaskParameter)
      }
    }

  }

  object LMCPtaskParameter {

    val maxSize: Z = z"1048712"

    def empty: MLMCPtaskParameter = {
      return MLMCPtaskParameter(u8"0", s64"0", u32"0", u16"0", PackedtaskParameter.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPtaskParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPtaskParameter]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPtaskParameter(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val packedtaskParameter: PackedtaskParameter
  ) extends PredUniontaskParameter {

    @strictpure def toMutable: MLMCPtaskParameter = MLMCPtaskParameter(nonNullValue, seriesID, typeID, seriesVersion, packedtaskParameter.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048712, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPtaskParameter(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var packedtaskParameter: MPackedtaskParameter
  ) extends MPredUniontaskParameter {

    @strictpure def toImmutable: LMCPtaskParameter = LMCPtaskParameter(nonNullValue, seriesID, typeID, seriesVersion, packedtaskParameter.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPtaskParameter
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPtaskParameter
      }

      if (typeID != u32"2") {
        return ERROR_LMCPtaskParameter
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPtaskParameter
      }

      val wfPackedtaskParameter = packedtaskParameter.wellFormed
      if (wfPackedtaskParameter != 0) {
        return wfPackedtaskParameter
      }

      // BEGIN USER CODE: LMCPtaskParameter.wellFormed

      // END USER CODE: LMCPtaskParameter.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      packedtaskParameter.decode(input, context)

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
      packedtaskParameter.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPtaskParameter)
      }
    }

  }

  @datatype trait PredUniontaskParameter {
    @strictpure def toMutable: MPredUniontaskParameter
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUniontaskParameter extends Runtime.Composite {
    @strictpure def toImmutable: PredUniontaskParameter
  }

  object PredUniontaskParameter {

    val maxSize: Z = z"1048712"

    def empty: MPredUniontaskParameter = {
      return NullValuetaskParameter.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUniontaskParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUniontaskParameter]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValuetaskParameter
       'LMCPtaskParameter
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
          return Choice.NullValuetaskParameter
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPtaskParameter
        }
      }
      return Choice.Error
    }

  }

  object ObjecttaskParameter {

    val maxSize: Z = z"1048712"

    def empty: MObjecttaskParameter = {
      return MObjecttaskParameter(NullValuetaskParameter.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjecttaskParameter] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjecttaskParameter]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjecttaskParameter(
    val predUniontaskParameter: PredUniontaskParameter
  ) {

    @strictpure def toMutable: MObjecttaskParameter = MObjecttaskParameter(predUniontaskParameter.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048712, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjecttaskParameter(
    var predUniontaskParameter: MPredUniontaskParameter
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjecttaskParameter = ObjecttaskParameter(predUniontaskParameter.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjecttaskParameter.wellFormed

      // END USER CODE: ObjecttaskParameter.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUniontaskParameter.choose(input, context) match {
        case PredUniontaskParameter.Choice.NullValuetaskParameter => predUniontaskParameter = NullValuetaskParameter.empty
        case PredUniontaskParameter.Choice.LMCPtaskParameter => predUniontaskParameter = LMCPtaskParameter.empty
        case _ => context.signalError(ERROR_PredUniontaskParameter)
      }
      predUniontaskParameter.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUniontaskParameter.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjecttaskParameter)
      }
    }

  }

  object Task {

    val maxSize: Z = z"8916184"

    def empty: MTask = {
      return MTask(s64"0", Label.empty, u16"0", MSZ[S64](), 0.0f, u16"0", MSZ[MObjecttaskParameter](), s8"0", u8"0")
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

    def toMutableParameters(s: ISZ[ObjecttaskParameter]): MSZ[MObjecttaskParameter] = {
      var r = MSZ[MObjecttaskParameter]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableParameters(s: MSZ[MObjecttaskParameter]): ISZ[ObjecttaskParameter] = {
      var r = ISZ[ObjecttaskParameter]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class Task(
    val taskID: S64,
    val label: Label,
    val _eligibleEntitiesSize: U16,
    val eligibleEntities: ISZ[S64],
    val revisitRate: F32,
    val _parametersSize: U16,
    val parameters: ISZ[ObjecttaskParameter],
    val priority: S8,
    val required: U8
  ) {

    @strictpure def toMutable: MTask = MTask(taskID, label.toMutable, _eligibleEntitiesSize, Task.toMutableEligibleEntities(eligibleEntities), revisitRate, _parametersSize, Task.toMutableParameters(parameters), priority, required)

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
    var _eligibleEntitiesSize: U16,
    var eligibleEntities: MSZ[S64],
    var revisitRate: F32,
    var _parametersSize: U16,
    var parameters: MSZ[MObjecttaskParameter],
    var priority: S8,
    var required: U8
  ) extends Runtime.Composite {

    @strictpure def toImmutable: Task = Task(taskID, label.toImmutable, _eligibleEntitiesSize, Task.toImmutableEligibleEntities(eligibleEntities), revisitRate, _parametersSize, Task.toImmutableParameters(parameters), priority, required)

    def wellFormed: Z = {

      val wfLabel = label.wellFormed
      if (wfLabel != 0) {
        return wfLabel
      }

      if (eligibleEntities.size > 32) {
        return ERROR_Task_eligibleEntities
      }

      val eligibleEntitiesSize = sizeOfEligibleEntities(_eligibleEntitiesSize)
      if (eligibleEntities.size != eligibleEntitiesSize) {
        return ERROR_Task_eligibleEntities
      }

      if (parameters.size > 8) {
        return ERROR_Task_parameters
      }

      val parametersSize = sizeOfParameters(_parametersSize)
      if (parameters.size != parametersSize) {
        return ERROR_Task_parameters
      }

      // BEGIN USER CODE: Task.wellFormed

      // END USER CODE: Task.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      taskID = Reader.IS.beS64(input, context)
      label.decode(input, context)
      _eligibleEntitiesSize = Reader.IS.beU16(input, context)
      val eligibleEntitiesSize = sizeOfEligibleEntities(_eligibleEntitiesSize)
      if (eligibleEntitiesSize >= 0) {
        eligibleEntities = MSZ.create(eligibleEntitiesSize, s64"0")
        for (i <- 0 until eligibleEntitiesSize) {
          val entity = Reader.IS.beS64(input, context)
          eligibleEntities(i) = entity
        }
      } else {
        context.signalError(ERROR_Task_eligibleEntities)
      }
      revisitRate = Reader.IS.beF32(input, context)
      _parametersSize = Reader.IS.beU16(input, context)
      val parametersSize = sizeOfParameters(_parametersSize)
      if (parametersSize >= 0) {
        parameters = MSZ.create(parametersSize, ObjecttaskParameter.empty)
        for (i <- 0 until parametersSize) {
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
      Writer.beU16(output, context, _eligibleEntitiesSize)
      val eligibleEntitiesSize = sizeOfEligibleEntities(_eligibleEntitiesSize)
      if (eligibleEntitiesSize >= 0) {
        for (i <- 0 until eligibleEntitiesSize) {
          val entity = eligibleEntities(i)
          Writer.beS64(output, context, entity)
        }
      } else {
        context.signalError(ERROR_Task_eligibleEntities)
      }
      Writer.beF32(output, context, revisitRate)
      Writer.beU16(output, context, _parametersSize)
      val parametersSize = sizeOfParameters(_parametersSize)
      if (parametersSize >= 0) {
        for (i <- 0 until parametersSize) {
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
    val _desiredWavelengthBandsSize: U16,
    val desiredWavelengthBands: ISZ[S32],
    val dwellTime: S64,
    val groundSampleDistance: F32
  ) {

    @strictpure def toMutable: MSearchTask = MSearchTask(task.toMutable, _desiredWavelengthBandsSize, SearchTask.toMutableDesiredWavelengthBands(desiredWavelengthBands), dwellTime, groundSampleDistance)

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
    var _desiredWavelengthBandsSize: U16,
    var desiredWavelengthBands: MSZ[S32],
    var dwellTime: S64,
    var groundSampleDistance: F32
  ) extends Runtime.Composite {

    @strictpure def toImmutable: SearchTask = SearchTask(task.toImmutable, _desiredWavelengthBandsSize, SearchTask.toImmutableDesiredWavelengthBands(desiredWavelengthBands), dwellTime, groundSampleDistance)

    def wellFormed: Z = {

      val wfTask = task.wellFormed
      if (wfTask != 0) {
        return wfTask
      }

      if (desiredWavelengthBands.size > 8) {
        return ERROR_SearchTask_desiredWavelengthBands
      }

      val desiredWavelengthBandsSize = sizeOfDesiredWavelengthBands(_desiredWavelengthBandsSize)
      if (desiredWavelengthBands.size != desiredWavelengthBandsSize) {
        return ERROR_SearchTask_desiredWavelengthBands
      }

      // BEGIN USER CODE: SearchTask.wellFormed

      // END USER CODE: SearchTask.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      task.decode(input, context)
      _desiredWavelengthBandsSize = Reader.IS.beU16(input, context)
      val desiredWavelengthBandsSize = sizeOfDesiredWavelengthBands(_desiredWavelengthBandsSize)
      if (desiredWavelengthBandsSize >= 0) {
        desiredWavelengthBands = MSZ.create(desiredWavelengthBandsSize, s32"0")
        for (i <- 0 until desiredWavelengthBandsSize) {
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
      Writer.beU16(output, context, _desiredWavelengthBandsSize)
      val desiredWavelengthBandsSize = sizeOfDesiredWavelengthBands(_desiredWavelengthBandsSize)
      if (desiredWavelengthBandsSize >= 0) {
        for (i <- 0 until desiredWavelengthBandsSize) {
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

  object PackedPoint {

    val maxSize: Z = z"192"

    def empty: MPackedPoint = {
      return MPackedPoint(0.0d, 0.0d, 0.0f, s32"0")
    }

    def decode(input: ISZ[B], context: Context): Option[PackedPoint] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedPoint]() else Some(r.toImmutable)
    }

  }

  @datatype class PackedPoint(
    val latitude: F64,
    val longitude: F64,
    val altitude: F32,
    val altitudeType: S32
  ) {

    @strictpure def toMutable: MPackedPoint = MPackedPoint(latitude, longitude, altitude, altitudeType)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(192, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedPoint(
    var latitude: F64,
    var longitude: F64,
    var altitude: F32,
    var altitudeType: S32
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedPoint = PackedPoint(latitude, longitude, altitude, altitudeType)

    def wellFormed: Z = {


      // BEGIN USER CODE: PackedPoint.wellFormed

      // END USER CODE: PackedPoint.wellFormed

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
        context.updateErrorCode(ERROR_PackedPoint)
      }
    }

  }

  object LMCPPoint {

    val maxSize: Z = z"312"

    def empty: MLMCPPoint = {
      return MLMCPPoint(u8"0", s64"0", u32"0", u16"0", PackedPoint.empty)
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
    val packedPoint: PackedPoint
  ) extends PredUnionPoint {

    @strictpure def toMutable: MLMCPPoint = MLMCPPoint(nonNullValue, seriesID, typeID, seriesVersion, packedPoint.toMutable)

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
    var packedPoint: MPackedPoint
  ) extends MPredUnionPoint {

    @strictpure def toImmutable: LMCPPoint = LMCPPoint(nonNullValue, seriesID, typeID, seriesVersion, packedPoint.toImmutable)

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

      val wfPackedPoint = packedPoint.wellFormed
      if (wfPackedPoint != 0) {
        return wfPackedPoint
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
      packedPoint.decode(input, context)

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
      packedPoint.encode(output, context)

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

  object PackedViewAngle {

    val maxSize: Z = z"128"

    def empty: MPackedViewAngle = {
      return MPackedViewAngle(0.0f, 0.0f, 0.0f, 0.0f)
    }

    def decode(input: ISZ[B], context: Context): Option[PackedViewAngle] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedViewAngle]() else Some(r.toImmutable)
    }

  }

  @datatype class PackedViewAngle(
    val azimuthCenterline: F32,
    val verticalCenterline: F32,
    val azimuthExtent: F32,
    val verticalExtent: F32
  ) {

    @strictpure def toMutable: MPackedViewAngle = MPackedViewAngle(azimuthCenterline, verticalCenterline, azimuthExtent, verticalExtent)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(128, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedViewAngle(
    var azimuthCenterline: F32,
    var verticalCenterline: F32,
    var azimuthExtent: F32,
    var verticalExtent: F32
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedViewAngle = PackedViewAngle(azimuthCenterline, verticalCenterline, azimuthExtent, verticalExtent)

    def wellFormed: Z = {


      // BEGIN USER CODE: PackedViewAngle.wellFormed

      // END USER CODE: PackedViewAngle.wellFormed

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
        context.updateErrorCode(ERROR_PackedViewAngle)
      }
    }

  }

  object LMCPViewAngle {

    val maxSize: Z = z"248"

    def empty: MLMCPViewAngle = {
      return MLMCPViewAngle(u8"0", s64"0", u32"0", u16"0", PackedViewAngle.empty)
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
    val packedViewAngle: PackedViewAngle
  ) extends PredUnionViewAngle {

    @strictpure def toMutable: MLMCPViewAngle = MLMCPViewAngle(nonNullValue, seriesID, typeID, seriesVersion, packedViewAngle.toMutable)

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
    var packedViewAngle: MPackedViewAngle
  ) extends MPredUnionViewAngle {

    @strictpure def toImmutable: LMCPViewAngle = LMCPViewAngle(nonNullValue, seriesID, typeID, seriesVersion, packedViewAngle.toImmutable)

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

      val wfPackedViewAngle = packedViewAngle.wellFormed
      if (wfPackedViewAngle != 0) {
        return wfPackedViewAngle
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
      packedViewAngle.decode(input, context)

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
      packedViewAngle.encode(output, context)

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
    val _pointListSize: U16,
    val pointList: ISZ[ObjectPoint],
    val _viewAngleListSize: U16,
    val viewAngleList: ISZ[ObjectViewAngle],
    val useInertialViewAngles: U8
  ) extends LMCPObject {

    @strictpure def toMutable: MLineSearchTask = MLineSearchTask(searchTask.toMutable, _pointListSize, LineSearchTask.toMutablePointList(pointList), _viewAngleListSize, LineSearchTask.toMutableViewAngleList(viewAngleList), useInertialViewAngles)

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
    var _pointListSize: U16,
    var pointList: MSZ[MObjectPoint],
    var _viewAngleListSize: U16,
    var viewAngleList: MSZ[MObjectViewAngle],
    var useInertialViewAngles: U8
  ) extends MLMCPObject {

    @strictpure def toImmutable: LineSearchTask = LineSearchTask(searchTask.toImmutable, _pointListSize, LineSearchTask.toImmutablePointList(pointList), _viewAngleListSize, LineSearchTask.toImmutableViewAngleList(viewAngleList), useInertialViewAngles)

    def wellFormed: Z = {

      val wfSearchTask = searchTask.wellFormed
      if (wfSearchTask != 0) {
        return wfSearchTask
      }

      if (pointList.size > 1024) {
        return ERROR_LineSearchTask_pointList
      }

      val pointListSize = sizeOfPointList(_pointListSize)
      if (pointList.size != pointListSize) {
        return ERROR_LineSearchTask_pointList
      }

      if (viewAngleList.size > 16) {
        return ERROR_LineSearchTask_viewAngleList
      }

      val viewAngleListSize = sizeOfViewAngleList(_viewAngleListSize)
      if (viewAngleList.size != viewAngleListSize) {
        return ERROR_LineSearchTask_viewAngleList
      }

      // BEGIN USER CODE: LineSearchTask.wellFormed

      // END USER CODE: LineSearchTask.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      searchTask.decode(input, context)
      _pointListSize = Reader.IS.beU16(input, context)
      val pointListSize = sizeOfPointList(_pointListSize)
      if (pointListSize >= 0) {
        pointList = MSZ.create(pointListSize, ObjectPoint.empty)
        for (i <- 0 until pointListSize) {
          pointList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_LineSearchTask_pointList)
      }
      _viewAngleListSize = Reader.IS.beU16(input, context)
      val viewAngleListSize = sizeOfViewAngleList(_viewAngleListSize)
      if (viewAngleListSize >= 0) {
        viewAngleList = MSZ.create(viewAngleListSize, ObjectViewAngle.empty)
        for (i <- 0 until viewAngleListSize) {
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
      Writer.beU16(output, context, _pointListSize)
      val pointListSize = sizeOfPointList(_pointListSize)
      if (pointListSize >= 0) {
        for (i <- 0 until pointListSize) {
          pointList(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_LineSearchTask_pointList)
      }
      Writer.beU16(output, context, _viewAngleListSize)
      val viewAngleListSize = sizeOfViewAngleList(_viewAngleListSize)
      if (viewAngleListSize >= 0) {
        for (i <- 0 until viewAngleListSize) {
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
    val _stringCharsSize: U16,
    val stringChars: ISZ[U8]
  ) {

    @strictpure def toMutable: MTaskRelationships = MTaskRelationships(_stringCharsSize, TaskRelationships.toMutableStringChars(stringChars))

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
    var _stringCharsSize: U16,
    var stringChars: MSZ[U8]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: TaskRelationships = TaskRelationships(_stringCharsSize, TaskRelationships.toImmutableStringChars(stringChars))

    def wellFormed: Z = {

      if (stringChars.size > 65535) {
        return ERROR_TaskRelationships_stringChars
      }

      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringChars.size != stringCharsSize) {
        return ERROR_TaskRelationships_stringChars
      }

      // BEGIN USER CODE: TaskRelationships.wellFormed

      // END USER CODE: TaskRelationships.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      _stringCharsSize = Reader.IS.beU16(input, context)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        stringChars = MSZ.create(stringCharsSize, u8"0")
        for (i <- 0 until stringCharsSize) {
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
      Writer.beU16(output, context, _stringCharsSize)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        for (i <- 0 until stringCharsSize) {
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
    val _entityListSize: U16,
    val entityList: ISZ[S64],
    val _taskListSize: U16,
    val taskList: ISZ[S64],
    val taskRelationships: TaskRelationships,
    val operatingRegion: S64,
    val redoAllTasks: U8
  ) extends LMCPObject {

    @strictpure def toMutable: MAutomationRequest = MAutomationRequest(_entityListSize, AutomationRequest.toMutableEntityList(entityList), _taskListSize, AutomationRequest.toMutableTaskList(taskList), taskRelationships.toMutable, operatingRegion, redoAllTasks)

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
    var _entityListSize: U16,
    var entityList: MSZ[S64],
    var _taskListSize: U16,
    var taskList: MSZ[S64],
    var taskRelationships: MTaskRelationships,
    var operatingRegion: S64,
    var redoAllTasks: U8
  ) extends MLMCPObject {

    @strictpure def toImmutable: AutomationRequest = AutomationRequest(_entityListSize, AutomationRequest.toImmutableEntityList(entityList), _taskListSize, AutomationRequest.toImmutableTaskList(taskList), taskRelationships.toImmutable, operatingRegion, redoAllTasks)

    def wellFormed: Z = {

      if (entityList.size > 16) {
        return ERROR_AutomationRequest_entityList
      }

      val entityListSize = sizeOfEntityList(_entityListSize)
      if (entityList.size != entityListSize) {
        return ERROR_AutomationRequest_entityList
      }

      if (taskList.size > 32) {
        return ERROR_AutomationRequest_taskList
      }

      val taskListSize = sizeOfTaskList(_taskListSize)
      if (taskList.size != taskListSize) {
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
      _entityListSize = Reader.IS.beU16(input, context)
      val entityListSize = sizeOfEntityList(_entityListSize)
      if (entityListSize >= 0) {
        entityList = MSZ.create(entityListSize, s64"0")
        for (i <- 0 until entityListSize) {
          val entityId = Reader.IS.beS64(input, context)
          entityList(i) = entityId
        }
      } else {
        context.signalError(ERROR_AutomationRequest_entityList)
      }
      _taskListSize = Reader.IS.beU16(input, context)
      val taskListSize = sizeOfTaskList(_taskListSize)
      if (taskListSize >= 0) {
        taskList = MSZ.create(taskListSize, s64"0")
        for (i <- 0 until taskListSize) {
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
      Writer.beU16(output, context, _entityListSize)
      val entityListSize = sizeOfEntityList(_entityListSize)
      if (entityListSize >= 0) {
        for (i <- 0 until entityListSize) {
          val entityId = entityList(i)
          Writer.beS64(output, context, entityId)
        }
      } else {
        context.signalError(ERROR_AutomationRequest_entityList)
      }
      Writer.beU16(output, context, _taskListSize)
      val taskListSize = sizeOfTaskList(_taskListSize)
      if (taskListSize >= 0) {
        for (i <- 0 until taskListSize) {
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

  object NullValueVehicleActionMissionCommandVehicleActionCommand {

    val maxSize: Z = z"8"

    def empty: MNullValueVehicleActionMissionCommandVehicleActionCommand = {
      return MNullValueVehicleActionMissionCommandVehicleActionCommand(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValueVehicleActionMissionCommandVehicleActionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValueVehicleActionMissionCommandVehicleActionCommand]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValueVehicleActionMissionCommandVehicleActionCommand(
    val nullValueVehicleActionMissionCommandVehicleActionCommand: U8
  ) extends PredUnionVehicleActionMissionCommandVehicleActionCommand {

    @strictpure def toMutable: MNullValueVehicleActionMissionCommandVehicleActionCommand = MNullValueVehicleActionMissionCommandVehicleActionCommand(nullValueVehicleActionMissionCommandVehicleActionCommand)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValueVehicleActionMissionCommandVehicleActionCommand(
    var nullValueVehicleActionMissionCommandVehicleActionCommand: U8
  ) extends MPredUnionVehicleActionMissionCommandVehicleActionCommand {

    @strictpure def toImmutable: NullValueVehicleActionMissionCommandVehicleActionCommand = NullValueVehicleActionMissionCommandVehicleActionCommand(nullValueVehicleActionMissionCommandVehicleActionCommand)

    def wellFormed: Z = {

      if (nullValueVehicleActionMissionCommandVehicleActionCommand != u8"0") {
        return ERROR_NullValueVehicleActionMissionCommandVehicleActionCommand
      }

      // BEGIN USER CODE: NullValueVehicleActionMissionCommandVehicleActionCommand.wellFormed

      // END USER CODE: NullValueVehicleActionMissionCommandVehicleActionCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValueVehicleActionMissionCommandVehicleActionCommand = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValueVehicleActionMissionCommandVehicleActionCommand)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValueVehicleActionMissionCommandVehicleActionCommand)
      }
    }

  }

  object PackedVehicleActionMissionCommandVehicleActionCommand {

    val maxSize: Z = z"528"

    def empty: MPackedVehicleActionMissionCommandVehicleActionCommand = {
      return MPackedVehicleActionMissionCommandVehicleActionCommand(u16"0", MSZ[S64]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedVehicleActionMissionCommandVehicleActionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedVehicleActionMissionCommandVehicleActionCommand]() else Some(r.toImmutable)
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

  @datatype class PackedVehicleActionMissionCommandVehicleActionCommand(
    val _associatedTaskListSize: U16,
    val associatedTaskList: ISZ[S64]
  ) {

    @strictpure def toMutable: MPackedVehicleActionMissionCommandVehicleActionCommand = MPackedVehicleActionMissionCommandVehicleActionCommand(_associatedTaskListSize, PackedVehicleActionMissionCommandVehicleActionCommand.toMutableAssociatedTaskList(associatedTaskList))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(528, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedVehicleActionMissionCommandVehicleActionCommand(
    var _associatedTaskListSize: U16,
    var associatedTaskList: MSZ[S64]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedVehicleActionMissionCommandVehicleActionCommand = PackedVehicleActionMissionCommandVehicleActionCommand(_associatedTaskListSize, PackedVehicleActionMissionCommandVehicleActionCommand.toImmutableAssociatedTaskList(associatedTaskList))

    def wellFormed: Z = {

      if (associatedTaskList.size > 8) {
        return ERROR_PackedVehicleActionMissionCommandVehicleActionCommand_associatedTaskList
      }

      val associatedTaskListSize = sizeOfAssociatedTaskList(_associatedTaskListSize)
      if (associatedTaskList.size != associatedTaskListSize) {
        return ERROR_PackedVehicleActionMissionCommandVehicleActionCommand_associatedTaskList
      }

      // BEGIN USER CODE: PackedVehicleActionMissionCommandVehicleActionCommand.wellFormed

      // END USER CODE: PackedVehicleActionMissionCommandVehicleActionCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      _associatedTaskListSize = Reader.IS.beU16(input, context)
      val associatedTaskListSize = sizeOfAssociatedTaskList(_associatedTaskListSize)
      if (associatedTaskListSize >= 0) {
        associatedTaskList = MSZ.create(associatedTaskListSize, s64"0")
        for (i <- 0 until associatedTaskListSize) {
          val associatedTaskId = Reader.IS.beS64(input, context)
          associatedTaskList(i) = associatedTaskId
        }
      } else {
        context.signalError(ERROR_PackedVehicleActionMissionCommandVehicleActionCommand_associatedTaskList)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, _associatedTaskListSize)
      val associatedTaskListSize = sizeOfAssociatedTaskList(_associatedTaskListSize)
      if (associatedTaskListSize >= 0) {
        for (i <- 0 until associatedTaskListSize) {
          val associatedTaskId = associatedTaskList(i)
          Writer.beS64(output, context, associatedTaskId)
        }
      } else {
        context.signalError(ERROR_PackedVehicleActionMissionCommandVehicleActionCommand_associatedTaskList)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedVehicleActionMissionCommandVehicleActionCommand)
      }
    }

    def sizeOfAssociatedTaskList(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object LMCPVehicleActionMissionCommandVehicleActionCommand {

    val maxSize: Z = z"648"

    def empty: MLMCPVehicleActionMissionCommandVehicleActionCommand = {
      return MLMCPVehicleActionMissionCommandVehicleActionCommand(u8"0", s64"0", u32"0", u16"0", PackedVehicleActionMissionCommandVehicleActionCommand.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPVehicleActionMissionCommandVehicleActionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPVehicleActionMissionCommandVehicleActionCommand]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPVehicleActionMissionCommandVehicleActionCommand(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val packedVehicleActionMissionCommandVehicleActionCommand: PackedVehicleActionMissionCommandVehicleActionCommand
  ) extends PredUnionVehicleActionMissionCommandVehicleActionCommand {

    @strictpure def toMutable: MLMCPVehicleActionMissionCommandVehicleActionCommand = MLMCPVehicleActionMissionCommandVehicleActionCommand(nonNullValue, seriesID, typeID, seriesVersion, packedVehicleActionMissionCommandVehicleActionCommand.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(648, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPVehicleActionMissionCommandVehicleActionCommand(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var packedVehicleActionMissionCommandVehicleActionCommand: MPackedVehicleActionMissionCommandVehicleActionCommand
  ) extends MPredUnionVehicleActionMissionCommandVehicleActionCommand {

    @strictpure def toImmutable: LMCPVehicleActionMissionCommandVehicleActionCommand = LMCPVehicleActionMissionCommandVehicleActionCommand(nonNullValue, seriesID, typeID, seriesVersion, packedVehicleActionMissionCommandVehicleActionCommand.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPVehicleActionMissionCommandVehicleActionCommand
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPVehicleActionMissionCommandVehicleActionCommand
      }

      if (typeID != u32"7") {
        return ERROR_LMCPVehicleActionMissionCommandVehicleActionCommand
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPVehicleActionMissionCommandVehicleActionCommand
      }

      val wfPackedVehicleActionMissionCommandVehicleActionCommand = packedVehicleActionMissionCommandVehicleActionCommand.wellFormed
      if (wfPackedVehicleActionMissionCommandVehicleActionCommand != 0) {
        return wfPackedVehicleActionMissionCommandVehicleActionCommand
      }

      // BEGIN USER CODE: LMCPVehicleActionMissionCommandVehicleActionCommand.wellFormed

      // END USER CODE: LMCPVehicleActionMissionCommandVehicleActionCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      packedVehicleActionMissionCommandVehicleActionCommand.decode(input, context)

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
      packedVehicleActionMissionCommandVehicleActionCommand.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPVehicleActionMissionCommandVehicleActionCommand)
      }
    }

  }

  @datatype trait PredUnionVehicleActionMissionCommandVehicleActionCommand {
    @strictpure def toMutable: MPredUnionVehicleActionMissionCommandVehicleActionCommand
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionVehicleActionMissionCommandVehicleActionCommand extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionVehicleActionMissionCommandVehicleActionCommand
  }

  object PredUnionVehicleActionMissionCommandVehicleActionCommand {

    val maxSize: Z = z"648"

    def empty: MPredUnionVehicleActionMissionCommandVehicleActionCommand = {
      return NullValueVehicleActionMissionCommandVehicleActionCommand.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionVehicleActionMissionCommandVehicleActionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionVehicleActionMissionCommandVehicleActionCommand]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValueVehicleActionMissionCommandVehicleActionCommand
       'LMCPVehicleActionMissionCommandVehicleActionCommand
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
          return Choice.NullValueVehicleActionMissionCommandVehicleActionCommand
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPVehicleActionMissionCommandVehicleActionCommand
        }
      }
      return Choice.Error
    }

  }

  object ObjectVehicleActionMissionCommandVehicleActionCommand {

    val maxSize: Z = z"648"

    def empty: MObjectVehicleActionMissionCommandVehicleActionCommand = {
      return MObjectVehicleActionMissionCommandVehicleActionCommand(NullValueVehicleActionMissionCommandVehicleActionCommand.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjectVehicleActionMissionCommandVehicleActionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjectVehicleActionMissionCommandVehicleActionCommand]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjectVehicleActionMissionCommandVehicleActionCommand(
    val predUnionVehicleActionMissionCommandVehicleActionCommand: PredUnionVehicleActionMissionCommandVehicleActionCommand
  ) {

    @strictpure def toMutable: MObjectVehicleActionMissionCommandVehicleActionCommand = MObjectVehicleActionMissionCommandVehicleActionCommand(predUnionVehicleActionMissionCommandVehicleActionCommand.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(648, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjectVehicleActionMissionCommandVehicleActionCommand(
    var predUnionVehicleActionMissionCommandVehicleActionCommand: MPredUnionVehicleActionMissionCommandVehicleActionCommand
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjectVehicleActionMissionCommandVehicleActionCommand = ObjectVehicleActionMissionCommandVehicleActionCommand(predUnionVehicleActionMissionCommandVehicleActionCommand.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjectVehicleActionMissionCommandVehicleActionCommand.wellFormed

      // END USER CODE: ObjectVehicleActionMissionCommandVehicleActionCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUnionVehicleActionMissionCommandVehicleActionCommand.choose(input, context) match {
        case PredUnionVehicleActionMissionCommandVehicleActionCommand.Choice.NullValueVehicleActionMissionCommandVehicleActionCommand => predUnionVehicleActionMissionCommandVehicleActionCommand = NullValueVehicleActionMissionCommandVehicleActionCommand.empty
        case PredUnionVehicleActionMissionCommandVehicleActionCommand.Choice.LMCPVehicleActionMissionCommandVehicleActionCommand => predUnionVehicleActionMissionCommandVehicleActionCommand = LMCPVehicleActionMissionCommandVehicleActionCommand.empty
        case _ => context.signalError(ERROR_PredUnionVehicleActionMissionCommandVehicleActionCommand)
      }
      predUnionVehicleActionMissionCommandVehicleActionCommand.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUnionVehicleActionMissionCommandVehicleActionCommand.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjectVehicleActionMissionCommandVehicleActionCommand)
      }
    }

  }

  object MissionCommandVehicleActionCommand {

    val maxSize: Z = z"5360"

    def empty: MMissionCommandVehicleActionCommand = {
      return MMissionCommandVehicleActionCommand(s64"0", s64"0", u16"0", MSZ[MObjectVehicleActionMissionCommandVehicleActionCommand](), s32"0")
    }

    def decode(input: ISZ[B], context: Context): Option[MissionCommandVehicleActionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[MissionCommandVehicleActionCommand]() else Some(r.toImmutable)
    }

    def toMutableVehicleActionList(s: ISZ[ObjectVehicleActionMissionCommandVehicleActionCommand]): MSZ[MObjectVehicleActionMissionCommandVehicleActionCommand] = {
      var r = MSZ[MObjectVehicleActionMissionCommandVehicleActionCommand]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableVehicleActionList(s: MSZ[MObjectVehicleActionMissionCommandVehicleActionCommand]): ISZ[ObjectVehicleActionMissionCommandVehicleActionCommand] = {
      var r = ISZ[ObjectVehicleActionMissionCommandVehicleActionCommand]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class MissionCommandVehicleActionCommand(
    val commandID: S64,
    val vehicleID: S64,
    val _vehicleActionListSize: U16,
    val vehicleActionList: ISZ[ObjectVehicleActionMissionCommandVehicleActionCommand],
    val status: S32
  ) {

    @strictpure def toMutable: MMissionCommandVehicleActionCommand = MMissionCommandVehicleActionCommand(commandID, vehicleID, _vehicleActionListSize, MissionCommandVehicleActionCommand.toMutableVehicleActionList(vehicleActionList), status)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(5360, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MMissionCommandVehicleActionCommand(
    var commandID: S64,
    var vehicleID: S64,
    var _vehicleActionListSize: U16,
    var vehicleActionList: MSZ[MObjectVehicleActionMissionCommandVehicleActionCommand],
    var status: S32
  ) extends Runtime.Composite {

    @strictpure def toImmutable: MissionCommandVehicleActionCommand = MissionCommandVehicleActionCommand(commandID, vehicleID, _vehicleActionListSize, MissionCommandVehicleActionCommand.toImmutableVehicleActionList(vehicleActionList), status)

    def wellFormed: Z = {

      if (vehicleActionList.size > 8) {
        return ERROR_MissionCommandVehicleActionCommand_vehicleActionList
      }

      val vehicleActionListSize = sizeOfVehicleActionList(_vehicleActionListSize)
      if (vehicleActionList.size != vehicleActionListSize) {
        return ERROR_MissionCommandVehicleActionCommand_vehicleActionList
      }

      // BEGIN USER CODE: MissionCommandVehicleActionCommand.wellFormed

      // END USER CODE: MissionCommandVehicleActionCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      commandID = Reader.IS.beS64(input, context)
      vehicleID = Reader.IS.beS64(input, context)
      _vehicleActionListSize = Reader.IS.beU16(input, context)
      val vehicleActionListSize = sizeOfVehicleActionList(_vehicleActionListSize)
      if (vehicleActionListSize >= 0) {
        vehicleActionList = MSZ.create(vehicleActionListSize, ObjectVehicleActionMissionCommandVehicleActionCommand.empty)
        for (i <- 0 until vehicleActionListSize) {
          vehicleActionList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_MissionCommandVehicleActionCommand_vehicleActionList)
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
      Writer.beU16(output, context, _vehicleActionListSize)
      val vehicleActionListSize = sizeOfVehicleActionList(_vehicleActionListSize)
      if (vehicleActionListSize >= 0) {
        for (i <- 0 until vehicleActionListSize) {
          vehicleActionList(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_MissionCommandVehicleActionCommand_vehicleActionList)
      }
      Writer.beS32(output, context, status)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_MissionCommandVehicleActionCommand)
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

  object WayPointLocation3D {

    val maxSize: Z = z"192"

    def empty: MWayPointLocation3D = {
      return MWayPointLocation3D(0.0d, 0.0d, 0.0f, s32"0")
    }

    def decode(input: ISZ[B], context: Context): Option[WayPointLocation3D] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[WayPointLocation3D]() else Some(r.toImmutable)
    }

  }

  @datatype class WayPointLocation3D(
    val latitude: F64,
    val longitude: F64,
    val altitude: F32,
    val altitudeType: S32
  ) {

    @strictpure def toMutable: MWayPointLocation3D = MWayPointLocation3D(latitude, longitude, altitude, altitudeType)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(192, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MWayPointLocation3D(
    var latitude: F64,
    var longitude: F64,
    var altitude: F32,
    var altitudeType: S32
  ) extends Runtime.Composite {

    @strictpure def toImmutable: WayPointLocation3D = WayPointLocation3D(latitude, longitude, altitude, altitudeType)

    def wellFormed: Z = {


      // BEGIN USER CODE: WayPointLocation3D.wellFormed

      // END USER CODE: WayPointLocation3D.wellFormed

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
        context.updateErrorCode(ERROR_WayPointLocation3D)
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

  object PackedWaypointVehicleAction {

    val maxSize: Z = z"528"

    def empty: MPackedWaypointVehicleAction = {
      return MPackedWaypointVehicleAction(u16"0", MSZ[S64]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedWaypointVehicleAction] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedWaypointVehicleAction]() else Some(r.toImmutable)
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

  @datatype class PackedWaypointVehicleAction(
    val _associatedTaskListSize: U16,
    val associatedTaskList: ISZ[S64]
  ) {

    @strictpure def toMutable: MPackedWaypointVehicleAction = MPackedWaypointVehicleAction(_associatedTaskListSize, PackedWaypointVehicleAction.toMutableAssociatedTaskList(associatedTaskList))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(528, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedWaypointVehicleAction(
    var _associatedTaskListSize: U16,
    var associatedTaskList: MSZ[S64]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedWaypointVehicleAction = PackedWaypointVehicleAction(_associatedTaskListSize, PackedWaypointVehicleAction.toImmutableAssociatedTaskList(associatedTaskList))

    def wellFormed: Z = {

      if (associatedTaskList.size > 8) {
        return ERROR_PackedWaypointVehicleAction_associatedTaskList
      }

      val associatedTaskListSize = sizeOfAssociatedTaskList(_associatedTaskListSize)
      if (associatedTaskList.size != associatedTaskListSize) {
        return ERROR_PackedWaypointVehicleAction_associatedTaskList
      }

      // BEGIN USER CODE: PackedWaypointVehicleAction.wellFormed

      // END USER CODE: PackedWaypointVehicleAction.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      _associatedTaskListSize = Reader.IS.beU16(input, context)
      val associatedTaskListSize = sizeOfAssociatedTaskList(_associatedTaskListSize)
      if (associatedTaskListSize >= 0) {
        associatedTaskList = MSZ.create(associatedTaskListSize, s64"0")
        for (i <- 0 until associatedTaskListSize) {
          val associatedTaskId = Reader.IS.beS64(input, context)
          associatedTaskList(i) = associatedTaskId
        }
      } else {
        context.signalError(ERROR_PackedWaypointVehicleAction_associatedTaskList)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, _associatedTaskListSize)
      val associatedTaskListSize = sizeOfAssociatedTaskList(_associatedTaskListSize)
      if (associatedTaskListSize >= 0) {
        for (i <- 0 until associatedTaskListSize) {
          val associatedTaskId = associatedTaskList(i)
          Writer.beS64(output, context, associatedTaskId)
        }
      } else {
        context.signalError(ERROR_PackedWaypointVehicleAction_associatedTaskList)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedWaypointVehicleAction)
      }
    }

    def sizeOfAssociatedTaskList(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object LMCPWaypointVehicleAction {

    val maxSize: Z = z"648"

    def empty: MLMCPWaypointVehicleAction = {
      return MLMCPWaypointVehicleAction(u8"0", s64"0", u32"0", u16"0", PackedWaypointVehicleAction.empty)
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
    val packedWaypointVehicleAction: PackedWaypointVehicleAction
  ) extends PredUnionWaypointVehicleAction {

    @strictpure def toMutable: MLMCPWaypointVehicleAction = MLMCPWaypointVehicleAction(nonNullValue, seriesID, typeID, seriesVersion, packedWaypointVehicleAction.toMutable)

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
    var packedWaypointVehicleAction: MPackedWaypointVehicleAction
  ) extends MPredUnionWaypointVehicleAction {

    @strictpure def toImmutable: LMCPWaypointVehicleAction = LMCPWaypointVehicleAction(nonNullValue, seriesID, typeID, seriesVersion, packedWaypointVehicleAction.toImmutable)

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

      val wfPackedWaypointVehicleAction = packedWaypointVehicleAction.wellFormed
      if (wfPackedWaypointVehicleAction != 0) {
        return wfPackedWaypointVehicleAction
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
      packedWaypointVehicleAction.decode(input, context)

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
      packedWaypointVehicleAction.encode(output, context)

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

  object PackedWaypoint {

    val maxSize: Z = z"6304"

    def empty: MPackedWaypoint = {
      return MPackedWaypoint(WayPointLocation3D.empty, s64"0", s64"0", 0.0f, s32"0", 0.0f, s32"0", u16"0", MSZ[MObjectWaypointVehicleAction](), s64"0", s64"0", u16"0", MSZ[S64]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedWaypoint] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedWaypoint]() else Some(r.toImmutable)
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

  @datatype class PackedWaypoint(
    val wayPointLocation3D: WayPointLocation3D,
    val number: S64,
    val nextWaypoint: S64,
    val speed: F32,
    val speedType: S32,
    val climbRate: F32,
    val turnType: S32,
    val _vehicleActionListSize: U16,
    val vehicleActionList: ISZ[ObjectWaypointVehicleAction],
    val contingencyWaypointA: S64,
    val contingencyWaypointB: S64,
    val _associatedTaskListSize: U16,
    val associatedTaskList: ISZ[S64]
  ) {

    @strictpure def toMutable: MPackedWaypoint = MPackedWaypoint(wayPointLocation3D.toMutable, number, nextWaypoint, speed, speedType, climbRate, turnType, _vehicleActionListSize, PackedWaypoint.toMutableVehicleActionList(vehicleActionList), contingencyWaypointA, contingencyWaypointB, _associatedTaskListSize, PackedWaypoint.toMutableAssociatedTaskList(associatedTaskList))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(6304, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedWaypoint(
    var wayPointLocation3D: MWayPointLocation3D,
    var number: S64,
    var nextWaypoint: S64,
    var speed: F32,
    var speedType: S32,
    var climbRate: F32,
    var turnType: S32,
    var _vehicleActionListSize: U16,
    var vehicleActionList: MSZ[MObjectWaypointVehicleAction],
    var contingencyWaypointA: S64,
    var contingencyWaypointB: S64,
    var _associatedTaskListSize: U16,
    var associatedTaskList: MSZ[S64]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedWaypoint = PackedWaypoint(wayPointLocation3D.toImmutable, number, nextWaypoint, speed, speedType, climbRate, turnType, _vehicleActionListSize, PackedWaypoint.toImmutableVehicleActionList(vehicleActionList), contingencyWaypointA, contingencyWaypointB, _associatedTaskListSize, PackedWaypoint.toImmutableAssociatedTaskList(associatedTaskList))

    def wellFormed: Z = {

      val wfWayPointLocation3D = wayPointLocation3D.wellFormed
      if (wfWayPointLocation3D != 0) {
        return wfWayPointLocation3D
      }

      if (vehicleActionList.size > 8) {
        return ERROR_PackedWaypoint_vehicleActionList
      }

      val vehicleActionListSize = sizeOfVehicleActionList(_vehicleActionListSize)
      if (vehicleActionList.size != vehicleActionListSize) {
        return ERROR_PackedWaypoint_vehicleActionList
      }

      if (associatedTaskList.size > 8) {
        return ERROR_PackedWaypoint_associatedTaskList
      }

      val associatedTaskListSize = sizeOfAssociatedTaskList(_associatedTaskListSize)
      if (associatedTaskList.size != associatedTaskListSize) {
        return ERROR_PackedWaypoint_associatedTaskList
      }

      // BEGIN USER CODE: PackedWaypoint.wellFormed

      // END USER CODE: PackedWaypoint.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      wayPointLocation3D.decode(input, context)
      number = Reader.IS.beS64(input, context)
      nextWaypoint = Reader.IS.beS64(input, context)
      speed = Reader.IS.beF32(input, context)
      speedType = Reader.IS.beS32(input, context)
      climbRate = Reader.IS.beF32(input, context)
      turnType = Reader.IS.beS32(input, context)
      _vehicleActionListSize = Reader.IS.beU16(input, context)
      val vehicleActionListSize = sizeOfVehicleActionList(_vehicleActionListSize)
      if (vehicleActionListSize >= 0) {
        vehicleActionList = MSZ.create(vehicleActionListSize, ObjectWaypointVehicleAction.empty)
        for (i <- 0 until vehicleActionListSize) {
          vehicleActionList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_PackedWaypoint_vehicleActionList)
      }
      contingencyWaypointA = Reader.IS.beS64(input, context)
      contingencyWaypointB = Reader.IS.beS64(input, context)
      _associatedTaskListSize = Reader.IS.beU16(input, context)
      val associatedTaskListSize = sizeOfAssociatedTaskList(_associatedTaskListSize)
      if (associatedTaskListSize >= 0) {
        associatedTaskList = MSZ.create(associatedTaskListSize, s64"0")
        for (i <- 0 until associatedTaskListSize) {
          val associatedTaskId = Reader.IS.beS64(input, context)
          associatedTaskList(i) = associatedTaskId
        }
      } else {
        context.signalError(ERROR_PackedWaypoint_associatedTaskList)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      wayPointLocation3D.encode(output, context)
      Writer.beS64(output, context, number)
      Writer.beS64(output, context, nextWaypoint)
      Writer.beF32(output, context, speed)
      Writer.beS32(output, context, speedType)
      Writer.beF32(output, context, climbRate)
      Writer.beS32(output, context, turnType)
      Writer.beU16(output, context, _vehicleActionListSize)
      val vehicleActionListSize = sizeOfVehicleActionList(_vehicleActionListSize)
      if (vehicleActionListSize >= 0) {
        for (i <- 0 until vehicleActionListSize) {
          vehicleActionList(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_PackedWaypoint_vehicleActionList)
      }
      Writer.beS64(output, context, contingencyWaypointA)
      Writer.beS64(output, context, contingencyWaypointB)
      Writer.beU16(output, context, _associatedTaskListSize)
      val associatedTaskListSize = sizeOfAssociatedTaskList(_associatedTaskListSize)
      if (associatedTaskListSize >= 0) {
        for (i <- 0 until associatedTaskListSize) {
          val associatedTaskId = associatedTaskList(i)
          Writer.beS64(output, context, associatedTaskId)
        }
      } else {
        context.signalError(ERROR_PackedWaypoint_associatedTaskList)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedWaypoint)
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
      return MLMCPWaypoint(u8"0", s64"0", u32"0", u16"0", PackedWaypoint.empty)
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
    val packedWaypoint: PackedWaypoint
  ) extends PredUnionWaypoint {

    @strictpure def toMutable: MLMCPWaypoint = MLMCPWaypoint(nonNullValue, seriesID, typeID, seriesVersion, packedWaypoint.toMutable)

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
    var packedWaypoint: MPackedWaypoint
  ) extends MPredUnionWaypoint {

    @strictpure def toImmutable: LMCPWaypoint = LMCPWaypoint(nonNullValue, seriesID, typeID, seriesVersion, packedWaypoint.toImmutable)

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

      val wfPackedWaypoint = packedWaypoint.wellFormed
      if (wfPackedWaypoint != 0) {
        return wfPackedWaypoint
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
      packedWaypoint.decode(input, context)

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
      packedWaypoint.encode(output, context)

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

  object PackedMissionCommand {

    val maxSize: Z = z"6583616"

    def empty: MPackedMissionCommand = {
      return MPackedMissionCommand(MissionCommandVehicleActionCommand.empty, u16"0", MSZ[MObjectWaypoint](), s64"0")
    }

    def decode(input: ISZ[B], context: Context): Option[PackedMissionCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedMissionCommand]() else Some(r.toImmutable)
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

  @datatype class PackedMissionCommand(
    val missionCommandVehicleActionCommand: MissionCommandVehicleActionCommand,
    val _waypointListSize: U16,
    val waypointList: ISZ[ObjectWaypoint],
    val firstWaypoint: S64
  ) {

    @strictpure def toMutable: MPackedMissionCommand = MPackedMissionCommand(missionCommandVehicleActionCommand.toMutable, _waypointListSize, PackedMissionCommand.toMutableWaypointList(waypointList), firstWaypoint)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(6583616, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedMissionCommand(
    var missionCommandVehicleActionCommand: MMissionCommandVehicleActionCommand,
    var _waypointListSize: U16,
    var waypointList: MSZ[MObjectWaypoint],
    var firstWaypoint: S64
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedMissionCommand = PackedMissionCommand(missionCommandVehicleActionCommand.toImmutable, _waypointListSize, PackedMissionCommand.toImmutableWaypointList(waypointList), firstWaypoint)

    def wellFormed: Z = {

      val wfMissionCommandVehicleActionCommand = missionCommandVehicleActionCommand.wellFormed
      if (wfMissionCommandVehicleActionCommand != 0) {
        return wfMissionCommandVehicleActionCommand
      }

      if (waypointList.size > 1024) {
        return ERROR_PackedMissionCommand_waypointList
      }

      val waypointListSize = sizeOfWaypointList(_waypointListSize)
      if (waypointList.size != waypointListSize) {
        return ERROR_PackedMissionCommand_waypointList
      }

      // BEGIN USER CODE: PackedMissionCommand.wellFormed

      // END USER CODE: PackedMissionCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      missionCommandVehicleActionCommand.decode(input, context)
      _waypointListSize = Reader.IS.beU16(input, context)
      val waypointListSize = sizeOfWaypointList(_waypointListSize)
      if (waypointListSize >= 0) {
        waypointList = MSZ.create(waypointListSize, ObjectWaypoint.empty)
        for (i <- 0 until waypointListSize) {
          waypointList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_PackedMissionCommand_waypointList)
      }
      firstWaypoint = Reader.IS.beS64(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      missionCommandVehicleActionCommand.encode(output, context)
      Writer.beU16(output, context, _waypointListSize)
      val waypointListSize = sizeOfWaypointList(_waypointListSize)
      if (waypointListSize >= 0) {
        for (i <- 0 until waypointListSize) {
          waypointList(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_PackedMissionCommand_waypointList)
      }
      Writer.beS64(output, context, firstWaypoint)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedMissionCommand)
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
      return MLMCPMissionCommand(u8"0", s64"0", u32"0", u16"0", PackedMissionCommand.empty)
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
    val packedMissionCommand: PackedMissionCommand
  ) extends PredUnionMissionCommand {

    @strictpure def toMutable: MLMCPMissionCommand = MLMCPMissionCommand(nonNullValue, seriesID, typeID, seriesVersion, packedMissionCommand.toMutable)

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
    var packedMissionCommand: MPackedMissionCommand
  ) extends MPredUnionMissionCommand {

    @strictpure def toImmutable: LMCPMissionCommand = LMCPMissionCommand(nonNullValue, seriesID, typeID, seriesVersion, packedMissionCommand.toImmutable)

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

      val wfPackedMissionCommand = packedMissionCommand.wellFormed
      if (wfPackedMissionCommand != 0) {
        return wfPackedMissionCommand
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
      packedMissionCommand.decode(input, context)

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
      packedMissionCommand.encode(output, context)

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

  object NullValueVehicleActionPackedAutomationResponseVehicleCommand {

    val maxSize: Z = z"8"

    def empty: MNullValueVehicleActionPackedAutomationResponseVehicleCommand = {
      return MNullValueVehicleActionPackedAutomationResponseVehicleCommand(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValueVehicleActionPackedAutomationResponseVehicleCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValueVehicleActionPackedAutomationResponseVehicleCommand]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValueVehicleActionPackedAutomationResponseVehicleCommand(
    val nullValueVehicleActionPackedAutomationResponseVehicleCommand: U8
  ) extends PredUnionVehicleActionPackedAutomationResponseVehicleCommand {

    @strictpure def toMutable: MNullValueVehicleActionPackedAutomationResponseVehicleCommand = MNullValueVehicleActionPackedAutomationResponseVehicleCommand(nullValueVehicleActionPackedAutomationResponseVehicleCommand)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValueVehicleActionPackedAutomationResponseVehicleCommand(
    var nullValueVehicleActionPackedAutomationResponseVehicleCommand: U8
  ) extends MPredUnionVehicleActionPackedAutomationResponseVehicleCommand {

    @strictpure def toImmutable: NullValueVehicleActionPackedAutomationResponseVehicleCommand = NullValueVehicleActionPackedAutomationResponseVehicleCommand(nullValueVehicleActionPackedAutomationResponseVehicleCommand)

    def wellFormed: Z = {

      if (nullValueVehicleActionPackedAutomationResponseVehicleCommand != u8"0") {
        return ERROR_NullValueVehicleActionPackedAutomationResponseVehicleCommand
      }

      // BEGIN USER CODE: NullValueVehicleActionPackedAutomationResponseVehicleCommand.wellFormed

      // END USER CODE: NullValueVehicleActionPackedAutomationResponseVehicleCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValueVehicleActionPackedAutomationResponseVehicleCommand = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValueVehicleActionPackedAutomationResponseVehicleCommand)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValueVehicleActionPackedAutomationResponseVehicleCommand)
      }
    }

  }

  object PackedVehicleActionPackedAutomationResponseVehicleCommand {

    val maxSize: Z = z"528"

    def empty: MPackedVehicleActionPackedAutomationResponseVehicleCommand = {
      return MPackedVehicleActionPackedAutomationResponseVehicleCommand(u16"0", MSZ[S64]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedVehicleActionPackedAutomationResponseVehicleCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedVehicleActionPackedAutomationResponseVehicleCommand]() else Some(r.toImmutable)
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

  @datatype class PackedVehicleActionPackedAutomationResponseVehicleCommand(
    val _associatedTaskListSize: U16,
    val associatedTaskList: ISZ[S64]
  ) {

    @strictpure def toMutable: MPackedVehicleActionPackedAutomationResponseVehicleCommand = MPackedVehicleActionPackedAutomationResponseVehicleCommand(_associatedTaskListSize, PackedVehicleActionPackedAutomationResponseVehicleCommand.toMutableAssociatedTaskList(associatedTaskList))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(528, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedVehicleActionPackedAutomationResponseVehicleCommand(
    var _associatedTaskListSize: U16,
    var associatedTaskList: MSZ[S64]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedVehicleActionPackedAutomationResponseVehicleCommand = PackedVehicleActionPackedAutomationResponseVehicleCommand(_associatedTaskListSize, PackedVehicleActionPackedAutomationResponseVehicleCommand.toImmutableAssociatedTaskList(associatedTaskList))

    def wellFormed: Z = {

      if (associatedTaskList.size > 8) {
        return ERROR_PackedVehicleActionPackedAutomationResponseVehicleCommand_associatedTaskList
      }

      val associatedTaskListSize = sizeOfAssociatedTaskList(_associatedTaskListSize)
      if (associatedTaskList.size != associatedTaskListSize) {
        return ERROR_PackedVehicleActionPackedAutomationResponseVehicleCommand_associatedTaskList
      }

      // BEGIN USER CODE: PackedVehicleActionPackedAutomationResponseVehicleCommand.wellFormed

      // END USER CODE: PackedVehicleActionPackedAutomationResponseVehicleCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      _associatedTaskListSize = Reader.IS.beU16(input, context)
      val associatedTaskListSize = sizeOfAssociatedTaskList(_associatedTaskListSize)
      if (associatedTaskListSize >= 0) {
        associatedTaskList = MSZ.create(associatedTaskListSize, s64"0")
        for (i <- 0 until associatedTaskListSize) {
          val associatedTaskId = Reader.IS.beS64(input, context)
          associatedTaskList(i) = associatedTaskId
        }
      } else {
        context.signalError(ERROR_PackedVehicleActionPackedAutomationResponseVehicleCommand_associatedTaskList)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, _associatedTaskListSize)
      val associatedTaskListSize = sizeOfAssociatedTaskList(_associatedTaskListSize)
      if (associatedTaskListSize >= 0) {
        for (i <- 0 until associatedTaskListSize) {
          val associatedTaskId = associatedTaskList(i)
          Writer.beS64(output, context, associatedTaskId)
        }
      } else {
        context.signalError(ERROR_PackedVehicleActionPackedAutomationResponseVehicleCommand_associatedTaskList)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedVehicleActionPackedAutomationResponseVehicleCommand)
      }
    }

    def sizeOfAssociatedTaskList(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object LMCPVehicleActionPackedAutomationResponseVehicleCommand {

    val maxSize: Z = z"648"

    def empty: MLMCPVehicleActionPackedAutomationResponseVehicleCommand = {
      return MLMCPVehicleActionPackedAutomationResponseVehicleCommand(u8"0", s64"0", u32"0", u16"0", PackedVehicleActionPackedAutomationResponseVehicleCommand.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPVehicleActionPackedAutomationResponseVehicleCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPVehicleActionPackedAutomationResponseVehicleCommand]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPVehicleActionPackedAutomationResponseVehicleCommand(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val packedVehicleActionPackedAutomationResponseVehicleCommand: PackedVehicleActionPackedAutomationResponseVehicleCommand
  ) extends PredUnionVehicleActionPackedAutomationResponseVehicleCommand {

    @strictpure def toMutable: MLMCPVehicleActionPackedAutomationResponseVehicleCommand = MLMCPVehicleActionPackedAutomationResponseVehicleCommand(nonNullValue, seriesID, typeID, seriesVersion, packedVehicleActionPackedAutomationResponseVehicleCommand.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(648, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPVehicleActionPackedAutomationResponseVehicleCommand(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var packedVehicleActionPackedAutomationResponseVehicleCommand: MPackedVehicleActionPackedAutomationResponseVehicleCommand
  ) extends MPredUnionVehicleActionPackedAutomationResponseVehicleCommand {

    @strictpure def toImmutable: LMCPVehicleActionPackedAutomationResponseVehicleCommand = LMCPVehicleActionPackedAutomationResponseVehicleCommand(nonNullValue, seriesID, typeID, seriesVersion, packedVehicleActionPackedAutomationResponseVehicleCommand.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPVehicleActionPackedAutomationResponseVehicleCommand
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPVehicleActionPackedAutomationResponseVehicleCommand
      }

      if (typeID != u32"7") {
        return ERROR_LMCPVehicleActionPackedAutomationResponseVehicleCommand
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPVehicleActionPackedAutomationResponseVehicleCommand
      }

      val wfPackedVehicleActionPackedAutomationResponseVehicleCommand = packedVehicleActionPackedAutomationResponseVehicleCommand.wellFormed
      if (wfPackedVehicleActionPackedAutomationResponseVehicleCommand != 0) {
        return wfPackedVehicleActionPackedAutomationResponseVehicleCommand
      }

      // BEGIN USER CODE: LMCPVehicleActionPackedAutomationResponseVehicleCommand.wellFormed

      // END USER CODE: LMCPVehicleActionPackedAutomationResponseVehicleCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      packedVehicleActionPackedAutomationResponseVehicleCommand.decode(input, context)

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
      packedVehicleActionPackedAutomationResponseVehicleCommand.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPVehicleActionPackedAutomationResponseVehicleCommand)
      }
    }

  }

  @datatype trait PredUnionVehicleActionPackedAutomationResponseVehicleCommand {
    @strictpure def toMutable: MPredUnionVehicleActionPackedAutomationResponseVehicleCommand
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionVehicleActionPackedAutomationResponseVehicleCommand extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionVehicleActionPackedAutomationResponseVehicleCommand
  }

  object PredUnionVehicleActionPackedAutomationResponseVehicleCommand {

    val maxSize: Z = z"648"

    def empty: MPredUnionVehicleActionPackedAutomationResponseVehicleCommand = {
      return NullValueVehicleActionPackedAutomationResponseVehicleCommand.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionVehicleActionPackedAutomationResponseVehicleCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionVehicleActionPackedAutomationResponseVehicleCommand]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValueVehicleActionPackedAutomationResponseVehicleCommand
       'LMCPVehicleActionPackedAutomationResponseVehicleCommand
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
          return Choice.NullValueVehicleActionPackedAutomationResponseVehicleCommand
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPVehicleActionPackedAutomationResponseVehicleCommand
        }
      }
      return Choice.Error
    }

  }

  object ObjectVehicleActionPackedAutomationResponseVehicleCommand {

    val maxSize: Z = z"648"

    def empty: MObjectVehicleActionPackedAutomationResponseVehicleCommand = {
      return MObjectVehicleActionPackedAutomationResponseVehicleCommand(NullValueVehicleActionPackedAutomationResponseVehicleCommand.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[ObjectVehicleActionPackedAutomationResponseVehicleCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[ObjectVehicleActionPackedAutomationResponseVehicleCommand]() else Some(r.toImmutable)
    }

  }

  @datatype class ObjectVehicleActionPackedAutomationResponseVehicleCommand(
    val predUnionVehicleActionPackedAutomationResponseVehicleCommand: PredUnionVehicleActionPackedAutomationResponseVehicleCommand
  ) {

    @strictpure def toMutable: MObjectVehicleActionPackedAutomationResponseVehicleCommand = MObjectVehicleActionPackedAutomationResponseVehicleCommand(predUnionVehicleActionPackedAutomationResponseVehicleCommand.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(648, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MObjectVehicleActionPackedAutomationResponseVehicleCommand(
    var predUnionVehicleActionPackedAutomationResponseVehicleCommand: MPredUnionVehicleActionPackedAutomationResponseVehicleCommand
  ) extends Runtime.Composite {

    @strictpure def toImmutable: ObjectVehicleActionPackedAutomationResponseVehicleCommand = ObjectVehicleActionPackedAutomationResponseVehicleCommand(predUnionVehicleActionPackedAutomationResponseVehicleCommand.toImmutable)

    def wellFormed: Z = {


      // BEGIN USER CODE: ObjectVehicleActionPackedAutomationResponseVehicleCommand.wellFormed

      // END USER CODE: ObjectVehicleActionPackedAutomationResponseVehicleCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      PredUnionVehicleActionPackedAutomationResponseVehicleCommand.choose(input, context) match {
        case PredUnionVehicleActionPackedAutomationResponseVehicleCommand.Choice.NullValueVehicleActionPackedAutomationResponseVehicleCommand => predUnionVehicleActionPackedAutomationResponseVehicleCommand = NullValueVehicleActionPackedAutomationResponseVehicleCommand.empty
        case PredUnionVehicleActionPackedAutomationResponseVehicleCommand.Choice.LMCPVehicleActionPackedAutomationResponseVehicleCommand => predUnionVehicleActionPackedAutomationResponseVehicleCommand = LMCPVehicleActionPackedAutomationResponseVehicleCommand.empty
        case _ => context.signalError(ERROR_PredUnionVehicleActionPackedAutomationResponseVehicleCommand)
      }
      predUnionVehicleActionPackedAutomationResponseVehicleCommand.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      predUnionVehicleActionPackedAutomationResponseVehicleCommand.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_ObjectVehicleActionPackedAutomationResponseVehicleCommand)
      }
    }

  }

  object PackedAutomationResponseVehicleCommand {

    val maxSize: Z = z"5360"

    def empty: MPackedAutomationResponseVehicleCommand = {
      return MPackedAutomationResponseVehicleCommand(s64"0", s64"0", u16"0", MSZ[MObjectVehicleActionPackedAutomationResponseVehicleCommand](), s32"0")
    }

    def decode(input: ISZ[B], context: Context): Option[PackedAutomationResponseVehicleCommand] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedAutomationResponseVehicleCommand]() else Some(r.toImmutable)
    }

    def toMutableVehicleActionList(s: ISZ[ObjectVehicleActionPackedAutomationResponseVehicleCommand]): MSZ[MObjectVehicleActionPackedAutomationResponseVehicleCommand] = {
      var r = MSZ[MObjectVehicleActionPackedAutomationResponseVehicleCommand]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableVehicleActionList(s: MSZ[MObjectVehicleActionPackedAutomationResponseVehicleCommand]): ISZ[ObjectVehicleActionPackedAutomationResponseVehicleCommand] = {
      var r = ISZ[ObjectVehicleActionPackedAutomationResponseVehicleCommand]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class PackedAutomationResponseVehicleCommand(
    val commandID: S64,
    val vehicleID: S64,
    val _vehicleActionListSize: U16,
    val vehicleActionList: ISZ[ObjectVehicleActionPackedAutomationResponseVehicleCommand],
    val status: S32
  ) {

    @strictpure def toMutable: MPackedAutomationResponseVehicleCommand = MPackedAutomationResponseVehicleCommand(commandID, vehicleID, _vehicleActionListSize, PackedAutomationResponseVehicleCommand.toMutableVehicleActionList(vehicleActionList), status)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(5360, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedAutomationResponseVehicleCommand(
    var commandID: S64,
    var vehicleID: S64,
    var _vehicleActionListSize: U16,
    var vehicleActionList: MSZ[MObjectVehicleActionPackedAutomationResponseVehicleCommand],
    var status: S32
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedAutomationResponseVehicleCommand = PackedAutomationResponseVehicleCommand(commandID, vehicleID, _vehicleActionListSize, PackedAutomationResponseVehicleCommand.toImmutableVehicleActionList(vehicleActionList), status)

    def wellFormed: Z = {

      if (vehicleActionList.size > 8) {
        return ERROR_PackedAutomationResponseVehicleCommand_vehicleActionList
      }

      val vehicleActionListSize = sizeOfVehicleActionList(_vehicleActionListSize)
      if (vehicleActionList.size != vehicleActionListSize) {
        return ERROR_PackedAutomationResponseVehicleCommand_vehicleActionList
      }

      // BEGIN USER CODE: PackedAutomationResponseVehicleCommand.wellFormed

      // END USER CODE: PackedAutomationResponseVehicleCommand.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      commandID = Reader.IS.beS64(input, context)
      vehicleID = Reader.IS.beS64(input, context)
      _vehicleActionListSize = Reader.IS.beU16(input, context)
      val vehicleActionListSize = sizeOfVehicleActionList(_vehicleActionListSize)
      if (vehicleActionListSize >= 0) {
        vehicleActionList = MSZ.create(vehicleActionListSize, ObjectVehicleActionPackedAutomationResponseVehicleCommand.empty)
        for (i <- 0 until vehicleActionListSize) {
          vehicleActionList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_PackedAutomationResponseVehicleCommand_vehicleActionList)
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
      Writer.beU16(output, context, _vehicleActionListSize)
      val vehicleActionListSize = sizeOfVehicleActionList(_vehicleActionListSize)
      if (vehicleActionListSize >= 0) {
        for (i <- 0 until vehicleActionListSize) {
          vehicleActionList(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_PackedAutomationResponseVehicleCommand_vehicleActionList)
      }
      Writer.beS32(output, context, status)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedAutomationResponseVehicleCommand)
      }
    }

    def sizeOfVehicleActionList(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object LMCPAutomationResponseVehicleCommand {

    val maxSize: Z = z"5480"

    def empty: MLMCPAutomationResponseVehicleCommand = {
      return MLMCPAutomationResponseVehicleCommand(u8"0", s64"0", u32"0", u16"0", PackedAutomationResponseVehicleCommand.empty)
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
    val packedAutomationResponseVehicleCommand: PackedAutomationResponseVehicleCommand
  ) extends PredUnionAutomationResponseVehicleCommand {

    @strictpure def toMutable: MLMCPAutomationResponseVehicleCommand = MLMCPAutomationResponseVehicleCommand(nonNullValue, seriesID, typeID, seriesVersion, packedAutomationResponseVehicleCommand.toMutable)

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
    var packedAutomationResponseVehicleCommand: MPackedAutomationResponseVehicleCommand
  ) extends MPredUnionAutomationResponseVehicleCommand {

    @strictpure def toImmutable: LMCPAutomationResponseVehicleCommand = LMCPAutomationResponseVehicleCommand(nonNullValue, seriesID, typeID, seriesVersion, packedAutomationResponseVehicleCommand.toImmutable)

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

      val wfPackedAutomationResponseVehicleCommand = packedAutomationResponseVehicleCommand.wellFormed
      if (wfPackedAutomationResponseVehicleCommand != 0) {
        return wfPackedAutomationResponseVehicleCommand
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
      packedAutomationResponseVehicleCommand.decode(input, context)

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
      packedAutomationResponseVehicleCommand.encode(output, context)

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

  object PackedAutomationResponseInfoKey {

    val maxSize: Z = z"524296"

    def empty: MPackedAutomationResponseInfoKey = {
      return MPackedAutomationResponseInfoKey(u16"0", MSZ[U8]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedAutomationResponseInfoKey] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedAutomationResponseInfoKey]() else Some(r.toImmutable)
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

  @datatype class PackedAutomationResponseInfoKey(
    val _stringCharsSize: U16,
    val stringChars: ISZ[U8]
  ) {

    @strictpure def toMutable: MPackedAutomationResponseInfoKey = MPackedAutomationResponseInfoKey(_stringCharsSize, PackedAutomationResponseInfoKey.toMutableStringChars(stringChars))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(524296, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedAutomationResponseInfoKey(
    var _stringCharsSize: U16,
    var stringChars: MSZ[U8]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedAutomationResponseInfoKey = PackedAutomationResponseInfoKey(_stringCharsSize, PackedAutomationResponseInfoKey.toImmutableStringChars(stringChars))

    def wellFormed: Z = {

      if (stringChars.size > 65535) {
        return ERROR_PackedAutomationResponseInfoKey_stringChars
      }

      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringChars.size != stringCharsSize) {
        return ERROR_PackedAutomationResponseInfoKey_stringChars
      }

      // BEGIN USER CODE: PackedAutomationResponseInfoKey.wellFormed

      // END USER CODE: PackedAutomationResponseInfoKey.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      _stringCharsSize = Reader.IS.beU16(input, context)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        stringChars = MSZ.create(stringCharsSize, u8"0")
        for (i <- 0 until stringCharsSize) {
          val c = Reader.IS.bleU8(input, context)
          stringChars(i) = c
        }
      } else {
        context.signalError(ERROR_PackedAutomationResponseInfoKey_stringChars)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, _stringCharsSize)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        for (i <- 0 until stringCharsSize) {
          val c = stringChars(i)
          Writer.bleU8(output, context, c)
        }
      } else {
        context.signalError(ERROR_PackedAutomationResponseInfoKey_stringChars)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedAutomationResponseInfoKey)
      }
    }

    def sizeOfStringChars(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object PackedAutomationResponseInfoValue {

    val maxSize: Z = z"524296"

    def empty: MPackedAutomationResponseInfoValue = {
      return MPackedAutomationResponseInfoValue(u16"0", MSZ[U8]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedAutomationResponseInfoValue] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedAutomationResponseInfoValue]() else Some(r.toImmutable)
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

  @datatype class PackedAutomationResponseInfoValue(
    val _stringCharsSize: U16,
    val stringChars: ISZ[U8]
  ) {

    @strictpure def toMutable: MPackedAutomationResponseInfoValue = MPackedAutomationResponseInfoValue(_stringCharsSize, PackedAutomationResponseInfoValue.toMutableStringChars(stringChars))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(524296, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedAutomationResponseInfoValue(
    var _stringCharsSize: U16,
    var stringChars: MSZ[U8]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedAutomationResponseInfoValue = PackedAutomationResponseInfoValue(_stringCharsSize, PackedAutomationResponseInfoValue.toImmutableStringChars(stringChars))

    def wellFormed: Z = {

      if (stringChars.size > 65535) {
        return ERROR_PackedAutomationResponseInfoValue_stringChars
      }

      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringChars.size != stringCharsSize) {
        return ERROR_PackedAutomationResponseInfoValue_stringChars
      }

      // BEGIN USER CODE: PackedAutomationResponseInfoValue.wellFormed

      // END USER CODE: PackedAutomationResponseInfoValue.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      _stringCharsSize = Reader.IS.beU16(input, context)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        stringChars = MSZ.create(stringCharsSize, u8"0")
        for (i <- 0 until stringCharsSize) {
          val c = Reader.IS.bleU8(input, context)
          stringChars(i) = c
        }
      } else {
        context.signalError(ERROR_PackedAutomationResponseInfoValue_stringChars)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU16(output, context, _stringCharsSize)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        for (i <- 0 until stringCharsSize) {
          val c = stringChars(i)
          Writer.bleU8(output, context, c)
        }
      } else {
        context.signalError(ERROR_PackedAutomationResponseInfoValue_stringChars)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedAutomationResponseInfoValue)
      }
    }

    def sizeOfStringChars(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object PackedAutomationResponseInfo {

    val maxSize: Z = z"1048592"

    def empty: MPackedAutomationResponseInfo = {
      return MPackedAutomationResponseInfo(PackedAutomationResponseInfoKey.empty, PackedAutomationResponseInfoValue.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[PackedAutomationResponseInfo] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedAutomationResponseInfo]() else Some(r.toImmutable)
    }

  }

  @datatype class PackedAutomationResponseInfo(
    val packedAutomationResponseInfoKey: PackedAutomationResponseInfoKey,
    val packedAutomationResponseInfoValue: PackedAutomationResponseInfoValue
  ) {

    @strictpure def toMutable: MPackedAutomationResponseInfo = MPackedAutomationResponseInfo(packedAutomationResponseInfoKey.toMutable, packedAutomationResponseInfoValue.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048592, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedAutomationResponseInfo(
    var packedAutomationResponseInfoKey: MPackedAutomationResponseInfoKey,
    var packedAutomationResponseInfoValue: MPackedAutomationResponseInfoValue
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedAutomationResponseInfo = PackedAutomationResponseInfo(packedAutomationResponseInfoKey.toImmutable, packedAutomationResponseInfoValue.toImmutable)

    def wellFormed: Z = {

      val wfPackedAutomationResponseInfoKey = packedAutomationResponseInfoKey.wellFormed
      if (wfPackedAutomationResponseInfoKey != 0) {
        return wfPackedAutomationResponseInfoKey
      }

      val wfPackedAutomationResponseInfoValue = packedAutomationResponseInfoValue.wellFormed
      if (wfPackedAutomationResponseInfoValue != 0) {
        return wfPackedAutomationResponseInfoValue
      }

      // BEGIN USER CODE: PackedAutomationResponseInfo.wellFormed

      // END USER CODE: PackedAutomationResponseInfo.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      packedAutomationResponseInfoKey.decode(input, context)
      packedAutomationResponseInfoValue.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      packedAutomationResponseInfoKey.encode(output, context)
      packedAutomationResponseInfoValue.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedAutomationResponseInfo)
      }
    }

  }

  object LMCPAutomationResponseInfo {

    val maxSize: Z = z"1048712"

    def empty: MLMCPAutomationResponseInfo = {
      return MLMCPAutomationResponseInfo(u8"0", s64"0", u32"0", u16"0", PackedAutomationResponseInfo.empty)
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
    val packedAutomationResponseInfo: PackedAutomationResponseInfo
  ) extends PredUnionAutomationResponseInfo {

    @strictpure def toMutable: MLMCPAutomationResponseInfo = MLMCPAutomationResponseInfo(nonNullValue, seriesID, typeID, seriesVersion, packedAutomationResponseInfo.toMutable)

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
    var packedAutomationResponseInfo: MPackedAutomationResponseInfo
  ) extends MPredUnionAutomationResponseInfo {

    @strictpure def toImmutable: LMCPAutomationResponseInfo = LMCPAutomationResponseInfo(nonNullValue, seriesID, typeID, seriesVersion, packedAutomationResponseInfo.toImmutable)

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

      val wfPackedAutomationResponseInfo = packedAutomationResponseInfo.wellFormed
      if (wfPackedAutomationResponseInfo != 0) {
        return wfPackedAutomationResponseInfo
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
      packedAutomationResponseInfo.decode(input, context)

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
      packedAutomationResponseInfo.encode(output, context)

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
    val _missionCommandListSize: U16,
    val missionCommandList: ISZ[ObjectMissionCommand],
    val _vehicleCommandListSize: U16,
    val vehicleCommandList: ISZ[ObjectAutomationResponseVehicleCommand],
    val _infoSize: U16,
    val info: ISZ[ObjectAutomationResponseInfo]
  ) extends LMCPObject {

    @strictpure def toMutable: MAutomationResponse = MAutomationResponse(_missionCommandListSize, AutomationResponse.toMutableMissionCommandList(missionCommandList), _vehicleCommandListSize, AutomationResponse.toMutableVehicleCommandList(vehicleCommandList), _infoSize, AutomationResponse.toMutableInfo(info))

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
    var _missionCommandListSize: U16,
    var missionCommandList: MSZ[MObjectMissionCommand],
    var _vehicleCommandListSize: U16,
    var vehicleCommandList: MSZ[MObjectAutomationResponseVehicleCommand],
    var _infoSize: U16,
    var info: MSZ[MObjectAutomationResponseInfo]
  ) extends MLMCPObject {

    @strictpure def toImmutable: AutomationResponse = AutomationResponse(_missionCommandListSize, AutomationResponse.toImmutableMissionCommandList(missionCommandList), _vehicleCommandListSize, AutomationResponse.toImmutableVehicleCommandList(vehicleCommandList), _infoSize, AutomationResponse.toImmutableInfo(info))

    def wellFormed: Z = {

      if (missionCommandList.size > 16) {
        return ERROR_AutomationResponse_missionCommandList
      }

      val missionCommandListSize = sizeOfMissionCommandList(_missionCommandListSize)
      if (missionCommandList.size != missionCommandListSize) {
        return ERROR_AutomationResponse_missionCommandList
      }

      if (vehicleCommandList.size > 64) {
        return ERROR_AutomationResponse_vehicleCommandList
      }

      val vehicleCommandListSize = sizeOfVehicleCommandList(_vehicleCommandListSize)
      if (vehicleCommandList.size != vehicleCommandListSize) {
        return ERROR_AutomationResponse_vehicleCommandList
      }

      if (info.size > 8) {
        return ERROR_AutomationResponse_info
      }

      val infoSize = sizeOfInfo(_infoSize)
      if (info.size != infoSize) {
        return ERROR_AutomationResponse_info
      }

      // BEGIN USER CODE: AutomationResponse.wellFormed

      // END USER CODE: AutomationResponse.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      _missionCommandListSize = Reader.IS.beU16(input, context)
      val missionCommandListSize = sizeOfMissionCommandList(_missionCommandListSize)
      if (missionCommandListSize >= 0) {
        missionCommandList = MSZ.create(missionCommandListSize, ObjectMissionCommand.empty)
        for (i <- 0 until missionCommandListSize) {
          missionCommandList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_AutomationResponse_missionCommandList)
      }
      _vehicleCommandListSize = Reader.IS.beU16(input, context)
      val vehicleCommandListSize = sizeOfVehicleCommandList(_vehicleCommandListSize)
      if (vehicleCommandListSize >= 0) {
        vehicleCommandList = MSZ.create(vehicleCommandListSize, ObjectAutomationResponseVehicleCommand.empty)
        for (i <- 0 until vehicleCommandListSize) {
          vehicleCommandList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_AutomationResponse_vehicleCommandList)
      }
      _infoSize = Reader.IS.beU16(input, context)
      val infoSize = sizeOfInfo(_infoSize)
      if (infoSize >= 0) {
        info = MSZ.create(infoSize, ObjectAutomationResponseInfo.empty)
        for (i <- 0 until infoSize) {
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
      Writer.beU16(output, context, _missionCommandListSize)
      val missionCommandListSize = sizeOfMissionCommandList(_missionCommandListSize)
      if (missionCommandListSize >= 0) {
        for (i <- 0 until missionCommandListSize) {
          missionCommandList(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_AutomationResponse_missionCommandList)
      }
      Writer.beU16(output, context, _vehicleCommandListSize)
      val vehicleCommandListSize = sizeOfVehicleCommandList(_vehicleCommandListSize)
      if (vehicleCommandListSize >= 0) {
        for (i <- 0 until vehicleCommandListSize) {
          vehicleCommandList(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_AutomationResponse_vehicleCommandList)
      }
      Writer.beU16(output, context, _infoSize)
      val infoSize = sizeOfInfo(_infoSize)
      if (infoSize >= 0) {
        for (i <- 0 until infoSize) {
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
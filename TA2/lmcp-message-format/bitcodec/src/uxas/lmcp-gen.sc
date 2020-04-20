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
val CMASISeriesID = s64"4849604199710720000"
val CMASISeriesVersion : U16 = u16"3"

val KEYVALUEPAIR = u32"2"
val LOCATION3D = u32"3"
val PAYLOADSTATE = u32"6"
val TASK = u32"8"
val SEARCHTASK = u32"9"
val ENTITYSTATE = u32"14"
val AIRVEHICLESTATE = u32"15"
val WEDGE = u32"16"
val LINESEARCHTASK = u32"31"
val OPERATINGREGION = u32"39"
// END USER CODE: Imports

object BitCodec {

  val ERROR_NullValue: Z = 2

  val ERROR_Id: Z = 3

  val ERROR_OperatingRegion_keepInAreas: Z = 4

  val ERROR_OperatingRegion_keepOutAreas: Z = 6

  val ERROR_OperatingRegion: Z = 7

  val ERROR_NullValueLMCPLocation3D: Z = 8

  val ERROR_PackedLMCPLocation3D: Z = 9

  val ERROR_LMCPLMCPLocation3D: Z = 10

  val ERROR_PredUnionLMCPLocation3D: Z = 11

  val ERROR_NullValuePayloadState: Z = 12

  val ERROR_NullValuepayloadStateParameter: Z = 13

  val ERROR_C: Z = 14

  val ERROR_PackedpayloadStateParameterKey_stringChars: Z = 15

  val ERROR_PackedpayloadStateParameterKey: Z = 16

  val ERROR_PackedpayloadStateParameterValue_stringChars: Z = 18

  val ERROR_PackedpayloadStateParameterValue: Z = 19

  val ERROR_PackedpayloadStateParameter: Z = 20

  val ERROR_LMCPpayloadStateParameter: Z = 21

  val ERROR_PredUnionpayloadStateParameter: Z = 22

  val ERROR_PackedPayloadState_parameters: Z = 23

  val ERROR_PackedPayloadState: Z = 24

  val ERROR_LMCPPayloadState: Z = 25

  val ERROR_PredUnionPayloadState: Z = 26

  val ERROR_EntityState_payloadStateList: Z = 27

  val ERROR_EntityState_associatedTasks: Z = 29

  val ERROR_NullValueInfo: Z = 30

  val ERROR_PackedInfoKey_stringChars: Z = 32

  val ERROR_PackedInfoKey: Z = 33

  val ERROR_PackedInfoValue_stringChars: Z = 35

  val ERROR_PackedInfoValue: Z = 36

  val ERROR_PackedInfo: Z = 37

  val ERROR_LMCPInfo: Z = 38

  val ERROR_PredUnionInfo: Z = 39

  val ERROR_EntityState_info: Z = 40

  val ERROR_EntityState: Z = 41

  val ERROR_AirVehicleState: Z = 42

  val ERROR_Label_stringChars: Z = 44

  val ERROR_Label: Z = 45

  val ERROR_Entity: Z = 46

  val ERROR_Task_eligibleEntities: Z = 47

  val ERROR_NullValuetaskParameter: Z = 48

  val ERROR_PackedtaskParameterKey_stringChars: Z = 50

  val ERROR_PackedtaskParameterKey: Z = 51

  val ERROR_PackedtaskParameterValue_stringChars: Z = 53

  val ERROR_PackedtaskParameterValue: Z = 54

  val ERROR_PackedtaskParameter: Z = 55

  val ERROR_LMCPtaskParameter: Z = 56

  val ERROR_PredUniontaskParameter: Z = 57

  val ERROR_Task_parameters: Z = 58

  val ERROR_Task: Z = 59

  val ERROR_Band: Z = 60

  val ERROR_SearchTask_desiredWavelengthBands: Z = 61

  val ERROR_SearchTask: Z = 62

  val ERROR_NullValuePoint: Z = 63

  val ERROR_PackedPoint: Z = 64

  val ERROR_LMCPPoint: Z = 65

  val ERROR_PredUnionPoint: Z = 66

  val ERROR_LineSearchTask_pointList: Z = 67

  val ERROR_NullValueViewAngle: Z = 68

  val ERROR_PackedViewAngle: Z = 69

  val ERROR_LMCPViewAngle: Z = 70

  val ERROR_PredUnionViewAngle: Z = 71

  val ERROR_LineSearchTask_viewAngleList: Z = 72

  val ERROR_LineSearchTask: Z = 73

  val ERROR_LMCPObject: Z = 74

  val ERROR_LMCPObjectDecode: Z = 75

  val ERROR_LMCPObjectNullCheck: Z = 76

  val ERROR_LMCPMessage: Z = 77

  // BEGIN USER CODE: Members
  val CMASISeriesID = s64"4849604199710720000"
  val CMASISeriesVersion : U16 = u16"3"

  val KEYVALUEPAIR = u32"2"
  val LOCATION3D = u32"3"
  val PAYLOADSTATE = u32"6"
  val TASK = u32"8"
  val SEARCHTASK = u32"9"
  val ENTITYSTATE = u32"14"
  val AIRVEHICLESTATE = u32"15"
  val WEDGE = u32"16"
  val LINESEARCHTASK = u32"31"
  val OPERATINGREGION = u32"39"
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

  object Id {

    val maxSize: Z = z"64"

    def empty: MId = {
      return MId(u64"0")
    }

    def decode(input: ISZ[B], context: Context): Option[Id] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[Id]() else Some(r.toImmutable)
    }

  }

  @datatype class Id(
    val id: U64
  ) {

    @strictpure def toMutable: MId = MId(id)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(64, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MId(
    var id: U64
  ) extends Runtime.Composite {

    @strictpure def toImmutable: Id = Id(id)

    def wellFormed: Z = {


      // BEGIN USER CODE: Id.wellFormed

      // END USER CODE: Id.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      id = Reader.IS.beU64(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beU64(output, context, id)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_Id)
      }
    }

  }

  object OperatingRegion {

    val maxSize: Z = z"224"

    def empty: MOperatingRegion = {
      return MOperatingRegion(s64"0", u16"0", MSZ[MId](), u16"0", MSZ[MId]())
    }

    def decode(input: ISZ[B], context: Context): Option[OperatingRegion] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[OperatingRegion]() else Some(r.toImmutable)
    }

    def toMutableKeepInAreas(s: ISZ[Id]): MSZ[MId] = {
      var r = MSZ[MId]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableKeepInAreas(s: MSZ[MId]): ISZ[Id] = {
      var r = ISZ[Id]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }

    def toMutableKeepOutAreas(s: ISZ[Id]): MSZ[MId] = {
      var r = MSZ[MId]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableKeepOutAreas(s: MSZ[MId]): ISZ[Id] = {
      var r = ISZ[Id]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class OperatingRegion(
    val id: S64,
    val _keepInAreasSize: U16,
    val keepInAreas: ISZ[Id],
    val _keepOutAreasSize: U16,
    val keepOutAreas: ISZ[Id]
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
    var keepInAreas: MSZ[MId],
    var _keepOutAreasSize: U16,
    var keepOutAreas: MSZ[MId]
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
        keepInAreas = MSZ.create(keepInAreasSize, Id.empty)
        for (i <- 0 until keepInAreasSize) {
          keepInAreas(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_OperatingRegion_keepInAreas)
      }
      _keepOutAreasSize = Reader.IS.beU16(input, context)
      val keepOutAreasSize = sizeOfKeepOutAreas(_keepOutAreasSize)
      if (keepOutAreasSize >= 0) {
        keepOutAreas = MSZ.create(keepOutAreasSize, Id.empty)
        for (i <- 0 until keepOutAreasSize) {
          keepOutAreas(i).decode(input, context)
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
          keepInAreas(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_OperatingRegion_keepInAreas)
      }
      Writer.beU16(output, context, _keepOutAreasSize)
      val keepOutAreasSize = sizeOfKeepOutAreas(_keepOutAreasSize)
      if (keepOutAreasSize >= 0) {
        for (i <- 0 until keepOutAreasSize) {
          keepOutAreas(i).encode(output, context)
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

  object NullValueLMCPLocation3D {

    val maxSize: Z = z"8"

    def empty: MNullValueLMCPLocation3D = {
      return MNullValueLMCPLocation3D(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValueLMCPLocation3D] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValueLMCPLocation3D]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValueLMCPLocation3D(
    val nullValueLMCPLocation3D: U8
  ) extends PredUnionLMCPLocation3D {

    @strictpure def toMutable: MNullValueLMCPLocation3D = MNullValueLMCPLocation3D(nullValueLMCPLocation3D)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValueLMCPLocation3D(
    var nullValueLMCPLocation3D: U8
  ) extends MPredUnionLMCPLocation3D {

    @strictpure def toImmutable: NullValueLMCPLocation3D = NullValueLMCPLocation3D(nullValueLMCPLocation3D)

    def wellFormed: Z = {

      if (nullValueLMCPLocation3D != u8"0") {
        return ERROR_NullValueLMCPLocation3D
      }

      // BEGIN USER CODE: NullValueLMCPLocation3D.wellFormed

      // END USER CODE: NullValueLMCPLocation3D.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValueLMCPLocation3D = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValueLMCPLocation3D)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValueLMCPLocation3D)
      }
    }

  }

  object PackedLMCPLocation3D {

    val maxSize: Z = z"192"

    def empty: MPackedLMCPLocation3D = {
      return MPackedLMCPLocation3D(0.0d, 0.0d, 0.0f, s32"0")
    }

    def decode(input: ISZ[B], context: Context): Option[PackedLMCPLocation3D] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedLMCPLocation3D]() else Some(r.toImmutable)
    }

  }

  @datatype class PackedLMCPLocation3D(
    val latitude: F64,
    val longitude: F64,
    val altitude: F32,
    val altitudeType: S32
  ) {

    @strictpure def toMutable: MPackedLMCPLocation3D = MPackedLMCPLocation3D(latitude, longitude, altitude, altitudeType)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(192, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedLMCPLocation3D(
    var latitude: F64,
    var longitude: F64,
    var altitude: F32,
    var altitudeType: S32
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedLMCPLocation3D = PackedLMCPLocation3D(latitude, longitude, altitude, altitudeType)

    def wellFormed: Z = {


      // BEGIN USER CODE: PackedLMCPLocation3D.wellFormed

      // END USER CODE: PackedLMCPLocation3D.wellFormed

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
        context.updateErrorCode(ERROR_PackedLMCPLocation3D)
      }
    }

  }

  object LMCPLMCPLocation3D {

    val maxSize: Z = z"312"

    def empty: MLMCPLMCPLocation3D = {
      return MLMCPLMCPLocation3D(u8"0", s64"0", u32"0", u16"0", PackedLMCPLocation3D.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPLMCPLocation3D] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPLMCPLocation3D]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPLMCPLocation3D(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val packedLMCPLocation3D: PackedLMCPLocation3D
  ) extends PredUnionLMCPLocation3D {

    @strictpure def toMutable: MLMCPLMCPLocation3D = MLMCPLMCPLocation3D(nonNullValue, seriesID, typeID, seriesVersion, packedLMCPLocation3D.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(312, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPLMCPLocation3D(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var packedLMCPLocation3D: MPackedLMCPLocation3D
  ) extends MPredUnionLMCPLocation3D {

    @strictpure def toImmutable: LMCPLMCPLocation3D = LMCPLMCPLocation3D(nonNullValue, seriesID, typeID, seriesVersion, packedLMCPLocation3D.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPLMCPLocation3D
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPLMCPLocation3D
      }

      if (typeID != u32"3") {
        return ERROR_LMCPLMCPLocation3D
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPLMCPLocation3D
      }

      val wfPackedLMCPLocation3D = packedLMCPLocation3D.wellFormed
      if (wfPackedLMCPLocation3D != 0) {
        return wfPackedLMCPLocation3D
      }

      // BEGIN USER CODE: LMCPLMCPLocation3D.wellFormed

      // END USER CODE: LMCPLMCPLocation3D.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      packedLMCPLocation3D.decode(input, context)

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
      packedLMCPLocation3D.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPLMCPLocation3D)
      }
    }

  }

  @datatype trait PredUnionLMCPLocation3D {
    @strictpure def toMutable: MPredUnionLMCPLocation3D
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionLMCPLocation3D extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionLMCPLocation3D
  }

  object PredUnionLMCPLocation3D {

    val maxSize: Z = z"312"

    def empty: MPredUnionLMCPLocation3D = {
      return NullValueLMCPLocation3D.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionLMCPLocation3D] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionLMCPLocation3D]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValueLMCPLocation3D
       'LMCPLMCPLocation3D
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
          return Choice.NullValueLMCPLocation3D
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPLMCPLocation3D
        }
      }
      return Choice.Error
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

  object C {

    val maxSize: Z = z"8"

    def empty: MC = {
      return MC(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[C] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[C]() else Some(r.toImmutable)
    }

  }

  @datatype class C(
    val c: U8
  ) {

    @strictpure def toMutable: MC = MC(c)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MC(
    var c: U8
  ) extends Runtime.Composite {

    @strictpure def toImmutable: C = C(c)

    def wellFormed: Z = {


      // BEGIN USER CODE: C.wellFormed

      // END USER CODE: C.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      c = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, c)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_C)
      }
    }

  }

  object PackedpayloadStateParameterKey {

    val maxSize: Z = z"524296"

    def empty: MPackedpayloadStateParameterKey = {
      return MPackedpayloadStateParameterKey(u16"0", MSZ[MC]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedpayloadStateParameterKey] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedpayloadStateParameterKey]() else Some(r.toImmutable)
    }

    def toMutableStringChars(s: ISZ[C]): MSZ[MC] = {
      var r = MSZ[MC]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableStringChars(s: MSZ[MC]): ISZ[C] = {
      var r = ISZ[C]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class PackedpayloadStateParameterKey(
    val _stringCharsSize: U16,
    val stringChars: ISZ[C]
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
    var stringChars: MSZ[MC]
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
        stringChars = MSZ.create(stringCharsSize, C.empty)
        for (i <- 0 until stringCharsSize) {
          stringChars(i).decode(input, context)
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
          stringChars(i).encode(output, context)
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
      return MPackedpayloadStateParameterValue(u16"0", MSZ[MC]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedpayloadStateParameterValue] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedpayloadStateParameterValue]() else Some(r.toImmutable)
    }

    def toMutableStringChars(s: ISZ[C]): MSZ[MC] = {
      var r = MSZ[MC]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableStringChars(s: MSZ[MC]): ISZ[C] = {
      var r = ISZ[C]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class PackedpayloadStateParameterValue(
    val _stringCharsSize: U16,
    val stringChars: ISZ[C]
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
    var stringChars: MSZ[MC]
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
        stringChars = MSZ.create(stringCharsSize, C.empty)
        for (i <- 0 until stringCharsSize) {
          stringChars(i).decode(input, context)
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
          stringChars(i).encode(output, context)
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

  object PackedPayloadState {

    val maxSize: Z = z"8389776"

    def empty: MPackedPayloadState = {
      return MPackedPayloadState(s64"0", u16"0", MSZ[MPredUnionpayloadStateParameter]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedPayloadState] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedPayloadState]() else Some(r.toImmutable)
    }

    def toMutableParameters(s: ISZ[PredUnionpayloadStateParameter]): MSZ[MPredUnionpayloadStateParameter] = {
      var r = MSZ[MPredUnionpayloadStateParameter]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableParameters(s: MSZ[MPredUnionpayloadStateParameter]): ISZ[PredUnionpayloadStateParameter] = {
      var r = ISZ[PredUnionpayloadStateParameter]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class PackedPayloadState(
    val payloadID: S64,
    val _parametersSize: U16,
    val parameters: ISZ[PredUnionpayloadStateParameter]
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
    var parameters: MSZ[MPredUnionpayloadStateParameter]
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
        parameters = MSZ.create(parametersSize, PredUnionpayloadStateParameter.empty)
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

  object NullValueInfo {

    val maxSize: Z = z"8"

    def empty: MNullValueInfo = {
      return MNullValueInfo(u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[NullValueInfo] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[NullValueInfo]() else Some(r.toImmutable)
    }

  }

  @datatype class NullValueInfo(
    val nullValueInfo: U8
  ) extends PredUnionInfo {

    @strictpure def toMutable: MNullValueInfo = MNullValueInfo(nullValueInfo)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(8, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MNullValueInfo(
    var nullValueInfo: U8
  ) extends MPredUnionInfo {

    @strictpure def toImmutable: NullValueInfo = NullValueInfo(nullValueInfo)

    def wellFormed: Z = {

      if (nullValueInfo != u8"0") {
        return ERROR_NullValueInfo
      }

      // BEGIN USER CODE: NullValueInfo.wellFormed

      // END USER CODE: NullValueInfo.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nullValueInfo = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.bleU8(output, context, nullValueInfo)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_NullValueInfo)
      }
    }

  }

  object PackedInfoKey {

    val maxSize: Z = z"524296"

    def empty: MPackedInfoKey = {
      return MPackedInfoKey(u16"0", MSZ[MC]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedInfoKey] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedInfoKey]() else Some(r.toImmutable)
    }

    def toMutableStringChars(s: ISZ[C]): MSZ[MC] = {
      var r = MSZ[MC]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableStringChars(s: MSZ[MC]): ISZ[C] = {
      var r = ISZ[C]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class PackedInfoKey(
    val _stringCharsSize: U16,
    val stringChars: ISZ[C]
  ) {

    @strictpure def toMutable: MPackedInfoKey = MPackedInfoKey(_stringCharsSize, PackedInfoKey.toMutableStringChars(stringChars))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(524296, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedInfoKey(
    var _stringCharsSize: U16,
    var stringChars: MSZ[MC]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedInfoKey = PackedInfoKey(_stringCharsSize, PackedInfoKey.toImmutableStringChars(stringChars))

    def wellFormed: Z = {

      if (stringChars.size > 65535) {
        return ERROR_PackedInfoKey_stringChars
      }

      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringChars.size != stringCharsSize) {
        return ERROR_PackedInfoKey_stringChars
      }

      // BEGIN USER CODE: PackedInfoKey.wellFormed

      // END USER CODE: PackedInfoKey.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      _stringCharsSize = Reader.IS.beU16(input, context)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        stringChars = MSZ.create(stringCharsSize, C.empty)
        for (i <- 0 until stringCharsSize) {
          stringChars(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_PackedInfoKey_stringChars)
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
          stringChars(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_PackedInfoKey_stringChars)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedInfoKey)
      }
    }

    def sizeOfStringChars(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object PackedInfoValue {

    val maxSize: Z = z"524296"

    def empty: MPackedInfoValue = {
      return MPackedInfoValue(u16"0", MSZ[MC]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedInfoValue] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedInfoValue]() else Some(r.toImmutable)
    }

    def toMutableStringChars(s: ISZ[C]): MSZ[MC] = {
      var r = MSZ[MC]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableStringChars(s: MSZ[MC]): ISZ[C] = {
      var r = ISZ[C]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class PackedInfoValue(
    val _stringCharsSize: U16,
    val stringChars: ISZ[C]
  ) {

    @strictpure def toMutable: MPackedInfoValue = MPackedInfoValue(_stringCharsSize, PackedInfoValue.toMutableStringChars(stringChars))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(524296, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedInfoValue(
    var _stringCharsSize: U16,
    var stringChars: MSZ[MC]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedInfoValue = PackedInfoValue(_stringCharsSize, PackedInfoValue.toImmutableStringChars(stringChars))

    def wellFormed: Z = {

      if (stringChars.size > 65535) {
        return ERROR_PackedInfoValue_stringChars
      }

      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringChars.size != stringCharsSize) {
        return ERROR_PackedInfoValue_stringChars
      }

      // BEGIN USER CODE: PackedInfoValue.wellFormed

      // END USER CODE: PackedInfoValue.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      _stringCharsSize = Reader.IS.beU16(input, context)
      val stringCharsSize = sizeOfStringChars(_stringCharsSize)
      if (stringCharsSize >= 0) {
        stringChars = MSZ.create(stringCharsSize, C.empty)
        for (i <- 0 until stringCharsSize) {
          stringChars(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_PackedInfoValue_stringChars)
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
          stringChars(i).encode(output, context)
        }
      } else {
        context.signalError(ERROR_PackedInfoValue_stringChars)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedInfoValue)
      }
    }

    def sizeOfStringChars(l: U16): Z = {
      val r: Z = {
        conversions.U16.toZ(l)
      }
      return r
    }
  }

  object PackedInfo {

    val maxSize: Z = z"1048592"

    def empty: MPackedInfo = {
      return MPackedInfo(PackedInfoKey.empty, PackedInfoValue.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[PackedInfo] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedInfo]() else Some(r.toImmutable)
    }

  }

  @datatype class PackedInfo(
    val packedInfoKey: PackedInfoKey,
    val packedInfoValue: PackedInfoValue
  ) {

    @strictpure def toMutable: MPackedInfo = MPackedInfo(packedInfoKey.toMutable, packedInfoValue.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048592, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPackedInfo(
    var packedInfoKey: MPackedInfoKey,
    var packedInfoValue: MPackedInfoValue
  ) extends Runtime.Composite {

    @strictpure def toImmutable: PackedInfo = PackedInfo(packedInfoKey.toImmutable, packedInfoValue.toImmutable)

    def wellFormed: Z = {

      val wfPackedInfoKey = packedInfoKey.wellFormed
      if (wfPackedInfoKey != 0) {
        return wfPackedInfoKey
      }

      val wfPackedInfoValue = packedInfoValue.wellFormed
      if (wfPackedInfoValue != 0) {
        return wfPackedInfoValue
      }

      // BEGIN USER CODE: PackedInfo.wellFormed

      // END USER CODE: PackedInfo.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      packedInfoKey.decode(input, context)
      packedInfoValue.decode(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      packedInfoKey.encode(output, context)
      packedInfoValue.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_PackedInfo)
      }
    }

  }

  object LMCPInfo {

    val maxSize: Z = z"1048712"

    def empty: MLMCPInfo = {
      return MLMCPInfo(u8"0", s64"0", u32"0", u16"0", PackedInfo.empty)
    }

    def decode(input: ISZ[B], context: Context): Option[LMCPInfo] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LMCPInfo]() else Some(r.toImmutable)
    }

  }

  @datatype class LMCPInfo(
    val nonNullValue: U8,
    val seriesID: S64,
    val typeID: U32,
    val seriesVersion: U16,
    val packedInfo: PackedInfo
  ) extends PredUnionInfo {

    @strictpure def toMutable: MLMCPInfo = MLMCPInfo(nonNullValue, seriesID, typeID, seriesVersion, packedInfo.toMutable)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(1048712, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MLMCPInfo(
    var nonNullValue: U8,
    var seriesID: S64,
    var typeID: U32,
    var seriesVersion: U16,
    var packedInfo: MPackedInfo
  ) extends MPredUnionInfo {

    @strictpure def toImmutable: LMCPInfo = LMCPInfo(nonNullValue, seriesID, typeID, seriesVersion, packedInfo.toImmutable)

    def wellFormed: Z = {

      if (nonNullValue < u8"1" || nonNullValue > u8"255") {
        return ERROR_LMCPInfo
      }

      if (seriesID != s64"4849604199710720000") {
        return ERROR_LMCPInfo
      }

      if (typeID != u32"2") {
        return ERROR_LMCPInfo
      }

      if (seriesVersion != u16"3") {
        return ERROR_LMCPInfo
      }

      val wfPackedInfo = packedInfo.wellFormed
      if (wfPackedInfo != 0) {
        return wfPackedInfo
      }

      // BEGIN USER CODE: LMCPInfo.wellFormed

      // END USER CODE: LMCPInfo.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      nonNullValue = Reader.IS.bleU8(input, context)
      seriesID = Reader.IS.beS64(input, context)
      typeID = Reader.IS.beU32(input, context)
      seriesVersion = Reader.IS.beU16(input, context)
      packedInfo.decode(input, context)

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
      packedInfo.encode(output, context)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_LMCPInfo)
      }
    }

  }

  @datatype trait PredUnionInfo {
    @strictpure def toMutable: MPredUnionInfo
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MPredUnionInfo extends Runtime.Composite {
    @strictpure def toImmutable: PredUnionInfo
  }

  object PredUnionInfo {

    val maxSize: Z = z"1048712"

    def empty: MPredUnionInfo = {
      return NullValueInfo.empty
    }

    def decode(input: ISZ[B], context: Context): Option[PredUnionInfo] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PredUnionInfo]() else Some(r.toImmutable)
    }

    @enum object Choice {
       'NullValueInfo
       'LMCPInfo
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
          return Choice.NullValueInfo
        }
      }
      ;{
        var ctx = context
        var hasError = F
        if (!hasError && ctx.errorCode == 0) {
          return Choice.LMCPInfo
        }
      }
      return Choice.Error
    }

  }

  object EntityState {

    val maxSize: Z = z"100679624"

    def empty: MEntityState = {
      return MEntityState(s64"0", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, NullValueLMCPLocation3D.empty, 0.0f, 0.0f, u16"0", MSZ[MPredUnionPayloadState](), s64"0", s64"0", s32"0", u16"0", MSZ[MId](), s64"0", u16"0", MSZ[MPredUnionInfo]())
    }

    def decode(input: ISZ[B], context: Context): Option[EntityState] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[EntityState]() else Some(r.toImmutable)
    }

    def toMutablePayloadStateList(s: ISZ[PredUnionPayloadState]): MSZ[MPredUnionPayloadState] = {
      var r = MSZ[MPredUnionPayloadState]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutablePayloadStateList(s: MSZ[MPredUnionPayloadState]): ISZ[PredUnionPayloadState] = {
      var r = ISZ[PredUnionPayloadState]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }

    def toMutableAssociatedTasks(s: ISZ[Id]): MSZ[MId] = {
      var r = MSZ[MId]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableAssociatedTasks(s: MSZ[MId]): ISZ[Id] = {
      var r = ISZ[Id]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }

    def toMutableInfo(s: ISZ[PredUnionInfo]): MSZ[MPredUnionInfo] = {
      var r = MSZ[MPredUnionInfo]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableInfo(s: MSZ[MPredUnionInfo]): ISZ[PredUnionInfo] = {
      var r = ISZ[PredUnionInfo]()
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
    val predUnionLMCPLocation3D: PredUnionLMCPLocation3D,
    val energyAvailable: F32,
    val actualEnergyRate: F32,
    val _payloadStateListSize: U16,
    val payloadStateList: ISZ[PredUnionPayloadState],
    val currentWaypoint: S64,
    val currentCommand: S64,
    val mode: S32,
    val _associatedTasksSize: U16,
    val associatedTasks: ISZ[Id],
    val time: S64,
    val _infoSize: U16,
    val info: ISZ[PredUnionInfo]
  ) {

    @strictpure def toMutable: MEntityState = MEntityState(id, u, v, w, udot, vdot, wdot, heading, pitch, roll, p, q, r, course, groundspeed, predUnionLMCPLocation3D.toMutable, energyAvailable, actualEnergyRate, _payloadStateListSize, EntityState.toMutablePayloadStateList(payloadStateList), currentWaypoint, currentCommand, mode, _associatedTasksSize, EntityState.toMutableAssociatedTasks(associatedTasks), time, _infoSize, EntityState.toMutableInfo(info))

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
    var predUnionLMCPLocation3D: MPredUnionLMCPLocation3D,
    var energyAvailable: F32,
    var actualEnergyRate: F32,
    var _payloadStateListSize: U16,
    var payloadStateList: MSZ[MPredUnionPayloadState],
    var currentWaypoint: S64,
    var currentCommand: S64,
    var mode: S32,
    var _associatedTasksSize: U16,
    var associatedTasks: MSZ[MId],
    var time: S64,
    var _infoSize: U16,
    var info: MSZ[MPredUnionInfo]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: EntityState = EntityState(id, u, v, w, udot, vdot, wdot, heading, pitch, roll, p, q, r, course, groundspeed, predUnionLMCPLocation3D.toImmutable, energyAvailable, actualEnergyRate, _payloadStateListSize, EntityState.toImmutablePayloadStateList(payloadStateList), currentWaypoint, currentCommand, mode, _associatedTasksSize, EntityState.toImmutableAssociatedTasks(associatedTasks), time, _infoSize, EntityState.toImmutableInfo(info))

    def wellFormed: Z = {

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
      PredUnionLMCPLocation3D.choose(input, context) match {
        case PredUnionLMCPLocation3D.Choice.NullValueLMCPLocation3D => predUnionLMCPLocation3D = NullValueLMCPLocation3D.empty
        case PredUnionLMCPLocation3D.Choice.LMCPLMCPLocation3D => predUnionLMCPLocation3D = LMCPLMCPLocation3D.empty
        case _ => context.signalError(ERROR_PredUnionLMCPLocation3D)
      }
      predUnionLMCPLocation3D.decode(input, context)
      energyAvailable = Reader.IS.beF32(input, context)
      actualEnergyRate = Reader.IS.beF32(input, context)
      _payloadStateListSize = Reader.IS.beU16(input, context)
      val payloadStateListSize = sizeOfPayloadStateList(_payloadStateListSize)
      if (payloadStateListSize >= 0) {
        payloadStateList = MSZ.create(payloadStateListSize, PredUnionPayloadState.empty)
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
        associatedTasks = MSZ.create(associatedTasksSize, Id.empty)
        for (i <- 0 until associatedTasksSize) {
          associatedTasks(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_EntityState_associatedTasks)
      }
      time = Reader.IS.beS64(input, context)
      _infoSize = Reader.IS.beU16(input, context)
      val infoSize = sizeOfInfo(_infoSize)
      if (infoSize >= 0) {
        info = MSZ.create(infoSize, PredUnionInfo.empty)
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
      predUnionLMCPLocation3D.encode(output, context)
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
          associatedTasks(i).encode(output, context)
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
      return MLabel(u16"0", MSZ[MC]())
    }

    def decode(input: ISZ[B], context: Context): Option[Label] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[Label]() else Some(r.toImmutable)
    }

    def toMutableStringChars(s: ISZ[C]): MSZ[MC] = {
      var r = MSZ[MC]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableStringChars(s: MSZ[MC]): ISZ[C] = {
      var r = ISZ[C]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class Label(
    val _stringCharsSize: U16,
    val stringChars: ISZ[C]
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
    var stringChars: MSZ[MC]
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
        stringChars = MSZ.create(stringCharsSize, C.empty)
        for (i <- 0 until stringCharsSize) {
          stringChars(i).decode(input, context)
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
          stringChars(i).encode(output, context)
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

  object Entity {

    val maxSize: Z = z"64"

    def empty: MEntity = {
      return MEntity(s64"0")
    }

    def decode(input: ISZ[B], context: Context): Option[Entity] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[Entity]() else Some(r.toImmutable)
    }

  }

  @datatype class Entity(
    val entity: S64
  ) {

    @strictpure def toMutable: MEntity = MEntity(entity)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(64, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MEntity(
    var entity: S64
  ) extends Runtime.Composite {

    @strictpure def toImmutable: Entity = Entity(entity)

    def wellFormed: Z = {


      // BEGIN USER CODE: Entity.wellFormed

      // END USER CODE: Entity.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      entity = Reader.IS.beS64(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beS64(output, context, entity)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_Entity)
      }
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
      return MPackedtaskParameterKey(u16"0", MSZ[MC]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedtaskParameterKey] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedtaskParameterKey]() else Some(r.toImmutable)
    }

    def toMutableStringChars(s: ISZ[C]): MSZ[MC] = {
      var r = MSZ[MC]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableStringChars(s: MSZ[MC]): ISZ[C] = {
      var r = ISZ[C]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class PackedtaskParameterKey(
    val _stringCharsSize: U16,
    val stringChars: ISZ[C]
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
    var stringChars: MSZ[MC]
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
        stringChars = MSZ.create(stringCharsSize, C.empty)
        for (i <- 0 until stringCharsSize) {
          stringChars(i).decode(input, context)
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
          stringChars(i).encode(output, context)
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
      return MPackedtaskParameterValue(u16"0", MSZ[MC]())
    }

    def decode(input: ISZ[B], context: Context): Option[PackedtaskParameterValue] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[PackedtaskParameterValue]() else Some(r.toImmutable)
    }

    def toMutableStringChars(s: ISZ[C]): MSZ[MC] = {
      var r = MSZ[MC]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableStringChars(s: MSZ[MC]): ISZ[C] = {
      var r = ISZ[C]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class PackedtaskParameterValue(
    val _stringCharsSize: U16,
    val stringChars: ISZ[C]
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
    var stringChars: MSZ[MC]
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
        stringChars = MSZ.create(stringCharsSize, C.empty)
        for (i <- 0 until stringCharsSize) {
          stringChars(i).decode(input, context)
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
          stringChars(i).encode(output, context)
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

  object Task {

    val maxSize: Z = z"8916184"

    def empty: MTask = {
      return MTask(s64"0", Label.empty, u16"0", MSZ[MEntity](), 0.0f, u16"0", MSZ[MPredUniontaskParameter](), s8"0", u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[Task] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[Task]() else Some(r.toImmutable)
    }

    def toMutableEligibleEntities(s: ISZ[Entity]): MSZ[MEntity] = {
      var r = MSZ[MEntity]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableEligibleEntities(s: MSZ[MEntity]): ISZ[Entity] = {
      var r = ISZ[Entity]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }

    def toMutableParameters(s: ISZ[PredUniontaskParameter]): MSZ[MPredUniontaskParameter] = {
      var r = MSZ[MPredUniontaskParameter]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableParameters(s: MSZ[MPredUniontaskParameter]): ISZ[PredUniontaskParameter] = {
      var r = ISZ[PredUniontaskParameter]()
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
    val eligibleEntities: ISZ[Entity],
    val revisitRate: F32,
    val _parametersSize: U16,
    val parameters: ISZ[PredUniontaskParameter],
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
    var eligibleEntities: MSZ[MEntity],
    var revisitRate: F32,
    var _parametersSize: U16,
    var parameters: MSZ[MPredUniontaskParameter],
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
        eligibleEntities = MSZ.create(eligibleEntitiesSize, Entity.empty)
        for (i <- 0 until eligibleEntitiesSize) {
          eligibleEntities(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_Task_eligibleEntities)
      }
      revisitRate = Reader.IS.beF32(input, context)
      _parametersSize = Reader.IS.beU16(input, context)
      val parametersSize = sizeOfParameters(_parametersSize)
      if (parametersSize >= 0) {
        parameters = MSZ.create(parametersSize, PredUniontaskParameter.empty)
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
          eligibleEntities(i).encode(output, context)
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

  object Band {

    val maxSize: Z = z"32"

    def empty: MBand = {
      return MBand(s32"0")
    }

    def decode(input: ISZ[B], context: Context): Option[Band] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[Band]() else Some(r.toImmutable)
    }

  }

  @datatype class Band(
    val band: S32
  ) {

    @strictpure def toMutable: MBand = MBand(band)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(32, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MBand(
    var band: S32
  ) extends Runtime.Composite {

    @strictpure def toImmutable: Band = Band(band)

    def wellFormed: Z = {


      // BEGIN USER CODE: Band.wellFormed

      // END USER CODE: Band.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      band = Reader.IS.beS32(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beS32(output, context, band)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_Band)
      }
    }

  }

  object SearchTask {

    val maxSize: Z = z"8916552"

    def empty: MSearchTask = {
      return MSearchTask(Task.empty, u16"0", MSZ[MBand](), s64"0", 0.0f)
    }

    def decode(input: ISZ[B], context: Context): Option[SearchTask] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[SearchTask]() else Some(r.toImmutable)
    }

    def toMutableDesiredWavelengthBands(s: ISZ[Band]): MSZ[MBand] = {
      var r = MSZ[MBand]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableDesiredWavelengthBands(s: MSZ[MBand]): ISZ[Band] = {
      var r = ISZ[Band]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class SearchTask(
    val task: Task,
    val _desiredWavelengthBandsSize: U16,
    val desiredWavelengthBands: ISZ[Band],
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
    var desiredWavelengthBands: MSZ[MBand],
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
        desiredWavelengthBands = MSZ.create(desiredWavelengthBandsSize, Band.empty)
        for (i <- 0 until desiredWavelengthBandsSize) {
          desiredWavelengthBands(i).decode(input, context)
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
          desiredWavelengthBands(i).encode(output, context)
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

  object LineSearchTask {

    val maxSize: Z = z"9240048"

    def empty: MLineSearchTask = {
      return MLineSearchTask(SearchTask.empty, u16"0", MSZ[MPredUnionPoint](), u16"0", MSZ[MPredUnionViewAngle](), u8"0")
    }

    def decode(input: ISZ[B], context: Context): Option[LineSearchTask] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[LineSearchTask]() else Some(r.toImmutable)
    }

    def toMutablePointList(s: ISZ[PredUnionPoint]): MSZ[MPredUnionPoint] = {
      var r = MSZ[MPredUnionPoint]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutablePointList(s: MSZ[MPredUnionPoint]): ISZ[PredUnionPoint] = {
      var r = ISZ[PredUnionPoint]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }

    def toMutableViewAngleList(s: ISZ[PredUnionViewAngle]): MSZ[MPredUnionViewAngle] = {
      var r = MSZ[MPredUnionViewAngle]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableViewAngleList(s: MSZ[MPredUnionViewAngle]): ISZ[PredUnionViewAngle] = {
      var r = ISZ[PredUnionViewAngle]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class LineSearchTask(
    val searchTask: SearchTask,
    val _pointListSize: U16,
    val pointList: ISZ[PredUnionPoint],
    val _viewAngleListSize: U16,
    val viewAngleList: ISZ[PredUnionViewAngle],
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
    var pointList: MSZ[MPredUnionPoint],
    var _viewAngleListSize: U16,
    var viewAngleList: MSZ[MPredUnionViewAngle],
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
        pointList = MSZ.create(pointListSize, PredUnionPoint.empty)
        for (i <- 0 until pointListSize) {
          pointList(i).decode(input, context)
        }
      } else {
        context.signalError(ERROR_LineSearchTask_pointList)
      }
      _viewAngleListSize = Reader.IS.beU16(input, context)
      val viewAngleListSize = sizeOfViewAngleList(_viewAngleListSize)
      if (viewAngleListSize >= 0) {
        viewAngleList = MSZ.create(viewAngleListSize, PredUnionViewAngle.empty)
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

  @datatype trait LMCPObject {
    @strictpure def toMutable: MLMCPObject
    def encode(context: Context): Option[ISZ[B]]
    def wellFormed: Z
  }

  @record trait MLMCPObject extends Runtime.Composite {
    @strictpure def toImmutable: LMCPObject
  }

  object LMCPObject {

    val maxSize: Z = z"100679752"

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
        case (_, _, _) => -1
        }
      }
      r match {
        case z"0" => return Choice.OperatingRegion
        case z"1" => return Choice.AirVehicleState
        case z"2" => return Choice.LineSearchTask
        case _ =>
      }
      return Choice.Error
    }

  }

  object LMCPObjectDecode {

    val maxSize: Z = z"100679872"

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
      val buffer = MSZ.create(100679872, F)
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

    val maxSize: Z = z"100679872"

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

    val maxSize: Z = z"100679968"

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
      val buffer = MSZ.create(100679968, F)
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
      MSZ(MId(u64"0x000000000000014E")),
      u16"0x00001",
      MSZ(MId(u64"0x000000000000014F"))
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

// END USER CODE: Test
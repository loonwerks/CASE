// #Sireum

import org.sireum._
import org.sireum.U8._
import org.sireum.F64._
import org.sireum.ops.Bits.{Context, Reader, Writer}
import org.sireum.bitcodec.Runtime

// BEGIN USER CODE: Imports

// END USER CODE: Imports

object BitCodec {

  val ERROR_Location3D: Z = 2

  val ERROR_Polygon_bondaryPointList: Z = 3

  val ERROR_Polygon: Z = 4

  // BEGIN USER CODE: Members

  // END USER CODE: Members

  object Location3D {

    val maxSize: Z = z"168"

    def empty: MLocation3D = {
      return MLocation3D(0.0d, 0.0d, 0.0f, u8"0")
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
    val altitudeType: U8
  ) {

    @strictpure def toMutable: MLocation3D = MLocation3D(latitude, longitude, altitude, altitudeType)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(168, F)
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
    var altitudeType: U8
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
      altitudeType = Reader.IS.bleU8(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beF64(output, context, latitude)
      Writer.beF64(output, context, longitude)
      Writer.beF32(output, context, altitude)
      Writer.bleU8(output, context, altitudeType)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_Location3D)
      }
    }

  }

  object Polygon {

    val maxSize: Z = z"336"

    def empty: MPolygon = {
      return MPolygon(MSZ[MLocation3D]())
    }

    def decode(input: ISZ[B], context: Context): Option[Polygon] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[Polygon]() else Some(r.toImmutable)
    }

    def toMutableBondaryPointList(s: ISZ[Location3D]): MSZ[MLocation3D] = {
      var r = MSZ[MLocation3D]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableBondaryPointList(s: MSZ[MLocation3D]): ISZ[Location3D] = {
      var r = ISZ[Location3D]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class Polygon(
    val bondaryPointList: ISZ[Location3D]
  ) {

    @strictpure def toMutable: MPolygon = MPolygon(Polygon.toMutableBondaryPointList(bondaryPointList))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(336, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MPolygon(
    var bondaryPointList: MSZ[MLocation3D]
  ) extends Runtime.Composite {

    @strictpure def toImmutable: Polygon = Polygon(Polygon.toImmutableBondaryPointList(bondaryPointList))

    def wellFormed: Z = {

      if (bondaryPointList.size != 2) {
        return ERROR_Polygon_bondaryPointList
      }

      // BEGIN USER CODE: Polygon.wellFormed

      // END USER CODE: Polygon.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      bondaryPointList = MSZ()
      while (bondaryPointList.size < 2) {
        bondaryPointList = bondaryPointList :+ Location3D.empty
        bondaryPointList(bondaryPointList.size - 1).decode(input, context)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      for (i <- 0 until bondaryPointList.size) {
        bondaryPointList(i).encode(output, context)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_Polygon)
      }
    }

  }

}

// BEGIN USER CODE: Test
import BitCodec._

// keepInZone
// **Altitude**: 1000
// **Bottom Left:** 45.300394, -121.014809 
// **Center:** 45.322869, -120.963645
// **Top Right:** 45.345344, -120.912451

val keepInZoneLowerLeft: Location3D = Location3D(
  f64"45.300394",
  f64"-121.014809",
  f32"1000.0",
  u8"0x01"
)
   
val keepInZoneUpperRight: Location3D = Location3D(
  f64"45.345344",
  f64"-120.912451",
  f32"1000.0",
  u8"0x01"
)

val keepInZone : Polygon = Polygon(ISZ(keepInZoneLowerLeft, keepInZoneUpperRight))

val keepInZoneContext: Context = Context.create
val keepInZoneEncoded: ISZ[B] = keepInZone.encode(keepInZoneContext).get

println(s"keepInZoneContext.errorCode = ${keepInZoneContext.errorCode}")
println(keepInZoneEncoded);

// keepOutZone
// **Altitude:** 1000
// **Bottom Left:** 45.333059, -120.938088
// **Center:** 45.334407, -120.936179 
// **Top Right:** 45.335756, -120.934244

val keepOutZoneLowerLeft: Location3D = Location3D(
  f64"45.333059",
  f64"-120.938088",
  f32"1000.0",
  u8"0x01"
)
   
val keepOutZoneUpperRight: Location3D = Location3D(
  f64"45.335756",
  f64"-120.934244",
  f32"1000.0",
  u8"0x01"
)

val keepOutZone : Polygon = Polygon(ISZ(keepOutZoneLowerLeft, keepOutZoneUpperRight))

val keepOutZoneContext: Context = Context.create
val keepOutZoneEncoded: ISZ[B] = keepOutZone.encode(keepOutZoneContext).get

println(s"keepOutZoneContext.errorCode = ${keepOutZoneContext.errorCode}")
println(keepOutZoneEncoded);


// END USER CODE: Test
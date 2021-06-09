// #Sireum
package pfc.PFC

import org.sireum._
import org.sireum.S32._
import org.sireum.ops.Bits.{Context, Reader, Writer}
import org.sireum.bitcodec.Runtime

// BEGIN USER CODE: Imports

// END USER CODE: Imports

object MissionBitCodec {

  val ERROR_Coordinate: Z = 2

  val ERROR_Mission_data: Z = 3

  val ERROR_Mission: Z = 4

  // BEGIN USER CODE: Members

  // END USER CODE: Members

  object Coordinate {

    val maxSize: Z = z"96"

    def empty: MCoordinate = {
      return MCoordinate(s32"0", s32"0", s32"0")
    }

    def decode(input: ISZ[B], context: Context): Option[Coordinate] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[Coordinate]() else Some(r.toImmutable)
    }

  }

  @datatype class Coordinate(
    val latitude: S32,
    val longitude: S32,
    val altitude: S32
  ) extends art.DataContent {

    @strictpure def toMutable: MCoordinate = MCoordinate(latitude, longitude, altitude)

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(96, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MCoordinate(
    var latitude: S32,
    var longitude: S32,
    var altitude: S32
  ) extends Runtime.Composite {

    def toImmutable: Coordinate = {
      return Coordinate(latitude, longitude, altitude)
    }

    def wellFormed: Z = {


      // BEGIN USER CODE: Coordinate.wellFormed

      // END USER CODE: Coordinate.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      latitude = Reader.IS.beS32(input, context)
      longitude = Reader.IS.beS32(input, context)
      altitude = Reader.IS.beS32(input, context)

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      Writer.beS32(output, context, latitude)
      Writer.beS32(output, context, longitude)
      Writer.beS32(output, context, altitude)

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_Coordinate)
      }
    }

  }

  object MissionDataContext {
    def empty: MissionDataContext = {
      // BEGIN USER CODE: MissionDataContext.empty
      return MissionDataContext(0)
      // END USER CODE: MissionDataContext.empty
    }
  }

  @record class MissionDataContext(
    // BEGIN USER CODE: MissionDataContext
    var i: Z
    // END USER CODE: MissionDataContext
  )

  object Mission {

    val maxSize: Z = z"288"

    def empty: MMission = {
      return MMission(MSZ[MCoordinate]())
    }

    def decode(input: ISZ[B], context: Context): Option[Mission] = {
      val r = empty
      r.decode(input, context)
      return if (context.hasError) None[Mission]() else Some(r.toImmutable)
    }

    @pure def toMutableData(s: ISZ[Coordinate]): MSZ[MCoordinate] = {
      var r = MSZ[MCoordinate]()
      for (e <- s) {
        r = r :+ e.toMutable
      }
      return r
    }

    def toImmutableData(s: MSZ[MCoordinate]): ISZ[Coordinate] = {
      var r = ISZ[Coordinate]()
      for (e <- s) {
        r = r :+ e.toImmutable
      }
      return r
    }
  }

  @datatype class Mission(
    val data: ISZ[Coordinate]
  ) extends art.DataContent {

    @strictpure def toMutable: MMission = MMission(Mission.toMutableData(data))

    def encode(context: Context): Option[ISZ[B]] = {
      val buffer = MSZ.create(288, F)
      toMutable.encode(buffer, context)
      return if (context.hasError) None[ISZ[B]]() else Some(buffer.toIS)
    }

    def wellFormed: Z = {
      return toMutable.wellFormed
    }
  }

  @record class MMission(
    var data: MSZ[MCoordinate]
  ) extends Runtime.Composite {

    def toImmutable: Mission = {
      return Mission(Mission.toImmutableData(data))
    }

    def wellFormed: Z = {

      if (data.size > 3) {
        return ERROR_Mission_data
      }

      // BEGIN USER CODE: Mission.wellFormed

      // END USER CODE: Mission.wellFormed

      return 0
    }

    def decode(input: ISZ[B], context: Context): Unit = {
      data = MSZ()
      val dataContext = MissionDataContext.empty
      // BEGIN USER CODE: MissionDataContext.init

      // END USER CODE: MissionDataContext.init
      while (dataContinue(input, context, dataContext)) {
        val o = Coordinate.empty
        o.decode(input, context)
        data = data :+ o
        dataUpdate(input, context, dataContext)
      }

      val wf = wellFormed
      if (wf != 0) {
        context.signalError(wf)
      }
    }

    def encode(output: MSZ[B], context: Context): Unit = {
      for (i <- 0 until data.size) {
        data(i).encode(output, context)
      }

      if (context.errorCode == Writer.INSUFFICIENT_BUFFER_SIZE) {
        context.updateErrorCode(ERROR_Mission)
      }
    }

    def dataContinue(input: ISZ[B], context: Context, dataContext: MissionDataContext): B = {
      // BEGIN USER CODE: Mission.dataContinue
      return dataContext.i < 3
      // END USER CODE: Mission.dataContinue
    }

    def dataUpdate(input: ISZ[B], context: Context, dataContext: MissionDataContext): Unit = {
      // BEGIN USER CODE: Mission.dataUpdate
      dataContext.i = dataContext.i + 1
      // END USER CODE: Mission.dataUpdate
    }
  }

}

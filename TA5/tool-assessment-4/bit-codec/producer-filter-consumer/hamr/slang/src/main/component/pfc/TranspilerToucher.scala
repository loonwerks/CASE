// #Sireum

package pfc

import org.sireum._
import org.sireum.S32._
import org.sireum.ops.Bits.Context
import pfc.PFC.MissionBitCodec
import pfc.PFC.MissionBitCodec.{Coordinate, Mission}

// This file will not be overwritten so is safe to edit

object TranspilerToucher {
  def touch(): Unit = {
    // need to 'touch' the following so that they are included during transpiling

    val coordinate: Coordinate = Coordinate(s32"-1", s32"0", s32"0")
    val mission: Mission = Mission(ISZ(coordinate, coordinate, coordinate))

    println(mission)

    val context: Context = ops.Bits.Context.create

    val encoded: ISZ[B] = mission.encode(context).get
    val decoded: Option[Mission] = MissionBitCodec.Mission.decode(encoded, context)

    val bits: ISZ[ISZ[B]] = ISZ(encoded, encoded, encoded)
  }
}

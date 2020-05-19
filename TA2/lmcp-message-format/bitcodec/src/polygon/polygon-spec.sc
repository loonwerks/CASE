// #Sireum

import org.sireum._
import org.sireum.U16._
import org.sireum.S64._
import org.sireum.U32._
import org.sireum.bitcodec.Spec._
import org.sireum.bitcodec.Spec.{Long => Long, Int => Int, Double => Double}

// Contiguity Type Definition
//
// val PhaseII_Polygon =
//   {Latitude : Double
//     Longitude : Double
//     Altitude : Float
//     AltitudeType : AltitudeType
//     } [2]: contig

val Polygon =
  Concat(name = "Polygon", elements = ISZ(
    FixedRepeat("bondaryPointList",
    2,
    Concat("Location3D", ISZ(
      Double("latitude"),
      Double("longitude"),
      Float("altitude"),
      UByte("altitudeType")
    )))
  ))

println(Polygon.toJSON(T))

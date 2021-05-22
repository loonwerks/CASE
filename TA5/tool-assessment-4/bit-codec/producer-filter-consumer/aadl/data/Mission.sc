// #Sireum

import org.sireum._
import org.sireum.bitcodec.Spec
import org.sireum.bitcodec.Spec._

val coordinate: Spec.Base =
  Concat("Coordinate", ISZ(
    Ints("latitude", 1),
    Ints("longitude", 1),
    Ints("altitude", 1)
  ))

val mission: Spec =
  Concat("Mission", ISZ(
    BoundedGenRepeat("data", 3, coordinate)
  ))

println(mission.toJSON(T))

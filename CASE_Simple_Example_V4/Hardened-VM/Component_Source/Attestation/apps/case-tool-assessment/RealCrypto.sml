(* Depends on util, copland, system/crypto *)

(* UserAM dependencies *)
fun dummyDispatch pl ev term = Mt
val dummyUsmMap : (id, usm) map = Map.empty id_compare

fun user_am priv = Am 
    O 
    dummyDispatch 
    dummyUsmMap
    priv 
    Crypto.signMsg
    Crypto.hash

(* HeliAM dependencies *)
(* term -> bstring -> bool option *)
fun verifySig g pub =
    case g
      of G bs ev => Some (Crypto.sigCheck pub bs (encodeEv ev))
       | _ => None

local
    val rng = Random.seed (BString.fromInt BString.LittleEndian 42)
in 
    fun genNonce () = Random.random rng 16
end
(* Depends on util, copland *)

(* UserAM dependencies *)
fun dummyDispatch pl ev term = Mt
val dummyUsmMap : (id, usm) map = Map.empty id_compare
fun dummySign key msg = BString.empty
fun dummyHash msg = BString.empty

fun user_am priv = Am 
    O 
    dummyDispatch
    dummyUsmMap 
    priv 
    dummySign
    dummyHash

(* HeliAM dependencies *)
(* term -> bstring -> bool option *)
fun verifySig g pub = 
    case g of
          G bs ev => Some True
        | _ => None

local 
    fun fakeRand_ffi arg out = #(fakeRand) arg out
in 
    (* () -> bstring *)
    fun genNonce () = FFI.call fakeRand_ffi 16 BString.empty
end

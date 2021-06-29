(* Depends on: util, copland/Instr *)

local type bs = BString.bstring in
type copEval = ev -> term -> ev
type key = bs
type usm = arg list -> bs

(* Does am need both key and sign? Sign could just be specialized
   to `bs -> bs`. *)
datatype am = Am
    pl                (* me *)
    (pl -> copEval)   (* remote dispatcher *)
    ((id, usm) map)   (* usm map *)
    key               (* private key *)
    (key -> bs -> bs) (* sign function *)
    (bs -> bs)        (* hash function *)
end

fun me       (Am x _ _ _ _ _) = x
fun dispatch (Am _ x _ _ _ _) = x
fun usmMap   (Am _ _ x _ _ _) = x
fun privKey  (Am _ _ _ x _ _) = x
fun sign     (Am _ _ _ _ x _) = x
fun hash     (Am _ _ _ _ _ x) = x

fun setMe       (Am _ d u p s h) m = Am m d u p s h
fun setDispatch (Am m _ u p s h) d = Am m d u p s h
fun setUsmMap   (Am m d _ p s h) u = Am m d u p s h
fun setPrivKey  (Am m d u _ s h) p = Am m d u p s h
fun setSign     (Am m d u p _ h) s = Am m d u p s h
fun setHash     (Am m d u p s _) h = Am m d u p s h

fun signEv am priv = sign am priv o encodeEv
fun genHash am = hash am o encodeEv

exception USMexpn string
fun measureUsm map id args = case Map.lookup map id of
      Some f => f args
    | None   => raise USMexpn "USM id not found"

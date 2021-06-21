local 
    fun ffi_timestamp x y = #(timestamp) x y
in
    (* () -> int *)
    fun timestamp () = BString.toInt BString.LittleEndian (FFI.call ffi_timestamp 8 BString.empty)
end

(* int -> () *)
fun waitUntil time = if timestamp () >= time then () else waitUntil time

(* int -> () *)
fun wait timeframe = waitUntil (timestamp () + timeframe)

(* int -> ('a -> 'b) -> 'a -> 'c  *)
(* If io takes longer than the period, the next loop cycle will occur immediately. *)
fun pacer period io = loop (fn x => (
    let val next = timestamp () + period
     in io x;
        waitUntil next
    end
))

(* Uses an association list as the underlying data structure. The standard
   library's hashtable would be more efficient, but likely harder to verify. *)
structure Cache = struct
    local
        (* datatype ('k,'v) cache = Cache ((('k * 'v) list) ref) *)
        datatype ('k,'v) cache = Cache
                                 ((('k * 'v) list) ref) (* The mutable storage *)
                                 int                    (* Reset interval *)
                                 (int ref)              (* Last reset *)

        fun getCache c = case c of Cache r i t => r
    in
        (* Exports type but not constructors *)
        type ('k, 'v) cache = ('k, 'v) cache

        (* new : int -> ('k,'v) cache *)
        (* Takes a reset interval length in microseconds *)
        (* Provides a _unique_ reference on every invocation *)
        fun new i = Cache (Ref []) i (Ref (timestamp ()))
        (* fun new () = Cache (Ref []) *)

        (* clear : ('k,'v) cache -> ('k,'v) cache *)
        (* fun clear c = (getCache c) := [] *)

        (* lookup : ('k,'v) cache -> option *)
        (* TODO: add time check *)
        fun lookup c k = Alist.lookup (!(getCache c)) k

        fun lookup c k = case c of Cache r i t =>
            let val time = timestamp ()
             in if (time - !t) > i
                then (r := []; t := time; None)
                else Alist.lookup (!r) k
            end

        (* update : ('k,'v) cache -> 'k * 'v -> () *)
        fun update c (k,v) =
            let val r = getCache c
             in r := Alist.update (!r) (k,v)
            end
    end
end
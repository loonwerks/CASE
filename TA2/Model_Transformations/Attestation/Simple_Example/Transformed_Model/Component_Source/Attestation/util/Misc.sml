(* Depends on Extra, ByteString *)

exception Undef

(* () -> 'a *)
fun undefined () = (
    TextIO.print_err "Undefined value encountered";
    raise Undef
)

datatype ('a, 'e) result = 
      Ok  'a
    | Err 'e

structure Result = struct 
    (* ('a -> 'c) -> ('b -> 'c) -> ('a, 'b) result -> 'c *)
    fun result fo fe res = case res of 
          Ok  a => fo a
        | Err e => fe e

    (* ('a -> 'b) -> ('a, 'e) result -> ('b, 'e) result *)
    fun map f res = case res of 
          Ok  a => Ok (f a)
        | Err e => Err e

    (* (('a, 'e) result, 'e) result -> ('a, 'e) result *)
    fun join res = case res of 
          Ok  res' => res' 
        | Err e    => Err e

    (* ('a -> ('b, 'e) result) -> ('a, 'e) result -> ('b, 'e) result *)
    fun bind f = join o map f
end

structure FFI = struct 
    type ffi = string -> byte_array -> unit

    val success = Word8.fromInt 0
    val failure = Word8.fromInt 1
    val bufferTooSmall = Word8.fromInt 2

    (* ffi -> int -> bstring -> bstring *)
    fun call ffi len input = 
        let val out = Word8ArrayExtra.nulls len 
        in ffi (BString.toString input) out;
            BString.fromByteArray out 
        end

    (* ffi -> bstring -> () *)
    fun callNoOut ffi input = (call ffi 0 input; ())

    (* ffi -> int -> bstring -> bstring option *)
    fun callOpt ffi len input = 
        let val result = call ffi (len+1) input
         in if BString.hd result = success then 
                Some (BString.tl result)
            else 
                None
        end

    (* ffi -> int -> bstring -> bstring option *)
    fun callOptFlex ffi defaultLen input = 
        let fun callOptFlex_aux len = 
                let val result = call ffi len input
                    val status = BString.hd result
                 in if status = success then 
                        Some (BString.tl result)
                    else if status = failure then 
                        None
                    else 
                        callOptFlex_aux (len*2)
                end
         in callOptFlex_aux defaultLen
        end
    
    (* ffi -> bstring -> bool *)
    fun callBool ffi input = BString.hd (call ffi 1 input) = success

    local 
        val wbuf = Word8ArrayExtra.nulls 2
    in
        (* int -> bstring *)
        fun n2w2 i = (
            Marshalling.n2w2 i wbuf 0;
            BString.fromByteArray wbuf
        )
    end

    (* string list -> bstring *)
    val nullSeparated = BString.concatList
                      o ListExtra.intersperse BString.nullByte
                      o List.map BString.fromString
end

(* bool -> (() -> ()) -> () *)
fun when cond io = if cond then io () else ()

(* 'a option -> ('a -> ()) -> () *)
fun whenSome opt io = OptionExtra.option () io opt

(* ('a, 'e) result -> ('a -> ()) -> () *)
fun whenOk res io = Result.result io (const ()) res

(* ('a -> 'b) -> 'a -> 'c *)
fun loop io x = (
    io x;
    loop io x
)
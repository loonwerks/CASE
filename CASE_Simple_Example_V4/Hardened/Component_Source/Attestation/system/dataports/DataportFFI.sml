(* Depends on: Util *)

exception DataportErr

local 
    fun ffi_writeDataport x y = #(writeDataport) x y
    fun ffi_emit_event    x y = #(emit_event)    x y
in 
    (* string -> bstring -> () *)
    fun writeDataport name msg =
        let val payload = FFI.nullSeparated [BString.fromString name, msg]
         in if FFI.callBool ffi_writeDataport payload then () else raise DataportErr
        end

    (* () -> () *)
    fun emitEvent () = (FFI.call ffi_emit_event BString.empty; ())
end

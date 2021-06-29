(* Depends on: ByteString.sml *)

(* Safe wrappers to FFI meas functions *)
structure Meas = struct
    exception Err string

    local
        fun ffi_fileHash   x y = #(fileHash)   x y
        fun ffi_hashRegion x y = #(hashRegion) x y
        fun ffi_readDir    x y = #(readDir)    x y
        fun ffi_urand      x y = #(urand)      x y
    in
        (* int -> bstring *)
        fun urand len = case FFI.callOpt ffi_urand len BString.empty of 
              Some bs => bs 
            | None => raise (Err "urand FFI Failure")

        (* string -> bstring *)
        fun hashFile filename = case FFI.callOpt ffi_fileHash 64 (BString.fromString filename) of 
              Some bs => bs 
            | None => raise (Err ("hashFile FFI Failure, perhaps could not find file: " ^ filename))
        
        (* string -> string -> string -> bstring *)
        (* pid in decimal, start and end in hex *)
        fun hashRegion pid startAddr endAddr = 
            let val payload = FFI.nullSeparated [pid, startAddr, endAddr]
             in case FFI.callOpt ffi_hashRegion 64 payload of 
                      Some bs => bs 
                    | None => raise (Err "hashRegion FFI Failure, perhaps did not have privileges")
            end

        datatype entryType =
              Unknown
            | Reg 
            | Dir 
            | Fifo 
            | Sock 
            | Chr 
            | Blk 
            | Lnk

        local 
            val unknown = Word8.fromInt 1
            val reg     = Word8.fromInt 2
            val dir     = Word8.fromInt 3
            val fifo    = Word8.fromInt 4
            val sock    = Word8.fromInt 5
            val chr     = Word8.fromInt 6
            val blk     = Word8.fromInt 7
            val lnk     = Word8.fromInt 8

            (* bstring -> (string * entryType) list *)
            val parseResult = 
                let fun toEntryType enc =
                        if enc = unknown   then Unknown
                        else if enc = reg  then Reg
                        else if enc = dir  then Dir
                        else if enc = fifo then Fifo
                        else if enc = sock then Sock
                        else if enc = chr  then Chr
                        else if enc = blk  then Blk
                        else if enc = lnk  then Lnk
                        else raise (Err "readDir FFI failure, unrecognized entry type")
                    fun decodeEntry bs = (BString.toString (BString.tl bs), toEntryType (BString.hd bs))
                  in List.map decodeEntry o BString.tokens (op = Word8Extra.null)
                end
        in 
            (* string -> (string * entryType) list *)
            fun readDir dirName = case FFI.callOptFlex ffi_readDir 256 (BString.fromString dirName) of
                  Some bs => parseResult bs
                | None => raise (Err "readDir FFI failure, perhaps not a directory")
        end

        (* string -> (string * entryType) list *)
        (* version of readDir that filters out the "." and ".." entries *)
        val readDirNoDot = List.filter (fn (n,t) => n <> "." andalso n <> "..") o readDir
    end
end

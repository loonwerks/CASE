(* Depends on: Util *)

(* Safe wrappers to FFI crypto functions *)
structure Crypto = struct
    exception Err string

    local
        fun ffi_sha512           x y = #(sha512)           x y
        fun ffi_signMsg          x y = #(signMsg)          x y
        fun ffi_sigCheck         x y = #(sigCheck)         x y
        fun ffi_chacha20_encrypt x y = #(chacha20_encrypt) x y
    in
        (* bstring -> bstring *)
        val hash = FFI.call ffi_sha512 64

        (* bstring -> bstring -> bstring *)
        fun signMsg priv msg =
            if BString.length priv <> 32 then
                raise (Err "Wrong private key size, Error in signMsg FFI")
            else 
                FFI.call ffi_signMsg 64 (BString.concat priv msg)


        (* bstring -> bstring -> bstring -> bstring *)
        fun sigCheck pub sign msg = 
            if BString.length pub <> 64 then
                raise (Err "Wrong public key size, Error in sigCheck FFI")
            else
                FFI.callBool ffi_sigCheck (BString.concatList [pub, sign, msg])

        (* bstring -> bstring -> int -> bstring -> bstring *)
        fun encrypt key nonce ctr text = 
            let val ctr_bstring = BString.fromIntLength 4 BString.LittleEndian ctr
                val payload = BString.concatList [key, nonce, ctr_bstring, text]
             in FFI.call ffi_chacha20_encrypt (BString.length text) payload
            end
    end
end

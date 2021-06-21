(* Depends on: ByteString *)

exception DataportErr

(* writeDataport : String -> String -> () *)
local
    val null = String.str (Char.chr 0)
in
    fun writeDataport name msg =
        let val result = Word8Array.array 1 (Word8.fromInt 0)
         in #(writeDataport) (name ^ null ^ msg) result;
            if Word8Array.sub result 0 = Word8.fromInt 1
                then raise DataportErr
                else ()
        end
end

(* writeDataportBS : String -> ByteString.BS -> () *)
fun writeDataportBS name = (writeDataport name) o ByteString.toRawString
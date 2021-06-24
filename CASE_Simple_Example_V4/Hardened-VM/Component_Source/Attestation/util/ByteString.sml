(* Depends on Extra *)

(*
This is an implementation for ByteStrings which somewhat resembles the Haskell
ByteString library.
*)

structure BString = struct 
    local 
        datatype bstring = Bs string
        
        (* (string -> a) -> bstring -> a *)
        fun applyStr f bs = case bs of Bs s => f s

        (* (string -> string) -> bstring -> bstring *)
        fun mapStr f bs = case bs of Bs s => Bs (f s)

        val nullChar = Char.chr 0
        val nullCharStr = String.str nullChar

        (* word8 -> char *)
        val word8ToChar = Char.chr o Word8.toInt

        (* char -> word8 *)
        val charToWord8 = Word8.fromInt o Char.ord
    in 
        type bstring = bstring

        datatype endianness = BigEndian | LittleEndian

        val empty = Bs ""
        val nullByte = Bs nullCharStr

        (* word8 -> bstring *)
        fun singleton w = Bs (String.str (word8ToChar w))

        (* word8 list -> bstring *)
        fun implode l = Bs (String.implode (List.map word8ToChar l))

        (* bstring -> word8 list *)
        val explode = applyStr (List.map charToWord8 o String.explode)
 
        (* endianness -> word8 list -> bstring *)
        fun implodeEnd endian = case endian of
              LittleEndian => implode o List.rev
            | BigEndian    => implode

        (* endianness -> bstring -> word8 list *)
        fun explodeEnd endian = case endian of 
              LittleEndian => List.rev o explode
            | BigEndian    => explode

        (* int -> word8 -> bstring *)
        fun replicate len w = implode (ListExtra.replicate len w)

        (* int -> bstring *)
        fun nulls len = replicate len Word8Extra.null

        (* bstring -> int *)
        val length = applyStr String.size

        (* bstring -> int -> word8 *)
        fun sub bs i = case bs of Bs s => charToWord8 (String.sub s i)

        (* bstring -> bstring *)
        val rev = mapStr StringExtra.rev

        (* int -> int -> bstring -> bstring *)
        fun substring i j = mapStr (fn s => String.substring s i j)

        (* bstring -> bstring -> bstring *)
        fun concat bs1 bs2 = case (bs1, bs2) of (Bs s1, Bs s2) => Bs (s1 ^ s2)

        (* bstring list -> bstring *)
        val concatList = List.foldr concat empty

        (* bstring -> bool *)
        fun isEmpty bs = bs = empty

        (* bstring -> word8 *)
        val hd = List.hd o explode

        (* bstring -> bstring *)
        val tl = implode o List.tl o explode

        (* bstring -> string *)
        (* Note that this is a "naive cast". The resulting string may contain
           non-printable characters. Use `show` for printing purposes. *)
        val toString = applyStr id

        (* string -> bstring *)
        fun fromString s = Bs s

        (* bstring -> string *)
        val toCString = applyStr StringExtra.toCString

        (* string -> bstring *)
        fun fromCString s = Bs (StringExtra.toCString s)

        (* (word8 -> bool) -> bstring -> bstring list *)
        fun tokens f = List.map fromString o applyStr (String.tokens (f o charToWord8))

        (* bstring -> string *)
        val show = String.concat o List.map Word8Extra.toHex o explode

        (* string -> bstring *)
        fun unshow s = case String.size s of 
              0 => empty
            | 1 => raise Word8Extra.InvalidHex
            | _ => case StringExtra.splitAt 2 s of 
                  (hexByte, s') => concat (singleton (Word8Extra.fromHex hexByte)) (unshow s')

        (* (word8 -> word8) -> bstring -> bstring *)
        fun map f = mapStr (StringExtra.map (word8ToChar o f o charToWord8))

        (* (word8 -> 'a -> 'a) -> 'a -> bstring -> 'a *)
        fun foldr f = applyStr o StringExtra.foldr (f o charToWord8)

        (* (int -> word8 -> 'a -> 'a) -> 'a -> bstring -> 'a *)
        fun foldri f = applyStr o StringExtra.foldri (fn i => f i o charToWord8)

        (* ('a -> word8 -> 'a) -> 'a -> bstring -> 'a *)
        fun foldl f = applyStr o StringExtra.foldl (fn a => f a o charToWord8)

        (* (int -> 'a -> word8 -> 'a) -> 'a -> bstring -> 'a *)
        fun foldli f = applyStr o StringExtra.foldli (fn i => fn a => f i a o charToWord8)

        (* bstring -> byte_array *)
        fun toByteArray bs = case bs of Bs s =>
            let val len = String.size s
                val arr = Word8Array.array len Word8Extra.null
             in Word8Array.copyVec s 0 len arr 0;
                arr
            end 

        (* byte_array -> bstring *)
        fun fromByteArray arr = Bs (Word8Array.substring arr 0 (Word8Array.length arr))

        (* int -> bstring -> bstring * bstring *)
        fun splitAt i bs =
            case bs of Bs s =>
                case StringExtra.splitAt i s of (s1, s2) =>
                    (Bs s1, Bs s2)

        (* endianness -> int -> bstring -> bstring *)
        fun toLength endian toLen bs = 
            let val bsLen = length bs
                fun toLengthLittle () = case Int.compare toLen bsLen of 
                      Less    => substring 0 toLen bs
                    | Equal   => bs
                    | Greater => concat bs (nulls (toLen - bsLen))
                fun toLengthBig () = case Int.compare toLen bsLen of 
                      Less    => substring (bsLen - toLen - 1) (bsLen - 1) bs
                    | Equal   => bs
                    | Greater => concat (nulls (toLen - bsLen)) bs
             in case endian of 
                      LittleEndian => toLengthLittle ()
                    | BigEndian    => toLengthBig ()
            end

        (* endianness -> bstring -> bstring -> bstring *)
        fun xor endian bs1 bs2 = 
            let val len = max (length bs1) (length bs2)
                val padded_bs1 = toLength endian len bs1
                val padded_bs2 = toLength endian len bs1
             in implode (ListExtra.zipWith Word8.xorb (explode padded_bs1) (explode padded_bs2))
            end

        (* endian -> bstring -> int *)
        (* Interprets bs as an unsigned integer *)
        fun toInt endian bs =
            let val toIntLittle = foldr (fn w => fn n => (Word8.toInt w) + (n * 256)) 0
             in case endian of 
                      LittleEndian => toIntLittle bs
                    | BigEndian    => toIntLittle (rev bs)
            end

        (* endian -> int -> bstring *)
        (* Assumes non-negative i *)
        fun fromInt endian i = 
            let fun fromNatLittle i = 
                    if i = 0 then 
                        empty 
                    else
                        concat (singleton (Word8.fromInt (i mod 256)))
                               (fromNatLittle (i div 256))
             in if i <= 0 then empty else
                case endian of 
                      LittleEndian => fromNatLittle i 
                    | BigEndian    => rev (fromNatLittle i)
            end

        (* int -> endian -> int -> bstring *)
        fun fromIntLength len endian = toLength endian len o fromInt endian
    end
end
(* Depends on Json *)

(* Extensions to structures in the standard library *)

structure ListExtra = struct
    (* int -> 'a -> 'a list *)
    fun replicate len a = List.genlist (const a) len

    (* 'a list -> 'b list -> ('a * 'b) list *)
    fun zip a b = List.zip (a, b)

    (* ('a -> 'b -> 'c) -> 'a list -> 'b list -> 'c list *)
    fun zipWith f al bl = List.map (uncurry f) (zip al bl)

    (* 'a -> 'a list -> 'a list *)
    fun intersperse a alist = case alist of
          h1 :: h2 :: t => h1 :: a :: (intersperse a (h2 :: t))
        | _ => alist
end

structure OptionExtra = struct 
    (* 'b -> ('a -> 'b) 'a option -> 'b *)
    fun option b f opt = case opt of 
          Some a => f a 
        | None   => b
end

structure CharExtra = struct 
    val null = Char.chr 0
end

structure StringExtra = struct
    (* int -> string -> string * string *)
    fun splitAt i s =
        if i <= 0 then 
            ("", s)
        else if i >= String.size s - 1 then 
            (s, "")
        else
            (String.substring s 0 i, String.extract s i None)

    (* string -> string *)
    val rev = String.implode o List.rev o String.explode

    (* string -> string *)
    (* Cuts the string off at the first null char *)
    val toCString = String.implode o List.takeUntil ((op =) CharExtra.null) o String.explode

    (* (char -> char) -> string -> string *)
    val map = String.translate

    (* (char -> 'a -> 'a) -> 'a -> string -> 'a *)
    fun foldr f z s = List.foldr f z (String.explode s)

    (* (int -> char -> 'a -> 'a) -> 'a -> string -> 'a *)
    fun foldri f z s = List.foldri f z (String.explode s)

    (* ('a -> char -> 'a) -> 'a -> string -> 'a *)
    fun foldl f z s = List.foldl f z (String.explode s)

    (* (int -> 'a -> char -> 'a) -> 'a -> string -> 'a *)
    (* Seems to be a typo in the standard library. Should be "List.foldli" *)
    fun foldli f z s = List.foldi f z (String.explode s)
end

structure Word8Extra = struct 
    val null = Word8.fromInt 0

    local
        val maskUpper = Word8.fromInt 15 (* = 0x0F = 0b00001111 *)
        val hexits = Array.fromList ["0","1","2","3","4","5","6","7","8","9",
                                     "A","B","C","D","E","F"]
        val getHexit = Array.sub hexits
    in
        (* word8 -> string *)
        fun toHex w =
            let val top = Word8.toInt (Word8.>> w 4)
                val bot = Word8.toInt (Word8.andb w maskUpper)
             in getHexit top ^ getHexit bot
            end
    end

    exception InvalidHex
    local
        val bytes = Array.tabulate 16 Word8.fromInt
        fun hexMap h = case h
          of #"0" => 0  | #"1" => 1  | #"2" => 2  | #"3" => 3  | #"4" => 4
           | #"5" => 5  | #"6" => 6  | #"7" => 7  | #"8" => 8  | #"9" => 9
           | #"a" => 10 | #"A" => 10 | #"b" => 11 | #"B" => 11
           | #"c" => 12 | #"C" => 12 | #"d" => 13 | #"D" => 13
           | #"e" => 14 | #"E" => 14 | #"f" => 15 | #"F" => 15
           |   _  => raise InvalidHex
        val getHalfByte = Array.sub bytes o hexMap
    in
        fun fromHex s =
            let val top = String.sub s 0
                val bot = String.sub s 1
             in Word8.orb (Word8.<< (getHalfByte top) 4) (getHalfByte bot)
            end
    end
end

structure Word8ArrayExtra = struct 
    fun nulls len = Word8Array.array len Word8Extra.null

    val empty = Word8Array.array 0 Word8Extra.null
end

structure TextIOExtra = struct 
    (* string -> () *)
    fun printLn s = TextIO.print (s ^ "\n")

    (* string -> () *)
    fun printLn_err s = TextIO.print_err (s ^ "\n")
end

structure JsonExtra = struct 
    (* string -> Json.json *)
    fun parse str = List.hd (fst (Json.parse ([], str)))

    (* Json.json -> string *)
    fun toString js = Json.print_json js 0
end

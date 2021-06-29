(*---------------------------------------------------------------------------*)
(* Type of Json expressions plus parser. Does not yet handle floating point  *)
(* numbers, or utf-8 strings.                                                *)
(*---------------------------------------------------------------------------*)

structure Json =
struct

(* type substring = String.substring *)

exception ERR string string

fun fst p = case p of (x,y) =>  x
fun snd p = case p of (x,y) =>  y

fun eRR_MESG pair = print (fst pair^": "^snd pair)

datatype number
   = Int int
   (* | Float of real (* Not totally sure about exact representation desired *) *) (* There are no floating points in CakeML *)

datatype json
    = Null
    | LBRACK  (* stack symbol only *)
    | LBRACE  (* stack symbol only *)
    | Boolean bool
    | Number number     (* ints and floats *)
    | String string     (* should be unicode strings, per JSON spec *)
    | List (json list)
    | AList ((string * json) list)

fun print_json js t =
    case js
     of LBRACK => "LBRACK"
      | LBRACE => "LBRACE"
      | Boolean b => String.concat ["\"", if b then "True" else "False", "\""]
      | Number (Int n) => Int.toString n
      | String s => String.concat ["\"",s,"\""]
      | List js' => String.concat ["[\n", print_json_list js' (t + 1), "]"]
      | AList js' => String.concat ["{\n", print_json_alist js' (t + 1), "\n}"]

and print_json_list js t =
	case js
	 of [] => ""
      | [j] => print_json j t
	  | (j::js') => String.concat [print_json j t, ", ", print_json_list js' t]

and print_json_alist js t =
	let
		val spacing = String.concat (List.tabulate t (fn x => "  "))
	in
		case js
		 of [] => ""
		  | [(s,j)] => String.concat [spacing, "\"", s, "\" : ", print_json j t, ""]
		  | ((s,j)::js') => String.concat [spacing, "\"", s, "\" : "
		                                  , print_json j t, ",\n", print_json_alist js' t]
    end


(*---------------------------------------------------------------------------*)
(* Lexer                                                                     *)
(*---------------------------------------------------------------------------*)


datatype lexeme
  = Lbrace
  | Rbrace
  | Lbrack
  | Rbrack
  | Colon
  | Comma
  | NullLit
  | BoolLit bool
  | NumLit number
  | StringLit string

fun isEmpty s = s = ""

fun isDigit c = let val x = Char.ord c in x > 47 andalso x < 58 end

fun isAlpha c = let val x = Char.ord c in (x > 64 andalso x < 91) orelse (x > 96 andalso x < 123) end

fun getc strm =
    let
        val lstr = String.explode strm
    in
        case lstr
         of [] => None
         | x::xs => Some (x, String.implode xs)
    end

fun takeWhile prop ss =
    let
        val (ls, ss') = String.split prop ss
    in
        if isEmpty ls
        then None
        else Some (ls, ss')
    end

fun compose f opt =
    case opt of
        None => None
      | Some (x,y) => f x y

fun getNum ss =
    let fun toInt s =
            if s = ""
            then None
            else if String.sub s 0 = #"-"
                 then (case Int.fromString (String.extract s 1 None)
                        of Some i => Some (Int.~(i))
                        |  None => None)
                 else Int.fromString s
    in compose
           (fn s => fn ss' =>
               case toInt s
                of Some i => Some (NumLit (Int i),ss')
                |  None => None)
           (takeWhile (fn c => isDigit c orelse c = #"-") ss)
    end


fun getKeyword ss =
 compose (fn s => fn ss' =>
   case s
    of "null"  => Some (NullLit,ss')
     | "True"  => Some (BoolLit True, ss')
     | "False" => Some (BoolLit False, ss')
     |  other  => None)
  (takeWhile isAlpha ss);

fun getString strm list =
    case getc strm
     of None => raise ERR "lex (in getString)" "end of input, looking for \""
      | Some (#"\"",strm') => Some (StringLit (String.implode(List.rev list)), strm')
      | Some (#"\\",strm') => (* backslashed chars possible *)
          (case getc strm'
            of None => raise ERR "lex (in getString)" "unexpected end of input"
             | Some (ch,strm'') => getString strm'' (ch :: #"\\"::list)
          )
      | Some (ch,strm') =>  getString strm' (ch :: list)

fun lex strm =
    case getc strm
     of None => None
      | Some (#"{",strm') => Some (Lbrace,strm')
      | Some (#"}",strm') => Some (Rbrace,strm')
      | Some (#"[",strm') => Some (Lbrack,strm')
      | Some (#"]",strm') => Some (Rbrack,strm')
      | Some (#",",strm') => Some (Comma,strm')
      | Some (#":",strm') => Some (Colon,strm')
      | Some (#"n",strm') => getKeyword strm  (* null *)
      | Some (#"t",strm') => getKeyword strm  (* True *)
      | Some (#"f",strm') => getKeyword strm  (* False *)
      | Some (#"\"",strm') => getString strm' []
      | Some (ch,strm') =>
        if Char.isSpace ch
        then lex strm'
        else if isDigit ch orelse ch = #"-"
             then getNum strm
	           else raise ERR "lex"
		               ("unexpected character starts remaining input:\n" ^ strm)

fun lexemes ss =
  (case lex ss
    of None => []
     | Some(l,ss') => l::lexemes ss')
  handle ERR f s =>
	 (eRR_MESG ("lexemes",f^": "^s);
          []);


(* let _ = lexemes "null [ \"foo\" : \"bar\" ]" *)
(* lexemes "{ \"foo\" : 12, \"bar\" : 13  }"; *)
(* lexemes "[True,False, null, 123, -23, \"foo\"] "; *)


(* --------------------------------------------------------------------------- *)
(* Parsing *)
(* --------------------------------------------------------------------------- *)

fun pARSE_ERR s ss =
 let
     val estring = String.concat ["Json parser failed!\n   ", s
                                  ,"\n   Remaining input: ", ss, ".\n"]
 in
     raise ERR "PARSE_ERR" estring
 end

fun toList p acc = case p
                    of (LBRACK::t,ss) => (List acc::t,ss)
                    |  (h::t,ss) => toList (t,ss) (h::acc)
                    |  ([],ss) =>
                       raise pARSE_ERR "toList: empty stack when trying to build a compound" ss

fun toAList p acc = case p
                    of (LBRACE::t,ss) => (AList acc::t,ss)
                     | (j::(String s)::t,ss) => toAList (t,ss) ((s,j)::acc)
                     | (_::_::_,ss) =>
                       raise pARSE_ERR "toAList: expected string literal in key-value pair" ss
                     | ([_],ss) =>
                       raise pARSE_ERR "toAList: unexpected key-value pair structure" ss
                     | ([],ss) =>
                       raise pARSE_ERR "toAList: empty stack when trying to build an object" ss

(*---------------------------------------------------------------------------*)
(* The main parsing loop. Returns the final stack and the remaining input.   *)
(* The stack should be of length 1, and it will have a json element. The     *)
(* remaining input should be empty, or consist of whitespace.                *)
(*---------------------------------------------------------------------------*)
fun dropl f s =
    let
        val (_, s') = String.split f s
    in
        s'
    end

fun parse p =
    case p
     of (stk,ss) =>
        case lex ss
         of None => (List.rev stk, dropl Char.isSpace ss)
          | Some (NullLit,ss')     => (Null::stk,ss')
          | Some (BoolLit b,ss')   => (Boolean b::stk,ss')
          | Some (NumLit i,ss')    => (Number i::stk,ss')
          | Some (StringLit s,ss') => (String s::stk,ss')
          | Some (Lbrack,ss') => parse_list (LBRACK::stk,ss')
          | Some (Lbrace,ss') => parse_alist (LBRACE::stk,ss')
          | Some other  => raise pARSE_ERR "unexpected lexeme" ss
    and
    parse_list p = (* list --> eps | elt (, elts)* *)
    case p
     of (stk,ss) =>
            case lex ss
             of None => raise pARSE_ERR "parse_list: unexpected end of input" ss
              | Some (Rbrack,ss') => toList (stk,ss') []
              | Some other => elts (stk,ss)
    and
    parse_alist p = (* alist --> eps | strLit : val (, strLit : val)* *)
    case p
     of (stk,ss) =>
        case lex ss
         of None => raise pARSE_ERR "parse_alist: unexpected end of input" ss
          | Some (Rbrace,ss') => toAList (stk,ss') []
          | Some (StringLit _,_) => bindings (stk,ss)
          | other => raise pARSE_ERR "parse_alist: unexpected lexeme" ss
    and
    elts p =
    case p
     of (stk,ss) =>
        let val (stk',ss') = parse (stk,ss)
        in case lex ss'
            of Some (Comma,ss'') => elts (stk',ss'')
             | Some (Rbrack,ss'') => toList (stk',ss'') []
             | Some other => raise pARSE_ERR "parse_list: unexpected lexeme" ss'
             | None => raise pARSE_ERR "parse_list: unexpected end of input" ss'
        end
    and
    bindings p =
    case p
     of (stk,ss) =>
        case lex ss
         of Some (StringLit s,ss') =>
            (case lex ss'
              of Some (Colon, ss'') =>
	               let val (stk',ss3) = parse (String s::stk,ss'')
                 in case lex ss3
	                   of Some (Comma,ss4) => bindings (stk',ss4)
		                  | Some (Rbrace,ss4) => toAList (stk',ss4) []
                      | other => raise pARSE_ERR "parse_alist: unexpected lexeme" ss3
	               end
	             | other => raise pARSE_ERR
			                          "parse_alist: expect a colon after a string literal" ss'
            )
          | other => raise pARSE_ERR "parse_alist: expected a key-value pair" ss

fun parseMany p =
    let
        val (bs, ss') = parse p
    in
        if (isEmpty ss')
        then bs
        else case bs
              of [] => parseMany ([], ss')
               | [al]  => al::(parseMany ([], ss'))
               | als => List.concat [als, (parseMany ([], ss'))]
    end

(* simple tests. *)
(* val _ = parse ([], "") *)
(* val _ = print "I did not fail\n" *)
(* val _ = parse ([], "     ") *)
(* val _ = print "I also did not fail\n" *)
(* val _ = parse ([], "[1, 23, 4]"); *)
(* parse ([], "{\"foo\" : 1, \"bar\" : 2}"); *)
(* parse ([], "{\"foo\" : [1, 23, 4], \"bar\" : 2}"); *)

(*---------------------------------------------------------------------------*)
(* Wrapped-up versions ready to use on a variety of types (substrings,       *)
(* strings, and files). These return (json list * substring)                 *)
(*---------------------------------------------------------------------------*)

(* fun fromSubstring ss = parse ([], ss); *)
(* We don't have substring *)
(* val fromString = fromSubstring o Substring.full; *)

fun fromFile filename =
 let
     val istrm = TextIO.openIn filename
     val ss = TextIO.inputAll istrm
     val _ = TextIO.closeIn istrm
 in
     parse ([], ss)
 end

fun fromFileMany filename =
    let
        val istrm = TextIO.openIn filename
        val ss = TextIO.inputAll istrm
        val _ = TextIO.closeIn istrm
    in
        ((parseMany ([], ss)), "")
    end
end

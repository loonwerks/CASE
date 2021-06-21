(* Depends on: util, copland, system/crypto, am/Measurements, am/CommTypes,
   am/ServerAm*)

val am = serverAm (BString.empty) emptyNsMap

(* Examples *)

val goldenFileHash = BString.unshow "DDAF35A193617ABACC417349AE20413112E6FA4E89A97EA20A9EEEE64B55D39A2192992A274FC1A836BA3C23A3FEEBBD454D4423643CE80E2A9AC94FA54CA49F"
val goldenDirHash  = BString.unshow "7BE9FDA48F4179E611C698A73CFF09FAF72869431EFEE6EAAD14DE0CB44BBF66503F752B7A8EB17083355F3CE6EB7D2806F236B25AF96A24E22B887405C20081"

(*
The first hash test hashes the string "abc". This is the first example provided
by NIST in their document "Descriptions of SHA-256, SHA-384, and SHA-512",
which can be accessed here:
    http://csrc.nist.gov/groups/STM/cavp/documents/shs/sha256-384-512.pdf

The second hashes a file called "hashTest.txt". This contains the exact same
string (without a final newline char, despite editors really wanting to insert
one) so we can again compare against the desired result.

Expected result:
DDAF35A193617ABACC417349AE20413112E6FA4E89A97EA20A9EEEE64B55D39A2192992A274FC1A836BA3C23A3FEEBBD454D4423643CE80E2A9AC94FA54CA49F
*)

fun hashTests () =
    let val evidence  = H (BString.fromString "abc")
        val hashTest  = evToString (evalTerm am evidence (Asp Hsh))
        val hashFilev = Meas.hashFile "hashTest.txt"
        val hashFileS = BString.show hashFilev
     in print ("Hash test: "      ^ hashTest  ^ "\n\n" ^
               "Hash file test: \n" ^ hashFileS ^ "\n" ^
               (if hashFilev = goldenFileHash then "Golden Value Check:  Passed" else "Golden Value Check:  Failed") ^ "\n\n")
    end
    handle (Meas.Err s) => TextIO.print_err ("ERROR: " ^ s ^ "\n")

(*
This test hashes a directory called testDir.

Expected result(composite hash):
7BE9FDA48F4179E611C698A73CFF09FAF72869431EFEE6EAAD14DE0CB44BBF66503F752B7A8EB17083355F3CE6EB7D2806F236B25AF96A24E22B887405C20081
*)
fun hashDirTest () =
    let val hashDirv = hashDir "testDir" ""
        val hashDirS = BString.show hashDirv
     in print ("Hash directory test: \n" ^ hashDirS ^ "\n" ^
              (if hashDirv = goldenDirHash then "Golden Value Check:  Passed" else "Golden Value Check:  Failed") ^ "\n\n")
    end
    handle (Meas.Err s) => TextIO.print_err ("ERROR: " ^ s ^ "\n")




(* Just prints a nonce. It's difficult to determine the quality of a single
   random number though. At the very least, we can verify a new number is
   printed at each invocation. *)
fun nonceTest () = 
    let val rng = Random.seed (Meas.urand 32)
     in print ("Nonce test: \n"
              ^ BString.show (Random.random rng 16) ^ "\n" 
              ^ BString.show (Random.random rng 16) ^"\n\n")
    end

(*
The purpose of this function is to create a large file of random bytes, to
be analyzed by NIST's statistical test suite for CSPRNGs:
    https://www.nist.gov/publications/statistical-test-suite-random-and-pseudorandom-number-generators-cryptographic
*)
(* fun genRandFile filename len =
    let val fd = TextIO.openOut filename
        val writeRand = TextIO.output fd o ByteString.toRawString o rand
     in funpow writeRand len ();
        TextIO.closeOut fd
    end *)
(* val _ = genRandFile "rand" 5000000 *)

(* The good signature should pass the check, and the bad signature should fail *)
fun sigTest () =
    let val privGood  = BString.unshow "2E5773B2A19A2CB05FEE44650D8DC877B3D806F74C199043657C805288CD119B"
        val privBad   = BString.unshow "2E5773B2A19A2CB05FEE44650D8DC877B3D806F84C199043657C805288CD119B"
        val pub       = BString.unshow "490E2422528F14AC6A48DDB9D72CB30B8345AF2E939003BC7A33A6057F2FFB0101000000000000002DD0B7F53A560000A049D882A37F00000000000000000000"
        val msg       = BString.fromString "foo bar"
        val signGood  = Crypto.signMsg privGood msg
        val signBad   = Crypto.signMsg privBad  msg
        val checkGood = Crypto.sigCheck pub signGood msg
        val checkBad  = Crypto.sigCheck pub signBad msg
     in print ("Good Signature: \n" ^ (BString.show signGood) ^ "\n" ^
               "Signature Check: "  ^ (if checkGood then "Passed" else "Failed") ^ "\n\n" ^
               "Bad Signature: \n"  ^ (BString.show signBad) ^ "\n" ^
               "Signature Check: "  ^ (if checkBad  then "Passed" else "Failed") ^ "\n")
    end

(* Run all tests *)
fun main () = (
    hashTests ();
    hashDirTest ();
    nonceTest ();
    sigTest ()
) handle Meas.Err msg => TextIO.print_err ("Meas err: " ^ msg ^ "\n")
       | Crypto.Err msg => TextIO.print_err ("Crypto err: " ^ msg ^ "\n")
       | Word8Extra.InvalidHex => TextIO.print_err ("Invalid hex\n")
       | _ => TextIO.print_err "Fatal: unknown error\n"
val _ = main ()
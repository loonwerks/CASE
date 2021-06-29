open Ctypes
open Unsigned

open SharedDefs
open SharedFunctors
module C = CBytes

module Hacl_Spec = Hacl_Spec_bindings.Bindings(Hacl_Spec_stubs)

module EverCrypt_AEAD = EverCrypt_AEAD_bindings.Bindings(EverCrypt_AEAD_stubs)
module EverCrypt_Chacha20Poly1305 = EverCrypt_Chacha20Poly1305_bindings.Bindings(EverCrypt_Chacha20Poly1305_stubs)
module EverCrypt_Curve25519 = EverCrypt_Curve25519_bindings.Bindings(EverCrypt_Curve25519_stubs)
module EverCrypt_Hash = EverCrypt_Hash_bindings.Bindings(EverCrypt_Hash_stubs)
module EverCrypt_HMAC = EverCrypt_HMAC_bindings.Bindings(EverCrypt_HMAC_stubs)
module EverCrypt_Poly1305 = EverCrypt_Poly1305_bindings.Bindings(EverCrypt_Poly1305_stubs)
module EverCrypt_HKDF = EverCrypt_HKDF_bindings.Bindings(EverCrypt_HKDF_stubs)
module EverCrypt_DRBG = EverCrypt_DRBG_bindings.Bindings(EverCrypt_DRBG_stubs)
module EverCrypt_Ed25519 = EverCrypt_Ed25519_bindings.Bindings(EverCrypt_Ed25519_stubs)


module Error = struct
  type error_code =
    | UnsupportedAlgorithm
    | InvalidKey
    | AuthenticationFailure
    | InvalidIVLength
    | DecodeError
  type 'a result =
    | Success of 'a
    | Error of error_code
  let error n =
    let err = match n with
      | 1 -> UnsupportedAlgorithm
      | 2 -> InvalidKey
      | 3 -> AuthenticationFailure
      | 4 -> InvalidIVLength
      | 5 -> DecodeError
      | _ -> failwith "Impossible"
    in
    Error err
  let get_result r = match UInt8.to_int r with
    | 0 -> Success ()
    | n -> error n
end

module AEAD = struct
  open Error
  open Hacl_Spec
  open EverCrypt_AEAD

  type alg =
    | AES128_GCM
    | AES256_GCM
    | CHACHA20_POLY1305
  type t = alg * (everCrypt_AEAD_state_s ptr) ptr
  let key_length = function
    | AES128_GCM -> 16
    | AES256_GCM -> 32
    | CHACHA20_POLY1305 -> 32
  let tag_length = function
    | AES128_GCM
    | AES256_GCM
    | CHACHA20_POLY1305 -> 16
  let check_iv_length len = function
    | AES128_GCM
    | AES256_GCM -> len > 0
    | CHACHA20_POLY1305 -> len = 12
  let check_sizes alg iv tag =
    assert (check_iv_length (C.size iv) alg);
    assert (C.size tag = tag_length alg)
  let alg_definition = function
    | AES128_GCM -> spec_Agile_AEAD_alg_Spec_Agile_AEAD_AES128_GCM
    | AES256_GCM -> spec_Agile_AEAD_alg_Spec_Agile_AEAD_AES256_GCM
    | CHACHA20_POLY1305 -> spec_Agile_AEAD_alg_Spec_Agile_AEAD_CHACHA20_POLY1305
  let init alg key : t result =
    at_exit Gc.full_major;
    assert (C.size key = key_length alg);
    let st = allocate
        ~finalise:(fun st -> everCrypt_AEAD_free (!@ st))
        (ptr everCrypt_AEAD_state_s)
        (from_voidp everCrypt_AEAD_state_s null)
    in
    match UInt8.to_int (everCrypt_AEAD_create_in (alg_definition alg) st (C.ctypes_buf key)) with
    | 0 -> Success (alg, st)
    | n -> error n
  let encrypt (alg, st) iv ad pt ct tag : unit result =
    (* EverCrypt.AEAD.encrypt_pre *)
    check_sizes alg iv tag;
    assert (C.disjoint ct tag);
    assert (C.disjoint iv ct);
    assert (C.disjoint iv tag);
    assert (C.disjoint pt tag);
    assert (C.disjoint pt ad);
    assert (C.disjoint ad ct);
    assert (C.disjoint ad tag);
    get_result (everCrypt_AEAD_encrypt (!@st)
                  (C.ctypes_buf iv) (C.size_uint32 iv) (C.ctypes_buf ad) (C.size_uint32 ad)
                  (C.ctypes_buf pt) (C.size_uint32 pt) (C.ctypes_buf ct) (C.ctypes_buf tag))
  let decrypt (alg, st) iv ad ct tag dt : unit result =
    (* EverCrypt.AEAD.decrypt_st *)
    check_sizes alg iv tag;
    assert (C.disjoint tag dt);
    assert (C.disjoint tag ct);
    assert (C.disjoint tag ad);
    assert (C.disjoint ct ad);
    assert (C.disjoint dt ad);
    get_result (everCrypt_AEAD_decrypt (!@st)
                  (C.ctypes_buf iv) (C.size_uint32 iv) (C.ctypes_buf ad) (C.size_uint32 ad)
                  (C.ctypes_buf ct) (C.size_uint32 ct) (C.ctypes_buf tag) (C.ctypes_buf dt))
end

module Chacha20_Poly1305 : Chacha20_Poly1305 =
  Make_Chacha20_Poly1305 (struct
    (* EverCrypt already performs these runtime checks so all `reqs` attributes in
     * this file are empty since there is no need to do them here. *)
    let reqs = []
    let encrypt = EverCrypt_Chacha20Poly1305.everCrypt_Chacha20Poly1305_aead_encrypt
    let decrypt = EverCrypt_Chacha20Poly1305.everCrypt_Chacha20Poly1305_aead_decrypt
  end)

module Curve25519 : Curve25519 =
  Make_Curve25519 (struct
    let reqs = []
    let secret_to_public = EverCrypt_Curve25519.everCrypt_Curve25519_secret_to_public
    let scalarmult = EverCrypt_Curve25519.everCrypt_Curve25519_scalarmult
    let ecdh = EverCrypt_Curve25519.everCrypt_Curve25519_ecdh
  end)

module Ed25519 : EdDSA =
  Make_EdDSA (struct
  let secret_to_public = EverCrypt_Ed25519.everCrypt_Ed25519_secret_to_public
  let sign = EverCrypt_Ed25519.everCrypt_Ed25519_sign
  let verify = EverCrypt_Ed25519.everCrypt_Ed25519_verify
  let expand_keys = EverCrypt_Ed25519.everCrypt_Ed25519_expand_keys
  let sign_expanded = EverCrypt_Ed25519.everCrypt_Ed25519_sign_expanded
  end)

module Hash = struct
  open HashDefs
  open EverCrypt_Hash

  type t = alg * Z.t ref * hacl_Streaming_Functor_state_s___EverCrypt_Hash_state_s____ ptr
  let init alg =
    at_exit Gc.full_major;
    let alg_spec = alg_definition alg in
    let st = everCrypt_Hash_Incremental_create_in alg_spec in
    everCrypt_Hash_Incremental_init st;
    let incr_len = ref Z.zero in
    Gc.finalise everCrypt_Hash_Incremental_free st;
    (alg, incr_len, st)
  let update (alg, incr_len, st) data =
    check_max_input_len (C.size data);
    incr_len := Z.add !incr_len (Z.of_int (C.size data));
    assert (Z.lt !incr_len (incremental_input_len alg));
    everCrypt_Hash_Incremental_update st (C.ctypes_buf data) (C.size_uint32 data)
  let finish (alg, _, st) dst =
    assert (C.size dst = digest_len alg);
    everCrypt_Hash_Incremental_finish st (C.ctypes_buf dst)
  let hash alg dst input =
    check_max_input_len (C.size input);
    assert (C.size dst = digest_len alg);
    assert (C.disjoint dst input);
    everCrypt_Hash_hash (alg_definition alg) (C.ctypes_buf dst) (C.ctypes_buf input) (C.size_uint32 input)
end

module SHA2_224 : HashFunction =
  Make_HashFunction (struct
    let hash_alg = Some HashDefs.SHA2_224
    let hash = EverCrypt_Hash.everCrypt_Hash_hash_224
end)

module SHA2_256 : HashFunction =
  Make_HashFunction (struct
    let hash_alg = Some HashDefs.SHA2_256
    let hash = EverCrypt_Hash.everCrypt_Hash_hash_256
end)

module HMAC = struct
  open EverCrypt_HMAC
  let is_supported_alg alg = everCrypt_HMAC_is_supported_alg (HashDefs.alg_definition alg)
  let mac alg dst key data =
    (* Hacl.HMAC.compute_st *)
    assert (C.size dst = HashDefs.digest_len alg);
    assert (C.disjoint data dst);
    HashDefs.check_key_len alg (C.size key);
    HashDefs.check_key_len alg (C.size data);
    everCrypt_HMAC_compute (HashDefs.alg_definition alg) (C.ctypes_buf dst) (C.ctypes_buf key) (C.size_uint32 key) (C.ctypes_buf data) (C.size_uint32 data)
end

module HMAC_SHA2_256 : MAC =
  Make_HMAC (struct
    let hash_alg = HashDefs.SHA2_256
    let mac = EverCrypt_HMAC.everCrypt_HMAC_compute_sha2_256
end)

module HMAC_SHA2_384 : MAC =
  Make_HMAC (struct
    let hash_alg = HashDefs.SHA2_384
    let mac = EverCrypt_HMAC.everCrypt_HMAC_compute_sha2_384
end)

module HMAC_SHA2_512 : MAC =
  Make_HMAC (struct
    let hash_alg = HashDefs.SHA2_512
    let mac = EverCrypt_HMAC.everCrypt_HMAC_compute_sha2_512
end)

module Poly1305 : MAC =
  Make_Poly1305 (struct
    let reqs = []
    let mac dst data_len data key = EverCrypt_Poly1305.everCrypt_Poly1305_poly1305 dst data data_len key
end)

module HKDF = struct
  open EverCrypt_HKDF
  let expand alg okm prk info =
    (* Hacl.HKDF.expand_st *)
    assert (C.size okm <= 255 * HashDefs.digest_len alg);
    assert (C.disjoint okm prk);
    assert (HashDefs.digest_len alg <= C.size prk);
    HashDefs.(check_max_input_len (digest_len alg + block_len alg + C.size info + 1));
    HashDefs.check_key_len alg (C.size prk);
    everCrypt_HKDF_expand (HashDefs.alg_definition alg) (C.ctypes_buf okm) (C.ctypes_buf prk) (C.size_uint32 prk) (C.ctypes_buf info) (C.size_uint32 info) (C.size_uint32 okm)
  let extract alg prk salt ikm =
    (* Hacl.HKDF.extract_st *)
    assert (C.size prk = HashDefs.digest_len alg);
    assert (C.disjoint salt prk);
    assert (C.disjoint ikm prk);
    HashDefs.check_key_len alg (C.size salt);
    HashDefs.check_key_len alg (C.size ikm);
    everCrypt_HKDF_extract (HashDefs.alg_definition alg) (C.ctypes_buf prk) (C.ctypes_buf salt) (C.size_uint32 salt) (C.ctypes_buf ikm) (C.size_uint32 ikm)
end

module HKDF_SHA2_256 : HKDF =
  Make_HKDF (struct
    let hash_alg = HashDefs.SHA2_256
    let expand = EverCrypt_HKDF.everCrypt_HKDF_expand_sha2_256
    let extract = EverCrypt_HKDF.everCrypt_HKDF_extract_sha2_256
  end)

module HKDF_SHA2_384 : HKDF =
  Make_HKDF (struct
    let hash_alg = HashDefs.SHA2_384
    let expand = EverCrypt_HKDF.everCrypt_HKDF_expand_sha2_384
    let extract = EverCrypt_HKDF.everCrypt_HKDF_extract_sha2_384
  end)

module HKDF_SHA2_512 : HKDF =
  Make_HKDF (struct
    let hash_alg = HashDefs.SHA2_512
    let expand = EverCrypt_HKDF.everCrypt_HKDF_expand_sha2_512
    let extract = EverCrypt_HKDF.everCrypt_HKDF_extract_sha2_512
  end)

module DRBG = struct
  open EverCrypt_DRBG

  type t = everCrypt_DRBG_state_s ptr
  let instantiate ?(personalization_string=Bytes.empty) alg =
    if HMAC.is_supported_alg alg then
      let st = everCrypt_DRBG_create (HashDefs.alg_definition alg) in
      if everCrypt_DRBG_instantiate st (C.ctypes_buf personalization_string) (C.size_uint32 personalization_string) then
        Some st
      else
        None
    else
      None
  let reseed ?(additional_input=Bytes.empty) st =
    everCrypt_DRBG_reseed st (C.ctypes_buf additional_input) (C.size_uint32 additional_input)
  let generate ?(additional_input=Bytes.empty) st output =
    (* EverCrypt.DRBG.generate_st *)
    assert (C.disjoint output additional_input);
    everCrypt_DRBG_generate (C.ctypes_buf output) st (C.size_uint32 output) (C.ctypes_buf additional_input) (C.size_uint32 additional_input)
  let uninstantiate st =
    everCrypt_DRBG_uninstantiate st
end

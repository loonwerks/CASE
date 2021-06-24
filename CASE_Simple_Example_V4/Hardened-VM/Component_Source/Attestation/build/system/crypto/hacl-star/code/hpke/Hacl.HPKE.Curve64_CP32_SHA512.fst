module Hacl.HPKE.Curve64_CP32_SHA512

open Hacl.Meta.HPKE

module IDH = Hacl.HPKE.Interface.DH
module IHK = Hacl.HPKE.Interface.HKDF
module IHash = Hacl.HPKE.Interface.Hash
module IAEAD = Hacl.HPKE.Interface.AEAD

friend Hacl.Meta.HPKE

#set-options "--fuel 0 --ifuel 0"

let setupBaseI = hpke_setupBaseI_higher #cs vale_p IHK.hkdf_expand512 IHK.hkdf_extract512 IHash.hash_sha512 IDH.secret_to_public_c64 IDH.dh_c64

let setupBaseR = hpke_setupBaseR_higher #cs vale_p IHK.hkdf_expand512 IHK.hkdf_extract512 IHash.hash_sha512 IDH.dh_c64 IDH.secret_to_public_c64

let sealBase = hpke_sealBase_higher #cs vale_p setupBaseI IAEAD.aead_encrypt_cp32

let openBase = hpke_openBase_higher #cs vale_p setupBaseR IAEAD.aead_decrypt_cp32

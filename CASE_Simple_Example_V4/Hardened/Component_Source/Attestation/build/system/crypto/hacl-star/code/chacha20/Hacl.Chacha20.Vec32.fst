module Hacl.Chacha20.Vec32

open Hacl.Meta.Chacha20.Vec

[@CInline]
private
let double_round_32 = Hacl.Impl.Chacha20.Core32xN.double_round #1
[@CInline]
private
let chacha20_core_32 = vec_chacha20_core_higher #1 True double_round_32
[@CInline]
private
let chacha20_init_32 = Hacl.Impl.Chacha20.Vec.chacha20_init #1

let chacha20_encrypt_32 = vec_chacha20_encrypt_higher #1 True chacha20_init_32 chacha20_core_32
let chacha20_decrypt_32 = vec_chacha20_decrypt_higher #1 True chacha20_init_32 chacha20_core_32

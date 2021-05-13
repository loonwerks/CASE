// #Sireum

package HAMR

import org.sireum._
import org.sireum.S8._
import org.sireum.S16._
import org.sireum.S32._
import org.sireum.S64._
import org.sireum.U8._
import org.sireum.U16._
import org.sireum.U32._
import org.sireum.U64._

// This file was auto-generated.  Do not edit

object Base_Types {

  type Boolean = B

  type Integer = Z

  type Integer_8 = S8
  type Integer_16 = S16
  type Integer_32 = S32
  type Integer_64 = S64

  type Unsigned_8 = U8
  type Unsigned_16 = U16
  type Unsigned_32 = U32
  type Unsigned_64 = U64

  // TODO: Base_Types::Natural

  type Float = R
  type Float_32 = F32
  type Float_64 = F64

  type Character = C
  type String = org.sireum.String

  type Bits = org.sireum.ISZ[B]

  @datatype class Boolean_Payload(value: B) extends art.DataContent

  @datatype class Integer_Payload(value: Z) extends art.DataContent

  @datatype class Integer_8_Payload(value: S8) extends art.DataContent
  @datatype class Integer_16_Payload(value: S16) extends art.DataContent
  @datatype class Integer_32_Payload(value: S32) extends art.DataContent
  @datatype class Integer_64_Payload(value: S64) extends art.DataContent

  @datatype class Unsigned_8_Payload(value: U8) extends art.DataContent
  @datatype class Unsigned_16_Payload(value: U16) extends art.DataContent
  @datatype class Unsigned_32_Payload(value: U32) extends art.DataContent
  @datatype class Unsigned_64_Payload(value: U64) extends art.DataContent

  @datatype class Float_Payload(value: R) extends art.DataContent
  @datatype class Float_32_Payload(value: F32) extends art.DataContent
  @datatype class Float_64_Payload(value: F64) extends art.DataContent

  @datatype class Character_Payload(value: C) extends art.DataContent
  @datatype class String_Payload(value: String) extends art.DataContent

  @datatype class Bits_Payload(value: ISZ[B]) extends art.DataContent

  def Boolean_example(): Boolean = { return F }

  def Integer_example(): Integer = { return z"0" }

  def Integer_8_example(): Integer_8 = { return s8"0" }
  def Integer_16_example(): Integer_16 = { return s16"0" }
  def Integer_32_example(): Integer_32 = { return s32"0" }
  def Integer_64_example(): Integer_64 = { return s64"0" }

  def Unsigned_8_example(): Unsigned_8 = { return u8"0" }
  def Unsigned_16_example(): Unsigned_16 = { return u16"0" }
  def Unsigned_32_example(): Unsigned_32 = { return u32"0" }
  def Unsigned_64_example(): Unsigned_64 = { return u64"0" }

  def Float_example(): Float = { return r"0" }
  def Float_32_example(): Float_32 = { return f32"0" }
  def Float_64_example(): Float_64 = { return f64"0" }

  def Character_example(): Character = { return ' ' }
  def String_example(): String = { return "" }

  def Bits_example(): Bits = { return ISZ() }
}
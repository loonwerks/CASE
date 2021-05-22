#include <RadioDriver_thr_Impl_Impl_api.h>

// This file was auto-generated.  Do not edit

Unit api_send_trusted_ids_out__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  IS_C4F575 value) {

  hamr_RadioDriver_RadioDriver_thr_Impl_Bridge_Api_settrusted_ids_out_(
    hamr_RadioDriver_RadioDriver_thr_Impl_Impl_api_(this),
    value);
}

Unit api_send_trusted_ids_out__alt__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray) {

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_RadioDriver_RadioDriver_thr_Impl_Bridge_Api_settrusted_ids_out_(
    hamr_RadioDriver_RadioDriver_thr_Impl_Impl_api_(this),
    &t_0);
}

Unit api_send_automation_request_out__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  IS_C4F575 value) {

  hamr_RadioDriver_RadioDriver_thr_Impl_Bridge_Api_sendautomation_request_out_(
    hamr_RadioDriver_RadioDriver_thr_Impl_Impl_api_(this),
    value);
}

Unit api_send_automation_request_out__alt__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray) {

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_RadioDriver_RadioDriver_thr_Impl_Bridge_Api_sendautomation_request_out_(
    hamr_RadioDriver_RadioDriver_thr_Impl_Impl_api_(this),
    &t_0);
}

Unit api_send_operating_region_out__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  IS_C4F575 value) {

  hamr_RadioDriver_RadioDriver_thr_Impl_Bridge_Api_sendoperating_region_out_(
    hamr_RadioDriver_RadioDriver_thr_Impl_Impl_api_(this),
    value);
}

Unit api_send_operating_region_out__alt__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray) {

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_RadioDriver_RadioDriver_thr_Impl_Bridge_Api_sendoperating_region_out_(
    hamr_RadioDriver_RadioDriver_thr_Impl_Impl_api_(this),
    &t_0);
}

Unit api_send_line_search_task_out__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  IS_C4F575 value) {

  hamr_RadioDriver_RadioDriver_thr_Impl_Bridge_Api_sendline_search_task_out_(
    hamr_RadioDriver_RadioDriver_thr_Impl_Impl_api_(this),
    value);
}

Unit api_send_line_search_task_out__alt__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray) {

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    memcpy(&t_0.value, byteArray, (numBits / 8) + 1);
  }

  hamr_RadioDriver_RadioDriver_thr_Impl_Bridge_Api_sendline_search_task_out_(
    hamr_RadioDriver_RadioDriver_thr_Impl_Impl_api_(this),
    &t_0);
}

Unit api_logInfo__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  String str) {
  hamr_RadioDriver_RadioDriver_thr_Impl_Bridge_Api_logInfo_(
    SF
    hamr_RadioDriver_RadioDriver_thr_Impl_Impl_api_(this),
    str);
}

Unit api_logDebug__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  String str) {
  hamr_RadioDriver_RadioDriver_thr_Impl_Bridge_Api_logDebug_(
    SF
    hamr_RadioDriver_RadioDriver_thr_Impl_Impl_api_(this),
    str);
}

Unit api_logError__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  String str) {
  hamr_RadioDriver_RadioDriver_thr_Impl_Bridge_Api_logError_(
    SF
    hamr_RadioDriver_RadioDriver_thr_Impl_Impl_api_(this),
    str);
}

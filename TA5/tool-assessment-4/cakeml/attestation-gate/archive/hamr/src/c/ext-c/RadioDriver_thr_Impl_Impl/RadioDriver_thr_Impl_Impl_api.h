#ifndef RADIODRIVER_THR_IMPL_IMPL_API_H
#define RADIODRIVER_THR_IMPL_IMPL_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

Unit api_send_trusted_ids_out__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_trusted_ids_out__alt__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_send_automation_request_out__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_automation_request_out__alt__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_send_operating_region_out__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_operating_region_out__alt__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_send_line_search_task_out__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  IS_C4F575 value);

Unit api_send_line_search_task_out__alt__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  Z numBits,
  U8 *byteArray);

Unit api_logInfo__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  String str);

Unit api_logDebug__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  String str);

Unit api_logError__hamr_RadioDriver_RadioDriver_thr_Impl_Impl(
  hamr_RadioDriver_RadioDriver_thr_Impl_Impl this,
  String str);

#endif

#include <UxAS_thr_Impl_Impl_api.h>

// This file was auto-generated.  Do not edit

B api_get_AutomationRequest__hamr_SysContext_UxAS_thr_Impl_Impl(
  hamr_SysContext_UxAS_thr_Impl_Impl this,
  IS_C4F575 value){
  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);
  hamr_SysContext_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_(
    SF
    (Option_30119F) &t_0,
    hamr_SysContext_UxAS_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    Type_assign(value, &t_0.Some_8D03B1.value, sizeof(struct IS_C4F575));
    return T;
  } else {
    return F;
  }
}

B api_get_AutomationRequest__alt__hamr_SysContext_UxAS_thr_Impl_Impl(
  hamr_SysContext_UxAS_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray){
  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);
  hamr_SysContext_UxAS_thr_Impl_Bridge_Api_getAutomationRequest_(
    SF
    (Option_30119F) &t_0,
    hamr_SysContext_UxAS_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return T;
  } else {
    return F;
  }
}

B api_get_OperatingRegion__hamr_SysContext_UxAS_thr_Impl_Impl(
  hamr_SysContext_UxAS_thr_Impl_Impl this,
  IS_C4F575 value){
  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);
  hamr_SysContext_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_(
    SF
    (Option_30119F) &t_0,
    hamr_SysContext_UxAS_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    Type_assign(value, &t_0.Some_8D03B1.value, sizeof(struct IS_C4F575));
    return T;
  } else {
    return F;
  }
}

B api_get_OperatingRegion__alt__hamr_SysContext_UxAS_thr_Impl_Impl(
  hamr_SysContext_UxAS_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray){
  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);
  hamr_SysContext_UxAS_thr_Impl_Bridge_Api_getOperatingRegion_(
    SF
    (Option_30119F) &t_0,
    hamr_SysContext_UxAS_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return T;
  } else {
    return F;
  }
}

B api_get_LineSearchTask__hamr_SysContext_UxAS_thr_Impl_Impl(
  hamr_SysContext_UxAS_thr_Impl_Impl this,
  IS_C4F575 value){
  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);
  hamr_SysContext_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_(
    SF
    (Option_30119F) &t_0,
    hamr_SysContext_UxAS_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    Type_assign(value, &t_0.Some_8D03B1.value, sizeof(struct IS_C4F575));
    return T;
  } else {
    return F;
  }
}

B api_get_LineSearchTask__alt__hamr_SysContext_UxAS_thr_Impl_Impl(
  hamr_SysContext_UxAS_thr_Impl_Impl this,
  Z *numBits,
  U8 *byteArray){
  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);
  hamr_SysContext_UxAS_thr_Impl_Bridge_Api_getLineSearchTask_(
    SF
    (Option_30119F) &t_0,
    hamr_SysContext_UxAS_thr_Impl_Impl_api_(this));

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    memcpy(byteArray, &t_0.Some_8D03B1.value.value, (*numBits / 8) + 1);
    return T;
  } else {
    return F;
  }
}

Unit api_logInfo__hamr_SysContext_UxAS_thr_Impl_Impl(
  hamr_SysContext_UxAS_thr_Impl_Impl this,
  String str) {
  hamr_SysContext_UxAS_thr_Impl_Bridge_Api_logInfo_(
    SF
    hamr_SysContext_UxAS_thr_Impl_Impl_api_(this),
    str);
}

Unit api_logDebug__hamr_SysContext_UxAS_thr_Impl_Impl(
  hamr_SysContext_UxAS_thr_Impl_Impl this,
  String str) {
  hamr_SysContext_UxAS_thr_Impl_Bridge_Api_logDebug_(
    SF
    hamr_SysContext_UxAS_thr_Impl_Impl_api_(this),
    str);
}

Unit api_logError__hamr_SysContext_UxAS_thr_Impl_Impl(
  hamr_SysContext_UxAS_thr_Impl_Impl this,
  String str) {
  hamr_SysContext_UxAS_thr_Impl_Bridge_Api_logError_(
    SF
    hamr_SysContext_UxAS_thr_Impl_Impl_api_(this),
    str);
}

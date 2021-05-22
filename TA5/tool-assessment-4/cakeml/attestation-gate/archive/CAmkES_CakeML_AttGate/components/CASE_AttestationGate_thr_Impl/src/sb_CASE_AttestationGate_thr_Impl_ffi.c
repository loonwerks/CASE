#include <all.h>

extern art_Bridge_EntryPoints hamr_top_Impl_Instance_am_gate_CASE_AttestationGate_CASE_AttestationGate_entryPoints();

hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints get_EntryPoints() {
  art_Bridge_EntryPoints entryPoints = hamr_top_Impl_Instance_am_gate_CASE_AttestationGate_CASE_AttestationGate_entryPoints(SF_LAST);
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints this = (hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints) entryPoints;
  return this;
}

extern Unit api_logInfo__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl, String);

Unit checkAndReportBufferOverrun(long bytesWritten, long bufferSizeBytes) {
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints entryPoints = get_EntryPoints();
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl this = hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_component_(entryPoints);

  DeclNewString(_msg);
  String msg = (String)&_msg;
  String__append(msg, string("Wrote too many bytes to buffer"));

  if (bytesWritten > bufferSizeBytes) {
    api_logInfo__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(this, msg);
  }
}

/**
 *  Unit hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_compute_
 *   1) recieveInputs
 *   2) timeTriggered
 *   3) sendOutputs 
 */

extern Unit art_Art_receiveInput(STACK_FRAME IS_82ABD8, IS_82ABD8);

Unit ffiapi_recieveInput(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints this = get_EntryPoints();
  art_Art_receiveInput(SF (IS_82ABD8) hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_dataInPortIds_(this));
}

extern Unit art_Art_sendOutput(STACK_FRAME IS_82ABD8, IS_82ABD8);

Unit ffiapi_sendOutput(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints this = get_EntryPoints();
  art_Art_sendOutput(SF (IS_82ABD8) hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
}

/**
 * API for get and send
 */

Unit dumpBuffer(hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl this, Z numBits, U8* buffer) {
  DeclNewString(_msg);
  String msg = (String)&_msg;
  String__append(msg, string("["));
  Z end = ((numBits / 8) > 80)? 80 : (numBits / 8);
  for (int i = 0 ; i < end ; ++i) {
    U8_string_(msg, buffer[i]);
  }
  String__append(msg, string("]"));
  api_logInfo__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(this, msg);
}

extern B api_get_trusted_ids__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl,
  Z *,
  U8 *);

Unit ffiapi_get_trusted_ids(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints entryPoints = get_EntryPoints();
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl this = hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_component_(entryPoints);

  Z numBits = 0;
  api_get_trusted_ids__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(this, &numBits, (U8 *) output);
  checkAndReportBufferOverrun(numBits / 8, outputSizeBytes);
  // dumpBuffer(this, numBits, output);
}

extern B api_get_AutomationRequest_in__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl,
  Z *,
  U8 *);

Unit ffiapi_get_AutomationRequest_in(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints entryPoints = get_EntryPoints();
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl this = hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_component_(entryPoints);
  
  Z numBits = 0;
  output[0] = api_get_AutomationRequest_in__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(this, &numBits, (U8 *)(output + 1));
  checkAndReportBufferOverrun(numBits / 8, (outputSizeBytes-1));
  // dumpBuffer(this, numBits, output);
}

extern Unit api_send_AutomationRequest_out__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl,
  Z,
  U8 *);

Unit ffiapi_send_AutomationRequest_out(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints entryPoints = get_EntryPoints();
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl this = hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_component_(entryPoints);
  
  api_send_AutomationRequest_out__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(this, parameterSizeBytes*8, (U8 *)parameter);
}

extern B api_get_OperatingRegion_in__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl,
  Z *,
  U8 *);

Unit ffiapi_get_OperatingRegion_in(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints entryPoints = get_EntryPoints();
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl this = hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_component_(entryPoints);
  
  Z numBits = 0;
  output[0] = api_get_OperatingRegion_in__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(this, &numBits, (U8 *)(output + 1));
  checkAndReportBufferOverrun(numBits / 8, (outputSizeBytes-1));
  // dumpBuffer(this, numBits, output);
}

extern Unit api_send_OperatingRegion_out__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl,
  Z,
  U8 *);

Unit ffiapi_send_OperatingRegion_out(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints entryPoints = get_EntryPoints();
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl this = hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_component_(entryPoints);
  
  DeclNewString(_msg);
  String msg = (String)&_msg;
  String__append(msg, string("Send OperatingRegion_out"));
  api_send_OperatingRegion_out__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(this, parameterSizeBytes*8, (U8 *)parameter);
}

extern B api_get_LineSearchTask_in__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl,
  Z *,
  U8 *);

Unit ffiapi_get_LineSearchTask_in(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints entryPoints = get_EntryPoints();
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl this = hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_component_(entryPoints);
  
  Z numBits = 0;
  output[0] = api_get_LineSearchTask_in__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(this, &numBits, (U8 *)(output + 1));
  checkAndReportBufferOverrun(numBits / 8, (outputSizeBytes-1));
  // dumpBuffer(this, numBits, output);
}

extern Unit api_send_LineSearchTask_out__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl,
  Z,
  U8 *);

Unit ffiapi_send_LineSearchTask_out(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints entryPoints = get_EntryPoints();
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl this = hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_component_(entryPoints);
  
  api_send_LineSearchTask_out__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(this, parameterSizeBytes*8, (U8 *)parameter);
}

/**
 * API for Logging
 */

Unit ffiapi_logInfo(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints entryPoints = get_EntryPoints();
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl this = hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Bridge_EntryPoints_component_(entryPoints);

  DeclNewString(_str);
  String str = (String)&_str;
  str->size = parameterSizeBytes;
  memcpy(str->value, parameter, parameterSizeBytes);
  
  api_logInfo__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(this, str);
}

/**
 * PACER
 */

extern Unit sb_pacer_notification_wait();

void ffisb_pacer_notification_wait(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  sb_pacer_notification_wait();
  output[0] = 1;
}

/**
 * Required by the FFI framework
 */
 
void ffiwrite (unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes){
}

void cml_exit(int arg) {
  #ifdef DEBUG_FFI
  {
    fprintf(stderr,"GCNum: %d, GCTime(us): %ld\n",numGC,microsecs);
  }
  #endif
  exit(arg);
}

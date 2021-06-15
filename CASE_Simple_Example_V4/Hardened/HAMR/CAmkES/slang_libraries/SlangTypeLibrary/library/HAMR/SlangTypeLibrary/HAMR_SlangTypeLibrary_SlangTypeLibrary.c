#include <all.h>

Unit HAMR_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "SlangTypeLibrary.scala", "HAMR.SlangTypeLibrary.SlangTypeLibrary.main", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(13);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string(""));
    art_DataContent_string_(SF (String) &t_0, a);
    String_string_(SF (String) &t_0, string(""));
    String_cprint(((String) &t_0), T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Z HAMR_SlangTypeLibrary_SlangTypeLibrary_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "SlangTypeLibrary.scala", "HAMR.SlangTypeLibrary.SlangTypeLibrary", "main", 0);

  sfUpdateLoc(15);
  {
    DeclNewIS_C4F575(t_1);
    HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_1);
    DeclNewHAMR_Base_Types_Bits_Payload(t_0);
    HAMR_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) ((IS_C4F575) &t_1));
    HAMR_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_0));
  }

  sfUpdateLoc(16);
  {
    DeclNewart_Empty(t_2);
    art_Empty_apply(SF &t_2);
    HAMR_SlangTypeLibrary_SlangTypeLibrary_main_printDataContent(SF (art_DataContent) (&t_2));
  }
  return Z_C(0);
}
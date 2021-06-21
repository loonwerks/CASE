#include <all.h>

int main(int argc, char *argv[]) {
  DeclNewStackFrame(NULL, "Filter.scala", "HAMR_Simple_V4.Filter_Impl_SW_Filter_Filter.Filter", "<App>", 0);

  DeclNewIS_948B60(t_args);

  int size = argc - 1;
  if (size > MaxIS_948B60) {
    sfAbort("Argument list too long.");
  }

  for (int i = 0; i < size; i++) {
    char *arg = argv[i + 1];
    size_t argSize = strlen(arg);
    if (argSize > MaxString) {
      sfAbort("Argument too long.");
    }
    IS_948B60_at(&t_args, i)->type = TString;
    IS_948B60_at(&t_args, i)->size = (Z) argSize;
    memcpy(IS_948B60_at(&t_args, i)->value, arg, argSize + 1);
  }

  t_args.size = (int8_t) size;

  return (int) HAMR_Simple_V4_Filter_Impl_SW_Filter_Filter_Filter_main(SF &t_args);
}
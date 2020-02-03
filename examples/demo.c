#include "debug_printf.h"

void demoAllPrintf() {
  printfTrace("Hello world!");
  int x = 10, y = 20;
  printfDebug("x = %d, y = %d", x, y);
  printfInfo("Using version %s", debug_printf_version);
  printfWarning("x and y variables are declared but not used!");
  if (y >= 15) {
    printfError("y is expected to be less than 15");
  }
}
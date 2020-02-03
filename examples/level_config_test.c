#include "debug_printf.h"
#include "demo.h"

#include <stdlib.h>
int main() {
  for (int i = ALL; i <= NONE; ++i) {
    printf("Test case %d. level = %s\n", i, debug_printf_level_names[i]);
    setenv(debug_printf_level_config_name, debug_printf_level_names[i], 1);
    demoAllPrintf();
  }
  return 0;
}
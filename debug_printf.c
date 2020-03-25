/*
 * Copyright (c) 2020 bangoc
 *
 */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "debug_printf.h"

const char *debug_printf_version = "1.0.0";
const char *debug_printf_level_config_name = "DEBUG_PRINTF_LEVEL";
const char *debug_printf_level_names[] = {"ALL",     "TRACE", "DEBUG", "INFO",
                                          "WARNING", "ERROR", "NONE"};

static struct { int level; } config;

static void readConfig() {
  // read config for log level
  char *debug_printf_level = getenv(debug_printf_level_config_name);

  config.level = ALL;
  if (debug_printf_level != NULL) {
    for (int i = 0; i <= NONE; ++i) {
      if (strcmp(debug_printf_level_names[i], debug_printf_level) == 0) {
        config.level = i;
        break;
      }
    }
  }
}

void printfLog(int level, const char *file, int line, const char *fmt, ...) {
  readConfig();

  if (level < config.level) {
    return;
  }

  const char *filename = (strrchr(file, '/') ? strrchr(file, '/') + 1 : file);

  time_t t = time(NULL);
  struct tm *lt = localtime(&t);
  va_list args;
  char buffer[16];
  buffer[strftime(buffer, sizeof(buffer), "%H:%M:%S", lt)] = '\0';
  fprintf(stdout, "%s %-8s %s:%d: ", buffer, debug_printf_level_names[level],
          filename, line);

  va_start(args, fmt);
  vfprintf(stdout, fmt, args);
  va_end(args);
  fprintf(stdout, "\n");
  fflush(stdout);
}

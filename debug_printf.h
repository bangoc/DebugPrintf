/**
 * Copyright (c) 2020 bangoc
 *
 */

#ifndef DEBUG_PRINTF_H
#define DEBUG_PRINTF_H

#include <stdarg.h>
#include <stdio.h>

extern const char *debug_printf_version;
extern const char *debug_printf_level_config_name;
extern const char *debug_printf_level_names[];

enum { ALL, TRACE, DEBUG, INFO, WARNING, ERROR, NONE };

#define printfTrace(...) printfLog(TRACE, __FILE__, __LINE__, __VA_ARGS__)
#define printfDebug(...) printfLog(DEBUG, __FILE__, __LINE__, __VA_ARGS__)
#define printfInfo(...) printfLog(INFO, __FILE__, __LINE__, __VA_ARGS__)
#define printfWarning(...) printfLog(WARNING, __FILE__, __LINE__, __VA_ARGS__)
#define printfError(...) printfLog(ERROR, __FILE__, __LINE__, __VA_ARGS__)

void printfLog(int level, const char *file, int line, const char *fmt, ...);

#endif // DEBUG_PRINTF_H

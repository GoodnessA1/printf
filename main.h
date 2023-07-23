#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int print_string(va_list types, char buffer[],                     int flags, int width, int precision, int size)
int print_binary(va_list types, char buffer[],                     int flags, int width, int precision, int size)
#endif

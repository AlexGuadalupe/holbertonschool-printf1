#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>


int _printf(const char *format, ...);
int printf_letter(va_list args, char format);
int printf_digits(va_list args, char *format);
int print_parameter(va_list args, char specifier);


#endif

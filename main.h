#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int _printf(const char *format, ...);
unsigned int print_parameters(char specifier, va_list args);
int printf_letters(char *str);
int print_digits(va_list args);
int process_octal(va_list args);
int process_pointer(va_list args);
int process_hexadecimal(va_list args);
int process_decimal(va_list args);
int manejar_entero_sin_signo(va_list args);
int handle_format_specifier(va_list args, char specifier);
int parse_format(const char *format, va_list args);



#endif

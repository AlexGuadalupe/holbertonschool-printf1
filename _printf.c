#include "main.h"
#include "printf.h"

/*
 * _printf- Program
 * @Format: string be formatted
 * Return: count
*/

int _printf(const char *format, ...) {
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            if (*format == '\0') {
                break;
            }
            count += print_parameter(args, *format);
        } else {
            putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);

    return count;
}

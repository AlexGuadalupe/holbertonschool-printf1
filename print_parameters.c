#include "main.h"

/*
 * print_parameter - Functions that prints the
parameter according to the format specifier
 * @args: arguments
 * @specifier: format specifier
 * Return: Number of chars to be printed
*/
int print_parameter(va_list args, char specifier) {
    switch (specifier) {
        case 's': {
            char *str = va_arg(args, char *);
            int count = 0;
            while (*str != '\0') {
                putchar(*str);
                str++;
                count++;
            }
            return count;
        }
        case 'c': {
            char ch = va_arg(args, int);
            putchar(ch);
            return 1;
        }
        case 'd': {
            int num = va_arg(args, int);
            printf("%d", num);
            return 1;
        }
        default:
            return 0;
    }
}

#include "main.h"
/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
int printed_chars = 0;
va_list args;
	va_start(args, format);
while (*format != '\0')
{

    if (*format == '%')
	{
    format++;
	printed_chars += print_parameters (*format, args);
    }
else
{
    printed_chars += putchar(*format);
}
    format++;
}
	va_end(args);

	return (printed_chars);

}

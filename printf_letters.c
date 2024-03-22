#include "main.h"
/**
 * printf_letters - Print a string with putchar.
 * @str: The string to print.
 *
 * Return: The number of characters printed.
 */
int printf_letters(char *str)
{
	int count = 0;

	while (*str)
	{
		putchar(*str);
		str++;
		count++;
	}

	return (count);
}

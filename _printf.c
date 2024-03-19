#include "main.h"
#include <stdio.h>


/** 
* _printf: printf
* @char: variable tu print.
*/

int _printf(const char *format, ...)
{
va_list args;
unsigned int count = 0;
va_start(args, *format);

while(*format)
{
	if(*format == '%')
	{
		format++;

		if(*format == 'c')
        {
            putchar(va_arg(args, int));
            count++;
        }
        if(*format =='s')
        {
            char *str = va_arg(args, char *);
            if(str == NULL)
				{
                count+= printf("(null)");
				}
			else{
			while(*str)
            {
                putchar(*str);
                count++;
                str++;
            }
}
        }
        if(*format == 'd')
        {
            putchar(va_arg(args, int));
            count++;
        }
        else if(*format == 'i')
        {
            putchar(va_arg(args, int));
            count++;
        }

putchar(*format++);
count++;

}
}
va_end(args);
return count;
}

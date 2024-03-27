#include "main.h"

/**
 * print_string- print a string using _putchar
 * @arg: argument list
 */

void print_string(va_list arg)
{
    char *str; 
    str = va_arg(arg, char*);

    while (str != '\0') 
    {
	_putchar(va_arg(str, char *));
    str++;
    }
}

#include "main.h"

/**
 * print_char- print a character using _putchar
 * @arg: argument list
 */

void print_char(va_list arg)
{
	_putchar(va_arg(arg, int));  
}

#include "main.h"

/**
 * print_int_10 - print a integer in base 10 using _putchar
 * @arg: argument list
 */

void print_int_10(va_list arg)
{

	int i;
	char dec = va_arg(arg, int);

	_itoa(num, dec, 10);

	for (i = 0; dec[i] != '\0'; i++) 
	{
		putchar(va_arg(arg, int));
	}
}

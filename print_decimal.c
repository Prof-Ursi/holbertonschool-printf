#include "main.h"

/**
 * print_decimal- print a decimal using _putchar
 * @arg: argument list
 */

void print_decimal(va_list arg)
{
	int i;
	char dec = va_arg(arg, int);

	_itoa(num, dec, 10);

	for (i = 0; dec[i] != '\0'; i++) 
	{
		putchar(va_arg(arg, int));
	}
}

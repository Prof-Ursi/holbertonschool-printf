#include "main.h"

/**
 * print_decimal- print a decimal using _putchar
 * @arg: argument list
 */

void print_decimal(va_list arg)
{
	int i;
	int num = va_arg(arg, int);
	char *str = _itoa(num);

	for (i = 0; str[i] != '\0'; i++) 
	{
		putchar(num);
	}
}

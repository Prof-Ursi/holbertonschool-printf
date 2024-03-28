#include "main.h"

/**
 * print_percentage - print a percentage using _putchar
 * @arg: argument list
 * Return : 1
 */


int print_percentage(va_list arg)
{
	(void)arg;
	write(1, "%", 1);
	return (1);
}

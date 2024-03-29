#include "main.h"

/**
 * print_decimal - print a decimal using _putchar
 * @arg: argument list
 * Return: the decimal's lenght
 */

int print_decimal(va_list arg)
{
	int value;
	unsigned int absolute_value, a, length = 0, counter = 1;

	value = va_arg(arg, int);

	if (value < 0)
	{
		length += _putchar('-');
		absolute_value = -value;
	}
	else
		absolute_value = value;

	a = absolute_value;
	while (a > 9)
	{
		a /= 10;
		counter *= 10;
	}
	while (counter >= 1)
	{
		length += _putchar(((absolute_value / counter) % 10) + '0');
		counter /= 10;
	}
	return (length);
}

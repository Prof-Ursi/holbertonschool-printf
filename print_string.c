#include "main.h"

/**
 * print_string - print a string using _putchar
 * @arg: argument list
 * Return: the number of characters
 */

int print_string(va_list arg)
{
	int i = 0;
	char *str;

	str = va_arg(arg, char*);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	return (strlen(str));
}

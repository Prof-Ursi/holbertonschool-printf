#include "main.h"

/**
 * print_string - print a string
 * @args: string to print
 * Return: length of the printed string
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int length = 0;

	if (s == NULL)
	{
		_printf("%s", "(null)");
		return (length + 6);
	}
	write(1, s, strlen(s));
	length += strlen(s);
	return (length);
}

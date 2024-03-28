#include "main.h"

/**
 * _printf - function that print anything
 * @format:list of types of arguments passed to the function
 * Return: the int/char/string passed to the function
*/

int _printf(const char *format, ...)
{
	va_list arg_list;
	int i = 0;
	int j;
	int f = 0;

	type_t format_list[] = {
		{'c', print_char},
		{'i', print_decimal},
		{'d', print_decimal},
		{'s', print_string},
		{'%', print_percentage}
	};
	va_start(arg_list, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		if (format[i] == '%')
		{
			while (j < 4)
			{
				if (format[i + 1] == format_list[j].type)
				{
					f += format_list[j].f(arg_list);
					i++;
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(arg_list);
	_putchar('\n');
	return (f);
}

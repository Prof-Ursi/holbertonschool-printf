#include "main.h"

/**
 * _printf - function that print anything
 * @format:list of types of arguments passed to the function
 * Return: the int/char/string passed to the function
*/

int _printf(const char *format, ...)
{
	va_list arg_list;
	int i = 0, j, length = 0;
	type_t format_list[] = {
		{'c', print_char}, {'i', print_decimal}, {'d', print_decimal},
		{'s', print_string}, {'%', print_percentage}, {NULL, NULL}};

	if (format == NULL || (*format == '%' && !*(format + 1)))
		return (-1);
	va_start(arg_list, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			for (j = 0; j < 5; j++)
			{
				if (format[i + 1] == format_list[j].type)
				{
					length += format_list[j].f(arg_list);
					i = i + 2;
					break;
				}
			}
			if (j == 5)
			{
				length += _putchar(format[i++]);
			}
		}
		else
		{
			length += _putchar(format[i++]);
		}
	}
	va_end(arg_list);
	return (length);
}

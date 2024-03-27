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
	void (*f)(va_list);
	char *separator = "";

	type_t format_list[] = {
		{'c', print_char},
		{'i', print_decimal},
		{'d', print_decimal},
		{'s', print_string}
	};

	va_start(arg_list, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == format_list[j].type)
			{
				while (*separator != '\0')
					{
					putchar(*separator);
					separator++;
					}
				f = format_list[j].f;
				separator = ", ";
				(*f)(arg_list);
				break;
			}
			j++;
		}
		i++;
	}

	va_end(arg_list);
	_putchar("\n");
}

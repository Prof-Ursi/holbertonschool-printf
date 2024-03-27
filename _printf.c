#include "main.h"


int _printf(const char *format, ...);
{
	int length = 0;
	int i = 0, j;
	va_list args;
	FT array[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"%", print_percent},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && *format)
	{
		i = 0;
		if (*format == '%')
		{
			while (array[i].identifier)
			{
				if (*array[i].identifier == *(format + 1))
				{
					j = array[i].function(args, length);
					length = j;
					break;
				}
				i++;
			}
			if (array[i].identifier)	
				format += strlen(array[i].identifier) + 1;
		}
		write (1, format, 1);
		length++;
		format++;
	}
	va_end(args);
	return (length);
}

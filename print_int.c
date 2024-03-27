#include "main.h"

int print_int(va_list args, int length)
{
	char *s;
	int int_to_print = va_arg(args, int);
	int count;
	int lenght_int = 0;
	
	if (int_to_print < 0)
		write(1, "-", 1);
		length++;
		count = -int_to_print;
	while (count > 0)
	{
		count /= 10;
		lenght_int++;
	}
	s = malloc(sizeof(char) * (lenght_int + 1));
	if (s == NULL)
		return (NULL);
	s[lenght_int] = '\0';
	while (lenght_int > 0)
	{
		s[lenght_int - 1] = (int_to_print % 10) + '0';
		int_to_print /= 10;
		lenght_int--;	
	}
	write(1, s, strlen(s));
	length += strlen(s);
	free(s);
	return (length);
}

#include "main.h"

int print_int(va_list args)
{
	char *s;
	int int_to_print = va_arg(args, int);
	int count;
	int length_int = 0;
	int total_length = 0;
	
	if (int_to_print < 0)
	{
		write(1, "-", 1);
		total_length++;
		count = -int_to_print;
	}
	while (count > 0)
	{
		count /= 10;
		length_int++;
	}
	s = malloc(sizeof(char) * (length_int + 1));
	if (s == NULL)
		return (1);
	s[length_int] = '\0';
	while (length_int > 0)
	{
		s[length_int - 1] = (int_to_print % 10) + '0';
		int_to_print /= 10;
		length_int--;	
	}
	write(1, s, strlen(s));
	total_length += strlen(s);
	free(s);
	return (total_length);
}

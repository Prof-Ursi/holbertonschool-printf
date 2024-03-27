#include "main.h"

int print_char(va_list args, int length)
{
	char c = va_args(args, char);
	write(1, &c, 1);
	return (length + 1);
}

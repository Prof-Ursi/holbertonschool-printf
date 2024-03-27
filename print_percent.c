#include "main.h"

int print_pct(va_list args, int length)
{
	write(1, "%", 1);
	return (length + 1);
}

#include "main.h"

int print_percent(va_list args)
{
	(void)args;
	write(1, "%", 1);
	return (1);
}

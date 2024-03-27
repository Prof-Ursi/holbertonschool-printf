#include "main.h"

/**
 * print_decimal- print a decimal using _putchar
 * @arg: argument list
 */

int print_decimal(va_list arg)
{
	int i = 0;
	int j = 0;
	int num = va_arg(arg, int);
	char *str = _itoa(num);

	printf("%c", str[i]);
	while (str[i] != '\0') 
	{
		printf("%d", i);
		_putchar(str[i]);
		i++;
		j++;
	}
	return (j);
}

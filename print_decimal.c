#include "main.h"

/**
 * print_decimal - print a decimal using _putchar
 * @arg: argument list
 * Return: the decimal's lenght
 */

int print_decimal(va_list arg)
{
	int i = 0;
	int lenght = 0;
	int num = va_arg(arg, int);
	char *str = _itoa(num);

	lenght += strlen(str);

	printf("%c", str[i]);
	while (str[i] != '\0')
	{
		printf("%d", i);
		_putchar(str[i]);
		i++;
	}
	return (lenght);
}

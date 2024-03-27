#include "main.h"

/**
 * print_string- print a string using _putchar
 * @arg: argument list
 * Return: the number of character
 */

int print_string(va_list arg)
{
    int i = 0;
    char *str;
    
    str = va_arg(arg, char*);

    while (str[i] != '\0') 
    {
	_putchar(str[i]);
    i++;
    }
    return (i);
}

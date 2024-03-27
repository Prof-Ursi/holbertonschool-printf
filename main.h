#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_decimal(va_list arg);
char *_itoa(int num);
int _printf(const char *format, ...);

/**
 * struct type - used for the printf
 * @type: type de format
 * @f: function to call
 */

struct type
{
	char type;
	int (*f)(va_list);
};
typedef struct type type_t;

#endif

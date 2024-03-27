#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int _putchar(char c);
void print_char(va_list arg);
void print_string(va_list arg);
void print_decimal(va_list arg);
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
	int (*f)(va_list, int);
};
typedef struct type type_t;

#endif

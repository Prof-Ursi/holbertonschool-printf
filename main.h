#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> //for variadic functions
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //for write in _putchar
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
void print_char()
void print_string()
void print_int()
void print_percent()

/**
 * struct format_types - Struct format_types
 * @format: The conversion specifier
 * @function: The function pointer
 */
typedef struct format_types
{
	char *identifier;
	int (*function)(va_list, int);
} FT;


#endif

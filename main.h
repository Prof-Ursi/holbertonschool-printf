#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_int(va_list args);
int print_percent(va_list args);
int print_string(va_list args);

/**
 * struct format_types - Struct format_types
 * @format: The conversion specifier
 * @function: The function pointer
 */
typedef struct format_types
{
	char *identifier;
	int (*function)(va_list);
} FT;


#endif

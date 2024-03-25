#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct type - used for the printf
 * @type: type de format
 * @f: function to call
struct type
{
	char type;
	int (*f)(va_list, int);
};
typedef struct type type_t;
*/


#endif

#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>

int _printf(const char *format, ...);

/**
 * struct type - used for the printf
 * @type: type de format
 * @f: function to call
struct type
{
	char type;
	void (*f)(va_list);
};
typedef struct type type_t;
*/


#endif

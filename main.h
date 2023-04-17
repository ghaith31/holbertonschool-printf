#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct type - connect conversion specifiers with the correct print function
 * @print: a function pointer for the print functions
 * @identifier: the conversion specifier
 */
typedef struct type
{
	char *identifier;
	int (*print)(va_list);
} type_t;

int _printf(const char *, ...);
int (*get_function(const char *specifier))(va_list);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_d(va_list args);
int print_i(va_list args);

#endif

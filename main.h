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
typedef struct ghaith
{
	char *X;
	int (*f)(va_list);
} ghaith_t;

int _printf(const char *, ...);
int (*get_function(const char *C))(va_list);
int _putchar(char c);
int print_c(va_list lac1);
int print_s(va_list lac1);
int print_d(va_list lac1);
int print_i(va_list lac1);
int print_100(va_list lac1);
#endif

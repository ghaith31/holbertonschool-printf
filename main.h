#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct ghaith - connect conversion specifier with the correct print function
 * @f: a function pointer for the print functions
 * @X: the conversion specifier
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

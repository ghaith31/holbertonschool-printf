#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct ghaith -struct ghaith_t
 * @X: the operation
 * @f: the fanction linked
 *
 */


type def struct ghaith

{
	char *X;
	(*f)(va_list);
} ghaith_t;


int get_fonction(const char C, va_list N);

int print_c(va_list arg);
int print_s(va_list arg);
int print_d(va_list arg);
int print_i(va list arg);
int print_100(va_list arg);


#endif

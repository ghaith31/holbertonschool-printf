#include "main.h"
#include <stdio.h>
/**
 * print_c - Print a char argument
 * @lac1: Va_list containing the char to print as the next element
 *
 * Return: The number of bytes printed
 */

int print_c(va_list lac1)
{
	char c = va_arg(lac1, int);
	int count = 0, retval;

	retval = _putchar(c);
	if (retval == -1)
		return (-1);
	count++;

	return (count);
}

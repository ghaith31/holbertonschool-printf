#include "main.h"
#include <stdio.h>
/**
 * print_char - Print a char argument
 * @args: Va_list containing the char to print as the next element
 *
 * Return: The number of bytes printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);
	int count = 0, retval;

	retval = _putchar(c);
	if (retval == -1)
		return (-1);
	count++;

	return (count);
}

#include "main.h"

/**
 * print_d - print an interger.
 *
 * @lac1: hetha il args
 *
 * Return: count.
 */
int print_d(va_list lac1)
{
	unsigned int nom, denom, number, account;
	int in;

	account = 0;
	in = va_arg(lac1, int);
	if (in < 0)
	{
		nom = (in * -1);
		account += _putchar('-');
	}
	else
		nom = in;

	denom = nom;
	number = 1;
	while (denom > 9)
	{
		denom /= 10;
		number *= 10;
	}
	while (number >= 1)
	{
		account += _putchar(((nom / number) % 10) + '0');
		number /= 10;
	}
	return (account);
}

/**
 * print_i - i and d same(kifkif wlh)
 * @lac1: args
 * Return: i
 */

int print_i(va_list lac1)
{
	return (print_d(lac1));
}

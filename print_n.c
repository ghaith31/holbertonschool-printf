#include "main.h"

/**
 * printn - print an interger.
 * @args: input argument.
 *
 * Return: count.
 */
int print_d(va_list args)
{
	unsigned int nom, denom, number, account;
	int in;

	account = 0;
	in = va_arg(args, int);
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

int print_i(va_list args)
{
	return (print_d(args));
}

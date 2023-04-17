#include "main.h"
/**
 * print_str - Print astring or a char argument
 * @lac1: Va_list containing the string or char to print as the next element
 *
 * Return: The number of bytes printed
 */
int print_s(va_list lac1)
{
	char *str = va_arg(lac1, char *);
	int count = 0;
	int RetVal;

	if (!str)
		str = "(null)";
	while (*str)
	{
		RetVal = _putchar(*str);
		if (RetVal == -1)
			return (-1);
		count++;
		str++;
	}
	return (count);
}

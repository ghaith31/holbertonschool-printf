#include "main.h"
/**
 * print_str - Print astring or a char argument
 * @args: Va_list containing the string or char to print as the next element
 *
 * Return: The number of bytes printed
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
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

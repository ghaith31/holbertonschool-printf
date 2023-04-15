#include "main.h"
/**
 * _printf - function like printf of studio.h
 * @format: input string containg various arguments
 *
 * Return: interger
 */

int _printf(const char *format, ...)
{

	int i=0;
	va_list N;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	return (-1);
	va_start(N, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			function = get_function(format);
			if(*(format) == '\0')
				return (-1);
			else if (function == NULL)
			{
				putchar(*(format - 1));
				putchar(*format);
				i += 2;
			}
			else
				i += function(N);
		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			format ++;
			putchar('%');
			i++;
		}
		else
		{
			putchar(*format);
			i++;
		}
		format++;
	}
	va_end(N);
	return (count);
}

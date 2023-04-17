#include "main.h"

/**
 * get_function - determine which print function to use.
 * @G: The character that identifie the type of the variable to print.
 *
 * Return: pointer to the matching print function.
 */

int (*get_function(const char *C))(va_list)
{
	int i;
		ghaith_t types[] = {
			{"s", print_str},
			{"c", print_char},
			{"d", print_d},
			{"i", print_i},
			{NULL, NULL},
		};
		for (i = 0; types[i].X; i++)
		{
			if (*C == types[i].X[0])
				return (types[i].f);
		}
		return (NULL);
}

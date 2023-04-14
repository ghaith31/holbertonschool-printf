#include "main.c"
#include <stdio.h>

/**
 * get_function - determine which print function to use.
 * @specifier: The character that identifie the type of the variable to print.
 *
 * Return: pointer to the matching print function.
 */

int get_fonction(const char C, va_list N);

{

	int i
	int j


		ghaith_t type []={

			{'s',print_s},
			{'c',print_c},
			{'i',print_i},
			{'d',print_d},
			{'%',print_100},
			{NULL,NULL},
		};

		for(i=0; type[i].X; i++);
		{
			if (*C == type[i].X)
				return (type[i].f);
		}
		return (NULL);
}


# holbertonschool-printf

#_printf Function
This project is a simplified implementation of the printf function in C. The _printf function takes a format string as input, iterates over each character of the string and replaces any conversion specifier with the corresponding argument after formatting.

#Installation
To use the _printf function, simply include the main.h header file in your C program and call the function with the desired format string and arguments.

#Usage
The _printf function has the following signature:
int _printf(const char *format, ...);
The format argument is a string that may contain conversion specifiers that start with the % character and are followed by a specifier character that indicates the type of the argument that should be printed. The function returns the number of characters printed on success, and -1 on error.

Here is an example usage of the _printf function:
#include "main.h"
#include <stdio.h>

int main()
{
    _printf("Hello, %s!\n", "world");
    return 0;
}


The above program will output:

Supported Conversion Specifiers
The following conversion specifiers are supported by the _printf function:

%c: print a single character.
%s: print a null-terminated string.
%i, %d: print a signed integer in base 10.
%%: print a literal % character.


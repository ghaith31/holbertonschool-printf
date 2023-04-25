# _printf()

Prints text to terminal based on a given format string to standard output. Mimicking glibc printf.
Syntax: _printf(format string, args...)

## Current features
Implemented specifiers:
 * Decimal integers (%d)
 * Strings (%s)
 * integers (%i)
 * char (%c)
## Getting started
The simplest way to add this to your project would be to compile the whole codebase with your project. Likely you'll want to compile and include it as a static library to avoid logistical hassles though. To do so for a single project using gcc run these commands from the root printf directory:
```
gcc -c \*.c
ar rcs libprintf.a \*.o
```
After this, copy the resulting printf.a file and printf.h to your project directory. Include printf.h where appropriate in your source files. Then using GCC as an example, when compiling add the -l flag with the library file name like so:
```
gcc <your stuff here> libprintf.a
```
## Usage Examples
The simplest example is just printing out a string literal as the format string, like so:
```
_printf("Hello printf!");
```
This will output the text "Hello printf!" to the terminal, like so:
```
Hello printf!
```
Rountinely, you will want to use printf to print out strings from variables or numbers. We can take in variables passed as further arguments by using %, then flags (optional), then a specifier for the type of thing we are printing. If we have an integer and a string, we will use %d and %s respectively, like so:
```
char str[] = "world";
int number = 42;
_printf("Hello %s %d!", str, number);
```
We will get the output:
```
Hello world 42!
```
## Testing
The tests folder includes a mains.c file which will run a series of pairs of printf statements on many different combinations of specifiers, flag and options using both this version of print and stdlib printf, and output this to stdout. To run these tests, compile the entire project then run the resulting executable:
```
gcc -o printftest *.c tests/mains.c
./printftest
```

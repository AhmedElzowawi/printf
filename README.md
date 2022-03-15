# printf() - Custom Implementation
In this project we will implement a printf() function of the following prototype: int _printf(const char *format, ...);

The function is variadic and thus takes any amount of arguments following the format pointer

## Goals

- Implement custom printf() function similar to that of the standard library
- Use variadic functions to allow a custom number of arguments
- Parse a format string to identify custom print options

## Use & Examples
**Use - General:**_printf("format string", var1, var2, ...);

*Examples:*
 - Basic String: _printf("%s World", "Hello");
	 - Output: Hello World

- Print integers: _printf("Here is an array element: arr[%d]:%c", 32, arr[32]);
	- Output: Here is an array element arr[32]:A

You can do much more, by combining  specifiers like string or integer.

**Return value of _printf()**
_printf() returns negative one (-1) upon failure, and the number of bytes (as an int) written to standard output upon success.

*Format specifiers follow this pattern:*
%[flags][width][.precision][length]specifier

- Example: _printf("%+.22ld\n", LONG_MAX)
	- Output: +0009223372036854775807

### Specifiers
The specifier character at the end is the most significant component, since it defines the type and the interpretation of its corresponding argument:

|Specifier                |Output                        |Examples |
|----------------|-------------------------------|-----------------------------|
| d or i | Signed integer | 1024, -1024 |
| b | Binary Representation of unsigned integer | 01010110 |
| s | String of characters | Hello World |
| c | Character | y |
| r | Reversed string of characters | dlroW olleH |
| R | ROT13 Translation of string | Uryyb |
| S | Converts non printable characters to \x and it's hexadecimal | \x0A |
## Authors

https://github.com/jaafarfares

https://github.com/AhmedElzowawi

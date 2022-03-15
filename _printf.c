#include "main.h"
#include <stdio.h>

/**
 * _printf - Struct op
 *
 * @format: The operator
 *Return: nothhing
 */
int _printf(const char *format, ...)
{
	int i, sum = 0;

	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar(format[i]);
				sum++;
			}
			else if (get_op_func(format, i) != NULL)
				sum = sum + get_op_func(format, i)(args);
			else
			{
				i--;
				_putchar(format[i]);
				sum++;
			}
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
	}
	va_end(args);
	return (sum);
}

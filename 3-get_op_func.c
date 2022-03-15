#include "main.h"

/**
 * get_op_func - check the code
 * @format: parameter
 * @n: parameter
 * Return: Always 0.
 */
int (*get_op_func(const char *format, int n))(va_list args)
{
	op_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_d},
		{"S", print_S},
		{"b", print_b},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].op; i++)
	{
		if (ops[i].op[0] == format[n])
			return (ops[i].f);
	}
	return (NULL);
}

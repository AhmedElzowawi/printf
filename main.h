#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;

int _putchar(char c);
int print_c(va_list args);
int print_s(va_list a);
int print_d(va_list args);
int print_r(va_list args);

int _printf(const char *format, ...);
int (*get_op_func(const char *format, int n))(va_list args);


#endif

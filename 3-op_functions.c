#include "main.h"
/**
 * print_c - Struct op
 *
 * @args: The operator
 *Return: nothhing
 */
int print_c(va_list args)
{
	int sum = 0;
	char ch = va_arg(args, int);

	_putchar(ch);
	sum++;
	return (sum);
}
/**
 * print_s - Struct op
 *
 * @args: The operator
 *Return: nothhing
 */
int print_s(va_list args)
{
	char *str;
	int i, sum = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		sum++;
	}
	return (sum);
}
/**
 * print_d - Struct op
 *
 * @args: The operator
 *Return: nothhing
 */
int print_d(va_list args)
{
	int sum = 0, i = 1, integer;
	unsigned int realNumber;

	integer = va_arg(args, int);
	if (integer < 0)
	{
		_putchar('-');
		realNumber = integer * -1;
		sum++;
	}
	else
		realNumber = integer;
	while (realNumber / i > 9)
	{
		i *= 10;
	}
	while (i != 0)
	{
		_putchar('0' + realNumber / i);
		realNumber %= i;
		i /= 10;
		sum++;
	}
	return (sum);
}
/**
 * print_r - Struct op
 *
 * @args: The operator
 *Return: nothhing
 */
int print_r(va_list args)
{
	char *str;
	int i, sum = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i]; i++)
		;
	i--;
	for (i = i; str[i]; i--)
	{
		_putchar(str[i]);
		sum++;
	}
	return (sum);
}
/**
 * print_R - Struct op
 *
 * @args: The operator
 *Return: nothhing
 */
int print_R(va_list args)
{
	int i;
	int j;
	int sum = 0;
	char *s = va_arg(args, char *);
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				_putchar(n[j]);
				sum++;
				break;
			}
		}
		if (l[j] == '\0')
		{
			_putchar(s[i]);
			sum++;
		}
	}
	return (sum);
}

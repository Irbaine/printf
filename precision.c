#include "main.h"

/**
 * print_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @args: list of arguments.
 *
 * Return: Precision.
 */
int print_precision(const char *format, int *i, va_list args)
{
	int a = *i + 1;
	int precision = -1;

	if (format[a] != '.')
		return (precision);
	precision = 0;

	for (a += 1; format[a] != '\0'; a++)
	{
		if (is_digit(format[a]))
		{
			precision *= 10;
			precision += format[a] - '0';
		}
		else if (format[a] == '*')
		{
			a++;
			precision = va_arg(args, int);
			break;
		}
		else
			break;
	}

	*i = a - 1;

	return (precision);
}

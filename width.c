#include "main.h"

/**
 * print_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments .
 * @args: list of arguments.
 *
 * Return: width.
 */
int print_width(const char *format, int *i, va_list args)
{
	int a;
	int width = 0;

	for (a = *i + 1; format[a] != '\0'; a++)
	{
		if (is_digit(format[a]))
		{
			width *= 10;
			width += format[a] - '0';
		}
		else if (format[a] == '*')
		{
			a++;
			width = va_arg(args, int);
			break;
		}
		else
			break;
	}

	*i = a - 1;

	return (width);
}
